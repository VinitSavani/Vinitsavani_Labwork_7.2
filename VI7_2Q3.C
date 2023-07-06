/* Q3. Write a programe to print the below pattern using nested for loop.
      output
	      5
	    4 4
	  3 3 3
	2 2 2 2
      1 1 1 1 1
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
   printf("%d ",i);
   }
   printf("\n");
}
getch();
}