#include <stdio.h>
#include <string.h>
#include <math.h>

int measurement(int choice, char options[200]){

  double base = 0.0;
  double result = 0.0;

  switch (choice) {
    case 1:
      for (int distanceSwitch; distanceSwitch <=7 ; distanceSwitch++) {
        printf("Enter what you are converting from: \n");
        printf("%d. %c\n", distanceSwitch, options[distanceSwitch]);
        }
        scanf("%d", &choice);
           switch (choice) {
             case 1: {
               for (int millimeterSwitch = 1;  millimeterSwitch <=7; millimeterSwitch++) {
                 printf("Enter what you want to convert to: \n");
                 printf("%d.%c\n", millimeterSwitch, options[millimeterSwitch]);
                 scanf("%d", &choice);
                   switch(choice)
                 case 1:
                     printf("Enter the amount of Millimetres: \n");
                     scanf("%lf", &base);
                     result = base / 10;
                     printf("%lf", result);
                     break;   
                 case 2: 
                     printf("Enter the amount of Millimetres: \n");
                     scanf("%lf", &base);
                     result = base / 100;
                     break;   
                 case 3:
                     printf("Enter the amount of Millimetres: \n");
                     scanf("%lf", &base);
                     result = base / 304.8;
                     break;
                 case 4:
                     printf("Enter the amount of Millimetres: \n");
                     scanf("%lf", &base);
                     result = base / 914.4;
                     break;
                 case 5:
                     printf("Enter the amount of Millimetres: \n");
                     scanf("%lf", &base);
                     result = base / 1000000;
                     break;
                 case 6:
                     printf("Enter the amount of Millimetres: \n");
                     scanf("%lf", &base);
                     result = base / 1609344 ;
                     break;   

               } break;
               

               }
              
               
               }
           
           }

  return 0;
  }


int main(){

char options[200] = {"Millimetres", "Centimetres", "Metres", "Feet", "Yards", "Kilometers", "Miles", "Pounds", "Kilograms"};



  int choice = 0;

  printf("Enter the choice: \n");
  scanf("%d", &choice);

  measurement(choice, options);

  return 0;
}

