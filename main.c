#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Lucas Franco
int main()
{
    float var1,var2;
    float var3;
    int escolha;
    printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nOperacao: ");
    scanf("%d",&escolha);
    printf("Insira o primeiro numero: ");
    scanf("%f",&var1);
    printf("Insira o segundo numero: ");
    scanf("%f",&var2);
    if(escolha == 1){
        printf("O resultado e: %.2f",var1+var2);
    }
    else if(escolha == 2){
        printf("O resultado e: %.2f",var1-var2);
    }
    else if(escolha == 3){
        printf("O resultado e: %.2f",var1*var2);
    }
    else if(escolha == 4){
        var3 = var1/var2;
        printf("O resultado e: %.2f",var3);
    }
    else{
        printf("Vai cagar");
    }
    return 0;
}
