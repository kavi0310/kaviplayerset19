#include<stdio.h>
int main()
{
int n,a[100],b[100],i,j=0,k=0,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==0)
c++;
}
//printf("c=%d\n",c);
for(i=0;i<n;i++)
{
if(a[i]!=0)
{
b[j]=a[i];
j++;
k++;
}
}
//printf("k=%d\n",k);
for(i=k;i<=c+k;i++)
{
b[i]=0;
}
for(j=0;j<c+k;j++)
{
printf("%d ",b[j]);
}
}
