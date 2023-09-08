#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the number 1\n");
    scanf("%d",&a);
    printf("Enter the number 2\n");
    scanf("%d",&b);
    printf("Enter the number 3\n");
    scanf("%d",&c);
    if(a>b)
    {
	if(a>c)
	{
	    printf("%d is greater\n",a);
	}
	else{
	    printf("%d is greater\n",c);
	}
    }
    else{
	 if(b>c)
	 {
	      printf("%d is greater\n",b);
	 }
	 else{
	      printf("%d is greater\n",c);
	 }
    }
    getch();
}
