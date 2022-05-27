#include<stdio.h>
/*Divyaranjan Sahoo
Natural Num Range*/
void main(){
  int i=1,n;
  printf("Enter the number of lines - ");
  scanf("%i",&n);int Div=200/n;
  while(i<201){
    printf("%i ",i);
    switch(i%Div){
      case 0:{printf("\n");break;}}
  i+=1;}}
