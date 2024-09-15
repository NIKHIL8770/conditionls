#include<stdio.h>
int main(){
int x ;
  printf(" Enter a number :  ");
  scanf("%d",&x);
  if(x>0) printf(" THE ABSOLUTE VALUE OF THE NUMBER %d",x);
  if(x<0) printf("THE ABSOLUTE VALUE OF THE NUMBER %d",x*-1);
  
 return 0;
}
