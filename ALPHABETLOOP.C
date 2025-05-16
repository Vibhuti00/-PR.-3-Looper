#include<stdio.h>
#include<conio.h>
void main()
{
	char Letter;
	clrscr();
	Letter = 'a';
	do{
		printf("%c ", Letter);
		Letter+=4;
	}
	while(Letter<='z');
	getch();
}