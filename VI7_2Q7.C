/* Q7. write a pogram ot print the below pattern using nested for loop.
       output
       1 2 3 4 5 5 4 3 2 1
       1 2 3 4     4 3 2 1
       1 2 3         3 2 1
       1 2             2 1
       1                 1
*/

#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,l,s;
clrscr();
for(i=5;i>=1;i--){
   for(j=1;j<=i;j++){
   printf("%d ",j);
   }
     for(k=i;k<=4;k++){
     printf("  ");
     }
     for(l=4;l>=i;i--){
     printf("  ");
     }
     for(s=i;s>=1;s--){
     printf("%d",s);
     }
  printf("\n");
}
getch();

}