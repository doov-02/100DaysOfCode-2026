char* mostCommonWord(char* paragraph, char** banned, int bannedSize) {
    char *words[1000];
    int count[1000];
    int unique = 0;
    char word[1001];
    int idx = 0;
    int n = strlen(paragraph);
    for(int i = 0; i <= n; i++){
        if(i < n && isalpha(paragraph[i])){
            word[idx++] = tolower(paragraph[i]);
        } 
        else{
            if(idx > 0){
                word[idx] = '\0';
                int isBanned = 0;
                for(int j = 0; j < bannedSize; j++){
                    if(strcmp(word, banned[j]) == 0){
                        isBanned = 1;
                        break;
                    }
                }
                if(!isBanned){
                    int found = -1;
                    for(int j = 0; j < unique; j++){
                        if(strcmp(words[j], word) == 0){
                            found = j;
                            break;
                        }
                    }
                    if(found == -1){
                        words[unique] = (char *)malloc(strlen(word) + 1);
                        strcpy(words[unique], word);
                        count[unique] = 1;
                        unique++;
                    } 
                    else{
                        count[found]++;
                    }
                }
                idx = 0;
            }
        }
    }
    int maxIndex = 0;
    for(int i = 1; i < unique; i++){
        if(count[i] > count[maxIndex])
            maxIndex = i;
    }
    return words[maxIndex];
}