#include <stdio.h>
void reverse(int nums[], int left, int right){
    while (left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
}
void rotate(int nums[], int n, int k){
    k %= n; 
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}
int main(){
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;
    rotate(nums, n, k);
    printf("[");
    for (int i = 0; i < n; i++){
        printf("%d", nums[i]);
        if (i < n - 1)
            printf(",");
    }
    printf("]\n");
    return 0;
}