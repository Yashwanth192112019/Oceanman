// C program for entering marks in python,c,maths,physics
// TOTAL, Aggregate & division
// Day2,Actvity2

#include<stdio.h>
int main(){
 float python,c,maths,physics;
 float sum,avg;
 int num;
 printf("Enter the marks in python : ");
 scanf("%f",&python);
 printf("Enter the marks in c : ");
 scanf("%f",&c);
 printf("Enter the marks in maths : ");
 scanf("%f",&maths);
 printf("Enter the marks in physics : ");
 scanf("%f",&physics);
 sum=python+c+maths+physics;
 num=sum;
 printf("TOTAL = %d\n",num);
 avg=(sum/400)*100;
 printf("Aggregate = %.1f\n",avg);
 if(avg>75){
 printf("DISTINCT");
 }
 else if(60<=avg && avg<75){
 printf("FIRST DIVISION");
 }
else if(50<=avg && avg<60){
 printf("SECOND DIVISION");
 }
 else if(40<=avg && avg<50){
 printf("THIRD DIVISION");
 }
 else{
 printf("FAIL");
 }
}
