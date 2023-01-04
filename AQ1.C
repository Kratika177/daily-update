#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("Enter the number 1\n");
    scanf("%d",&a);
    printf("Enter the n umber 2\n");
    scanf("%d",&b);
    if(a>b){
	printf("%d is greater.",a);
    }
    else if(a==b){
	printf("Both the numbers are equal.\n");
    }
    else{
	printf("%d is greater.",b);
    }
    getch();
}