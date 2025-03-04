#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define INF 1000000

int main(){
    
    char s[INF] = "bbb";
    char r[INF] = "b*";

    char res[INF];
    int f = 0;

    bool isTrue = true;

    int j = 0;

    int h = 0;

    while((r[h] >= 65 && r[h] <= 90) || (r[h] >= 97 && r[h] <= 122)){

        res[f] = r[h];
        f++;
        h++;
    }

    for(int i = 0; i < strlen(r); i++){

        if((r[i] >= 65 && r[i] <= 90) || (r[i] >= 97 && r[i] <= 122)){

            j++;
        }

        if(r[i] == '.'){

            if(s[j] < 33 || s[j] > 126){

                printf("0");
                return 0;
            }
            else{

                res[f] = s[j];
                f++;
            }

            isTrue = false;
        }
        else if(r[i] == '*'){

            while(s[j] == r[i-1]){

                res[f] = s[j];
                f++;
                j++;
            }
        }
        else if(r[i] == '+'){

            int col = 0;

            while(s[j] == r[i-1]){

                col++;

                res[f] = s[j];
                f++;
                j++;
            }

            if(col < 1){

                printf("0");
                return 0;
            }

            isTrue = false;
        }
        else if(r[i] == '{'){

            for(int k = 0; k < r[i+1]-49; k++){

                if(s[j] == r[i-1]){

                    res[f] = s[j];
                    //printf("%c, %c\n", s[j], r[i-1]);
                    f++;
                    j++;
                }
                else{

                    printf("0");
                    return 0;
                }
            }

            isTrue = false;
        }
    }

    
    if(strlen(res) != strlen(s)){

        int u = strlen(r)-1;

        while(r[u] >= 33 && r[u] <= 126 && r[u] != '.' && r[u] != '*' && r[u] != '}' && r[u] != '+'){

            u--;
        }

        u++;

        for(int i = u; i < strlen(r); i++){

            res[f] = r[i];
            f++;
        }
    }

    if(isTrue && s[0] == '\0'){

        printf("1");
        return 0;
    }

    if(strlen(res) != strlen(s)){

        printf("0");
        return 0;
    }

    if(strlen(res) == strlen(s)){

        for(int i = 0; i < strlen(s); i++){

            if(res[i] != s[i]){

                printf("0");
                return 0;
            }
        }

        printf("1");
    }

    return 0;
}
