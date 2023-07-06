/* Q4. Write a programe to print the below pattern using nested for loop.
      output
      1 0 1 0 1
	0 1 0 1
	  1 0 1
	    0 1
	      1
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,v;
clrscr();
for(i=5;i>=1;i--){
   for(v=4;v>=i;v--){
   printf("  ");
   }
   for(j=i;j>=1;j--){
   printf("%d ",j%2);
   }
   printf("\n");
}
getch();
}