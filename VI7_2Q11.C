/* Q11. write a pogram ot print the below pattern using nested for loop.
       output
		       *
		     * * *
		   * * * * *
		 * * * * * * *
	       * * * * * * * * *
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,s;
char v='*';

clrscr();

for(i=1;i<=5;i++){
   for(k=4;k>=i;k--){
   printf("  ");
   }
     for(j=1;j<=i;j++){
     printf("%c ",v);
     }
     for(s=i-1;s>=1;s--){
     printf("%c ",v);
     }
  printf("\n");
}
getch();

}