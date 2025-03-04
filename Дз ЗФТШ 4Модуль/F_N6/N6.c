#include<stdio.h>
#include<string.h>
#include<math.h>

#define INF 1000000

int pows(int a, int n){

    int num = 1;

    for(int i = 0; i < n; i++){

        num *= a;
    }

    return num;
}

int prevNum(char s[], int i){

    int num = 0;
    int dec = 0;
    i--;

    while(s[i] >= 48 && s[i] <= 57 && i >= 0){

        int p = pows(10, dec);

        num += (s[i]-48) * p;

        dec++;
        s[i] = '0';
        i--;
        
    }

    return num;
}

int nextNum(char s[], int i){

    int nums = 0;
    int dec = 0;
    i++;

    while(s[i] >= 48 && s[i] <= 57){

        int p = pows(10, dec);

        nums += (s[i]-48) * p;

        dec++;
        s[i] = '0';
        i++;
    }

    int num = 0;

    dec--;

    while(nums >= 10){

        num += (nums%10) * pows(10, dec);
        dec--;
        nums /= 10;
    }

    num += nums;

    return num;
}

int main(){

    char s[INF];

    gets(s);

    int res = 0;

    for(int i = 0; i < strlen(s); i++){

        if(s[i] == '*'){

            res += prevNum(s, i) * nextNum(s, i);
        }
    }

    for(int i = 0; i < strlen(s); i++){

        if(s[i] == '+'){

            res += prevNum(s, i) + nextNum(s, i);
        }
        else if(s[i] == '-'){

            res += prevNum(s, i) - nextNum(s, i);
        }
    }

    printf("%d", res);

    return 0;
}