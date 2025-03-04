#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

void del(char s[], int i){

    int size = strlen(s);

    for(int j = i; j < size; j++){

        s[j] = s[j+1];
    }
}

void searchWord(char str[], char s[]){

    int j = 0;

    for(int i = 0; i < strlen(str); i++){

        bool isTrue = true;
        bool is = false;

        if(tolower(str[i]) == tolower(s[j])){

            j++;
            
            for(int f = i+1; f < strlen(s)+i; f++){     

                if(tolower(str[f]) != tolower(s[j])){

                    isTrue = false;
                    
                    break;
                }
                j++;

                if(f == strlen(s)+i-1 && f != strlen(str)-1 && str[f+1] != ' '){

                    is = true;

                    break;
                }
            }

            if(isTrue){     

                for(int f =0; f < strlen(s); f++){

                    del(str, i);
                }

                if(i == 0){

                    del(str, i);
                }
                else if(is != true || (i != strlen(str) && (str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))){

                    del(str, i-1);
                }
            }

            j = 0;
        }
    }
}
 
