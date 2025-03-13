#include<stdio.h>
int main(){

int i=3110;
int a=i-1500;
if(a <=0){
printf("70元\n");
}else if(a <=100){
printf("80元\n");
}else{
int count =a/100;
int remain =0;
if (a%100){
remain++;
}
}
int sum=(count+remain)*10+70;
  printf("%d元\n",sum);
  returm 0;
}
