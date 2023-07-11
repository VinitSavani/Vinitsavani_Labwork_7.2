/* Q10. write a pogram ot print the below pattern using nested for loop.
       output
	       1
	     1 2 1
	   1 2 3 2 1
	 1 2 3 4 3 2 1
       1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,s;
clrscr();
for(i=1;i<=5;i++){
   for(k=4;k>=i;k--){
   printf("  ");
   }
     for(j=1;j<=i;j++){
     printf("%d ",j);
     }
     for(s=i;s>=1;s--){
     printf("%d ",s);
     }
  printf("\n");
}
getch();

}