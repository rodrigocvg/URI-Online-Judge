#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    while(1){
        scanf("%d",&x);
        if(x!=2002){
            printf("Senha Invalida\n");
        }
        if(x==2002){
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}
