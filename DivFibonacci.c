#include<stdio.h>
/*Divyaranjan Sahoo
Fibonacci series*/
int main(){
  int n,a=0,b=1,i=0,Div;
  printf("Req no of Fibonacci values ~ ");
  scanf("%i",&n);
  for(Div=1;Div<=n;Div++){
    printf("%i ",i);
    a=b; b=i; i=a+b;}
  return 0;}
