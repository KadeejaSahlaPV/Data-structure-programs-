#include<stdio.h>   
int main() 
{ 
    int S[10][10],m,n,i,j,k=0,size=0;
    printf("Enter number of rows in the matrix : ");
    scanf("%d",&m);
    printf("Enter number of columns in the matrix : ");
    scanf("%d",&n);
    printf("Enter elements in the sparse matrix : \n");
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d",&S[i][j]);
    printf("The matrix is \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("  %d ",S[i][j]);
        }
        printf("\n");
    }
     printf("Triplet representation of the matrix is:");
     for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) 
        {
            if(S[i][j]!=0)
            printf("\n %d  %d  %d",i,j,S[i][j]);
        }
        }
}
