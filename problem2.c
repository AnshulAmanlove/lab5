// problem 2
#include <stdio.h>


int main()
{
int a[5];    
for(int i=0;i<5;i++)
        {
            printf("enter the element number %d of the array\n",i+1);
            scanf("%d",&a[i]);
        }
     for(int f=0;f<5;f++)
        {
            printf("the element in the element number %d is %d\n",f+1,a[f]);
        }
    
    return 0;
}
