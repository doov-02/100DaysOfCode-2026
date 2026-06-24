#include <stdio.h>
#include <string.h>
int main(){
    char username[105];
    int freq[26] = {0};
    int distinct = 0;
    scanf("%s", username);
    for(int i = 0; username[i] != '\0'; i++){
        int index = username[i] - 'a';
        if(freq[index] == 0){
            distinct++;
            freq[index] = 1;
        }
    }
    if(distinct % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}