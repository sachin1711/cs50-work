#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char *key = argv[1];
    char word[100];
    fgets(word,sizeof(word) , stdin);
    int temp=0;

    for(int i = 0;i<strlen(word);i++){
        temp = (int)word[i] - 65;
        printf("%c",key[temp]);
    }
    
    return 0;
}