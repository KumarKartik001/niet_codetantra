    int max=0;
    int maxend=0;
    for(int i=0;i<arrLen;i++){
        maxend=maxend+arr[i];
        if(maxend<0){
            maxend=0;
        }
        if(max<maxend){
            max=maxend;
        }
    }
    return max;
    //ends here
}
int readIntArray(char *argsArray, int arr[]) {
    int col = 0;
    char *token = strtok(argsArray, ",");
    while (token != NULL) {
        arr[col] = atoi(token);
        token = strtok(NULL, ",");
        col++;
    }
    return col;
}
int main(int argc, char *argv[]) {
    int arr[strlen(argv[1])];
    int arrLen = readIntArray(argv[1], arr);
    printf("%d\n", maxSumContiguousSubArray(arr, arrLen));
    return 0;
}
