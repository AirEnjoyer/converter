#include <stdio.h>
#include <string.h>
#include <math.h>

float pi = 3.14159;

double convert(double base, int convertingFrom, int convertingTo, int unitType) {
    double result = 0;

    switch (convertingFrom) {
        case 1: base = base / 1000; break;
        case 2: base = base / 100; break;
        case 3: base = base * 0.3048; break;
        case 4: base = base * 0.9144; break;
        case 5: base = base * 1000; break;
        case 6: base = base * 1609.34; break;
        case 7: base = base * 0.453592; break;
        case 8: base = base / 2.20462; break;
        case 9: base = cbrt((3.0 * base) / (4 * pi)); break;
        case 10: base = sqrt(base / pi); break;
        case 11: base = sqrt(base / (4 * pi)); break;
        case 12: base = sqrt(base / pi); break;
        case 13: base = sqrt(base / (4 * pi)); break;
    }

    switch (convertingTo) {
        case 1: result = base * 1000; break;
        case 2: result = base * 100; break;
        case 3: result = base / 0.3048; break;
        case 4: result = base / 0.9144; break;
        case 5: result = base / 1000; break;
        case 6: result = base / 1609.34; break;
        case 7: result = base * 2.20462; break;
        case 8: result = base; break;
        case 9: result = (4.0/3.0) * pi * pow(base, 3); break;
        case 10: result = pi * pow(base, 2); break;
        case 11: result = 4 * pi * pow(base, 2); break;
        case 12: result = pi * pow(base, 2); break;
        case 13: result = 4 * pi * pow(base, 2); break;
    }

    return result;
}

int main() {
    int skip = 0;
    double base = 0.0;
    int convertingTo = 0;
    char options[13][200] = {
        "Millimetres", "Centimetres", "Metres", "Feet", "Yards", "Kilometers", "Miles",
        "Pounds", "Kilograms", "Volume", "Radius", "Area", "Surface Area"
    };
    int convertingFrom = 0;
    int unitType = 0;

    printf("What are you converting from?\n");
    for (int i = 0; i < 13; i++) {
        printf("%d. %s\n", i+1, options[i]);
    }
    scanf("%d", &convertingFrom);

    printf("Enter the number you are converting: ");
    scanf("%lf", &base);

    switch (convertingFrom) {
        case 1:  skip = 1; break;
        case 2:  skip = 2; break;
        case 3:  skip = 3; break;
        case 4:  skip = 4; break;
        case 5:  skip = 5; break;
        case 6:  skip = 6; break;
        case 7:  skip = 7; break;
        case 8:  skip = 1; break;
        case 9:  skip = 2; break;
        case 10: skip = 1; break;
        case 11: skip = 2; break;
        case 12: skip = 3; break;
        case 13: skip = 4; break;
        default: skip = 0;
    }

    if (convertingFrom >= 1 && convertingFrom <= 7) {
        unitType = 1;
    }
    if (convertingFrom == 8 || convertingFrom == 9) {
        unitType = 2;
    }
    if (convertingFrom >= 10 && convertingFrom <= 13) {
        unitType = 3;
    }

    printf("What are you converting to?\n");
    switch (unitType) {
        case 1:
            for (int j = 0; j < 7;) {
                if (j+1 == skip) {
                    j++;
                    continue;
                }
                printf("%d. %s\n", j+1, options[j]);
                j++;
            }
            scanf("%d", &convertingTo);
            break;

        case 2:
            for (int j = 0; j < 2;) {
                if (j+1 == skip) {
                    j++;
                    continue;
                }
                printf("%d. %s\n", j+1, options[j+7]);
                j++;
            }
            scanf("%d", &convertingTo);
            switch (convertingTo) {
                case 1: convertingTo = 8; break;
                case 2: convertingTo = 9; break;
            }
            break;

        case 3:
            for (int j = 0; j < 4;) {
                if (j+1 == skip) {
                    j++;
                    continue;
                }
                printf("%d. %s\n", j+1, options[j+9]);
                j++;
            }
            scanf("%d", &convertingTo);
            switch (convertingTo) {
                case 1: convertingTo = 10; break;
                case 2: convertingTo = 11; break;
                case 3: convertingTo = 12; break;
                case 4: convertingTo = 13; break;
            }
            break;
    }

    double result = convert(base, convertingFrom, convertingTo, unitType);
    printf("Result: %lf\n", result);

    return 0;
}

