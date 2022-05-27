#include<stdio.h>
/*Divyaranjan Sahoo
Input till 0*/
int main(){
  int Num,i=0,Div=3;
  /*while (Div=3){
    printf("Enter the Number here ~ ");
    scanf("%i",&Num);i+=1;
    if (Num==0){break;}}*/
  do{
  printf("Enter the Number here ~ ");
  scanf("%i",&Num);
  i+=1;
}while(Num!=0);

  printf("Number of inputs ~ %i",i-1);
  printf(" [Here 0 input is not counted]");
  return 0;}
