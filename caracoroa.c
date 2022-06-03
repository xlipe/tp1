#include <stdio.h>

int main()
{
    int n, resultado, i, jogadas;
//receber numero de jogadas

    printf("Digite o numero de jogadas:");
    scanf("%d", &n);

//validar numero de jogadas

    if (jogadas < 1 || jogadas > 10000) {
    printf("Insira um numero valido de jogadas, entre 1 e 10.000");
    scanf("%d", &n);
    }

//receber resultado de cada jogada na mesma linha

    else printf("Agora, sequencie o resultado das rodadas, separdos por um espaço");
    printf("Os resultados digitados foram: %d");
    




//contar quantas vezes joao ganhou
//contar quantas vezes maria ganhou
//informar vitorias de cada um
return 0;
}
