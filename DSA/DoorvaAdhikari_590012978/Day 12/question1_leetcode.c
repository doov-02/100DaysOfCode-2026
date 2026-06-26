int* numberOfLines(int* widths, int widthsSize, char* s, int* returnSize){
    int *result = (int *)malloc(2 * sizeof(int));
    int lines = 1;
    int currentWidth = 0;
    for(int i = 0; s[i] != '\0'; i++){
        int width = widths[s[i] - 'a'];
        if(currentWidth + width <= 100){
            currentWidth += width;
        } 
        else{
            lines++;
            currentWidth = width;
        }
    }
    result[0] = lines;
    result[1] = currentWidth;
    *returnSize = 2;
    return result;
}