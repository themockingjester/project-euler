#include<stdio.h>
int main()
{
long long i,j,product,sum,s,product2;
for(i=100;i<=999;i++)
    {
     for(j=100;j<i;j++)
        {
        product=i*j;
        product2=product;
        sum=0;
        while(product!=0)
            {s=product%10;
                sum=sum*10+s;
                product=product/10;
            }
           // printf("%lld\n", product);
           // getchar();
            if(product2==sum)
            {
            printf("when i=%lld and j=%lld then palindrom is %lld\n",i,j, product2);
            }
            else
            {
                continue;
            }
        }
    }
}
