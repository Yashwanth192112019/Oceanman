#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,d,e,f;
    float g;
    printf("1 for power\n");
    printf("2 for add\n");
    printf("3 for sub\n");
    printf("4 for mul\n");
    printf("5 for div\n");
    {
        printf("enter the choice:");
        scanf("%d",& n);
        printf("enter the number= ");
        scanf("%d",& a);
        printf("enter the next number= ");
        scanf("%d",& b);
        
        if (n==1){
        c=pow(a,b);
        printf("the power of the numbers is=%d",c);}
        else if (n==2){
        d=a + b;
        printf("the sum of the numbers is=%d",d);}
        else if (n==3){
        e=a-b;
        printf("the difference of the numbers is=%d",e);}
        else if  (n==4){
        f=a*b;
        printf("the product of the numbers is=%d",f);}
        else if (n==5){
        g=a/b;
        printf("the division of the numbers is=%f",g);}
        
    }
}
