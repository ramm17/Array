#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100],i,ele,loc;
    int n=5;
    for(i=0;i<n;++i)
    {
        printf("Enter Element[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the  element to be inserted:");
    scanf("%d",&ele);
    printf("Enter location:");
    scanf("%d",loc);


    for(i=n;i>=loc-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[loc-1]=ele;
    printf("\nEnter the element after Insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("\nElement[%d]=%d\n",i+1,arr[i]);
    }

    getch();
    return 0;
}

