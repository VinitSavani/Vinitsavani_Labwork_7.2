/* Q6. Write a programe to print the below pattern using nested for loop.
      output
       5 4 3 2 1
	 5 4 3 2
	   5 4 3
	     5 4
	       5
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,v;
clrscr();
for(i=1;i<=5;i++){
   for(v=1;v<=i;v++){
   printf("  ");
   }
   for(j=5;j>=i;j--){
   printf("%d ",j);
   }
   printf("\n");
}
getch();
}