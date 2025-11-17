/* Q99:Change the date format from dd/04/yyyy to dd-Apr-yyyy:
#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    char day[3], month[3], year[5];
    scanf("%s", date);   

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';
    char mon[12][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                       "Jul","Aug","Sep","Oct","Nov","Dec"};
    int m = (month[0] - '0') * 10 + (month[1] - '0');
    printf("%s-%s-%s", day, mon[m - 1], year);
    return 0;
}
