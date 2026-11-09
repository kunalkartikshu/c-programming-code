#include <stdio.h>
/*
In this code we will check whether the given year is leap year or not....
Formula to check leap year is:
1) If the year is divisible by 4 and not divisible by 100 then it is a leap year.
2) If the year is divisible by 400 then it is a leap year.
*/
int main()
{
    int year;
    
        printf("enter a year to check whether it is leap year orhhh not: \n");
        scanf("%d", &year);

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d is a leap year\n", year);
        }
        else
        {
            printf("%d is not a leap year\n", year);
        }
    
    return 2;
}