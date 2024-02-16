#include <stdio.h>
#include <time.h>

int main() {

   int age;
   int hours;
   int minutes;
   struct tm time_variable;

   printf("Enter age: ");
   scanf("%d", &age);

   printf("Enter the time of movie in 24hr format (HH:MM) ");
   scanf("%d:%d", &hours, &minutes);

   time_variable.tm_hour = hours;
   time_variable.tm_min = minutes;
   time_variable.tm_sec = 0;

   if(age <= 12){
    printf("\nTicket price is $5 for any showtime.");
   }
   else if(age >=13 && age <= 64 && time_variable.tm_hour < 17){
    printf("\nTicket price is $10.");
   }
   else if(age >=13 && age <= 64 && time_variable.tm_hour > 17){
    printf("\nTicket price is $15");
   }
   else if(age >= 65){
    printf("\nTicket price is $8 for any showtime");
   }
   else {
    printf("\nInvalid input.");
   }

    


    return 0;
}