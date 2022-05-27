#include<stdio.h>
/*Divyaranjan Sahoo
Sum and Avegage of Digits*/
int main(){
  int Num,DivSum=0,i=0; float DivAvg;
  printf("Enter the number here: ");
  scanf("%i",&Num);
  while(Num>0){DivSum+=Num%10; i+=1; Num/=10;}
  DivAvg=DivSum/i;
  printf("The sum of digits is %i\n",DivSum);
  printf("The average of digits is %.3f",DivAvg);
  return 0;}
