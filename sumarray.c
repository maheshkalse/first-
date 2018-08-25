#include<stdio.h>
void main()
{
int a[10],num,sum=0,i;
printf("Enter Size of Array\n");
scanf("%d",&num);
printf("Enter elements\n");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum of All array Element is : %d\n",sum);
}
