
#include <stdio.h>

int main()
{
int a[5];
    int k=0,j,f,i;
    for(int i=0;i<5;i++)
        {
            printf("enter the element number %d of the array\n",i+1);
            scanf("%d",&a[i]);
        }
    for(int f=0;f<5;f++)
        {
            for(int j=0;j<5;j++)
                {
                    if(i==j)
                    {
                        continue;
                    }
            else if(a[f]==a[j])
            {
                k++;
                break;
            }
                
                
        }
            
        }
            printf("the number of duplicate elements is %d\n",k);
    return 0;
        }
  
