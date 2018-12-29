#include<stdio.h>
int main()
{
  long long i,j,ctr=0,ctr2=0,m=1;
  for(i=1;i>0 ;i++)
  {
     for(j=1;j<=i ;j++)
  {
      if(i%j==0&&j!=1&&j!=i)
      {
          break;
      }
      else
      {
         if(i%j==0&&(j==1||i==j))
         {
             ctr++;
         }
      }
  }

  if(ctr==2)
  {
      printf("prime number at position %lld is %lld\n",m,i);

       m++;
        ctr=0;
  }
  else
  {
      ctr=0;
  }
  }

}
