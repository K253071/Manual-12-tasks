#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n,p;
    printf("Enter m n p: ");
    scanf("%d %d %d",&m,&n,&p);

    int **A = malloc(m*sizeof(int*));
    int **B = malloc(n*sizeof(int*));
    int **C = malloc(m*sizeof(int*));

    for(int i=0;i<m;i++) A[i]=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) B[i]=malloc(p*sizeof(int));
    for(int i=0;i<m;i++) C[i]=malloc(p*sizeof(int));

    printf("Enter A:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&A[i][j]);

    printf("Enter B:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++) scanf("%d",&B[i][j]);

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            C[i][j]=0;
            for(int k=0;k<n;k++) C[i][j]+=A[i][k]*B[k][j];
        }
    }

    printf("Result:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++) printf("%d ",C[i][j]);
        printf("\n");
    }

    for(int i=0;i<m;i++) free(A[i]);
    for(int i=0;i<n;i++) free(B[i]);
    for(int i=0;i<m;i++) free(C[i]);
    free(A); free(B); free(C);
}
