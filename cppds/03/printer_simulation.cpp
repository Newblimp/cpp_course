#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Task
{
public:
    Task(int time)
    {
        timestamp = time;
        pages = (rand() % 20) + 1;
    }

    int get_stamp()
    {
        return timestamp;
    }

    int get_pages()
    {
        return pages;
    }

    int wait_time(int current_time)
    {
        return (current_time - timestamp);
    }

private:
    int timestamp;
    int pages;
};

class Printer
{
public:
    Printer(int page_speed)
    {
        pagerate = page_speed;
        time_remaining = 0;
        working = false;
    }

    void tick()
    {
        if (working)
        {
            time_remaining--;
            if (time_remaining <= 0)
            {
                working = false;
            }
        }
    }

    void start_next_task(Task next)
    {
        current_task = next;
        time_remaining = next.get_pages() * 60 / pagerate;
        working = true;
    }

    bool busy()
    {
        return working;
    }

private:
    int pagerate;
    Task current_task = {0};
    bool working;
    int time_remaining;
};

bool new_print_task()
{
    return !(rand() % 180);
}

void Simulation(int num_seconds, int page_speed)
{
    //initialize Printer
    Printer lab_printer(page_speed);

    //initialize print queue
    queue<Task> print_queue;

    //waiting times vector
    vector<int> waiting_times;

    //loop for num_seconds seconds
    for (int i = 0; i < num_seconds; i++)
    {
        if (new_print_task())
        {
            Task new_task(i);
            print_queue.push(new_task);
        }
        if (!lab_printer.busy() && !print_queue.empty())
        {
            Task next_task = print_queue.front();
            print_queue.pop();

            waiting_times.push_back(next_task.wait_time(i));
            lab_printer.start_next_task(next_task);
        }

        // advance time one second
        lab_printer.tick();
    }

    float total = 0.0;
    int i = 1;
    for (int time : waiting_times)
    {
        total += (time - total) / i++;
    }

    cout << "The average wait was " << total << " seconds, with " << print_queue.size() << " printjobs not yet completed." << endl;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        Simulation(3600, 5);
    }
}