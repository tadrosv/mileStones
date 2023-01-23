
/*
Victor Tadros
Purpose: print a calander based on month and year specified by user input
*/

#include <stdio.h>
#include <stdlib.h>
int day_of_week(int day, int month, int year);


/* dayOfWeek - Given int day, month, and year, this determines
the day of the week, where: 0 = Sunday, 1 = Monday, etc */
int day_of_week(int day, int month, int year){
  int a, y, m, dow;
  a = (14 - month) / 12;
  y = year - a;
  m = month + 12*a - 2;
  dow = (day + y + y/4 - y/100 + y/400 + 31*m/12) % 7;
  return dow;
}

/* main - prompt user for month, year; print a calander and state the date and 
what day of the week the 1st lands on*/
int main(void){
   int year, month, day, daysInMonth, weekDay = 0, startingDay;

   while(scanf("%d %d", &month, &year) != -1){

   char *months[] = {"January", "February", "March", "April",
		   "May", "June", "July", "August", "September",
		   "October", "November", "December"};
   
   char *dowName[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

   int monthDay[] = {31,28,31,30,31,30,31,31,30,31,30,31};

   /* leap year calculations*/
   if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
       monthDay[1] = 29;

   int days = 1;
   startingDay = day_of_week(days, month, year);

   daysInMonth = monthDay[month - 1];
   printf("\n  Calendar for %s %d: %d days.\n", months[month - 1], year, daysInMonth);
   printf("  %s 1 falls on a %s.", months[month - 1], dowName[startingDay]);
   printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
   
   for(weekDay = 0; weekDay < startingDay; weekDay++)
     printf("     ");

   for(day = 1; day <= daysInMonth; day++){
     printf("%5d", day);

     if(++weekDay > 6){
       printf("\n");
       weekDay = 0;
     }
     startingDay=weekDay;
   }
   printf("\n");
   }
  return 0;
}
