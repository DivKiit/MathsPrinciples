#include<stdio.h>
/*Divyaranjan Sahoo
Palindrome*/
int main(){
  int num,i,len=0,rev=0,DivNum;
  int Alpha,Beta;
  printf("Enter the number ~ ");
  scanf("%i",&num);DivNum=num;
  do{rev=rev*10+num%10;num/=10;}
  while(num!=0);
  if(DivNum==rev){
    printf("It is a palindrome");}
  else{printf("Not a palindrome");}
return 0;}
