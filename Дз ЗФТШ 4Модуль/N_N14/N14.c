#include<stdio.h>
#include<string.h>

#define INF 100

void removes(char s[][INF], int size){

    for(int i = 0; i < size; i++){

        if(strcmp(s[i], "-") == 0){

            continue;
        }

        for(int j = i+1; j < size; j++){

            if(strcmp(s[i], s[j]) == 0){

                strcpy(s[i], "-");
            }
        }
    }
}

int len(char s[][INF]){
    
    int c = 0;
    
    for(int i = 0; i < INF; i++){
        
        if(s[i][0] < 65 || (s[i][0] > 90 && s[i][0] < 97) || s[i][0] > 122){
            
            return c;
        }
        
        c++;
    }
}

int main(){

    char s[INF][INF] = {"apple", "banana", "apple", "orange", "banana", "grape"};

    int size = len(s);

    removes(s, size);

    for(int i = 0; i < size; i++){

        printf("%s ", s[i]);
    }

    return 0;
}
