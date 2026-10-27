// problem 1
#include <stdio.h>

int main() {
int a[4];
    for(int f=0;f<4;f++)
        {
            printf("Enter the %d th element of the array\n ",f+1);
            scanf("%d\n",&a[f]);
        }
    for(int i=0;i<4;i++)
        {
            printf("the element in the element number %d is %d\n",i,a[i]);
            
        }
    return 0;
}
