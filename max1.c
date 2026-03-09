#include <stdio.h>

int main(){
    int n,i,j,index=0;
    int max=0;
    printf("Enter the row or col of an array: ");
    scanf("%d",&n);
    int arr[n][n];

    printf("Enter the elements: ");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]!= 1 && arr[i][j]!= 0)
            {
                printf("Enter 0 or 1 only \n");
                printf("Enter elements: \n");
                scanf("%d",&arr[i][j]);
            }
        }
    }

    for(int i=0;i<n;i++)
    { 
        int count=0;
        for(int j=0;j<n;j++)
        {
            if( arr[i][j]==1)
                count++;
        }
        if(count>max)

        {
            max=count;
            index=i;
        }
    }
    printf("The row with the maximum 1 is: %d ",max);
}