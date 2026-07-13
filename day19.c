#include <stdio.h>

int main()
{
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c];

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    printf("Sum Matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]+B[i][j]);
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int r,c,i,j;

    scanf("%d %d",&r,&c);

    int A[r][c],B[r][c];

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    printf("Difference Matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]-B[i][j]);
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int r,c,i,j;

    scanf("%d %d",&r,&c);

    int A[r][c];

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    printf("Transpose Matrix:\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",A[j][i]);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n,i,j,sum=0;

    scanf("%d",&n);

    int A[n][n];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<n;i++)
        sum += A[i][i];

    printf("Diagonal Sum = %d",sum);

    return 0;
}
