#include<stdio.h>
#include<conio.h>
void main()
{
    int number, count=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do 
    {
        count++;
        number /= 10;
    } while (number != 0);
    printf("\n %d Total number of digits:", count);
    getch();
}
