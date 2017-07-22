#include<stdio.h>
void main()
{
int a,b,c;
printf("enter numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d largest no.",a);
else if(b>c)
printf("%d largest no.",b)
else
printf("%d largest no.",c);
}
