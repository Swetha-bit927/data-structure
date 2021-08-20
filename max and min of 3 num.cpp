#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
 printf("Maximum number is a = %d",a);
else if(b>a && b>c)
printf("Maximum number is b = %d",b);
else
 printf("Maximum number is c = %d",c);
 printf("\n");
if(a<b && a<c)
printf("Minimum number is a = %d",a);
else if(b<a && b<c)
 printf("Minimum number is b = %d",b);
else
 printf("Minimum number is c = %d",c);
 getch();
}
