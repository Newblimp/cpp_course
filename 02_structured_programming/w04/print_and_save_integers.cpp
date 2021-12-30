#include <stdio.h>
#include <stdlib.h>

void avg_and_max(FILE *ifp, FILE *ofp)
{
    int size, max = 0;
    double avg = 0.0;
    fscanf(ifp, "%d", &size);
    int data[size];
    char saving_string[200];

    for (int i = 0; i < size; i++)
    {
        fscanf(ifp, "%d", &data[i]);
        avg += (data[i]-avg)/(i+1);
        if (data[i] > max)
        {
            max = data[i];
        }
    }

    printf("The average number is %g and the maximum number is %d.\n", avg, max);
    snprintf(saving_string, 200, "The average number is %g and the maximum number is %d.", avg, max);
    fputs(saving_string, ofp);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Error! Enter only one file in the command line!\n\n");
        exit(1);
    }

    FILE *ifp, *ofp;
    ifp = fopen(argv[1], "r");
    ofp = fopen("answer-hw3", "w");
    avg_and_max(ifp, ofp);
    fclose(ifp), fclose(ofp);
    return 0;
}