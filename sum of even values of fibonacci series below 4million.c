#include<stdio.h>
int main()
{
long long i,sum=0,a=1,b=2,temp;
for(i=1;i<=4000000;i++)
{

if(b<4000000)
{
  if(b%2==0)
  {

      sum=sum+b;
  }

}
else
{
    break;
}
temp=a+b;
a=b;
b=temp;

}
printf("%lld",sum);

}
