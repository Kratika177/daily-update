#include <stdio.h>
#include <conio.h>
void main()
{
     int i,s=0;
     clrscr();

     for(i=1;i<=100;i++)
     {

	 s=s+i;
     }
     printf("Sum of 1 to 100 is - %d",s);
     getch();
}
