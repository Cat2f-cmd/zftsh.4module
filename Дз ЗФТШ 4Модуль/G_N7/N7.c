#include<stdio.h>
#include<string.h>

int main(){

    char s[1000000];

    gets(s);

    char res[1000000];

    int k;
    scanf("%d", &k);

    for(int i = 0; i < strlen(s); i++){

        if(s[i] == ' '){


        }
        else if(s[i]-k < 65 || (s[i]-k > 90 && s[i]-k < 97) || s[i]-k > 122){

            s[i] = s[i] - k + 26;
        }
        else{

            s[i] -= k;
        }
    }

    puts(s);

    return 0;
}