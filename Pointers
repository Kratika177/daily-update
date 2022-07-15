#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function   
    int y=*a;
    int z=*b;
    *a=y+z;
    *b= abs(z-y);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
