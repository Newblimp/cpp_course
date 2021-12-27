#include <stdio.h>
#include <stdlib.h>

//calculate average using the better algorithm taught in the course
int average(int data[], int how_many)
{
    double avg = 0.0;
    for (int i = 1; i <+ how_many; i++)
    {
        avg += (data[i-1] - avg)/i;
    }
    return avg;
}


int main()
{
    double avg = 0.0;

    FILE *file;
    file = fopen("seal_data","r");

    //read file into array
    int seals[1000];
    int i;
    
    if (file == NULL)
    {
        printf("Error reading the file!\n");
        exit(0);
    }
    for (i = 0; i < 1000; i++)
    {
        fscanf(file, "%d", &seals[i]);
    }

    fclose(file);

    avg = average(seals, 1000);
    printf("\nThe average seal weight is %g\n\n", avg);
}