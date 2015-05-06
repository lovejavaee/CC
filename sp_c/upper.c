#include <stdio.h>
    char upper(char c)
    {
        /*
        if (c >='a' && c <= 'z') {
        return c - ('a'-'A');
        }else{
        return c;
        }
        */
        if (c>='a' && c<='z') {
            return c - ('a'-'A');
        }
        return c;
    }

   int main()
    {
        char cc = upper('h');
        printf("%c\n",cc);
        return 0;
    }