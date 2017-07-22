#include<stdio.h>
int main()
{
char ch;
printf("enter an alphabet:\n");
scanf("%d",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("\n %d is a VOWEL",ch);
}
else
{
printf("\n %d is a CONSONANT",ch);
}
return 0;
}
