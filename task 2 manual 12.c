
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int new_n=n*2;
    arr=realloc(arr,new_n*sizeof(int));

    printf("Enter %d new elements:\n",n);
    for(int i=n;i<new_n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<new_n;i++) printf("%d ",arr[i]);
    free(arr);
}

