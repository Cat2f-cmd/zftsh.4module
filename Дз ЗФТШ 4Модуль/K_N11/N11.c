#include<stdio.h>
#include<string.h>

void isStr(char s1[], char s2[]){

    int size;

    if(strlen(s1) < strlen(s2)){

        size = strlen(s1);
    }
    else{

        size = strlen(s2);
    }

    for(int i = 0; i < size; i++){

        if(s1[i] != s2[i]){

            printf("%d", i+1);
            return;
        }
    }

    printf("0");
}

int main(){

    char s1[1000000], s2[1000000];

    gets(s1);
    gets(s2);

    isStr(s1, s2);

    return 0;
}