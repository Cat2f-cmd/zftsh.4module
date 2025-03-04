#include <stdio.h>
#include <locale.h>

size_t size(const char *s)
{
      const char* end = s;
      for (; *end; ++end); // цикл for выполняется до '\0'
      return end - s - 1;
}

int main(){

    char s[1000000];

    gets(s);

    int first = 0, second = size(s);

    while(first <= second){

        if(s[first] != s[second]){

            printf("0");
            return 0;
        }

        first++;
        second--;
    }

    printf("1");

    return 0;
}