#include<stdio.h>
#include<conio.h>
void main() 
{
    int num, firstdigit, lastdigit, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    lastdigit = num % 10;
    while(num>=10) 
    {
        num /= 10;
    }
    firstdigit = num;
    sum = firstdigit + lastdigit;
    printf(" \n %d The sum of the first and last digits is:", sum);
    getch();
}