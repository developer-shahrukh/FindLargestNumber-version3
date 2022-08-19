#include<stdio.h>
#include<stdlib.h>
int main()
{
int *x,y,largest,req;
printf("Enter a requirement :");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirement\n");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to allocate memory for numbers %d\n",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
largest=x[0];
for(y=0;y<req;y++)
{
if(x[y]>largest) largest=x[y];
}
printf("largest is %d\n",largest);
free(x);
return 0;
}