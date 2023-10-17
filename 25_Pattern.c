

/*--------------------------------------------pattern 1--------------------------------------------------

*              *
**            **
***          ***
****        ****
*****      *****
******    ******
*******  *******
****************
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *




#include <stdio.h>
int main(){
	int n=8;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=i;k++){
			printf("*");
		}
		for(int l=1;l<=((2*n))-i*2;l++){
			printf(" ");
		}
		for(int m=1;m<=i;m++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--){
		for(int k=1;k<=i;k++){
			printf("*");
		}
		for(int l=1;l<=((2*n))-i*2;l++){
			printf(" ");
		}
		for(int m=1;m<=i;m++){
			printf("*");
		}
		printf("\n");
	}
	
}

--------------------------------------------pattern 2--------------------------------------------------
        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

#include <stdio.h>
int main(){
	int n=8;
	for(int i=0;i<=n;i++){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		for(int k=0;k<=2*i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		for(int k=0;k<=2*i;k++){
			printf("*");
		}
		printf("\n");
	}
}



--------------------------------------------pattern 3--------------------------------------------------

*
**
***
****
*****
******
*******
********


#include <stdio.h>
int main(){
	int n=8;
	for(int i=1;i<=8;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
*/
/*
--------------------------------------------pattern 4--------------------------------------------------

********
*******
******
*****
****
***
**
*




#include <stdio.h>
int main(){
	int n=8;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}


--------------------------------------------pattern 5--------------------------------------------------

*
**
***
****
*****
******
*******
********
*********
**********
*********
********
*******
******
*****
****
***
**
*


#include <iostream>
int main(){
	int n=8;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=n+1;i>=0;i--){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}

--------------------------------------------pattern 5--------------------------------------------------

       *
      **
     ***
    ****
   *****
  ******
 *******
********


#include <iostream>
int main(){
	int n=8;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>=1;j--){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}

--------------------------------------------pattern 6--------------------------------------------------

********
 *******
  ******
   *****
    ****
     ***
      **
       *

#include <stdio.h>
int main(){
	int n=8;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}

--------------------------------------------pattern 7--------------------------------------------------

       *
      **
     ***
    ****
   *****
  ******
 *******
********
 *******
  ******
   *****
    ****
     ***
      **
       *



#include <stdio.h>
int main(){
	int n=8;
	for(int i=1;i<=8;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
}

--------------------------------------------pattern 8--------------------------------------------------

       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *



#include <stdio.h>
int main(){
	int n=8;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

--------------------------------------------pattern 9--------------------------------------------------

* * * * * * * *
 * * * * * * *
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *

#include <stdio.h>
int main(){
	int n=8;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

--------------------------------------------pattern 10--------------------------------------------------
       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *
 * * * * * * *
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *



#include <stdio.h>
int main(){
	int n=8;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
		for(int i=n-1;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

--------------------------------------------pattern 11--------------------------------------------------

* * * * * * * *
 * * * * * * *
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *
       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *

#include <stdio.h>
int main(){
	int n=8;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}


--------------------------------------------pattern 12--------------------------------------------------

       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *
 * * * * * * *
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *

#include <stdio.h>
int main(){
	int n=8;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}


--------------------------------------------pattern 13--------------------------------------------------

        *
       *
      *
     *
    *
   *
  *
 *

#include <stdio.h>
int main(){
	int n=8;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i-1;j++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}	
}

--------------------------------------------pattern 14--------------------------------------------------

*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *



#include <stdio.h>
int main(){
	int n=8;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(i==j){
				printf("*");
			}
			else if(j==n-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

--------------------------------------------pattern 15--------------------------------------------------

    *
   * *
  *   *
 *     *
*       *


#include <stdio.h>
int main(){
	int n=4;
		for(int j=1;j<=n;j++){
			printf(" ");
		}
		printf("*\n");
		
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		for(int k=1;k<=2*i-1;k++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
}

--------------------------------------------pattern 16--------------------------------------------------


 *       *
  *     *
   *   *
    * *
     *

#include <stdio.h>
int main(){
	int n=4;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf(" ");
		}
		printf("*");
		for(int k=1;k<=2*n-2*i+1;k++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(int i=1;i<=n+1;i++){
		printf(" ");
	}
	printf("*");
}
/*
--------------------------------------------pattern 16--------------------------------------------------

        *
       * *
      *   *
     *     *
    *       *
   *         *
  *           *
 *             *
*               *
 *             *
  *           *
   *         *
    *       *
     *     *
      *   *
       * *
        *


#include <stdio.h>
int main(){
	int n=8;
	//first hollow triangle
	
	for(int i=1;i<=n;i++){
		printf(" ");
	}
	printf("*\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		printf("*");
		for(int k=0;k<2*i-1;k++){
			printf(" ");
		}
		printf("*\n");
	}
	
	//second hollow triangle
	
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			printf(" ");
		}
		printf("*");
		for(int k=1;k<2*n-2*i;k++){
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=1;i<=n;i++){
		printf(" ");
	}
	printf("*");
}

--------------------------------------------pattern 17--------------------------------------------------

* * * * * * * *
*             *
*             *
*             *
*             *
*             *
*             *
* * * * * * * *


#include <stdio.h>
int main(){
	int n=8;
	for(int i=1;i<n;i++){
		if(i==1){
			for(int j=1;j<=n;j++){
				printf("* ");
			}
			printf("\n");
		}
		
		if(i==n-1){
			for(int j=1;j<=n;j++){
				printf("* ");
			}
			printf("\n");
		}
		else{
			printf("* ");
			for(int k=1;k<=n-2;k++){
				printf("  ");
			}
			printf("*\n");
		}
	}
}

--------------------------------------------pattern 18--------------------------------------------------

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5




#include <stdio.h>
int main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}

--------------------------------------------pattern 19--------------------------------------------------
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15


#include <stdio.h>
int main(){
	int n=5;
	int k=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d  ",k++);
		}
		printf("\n");
	}
}

--------------------------------------------pattern 20--------------------------------------------------
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1


#include <stdio.h>
int fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int n=4;
	for(int i=0;i<=4;i++){
		for(int j=0;j<=n-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("%d ",fact(i)/(fact(k)*fact(i-k)));
		}
		printf("\n");
		
	}
}
--------------------------------------------pattern 21--------------------------------------------------

1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1

#include <stdio.h>
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j%2==0){
				printf("0 ");
			}
			if(j%2!=0){
				printf("1 ");
			}
		}
		printf("\n");
	}
}

--------------------------------------------pattern 22--------------------------------------------------

     A
    B  B
   C    C
  D      D
 E        E
 D       D
  C     C
   B   B
     A



#include <stdio.h>
int main(){
	char al[5]={'A','B','C','D','E'};
	//first hollow triangle
	
	for(int i=0;i<=4;i++){
		printf(" ");
	}
	printf("%c",al[0]);
	printf("\n");
	for(int i=1;i<=4;i++){
		for(int j=1;j<=5-i;j++){
			printf(" ");
		}
		printf("%c", al[i]);
		for(int k=0;k<=2*i-1;k++){
			printf(" ");
		}
		printf("%c\n",al[i]);
	}
	
	//second hollow triangle
	for(int i=1;i<=3;i++){
		for(int j=1;j<=i;j++){
			printf(" ");
		}
		printf("%c",al[4-i]);
		for(int k=1;k<2*5-2*i;k++){
			printf(" ");
		}
		printf("%c\n",al[4-i]);
	}
	for(int i=1;i<5;i++){
		printf(" ");
	}
	printf(" %c",al[0]);
}


--------------------------------------------pattern 23--------------------------------------------------

A
AB
ABC
ABCD
ABCDE
ABCDEF


#include <stdio.h>
int main(){
	for(int i=65;i<=70;i++){
		for(int j=65;j<=i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
}

--------------------------------------------pattern 24--------------------------------------------------
   A
  A B
 A B C
 
#include <stdio.h>
int main(){

for(int i=65;i<=67;i++){
	for(int j=67;j>=i;j--){
		printf(" ");
	}
	for(int  k=65;k<=i;k++){
		printf("%c ",k);
	}
	printf("\n");
}}

--------------------------------------------pattern 25--------------------------------------------------

        * * * *
      * * * * * *
     * * * * * * *
     * * * * * * *
      * * * * * *
        * * * *


#include <stdio.h>
int main(){
	int n=6;
	for(int i=0;i<n+2;i++){
		printf(" ");
	}
	for(int i=1;i<=n-2;i++)
	   printf("* ");
	printf("\n");
	for(int i=1;i<=2;i++){
		for(int j=1;j<=n-i+1;j++){
			printf(" ");
		}
		for(int k=1;k<=i+5;k++){
			printf("* ");
		}
		printf("\n");
		
	}
	for(int i=2;i>=1;i--){
		for(int j=1;j<=n-i+1;j++){
			printf(" ");
		}
		for(int k=1;k<=i+5;k++){
			printf("* ");
		}
		printf("\n");
		
	}
	for(int i=0;i<n+2;i++){
		printf(" ");
	}
	for(int i=1;i<=n-2;i++)
	   printf("* ");
	printf("\n");

}
*/

