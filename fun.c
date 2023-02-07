/* function -> work

    Arg     return
1.  no      no
2.  with    no
3.  no      with
4.  with    with    
*/
#include<stdio.h>   // WAWR
int Addition(int x, int y)
{
    return x*y;   
}
int main()
{
    int a,b,p;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
   p =  Addition(a,b);
   printf("Total is: %d",p);
}


//  int a = Addition(); // function call
    // printf("Total is: %d",a);
    // printf("Total is: %d",Addition());