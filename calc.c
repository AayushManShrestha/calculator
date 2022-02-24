/********************************************************************************************************
Program Name: calculator.c
Program Description: This is a calculator project.
Program Author: Aayush Man Shrestha
********************************************************************************************************/

#include <stdio.h>

int sum(int num1, int num2) {
    return num1+num2;
}

int diff(int num1, int num2) {
    return num1-num2;   
}

int product(int num1, int num2) {
    return num1*num2;
}

int divide(int num1, int num2) {
    return num1/num2;  

int main(void) {
    int num1 = 0, num2 = 0;
    printf("Enter two numbers: ");
    scanf(" %d %d" &num1, &num2);

    printf("The sum is %d.\n", sum(num1, num2));
    printf("The difference is %d.\n", diff(num1, num2));
    printf("The product is %d.\n", product(num1, num2));
    printf("The division is %d.\n", divide(num1, num2));
    
    return 0;
}
