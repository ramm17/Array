
#include<stdio.h>
#include<conio.h>
int main()
{
    int m=3,n=3,sum=0;
    int a[m][n],i,j;
    printf("Enter elements in %dx%d matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          if(i==j)
        {
            sum+=a[i][j];
        }
    }

    }
    printf("\The sum of diagonal of given matrix is%d",sum);
    getch();
    return 0;
}

