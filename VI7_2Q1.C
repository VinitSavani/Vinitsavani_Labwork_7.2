/* Q1. Write a programe to print the below pattern using nested for loop.
      output
		1
	      2 1
	    3 2 1
	  4 3 2 1
	5 4 3 2 1
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,v;
clrscr();
for(i=1;i<=5;i++){
   for(v=4;v>=i;v--){
   printf("  ");
   }
   for(j=i;j>=1;j--){
   printf("%d ",j);
   }
   printf("\n");
}
getch();
}