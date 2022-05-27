#include<stdio.h>
#include<math.h>
/*Divyaranjan Sahoo
Middle Digit of Num*/
int main(){
  int Num,i=0,Div; int Alpha,Beta;
  printf("Enter the number here ~ ");
  scanf("%i",&Num); int DivNum=Num;
  do{Num/=10; i+=1;}while(Num>0);
  switch(i%2){
    case 0:{Alpha=DivNum/(pow(10,(i/2)));Alpha%=10;
    Beta=DivNum/(pow(10,((i-2)/2)));Beta%=10;
    printf("The two middig's are %i and %i",Alpha,Beta);break;}
    case 1:{Alpha=DivNum/(pow(10,((i-1)/2)));Alpha%=10;
    printf("The mid digit is %i",Alpha);break;}}
  return 0;}
