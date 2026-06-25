#include <stdio.h>
#include <ctype.h>
int isVowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'y');
}
int main(){
    char s[101];
    scanf("%100s", s);
    for(int i = 0; s[i] != '\0'; i++){
        char ch = tolower(s[i]);
        if(!isVowel(ch)){
            printf(".%c", ch);
        }
    }
    return 0;
}