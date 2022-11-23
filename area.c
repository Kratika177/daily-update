#include <stdio.h>
#include <conio.h>
float cal(int r){
    return 3.14*r*r;
}
int main()
{
    int r;
    float area=0.0;
    printf("Enter the radius\n");
    scanf("%d",&r);
    area=cal(r);
    printf("area of circle is %f",area);
    return 0;
}
