#include<stdio.h>
#include<conio.h>
int main()
{
    int m=2,n=3;
    int a[m][n],i,j,sum=0;
    printf("Enter elements in %dx%d array:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nDisplaying Array elemnts:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
    printf("\nDisplaying Array elements in Matrix form:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
