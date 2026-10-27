#include <stdio.h>

int main()
{
    int n;


printf("enter the number of elements you want in both array a and b\n");
    scanf("%d",&n);

    int a[n];
    int b[n];
    int c[n];
    
    for(int i=0;i<n;i++){
        printf("enter the element you want in array a in the element number %d\n",i+1);
    scanf("%d",&a[i]);
    }

    
for(int k=0;k<n;k++)
{
        printf("enter the element you want in array b in the element number %d\n",k+1);
    scanf("%d",&b[k]);
    }

    for(int j=0;j<n;j++)
        {
         c[j]=2*a[j]+3*b[j];
            
            printf("the element in the array c having element number %d is %d\n",j+1,c[j]);
            
        }
    return 0;
}
