#include<stdio.h>
/*Divyaranjan Sahoo
Average of odd even*/
void main(){
  int i=1,n,a=0,b=0; float Alpha=0,Beta=0;
  printf("Enter the endpoint n ~ ");
  scanf("%i",&n);
  while (i<=n){Alpha+=i; a+=1; i+=2;}
  i=2;
  while (i<=n){Beta+=i; b+=1; i+=2;}
  Alpha/=a; Beta/=b;
  printf("Average of odd numbers is %.3f",Alpha);
  printf("\nAverage of even numbers is %.3f",Beta);}
