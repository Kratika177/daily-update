#include <stdio.h>
#include <conio.h>
void main()
{
     int i=1;
     clrscr();
     printf("1 to 10 using do while loop\n\n");

     do{
	 printf("%d ",i);
	 i++;
     }while(i<=10);
     getch();
}