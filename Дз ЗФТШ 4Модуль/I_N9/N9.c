#include<stdio.h>
#include<string.h>

#define INF 100

int line(char s[][INF]){

    int c = 0;

    for(int i = 0; i < INF; i++){

        if(s[i][0] < 65 || (s[i][0] > 90 && s[i][0] < 97) || s[i][0] > 122){

            return c;
        }

        c++;
    }
}

int search(char s1[], char s2[]){

    int p = 0;

    for(int i = 0; i < strlen(s1); i++){

        if(s1[i] != s2[i]){

            p++;
        }
    }

    if(p == 1){
        
        return 1;
    }
    
    return 0;
}

int main(){

    char first[INF] = "Hello";
    char word[INF][INF]= {"Hello", "Hrllo", "Herro"};
    char last[INF] = "Hrrlo";

    for(int i = 0; i < line(word); i++){
        
        if(search(first, word[i])){

            if(search(last, word[i])){

                printf("%d", i);
                return 0;
            }
        }
    }

    return 0;
}
