#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of column: ");
    scanf("%d",&n);

    int arr[n][m];
    printf("Enter the elements: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)   
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int p,q;
    printf("Enter the number of rows: ");    //n must be equal to p and order will be m*q
    scanf("%d",&p);
    printf("Enter the number of column: ");
    scanf("%d",&q);

    int brr[p][q];
    printf("Enter the elements: ");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)   
        {
            scanf("%d",&brr[i][j]);
        }
    }

    
    if(n!=p)
    printf("Matrix can't be multiplied");
    else
    {

    int crr[m][q];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            crr[i][j]=0;
            for( int k=0;k<n;k++)
            {
                crr[i][j]+= arr[i][k]*brr[k][j];
            }
        }
    }

    printf("The multiplication of the matrix is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d  ",crr[i][j]);
        }
        printf("\n");
    }
}
}