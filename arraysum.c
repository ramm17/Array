#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int arr[n],i,sum=0;
    printf("Enter %d elements in an array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nDisplaying array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]= %d\n",i,arr[i]);
        sum+=arr[i];
    }
    printf("The sum of given array elements is %d\n",sum);
    printf("The average of given array elements is %.2f\n",(float)sum/n);
    getch();
    return 0;

}
