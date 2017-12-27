#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    char s[30];
    printf("Enter a mathematics expression, please: ");
    gets(s);
    //puts(s);
    int symbols = strlen(s);
    int Count = 0;

    if (symbols > 30){
        printf("Size text > 30 symbols, it's not good.");
        exit(0);
    }
    else {
        for (int i=0; s[i]; i++){
            if (s[i] == '(') Count++;
            if (s[i] == ')') Count--;
            }
        if (Count > 0){
            printf("There are ')' %d missing brackets.\n", Count);
            }
        else
            if (Count < 0){
            printf("There are '(' %d missing brackets.\n", Count*(-1));
            }
            else
                if (Count == 0)
                    printf("All is well.\n");
        }
    system("PAUSE");
    return 0;
}
