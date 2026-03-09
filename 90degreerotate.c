#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows and colums: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)   
        {
            scanf("%d",&arr[i][j]);
        }
    }

for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++) //or j=0 to j<=i
    {
        int temp= arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
}

for(int i=0;i<n;i++)
{
    int j=0,k=n-1;
   while(j<k)
   {
    int temp=arr[i][j];
    arr[i][j]=arr[i][k];
    arr[i][k]=temp;
    j++;
    k--;
   }
}

printf("The rotated matrix is: \n");
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {

        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}