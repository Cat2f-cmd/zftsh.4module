#include<stdio.h>
#include<string.h>

int revers(char s[]){

    int size = strlen(s);

    int start = 0;
    int end = size;

    char res[size+1];
    int f = 0;

    for(int i = size - 1; i >= 0; i--){

        if(s[i] == ' '){

            start = i+1;

            for(int j = start; j < end; j++){

                res[f] = s[j];
                f++;               
            }

            end = i;

            res[f] = ' ';
            f++;
        }
    }

    int i = 0;

    while(s[i] != ' '){

        res[f] = s[i];
        f++;
        i++;
    }

    res[f] = '\0';

    for(int i = 0; i < size; i++){

        s[i] = res[i];
    }
}
