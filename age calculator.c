#include<stdio.h>           // Include Standard input output header file
#include "onlyDate.h"      // Include onlyDate.h preprocessor file already created in project directory

int leap_year(int year)
{
    if((year%400 == 0) || ((year%4==0) && (year%100!=0)))
        return 1;
    else
        return 0;
}
void user_input(int *date, int *month, int *year, int cdate, int cmonth, int cyear)
{
    int d, m, y, ly, i;
    printf("\nEnter Date of Birth (DD MM YYYY) : ");
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &y);
    ly = leap_year(y);
    while(1)
    {
        if(m==1 && d<32 && d>0 && y<=cyear)
        {
            if(y==cyear)
                {
                    if(m<=cmonth)
                    {
                        if(d<cdate)
                        {
                            break;
                        }
                    }
                }
            else
                break;
        }
        if(m==2 && d<29 && d>0 && ly==0 && y<=cyear)
        {
            if(y==cyear)
                {
                    if(m<=cmonth)
                    {
                        if(d<cdate)
                        {
                            break;
                        }
                    }
                }
            else
                break;
        }
        if(m==2 && d<30 && d>0 && ly==1 && y<=cyear)
        {
            if(y==cyear)
                {
                    if(m<=cmonth)
                    {
                        if(d<cdate)
                        {
                            break;
                        }
                    }
                }
            else
                break;
        }
        i=3;
        while(i<13)
        {
            if((i%2)==0)
            {
                if(m==i && d<31 && d>0 && y<=cyear)
        {
            if(y==cyear)
                {
                    if(m<=cmonth)
                    {
                        if(d<cdate)
                        {
                            break;
                        }
                    }
                }
            else
                break;
        }
            }
            if((i%2)!=0)
            {
                if(m==i && d<32 && d>0 && y<=cyear)
        {
            if(y==cyear)
                {
                    if(m<=cmonth)
                    {
                        if(d<cdate)
                        {
                            break;
                        }
                    }
                }
            else
                break;
        }
            }
        i++;
        }
        if(i<13)
            break;

        system("cls");
        printf("\nError !!\nWrong Input\nEnter Date of Birth (DD MM YYYY) : ");
        scanf("%d", &d);
        scanf("%d", &m);
        scanf("%d", &y);
        ly = leap_year(y);

    }
    *date = d;
    *month = m;
    *year = y;
}
                                                            /*

                                                      MAIN FUNCTION

                                                            */
int main()
{
    /* Variable Declaring Zone */

    char *timeDate;
    int date, month, year;
    int user_date, user_month, user_year;
    int result_date, result_month, result_year;
    int leap_year;

    /* Variable Declaring Zone */

    timeDate = system_time();  // Called function for get system time
    printf("Today's Date : %s", timeDate);
    only_date(timeDate, &date, &month, &year);  // Called function for get only date from system time and date

    user_input(&user_date, &user_month, &user_year, date, month, year);

    printf("\n%d %d %d", user_date, user_month, user_year);
    printf("\n%d %d %d", date, month, year);


}
