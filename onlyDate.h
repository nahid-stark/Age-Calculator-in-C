#include<string.h>
#include<time.h>  // time.h for get system time and date

char *system_time()        // function for get system time
{
    time_t local_time;
    time(&local_time);
    return ctime(&local_time);
}


void *only_date(char *timeDate, int *date, int *month, int *year)
{
    int i, mstrcmp;
    char tempMonth[4];
    char tempDate[3];
    char tempYear[6];

    tempMonth[0] = timeDate[4];
    tempMonth[1] = timeDate[5];
    tempMonth[2] = timeDate[6];

    tempDate[0] = timeDate[8];
    tempDate[1] = timeDate[9];

    tempYear[0] = timeDate[20];
    tempYear[1] = timeDate[21];
    tempYear[2] = timeDate[22];
    tempYear[3] = timeDate[23];


    /* Converting String Month Name to Integer Month NO.
             Process Start from here */

    mstrcmp = strcmp("Jan", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 1;
    }
    mstrcmp = strcmp("Feb", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 2;
    }
    mstrcmp = strcmp("Mar", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 3;
    }
    mstrcmp = strcmp("Apr", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 4;
    }
    mstrcmp = strcmp("Jun", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 5;
    }
    mstrcmp = strcmp("Jan", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 6;
    }
    mstrcmp = strcmp("Jul", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 7;
    }
    mstrcmp = strcmp("Aug", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 8;
    }
    mstrcmp = strcmp("Sep", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 9;
    }
    mstrcmp = strcmp("Oct", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 10;
    }
    mstrcmp = strcmp("Nov", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 11;
    }
    mstrcmp = strcmp("Dec", tempMonth);
    if(mstrcmp == 0)
    {
        *month = 12;
    }

    /* Converting String Month Name to Integer Month NO.
            Process End Here         */


    *date = atoi(tempDate);
    *year = atoi(tempYear);
}
