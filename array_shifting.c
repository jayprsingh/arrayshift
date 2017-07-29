#include<stdio.h>
void arrayshift(int arr[], int d, int n);
int main()
{
    int n,d,i;
    int a[10];
    printf("Enter the no. of elements of Array:\t ");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Shifting of Array:\t");
    scanf("%d",&d);
    printf("\n\n");
    printf("Original elements of Array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n");
    arrayshift(a,d,n);
}
void arrayshift(int arr[],int d,int n)
{
    int i,j,temp=0;
    for(i=0;i<d;i++)
    {
        temp=arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=temp;
    }
    printf("After Shifting array %d time..The contents are:\n",d);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
