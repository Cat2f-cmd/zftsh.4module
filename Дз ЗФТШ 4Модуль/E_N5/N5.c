#include<stdio.h>
#include<string.h>
#include <stdbool.h>

#define INF 1000000

void leftShift(char s[], int size, int i){

    int size1 = strlen(s);

    for(int j = i; j < size1; j++){

        s[j] = s[j+size];
        s[j+size] = ' ';
    }
}

void rightShift(char s[], int size, int i){
    
    int size1 = strlen(s);
    
    for(int j = strlen(s)-1; j >= i; j--){

        s[j+size] = s[j];
        s[j] = ' ';
    }
}

void insert(char s[], char s3[], int i){

    int f = 0;

    for(int j = i; j < strlen(s3) + i; j++){

        s[j] = s3[f];
        f++;
    }
}

int lastP(char s[]){
    
    for(int i = 0; i < strlen(s); i++){
        
        if((s[i] == ' ' && i == strlen(s)-1) ||(s[i] == ' ' && s[i+1] == ' ')){
            
            return i;
        }
    }
}

int main(){

    char s1[INF], s2[INF], s3[INF];

    gets(s1);
    gets(s2);
    gets(s3);

    int j = 0;
    bool isTrue = true;

    

    for(int i = 0; i < strlen(s1); i++){

        if(s1[i] == s2[j]){
            
            isTrue = true;
            
            j++;
            for(int f = i+1; f < strlen(s2) + i; f++){

                if(s1[f] != s2[j]){

                    isTrue = false;
                }

                j++;
            }

            if(isTrue){

                leftShift(s1, strlen(s2), i);
                rightShift(s1, strlen(s3), i);
                insert(s1, s3, i);
                isTrue = false;
            }

            j = 0;
        }
    }
    
    s1[lastP(s1)] = '\0';

    puts(s1);

    return 0;
}