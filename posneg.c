#include<stdio.h>
int main()
{
float n;
printf("enter a number: ");
scanf("%d",&n);
if(n>0.0)
{
printf("positive");
}
else if(n<0.0)
{
printf("negative");
else
{ 
printf("zero");
}
return 0;
}
}
