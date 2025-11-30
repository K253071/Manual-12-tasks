
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    printf("Enter number of strings: ");
    scanf("%d",&n);

    char **arr=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        int len;
        printf("Length of string %d: ",i+1);
        scanf("%d",&len);
        arr[i]=malloc((len+1)*sizeof(char));
        printf("Enter string: ");
        scanf("%s",arr[i]);
    }

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(arr[i],arr[j])>0){
                char *tmp=arr[i]; arr[i]=arr[j]; arr[j]=tmp;
            }

    for(int i=0;i<n;i++) printf("%s\n",arr[i]);

    for(int i=0;i<n;i++) free(arr[i]);
    free(arr);
}

