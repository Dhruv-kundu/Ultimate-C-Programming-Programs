// Program 68: Write a program to define a structure date and display it in dd-mm-yyyy format.
#include<stdio.h>
struct date{
    int day;
    int month;
    int year ;
};

int main(){
    struct date d1;
    printf("Enter the day(dd) : ");
    scanf("%d",&d1.day);
    printf("Enter the month(mm) : ");
    scanf("%d",&d1.month);
    printf("Enter the year(yyyy) : ");
    scanf("%d",&d1.year);
    struct date d2 = {25,2,2025};
    struct date d3;
    d3.day=12;
    d3.month=03;
    d3.year=2020;
    printf("Date : %d-%d-%d",d1.day,d1.month,d1.year);
    printf("Date : %d-%d-%d",d2.day,d2.month,d2.year);
    printf("Date : %d-%d-%d",d3.day,d3.month,d3.year);
    return 0;
}
