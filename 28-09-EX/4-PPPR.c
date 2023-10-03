#include <stdio.h>
void soma(int a, int b)
{
int s; // variável local da sub-rotina soma
s = a + b;
printf("\nSoma = %d",s);
}
int main()
{
int a, b; // variáveis locais da sub-rotina main
printf("\nDigite o primeiro numero: ");
scanf("%d%*c",&a);
printf("\nDigite o segundo numero: ");
scanf("%d%*c",&b);
soma(a,b);
return 0;
}   