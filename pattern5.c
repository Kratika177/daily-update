/*

****
 ***
  **
   *


*/


#include <stdio.h>

int main()
{
    for(int i=4;i>=1;i--){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

