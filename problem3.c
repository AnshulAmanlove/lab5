/*problem 3
Write a program in C to copy the elements of one array into another array*/

#include <stdio.h>

int main()
{
    int i;
    int a[5];
    int b[5];

    for(i=0;i<5;i++)
        {
            printf("enter the element number %d of the array a \n",i+1);
            scanf("%d",&a[i]);
        }
for(i=0;i<5;i++)
    {
        b[i]=a[i];
        printf("the element number %d of the array b is %d\n",i+1,b[i]);
    }
    return 0;
}