#include <stdio.h>
int main(){
	int n=5;
	for(int i=1;i<=n-1;i++){
		printf(" ");
	}
	printf("*\n");
	int l=1;
	for(int i=1;i<=n-1;i++){
		l=1;
		if(i!=n-1){
			for(int j=1;j<=(n-1)-i;j++){
				printf(" ");
			}
			printf("*");
			for(int k=1;k<=2*i-1;k++){
				printf("%d",l++);
			}
			printf("*");
			printf("\n");
	    }
	    else{
	    	for(int m=1;m<=2*n-1;m++){
	    		printf("*");
			}
		}
		
	}
	printf("\n");
	
	for(int i=n-2;i>=1;i--){
		l=1;
		if(i!=1){
			for(int j=1;j<=(n-1)-i;j++){
				printf(" ");
			}
			printf("*");
			for(int k=1;k<=2*i-1;k++){
				printf("%d",l++);
			}
			printf("*");
			printf("\n");
	    }
	    else{
	    	
	    	for(int j=1;j<=(n-1)-i;j++){
				printf(" ");
			}
			printf("*");
			printf("%d",l);
			printf("*");
		}
        
	}
	printf("\n");
	for(int i=0;i<=n-2;i++){
		printf(" ");
	}
	printf("*");
	
}
