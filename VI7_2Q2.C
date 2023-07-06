/* Q2. Write a programe to print the below pattern using nested for loop.
      output
		5
	      4 5
	    3 4 5
	  2 3 4 5
	1 2 3 4 5
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,v;
clrscr();
for(i=5;i>=1;i--){
   for(v=1;v<=i;v++){
   printf("  ");
   }
   for(j=i;j<=5;j++){
   printf("%d ",j);
   }
   printf("\n");
}
getch();
}