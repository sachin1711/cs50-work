#include<stdio.h>
#include<string.h>
 
int pattern(int n, int k);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%i",&n);
    pattern(n+1,0);
    return 0;
}

int pattern(int n, int k){
    if(k==n){
        return 1;
    }
    else{
        for(int i = 0;i<n-k;i++){
            printf(" ");
        }

        for(int i = 0;i<k;i++){
            printf("#");
        }

        printf(" ");

        for(int i = 0;i<k;i++){
            printf("#");
        }
        printf("\n");
        k=k+1;
        pattern(n, k);
    }
}