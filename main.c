#include <stdio.h>
#include <string.h>
#include <math.h>

void converter(int unitType, char options[][200]){

  const double PI = 3.14159;
  int i;
  double input;
  int convertingFrom;
  int convertingTo;
  double result;
  double base;

  printf("What is the number you would like to convert?\n");
    scanf("%lf", & input);

  printf("What would you like to convert from?\n");

  if (unitType ==1) {for (i = 0; i <13;) {
    printf("%d. %s\n", i+1, options[i]);
    if (i == 13) {
      break;
    }
    i++;
  }
  scanf("%d", &convertingFrom);
    
  printf("What would you like to convert to\n");
      for (i = 0; i <13;) {  
  printf("%d. %s\n", i+1, options[i]);
    if (i == 13) {
      break;
    }
    i++;
  }
      scanf("%d", &convertingTo);

  switch (convertingFrom) {
    case 1: base = input / 1000; 
            break;
    case 2: base = input / 100;
            break;
    case 3: base = input;
            break;
    case 4: base = input * 0.3048;
            break;
    case 5: base = input * 0.9144;
            break;
    case 6: base = input * 1000;
            break;
    case 7: base = input * 1609.34;
            break;
  }


  switch (convertingTo) {
    case 1: result = base * 1000; 
            break;
    case 2: result = base * 100;
            break;
    case 3: result = base;
            break;
    case 4: result = base / 0.3048;
            break;
    case 5: result = base / 0.9144;
            break;
    case 6: result = base / 1000;
            break;
    case 7: result = base / 1609.34;
            break;
  }
  }
  else if (unitType == 2) {
     for (i = 7; i < 9; i++) {
            printf("%d. %s\n", i-6, options[i]);
        }
     scanf("%d", &convertingFrom);
     printf("What would you like to convert to?\n");
        for (i = 7; i < 9; i++) {
            printf("%d. %s\n", i-6, options[i]);
        }
        scanf("%d", &convertingTo);

        if (convertingFrom == 1) 
               base = input * 0.453592;   
        else 
               base = input;              

        if (convertingTo == 1) 
               result = base / 0.453592;  
        else 
               result = base;            


  
  }
  else if (unitType == 3) {
        for (i = 9; i < 13; i++) {
            printf("%d. %s\n", i-8, options[i]);}
            scanf("%d", &convertingFrom);}

    printf("What would you like to convert to?\n");
        for (i = 9; i < 13; i++) {
            printf("%d. %s\n", i-8, options[i]);
        }
            scanf("%d", &convertingTo);


            switch (convertingFrom) {
              case 1:
                base = cbrt((3.0 * input) / (4.0 * M_PI));
                break;
              case 2:
                base = input;
                break;
              case 3: 
                base = sqrt(input / M_PI);
                break;
              case 4:
                base = sqrt(input / (4.0 * M_PI));
                break;            
            }

            switch (convertingTo) {
              case 1: 
                result =  (4.0 / 3.0) * PI * pow(base, 3);
                break;
              case 2:
                result = base;
                break;
              case 3:
                result = PI * pow(input, 2);
                break;
              case 4:
                result = 4 * PI * pow(base, 2);
                
            
            }
        

  

  printf("Result: %lf", result);
}
int main(){


  int unitType = 0;

  char options[13][200] = {"Millimetres", "Centimetres", "Metres", "Feet", "Yards", "Kilometers", "Miles", "Pounds", "Kilograms", "Volume", "Radius", "Area", "Surface Area"};

  printf("Unit converter\n");
  printf("What type of unit would you like to convert?\n1. Length/width\n2. Weight\n3. Area/Volume\n");
  scanf("%d", &unitType);

  converter(unitType, options);


  return 0;

}
