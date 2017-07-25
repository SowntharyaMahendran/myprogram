#include<stdio.h>
int main()
{
int exponent,base;
long result=1;
printf("enter the exponent: ");
scanf("%d",&exponent);
printf("enter the base: ");
scanf("%d",&base);
while(eponent!=0)
{
result*=base;
--exponent;
}
printf("%d",result);
return 0;
}

