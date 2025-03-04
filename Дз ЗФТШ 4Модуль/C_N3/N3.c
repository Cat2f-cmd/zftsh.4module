#include<stdio.h>
#include<string.h>

void toM(int n, int m){

    if(n >= m){

        toM(n/m, m);
    }

    if(n % m <= 9){

        printf("%c", (n%m) + 48);
    }
    else{

        printf("%c", (n%m) + 55);
    }
}

int main(){

    int n, m;
    scanf("%d%d", &n, &m);

    toM(n, m);

    return 0;
}