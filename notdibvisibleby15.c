#include<stdio.h>
int main(){
int a ;
  printf("Enter a number   :");
  scanf("%d",&a);
  if(a%15!=0){
    if(a%3!=0){
      if(a%5==0) printf("condition valid") ;
      else
        printf(" condition invalid");
    }
    else 
      printf(" condition valid");
  }
  else 
    printf("not condition invalid");
return 0;
}
