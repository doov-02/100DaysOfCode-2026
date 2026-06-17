#include <stdio.h>
int firstOccurrence(int arr[], int n, int target){
    int left = 0, right = n - 1;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            ans = mid;
            right = mid - 1;}
        else if(arr[mid] < target){
            left = mid + 1;} 
        else{
            right = mid - 1;}
    }

    return ans;
}
int lastOccurrence(int arr[], int n, int target){
    int left = 0, right = n - 1;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            ans = mid;
            left = mid + 1;} 
        else if(arr[mid] < target){
            left = mid + 1;} 
        else{
            right = mid - 1;}
    }
    return ans;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);}
    int target;
    scanf("%d", &target);
    int first = firstOccurrence(arr, n, target);
    if(first == -1){
        printf("0\n");
        return 0;}
    int last = lastOccurrence(arr, n, target);
    printf("%d\n", last - first + 1);
    return 0;
}