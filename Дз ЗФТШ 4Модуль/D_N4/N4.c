#include<stdio.h>

size_t size(const char *s)
{
      const char* end = s;
      for (; *end; ++end); // цикл for выполняется до '\0'
      return end - s - 1;
}

int main(){

    char s[1000000];

    gets(s);

    int first = 0, last = size(s);

    int sum = 0;

    for(int i = 0; i <= last; i++){

        if(s[i] >= 48 && s[i] <= 57){

            sum += s[i]-48;
        }
    }

    printf("%d", sum);

    return 0;
}