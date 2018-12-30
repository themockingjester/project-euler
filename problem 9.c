#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{int i,j,sum=0;
int c;

    for(i=1;i<500;i++)
    {

        for(j=1;j<1000;j++)
        {
            c=sqrt(i*i+j*j);
            if(sqrt(i*i+j*j)==c)

            {
                sum=i+j+c;
            if(sum==1000)
            {
                printf("when i=%d,j=%d then third one was%d\n",i,j,c);
            }

                //getchar();
            }
            else
            {

            }
            sum=0;
        }
    }

}
