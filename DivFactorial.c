#include<stdio.h>
/*Divyaranjan Sahoo
Factorial of a number*/
int main(){
  int i,Div=1;
  printf("Enter the number to cal Factorial: ");
  scanf("%i",&i);
  while (i>0){
    Div*=i; i-=1;}
  printf("The factorial is %i",Div);}
