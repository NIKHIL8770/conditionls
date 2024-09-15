#include<stdio.h>
int main(){
int sp,cp;
  printf("ENTER  sp :     ");
  scanf("%d",&sp);
  printf("ENTER  cp :     ");
  scanf("%d",&cp);
  if(cp>sp) printf("loss %d",cp-sp);
  else printf("profit");
  if(cp==sp) printf("nither profit nor loss%d",sp-cp);

return 0;
}




