#include <stdio.h>
#include <math.h>
#include <string.h>

size_t size(const char *s)
{
      const char* end = s;
      for (; *end; ++end); // цикл for выполняется до '\0'
      return end - s - 1;
}

long long toDec(char n[]){

    int lens = size(n);

    long long num = 0;

    int j = size(n);

    for(int i = 0; i <= lens; i++){

        if(n[j] == '1'){

            num += pow(2, i);
        }

        j--;
    }

    return num;
}

void toBin(int n) {
    if (n >= 2) {
        toBin(n/2);
    }
    printf("%d", n % 2);
}

int main(){

    char n1[1000000], n2[1000000];

    gets(n1);
    gets(n2);

    long long n = toDec(n1) + toDec(n2);

    toBin(n);

    return 0;
}