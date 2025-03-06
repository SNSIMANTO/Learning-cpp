#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(i==j)
                printf("1");
            else
                printf("%d",i+1);
        }
        printf("\n");
    }
}
