#include<stdio.h>
int main()
{
long long i,j,product,sum,s,product2,ctr=0,swap,c,d;
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
           // printf("when i=%lld and j=%lld then palindrom is %lld\n",i,j, product2);
            ctr++;
            }
            else
            {
                continue;
            }
        }
    }
    printf(" total possible palindrpmes are %lld\n",ctr);
    long long arr[ctr],m=0;
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
            arr[m]=product2;
            m++;
            }
            else
            {
                continue;
            }
        }
    }
     for (c = 0 ; c < ctr; c++)
  {
    for (d = 0 ; d < ctr - c - 1; d++)
    {
      if (arr[d] > arr[d+1]) /* For decreasing order use < */
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
  printf("highest palindrome is %lld",arr[ctr-1]);



}
