int lengthOfLastWord(char* s){
    int i = 0;
    while(s[i] != '\0'){
        i++; }
    i--;  
    while(i >= 0 && s[i] == ' '){
        i--; }
    int len = 0;
    while(i >= 0 && s[i] != ' '){
        len++;
        i--; }
    return len;
}