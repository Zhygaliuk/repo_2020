#include "stdio.h"
#include"ctype.h"
 
/*int main()
{
    int ix = 0;
    char ch, str[100];
    printf("enter=");
    fgets(str, 100, stdin);


    while (str[ix])
    {
        char x;
        ch = str[ix];
        x = toupper(ch);
        ix++;
        if (x != ch) {
            printf("%c false\n");

        }
        else if (x == ch) {
            printf("%c true\n" );
        }
        else {
            printf("%c false" );
        }

    }
    return 0;
}*/

int main(void)
{
    char str[100];


    printf(" enter=");

    fgets(str, 100, stdin);
    funct(str);


    if (funct(str) == 1) { printf("true"); }
     else { printf("false"); }

        
        return 0;
}

    int funct(char* str) {

        int i;


        for (int i = 0; str[i]!=0; i++) {

            
            if (isblank(str[i]))continue;

            if (islower(str[i])) {
              
                return 0;
                
            }

        }

        return 1;
    }

