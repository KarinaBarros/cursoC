#include <stdio.h>
#include <stdlib.h>

/*Esqueleto de uma função
 tipo_de_retorno nome_funcao(parametros)
 {
    comandos...
 }
 */

//Função multiplicar
int multiplicar(int pn1, int pn2)
    {
        int res;
        res = pn1 * pn2;
        return(res);//retornando o valor para main
    }

int main()
{
    int v1, v2, resultado;

    printf("Digite o primeiro Valor: ");
    scanf("%d", & v1);

    printf("Digite o segundo Valor: ");
    scanf("%d", & v2);

    //chama a função e recebe o retorno
    resultado = multiplicar(v1, v2);
    printf("%d x %d = %d\n\n",v1, v2, resultado);

    system("pause");
    return 0;

}



    