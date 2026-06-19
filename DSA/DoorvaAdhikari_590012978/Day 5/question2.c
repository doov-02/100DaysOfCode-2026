#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    int visited[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
        visited[i] = 0;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if(b[i] > b[j]){
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    int equal = 1;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            equal = 0;
            break;
        }
    }
    if(equal)
        printf("true");
    else
        printf("false");
    return 0;
}