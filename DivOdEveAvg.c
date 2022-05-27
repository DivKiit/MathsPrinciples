#include<stdio.h>
/*Divyaranjan Sahoo
Average of odd even*/
int main(){
  int i=1,a=0,b=0,n,Num; float Alpha=0,Beta=0;
  printf("Enter the number of input values: ");
  scanf("%i",&n);
  while(i<=n){
    printf("Enter the number here ~ "); scanf("%i",&Num);
    //For Even Numbers
    if (Num%2==0){ Alpha+=Num; a+=1;}
    else if (Num%2==1){ Beta+=Num; b+=1;}
    i+=1;}
  Alpha/=a; Beta/=b;
  printf("Average of Even Nums=%.3f Odd Num = %.3f",Alpha,Beta);}
