#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
int count_letters(char lines[]);
int count_words(char lines[]);
int count_sent(char lines[]);

int main(int argc, char const *argv[])
{
    char lines[500];
    printf("Enter:\n");
    fgets(lines,sizeof(lines) , stdin);  // read string
    int index, letters, words, sentences;
    float L, S;
    letters = count_letters(lines);
    words = count_words(lines);
    sentences = count_sent(lines);
    printf("%i letters\n", letters);
    printf("%i words\n", words);
    printf("%i sentences\n", sentences);

    L = (float)letters/(float)words;
    S = (float)sentences/(float)words;
    index = round(0.0588*L*100 - 0.296*S*100  - 15.8);
    printf("%f L\n",L*100);
    printf("%f S\n",S*100);
    printf("grade %i",index);
    return 0;
}

int count_letters(char lines[]){
    int count = 0;
    for(int i =0;i<strlen(lines);i++){
        if(lines[i]>='a' && lines[i]<='z' ||lines[i]>='A' && lines[i]<='Z'){
            count++;
        }
    }
    return count;
}

int count_words(char lines[]){
    int count = 1;
    for(int i = 0; lines[i]!='\0';i++){
        if(lines[i] == ' '){
            count++;
        }
    }
    return count;
}

int count_sent(char lines[]){
    int count = 0;
    for(int i = 0; lines[i]!='\0';i++){
        if(lines[i] == '!' || lines[i] == '.' || lines[i] == '?' ){
            count++;
        }
    }
    return count;
}