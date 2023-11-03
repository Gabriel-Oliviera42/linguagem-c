#include <stdio.h>
int main()
{ 
    FILE *p;
    char cadeia[5];
    p = fopen("c:\\exemplo\\teste\\cadeias.txt", "r");
    if (p == NULL)
        printf("\nErro na abertura");
    else
    { 
        while (!feof(p))
        { 
            fgets(cadeia, 5, p);
            if (ferror(p))
                printf("\nErro na leitura da cadeia");
            else
            { 
                printf("\nLeitura realizada com sucesso");
                printf("Cadeia lida: %s", cadeia);
            }
        }
    }
    getchar();
    fclose(p);
    return 0;
}
