
   #include<stdio.h>
   int main(){
 int a,b,c ;
      printf("ENTER THE VALUER OF a    :",a);
        scanf("%d",&a);
   printf("ENTER THE VALUER OF b    :",b);
     scanf("%d",&b);
     printf("ENTER THE VALUER OF c    :",c);
     scanf("%d",&c);
    if(a>=b && a>=c)  printf("%d  is a greatest number\n",a);
     if(b>=a && b>=c)  printf(" %d  is a greatest number\n",b);
    if(c>=b && c>=a)  printf("%d  is a greatest number\n",c);

    return 0;
  }
  
