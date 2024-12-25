/******************
Name: Netanel Miara
ID: 208107151
Assignment:1
*******************/
#include <stdio.h>
int main() {
    int number, position;
    printf("\nWhat bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &number);
    printf("Please enter a position\n");
    scanf("%d", &position);
    if (position < 0 || position > 31) {
        printf("Invalid position, enter a position between 0 and 31.\n");
        return 1;
    }
    int bit = (number >> position) & 1;
    printf("The bit in the position %d of number %d is: %d\n", position, number, bit);

    int numberSet, positionSet;
    printf("Set bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &numberSet);
    printf("Please enter a position\n");
    scanf("%d", &positionSet);

    int numberSetTo1 = numberSet | (1 << positionSet);
    int numberSetTo0;
    printf("Number with bit %d set to 1: %d\n", positionSet, numberSetTo1);
    printf("Number with bit %d set to 0:%d\n", positionSet, numberSetTo0);

    int numberToggle, positionToggle;
    printf("Toggle bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &numberToggle);
    printf("Please enter a position\n");
    scanf("%d", &positionToggle);
    int toggledNumber = numberToggle ^ (1 << positionToggle);
    printf("Number with bit %d toggled: %d ", positionToggle, toggledNumber);

    int numberCheck;
    printf("Even - Odd:\n");
    printf("Please enter a number:\n");
    scanf("%d", &numberCheck);
    if (numberCheck & 1)
        printf("0\n");
    else
        printf("1\n");

    int firstNumberOctal, secondNumberOctal;
    printf("\n3, 5, 7, 11:\n");
    printf("Please enter the first number (octal):\n");
    scanf("%d", &firstNumberOctal);
    printf("Please enter the second number (octal):\n");
    scanf("%d", &secondNumberOctal);
    int sum = firstNumberOctal + secondNumberOctal; // sum for addition
    printf("The sum in hexadecimal:%X\n", sum);

    int bit3 = (sum >> 3) & 1;
    int bit5 = (sum >> 5) & 1;
    int bit7 = (sum >> 7) & 1;
    int bit11 = (sum >> 11) & 1;
    printf("The 3,5,7,11 bits are:%d%d%d%d\n", bit3, bit5, bit7, bit11);

    printf("Bye!\n");
    return 0;
}
