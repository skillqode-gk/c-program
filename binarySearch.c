#include<stdio.h>
#define n 10
int a[n] = {1,8,10,16,21,25,30,36,39,40};
int low, high, mid;
int BinarySearch(int x)
{
    low = 0, high = n-1;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(a[mid] == x)
            return mid+1;
        else if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    for(int i =0; i<n;i++)
        printf("%d ",a[i]);
    int x;
    printf("\nEnter Search Element: ");
    scanf("%d",&x);
    int b = BinarySearch(x);
    if(b==-1)
        printf("Element is not Found......");
    else
        printf("Element is Found at %d position",b);

}