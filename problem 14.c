#include<stdio.h>
int main()
{
    long long i,j,ctr=0,ctr2=0,num;
for(i=1;i<1000000;i++)
{
num=i;
    for(j=1;j<1000000;j++)
{
if(num==1)
{
    ctr++;

    if(ctr2<ctr)
    {
        printf("%lld has a chain of %lld and highest counter till now is %lld\n",i,ctr,ctr2);
        //getchar();
        ctr2=ctr;
    }



    ctr=0;
    //m=0;
break;
}
else
{
if(num%2==0)
{
num=num/2;
ctr++;
}
else
{
num=3*num+1;
ctr++;
}
}
}
}
getchar();
}
