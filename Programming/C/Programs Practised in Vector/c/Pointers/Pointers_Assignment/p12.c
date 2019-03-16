#include <stdio.h>
        void main()
        {
            char *s= "hello";
            char *p = s + 2;
            printf("%c %c\n", *p, s[1]);
        }
