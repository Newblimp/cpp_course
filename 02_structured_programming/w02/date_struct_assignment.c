/* Produce a struct for date with functions to increase the date by one day and print it out
    26.12.2021
*/
#include <stdio.h>
typedef enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;
typedef struct date{month m; int d} date;

void nextday(date *day)
{
    // remove one to make the 1st 0, the 2nd 1, etc, makes modulo easier
    // and allows to initialize the date with "natural" days, i.e. date{jan, 1} for jan 1st
    if (day->d == 0)
        printf("WARNING! Invalid date format, day cannot be 0!");
    day->d -= 1; 

    switch(day->m)
    {
        case 0:
            day->d = (day->d + 1) % 31;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 1:
            day->d = (day->d + 1) % 28;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 2:
            day->d = (day->d + 1) % 31;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 3:
            day->d = (day->d + 1) % 30;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 4:
            day->d = (day->d + 1) % 31;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 5:
            day->d = (day->d + 1) % 30;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 6:
            day->d = (day->d + 1) % 31;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 7:
            day->d = (day->d + 1) % 31;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 8:
            day->d = (day->d + 1) % 30;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 9:
            day->d = (day->d + 1) % 31;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 10:
            day->d = (day->d + 1) % 30;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        case 11:
            day->d = (day->d + 1) % 31;
            if (day->d == 0)
                day->m = (day->m + 1) % 12; break;
        default:
            printf("WARNING! Invalid date format.");
    }

    day->d += 1; // add one back to get the 1st from 1 etc. 
}


void printdate(date day)
{
    switch(day.m)
    {
        case 0: printf("The date is January, %d\n", day.d); break;
        case 1: printf("The date is February, %d\n", day.d); break;
        case 2: printf("The date is March, %d\n", day.d); break;
        case 3: printf("The date is April, %d\n", day.d); break;
        case 4: printf("The date is May, %d\n", day.d); break;
        case 5: printf("The date is June, %d\n", day.d); break;
        case 6: printf("The date is July, %d\n", day.d); break;
        case 7: printf("The date is August, %d\n", day.d); break;
        case 8: printf("The date is September, %d\n", day.d); break;
        case 9: printf("The date is October, %d\n", day.d); break;
        case 10: printf("The date is November, %d\n", day.d); break;
        case 11: printf("The date is December, %d\n", day.d); break;
    }
}

int main(void)
{
    date jan_1 = {jan,1};
    date feb_28 = {feb,28};
    date mar_14 = {mar,14};
    date oct_31 = {oct,31};
    date dec_31 = {dec,31};
    printdate(jan_1);
    nextday(&jan_1);
    printdate(jan_1);
    printf("\n------------------\n");
    printdate(feb_28);
    nextday(&feb_28);
    printdate(feb_28);
    printf("\n------------------\n");
    printdate(mar_14);
    nextday(&mar_14);
    printdate(mar_14);
    printf("\n------------------\n");
    printdate(oct_31);
    nextday(&oct_31);
    printdate(oct_31);
    printf("\n------------------\n");
    printdate(dec_31);
    nextday(&dec_31);
    printdate(dec_31);
    printf("\n------------------\n");
}