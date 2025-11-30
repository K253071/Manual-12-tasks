
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter days: ");
    scanf("%d",&n);

    float *sales=malloc(n*sizeof(float));
    for(int i=0;i<n;i++) scanf("%f",&sales[i]);

    float total=0;
    for(int i=0;i<n;i++) total+=sales[i];
    printf("Total = %.2f\n", total);

    int add;
    printf("Extra days: ");
    scanf("%d",&add);

    sales=realloc(sales,(n+add)*sizeof(float));
    for(int i=n;i<n+add;i++) scanf("%f",&sales[i]);

    total=0;
    for(int i=0;i<n+add;i++) total+=sales[i];
    printf("Updated total = %.2f\n", total);

    free(sales);
}

