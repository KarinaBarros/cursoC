#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10; //variável de número inteiro
    float n2 = 6.79; //variável com casas decimais
    char letra = 'a';//variável do tipo letra
    char frase[10] = "Bom dia!";//para frase atribuir número de letras
    double n3 = 1.23456;//variável real com precisão dupla, aceita mais números após a vírgula
    int valor1, valor2, soma, sub, multi, di, numero, resto, dia, cont, resp;// várias variáveis podem ser declaradas juntas desde que sejam do mesmo tipo
    float nota1, nota2, media, freq;

    /*
    printf("Heloo World!\n");

    printf("Exibindo o numero inteiro %d\n" ,n);
    printf("Exibindo o numero real %f\n" ,n2);
    printf("Exibindo o caracter %c\n" ,letra);
    printf("Exibindo a frase %s\n" ,frase);
    printf("Exibindo double %f\n" ,n3);
    printf("Valores: %d %f %c %s %f \n" ,n,n2,letra,frase,n3);

    printf("Digite um numero inteiro:");
    scanf("%d",&valor1);//receber um número do usuário e atribuir esse valor a variável valor1, & significa endereço

      printf("Digite outro numero inteiro:");
    scanf("%d",&valor2);//receber um número do usuário e atribuir esse valor a variável valor2
    
    //operadores aritméticos
    soma = valor1 + valor2; 
    sub = valor1 - valor2;
    multi = valor1 * valor2;
    di = valor1 / valor2;
    
    //imprimindo operações
    printf("Valor da soma de %d + %d = %d\n",valor1,valor2,soma);
    printf("Valor da subtracao de %d - %d = %d\n",valor1,valor2,sub);
    printf("Valor da multiplicacao de %d x %d = %d\n",valor1,valor2,multi);
    printf("Valor da divisao de %d : %d = %d\n",valor1,valor2,di);
    
    printf("Digite um numero inteiro:");
    scanf("%d",&numero);

    resto = numero % 2; // recbendo o resto da divisão

    printf("Resto da divisao: %d\n",resto);

    //usando if e else

    if (resto == 0) //== comparando
    {
        printf("O numero %d e par!\n",numero);
    }
    else
        {
            printf("O numero %d e impar!\n",numero);
        }
    

    printf("Digite a primeira nota:");
    scanf("%f",&nota1);

    printf("Digite a segunda nota:");
    scanf("%f",&nota2);

    media = ( nota1 + nota2 ) / 2;

    printf("A media das notas %.2f e %.2f e: %.2f\n",nota1,nota2,media);
    //%.2f indica que o float vai exibir apenas duas casas decimais

    //if aninhado (if dentro de if)
    if (media >= 6)
    {
        printf("Aluno aprovado!\n");
    }
        else
        {
            if (media < 3)
            {
                printf("Aluno reprovado!\n");
            }
            else
            {
                printf("Aluno esta de recuperacao!\n");
            }
            
        }

    //switch ... case (avalia casos)
    //nesse caso o código fica mais limpo que em if
    //porém não podem ser usadas condicionais

    printf("Digite um valor de 1 a 7: ");
    scanf( "%d", & dia);

    switch (dia)
    {
    case 1 :
        printf("Domingo\n");
        break;

    case 2 :
        printf("Segunda-feira\n");
        break;

    case 3 :
        printf("Terça-feira\n");
        break;

    case 4 :
        printf("Quarta-feira\n");
        break;

    case 5 :
        printf("Quinta-feira\n");
        break;

    case 6 :
        printf("Sexta-feira\n");
        break;

    case 7 :
        printf("Sábado\n");
        break;
    
    default:
        printf("Valor invalido\n");
        break;
    }

   //Operador Ternário (pode ser mais curto q usar if em algumas ocasiões)
   printf("Digite um numero inteiro: ");
   scanf("%d", & numero);

   //Condição testar verdadeiro ou falso '?'
   numero > 0 ? printf("Positivo\n") : printf("Negativo\n");

   //Operadores lógicos && , ||

    printf("Digite a primeira nota:");
    scanf("%f",&nota1);

    printf("Digite a segunda nota:");
    scanf("%f",&nota2);

    printf("Digite a frequencia do aluno: ");
    scanf("%f" , & freq);

    media = ( nota1 + nota2 ) / 2;

    printf("A media das notas %.2f e %.2f e: %.2f\n",nota1,nota2,media);
  
    if (media >= 6 && freq >= 75)//&& adiciona uma condição a mais a ser testada
    {
        printf("Aluno aprovado!\n");
    }
        else
        {
            if (media < 3  || freq < 75) // || ou, (em qualquer das alternativas verdadeiro)
            {
                printf("Aluno reprovado!\n");
            }
            else
            {
                printf("Aluno esta de recuperacao!\n");
            }
            
        }

    //Estrutura de repetição for (repete até que um valor seja atingido)
    for(cont = 1; cont <= 10; cont ++)
    //valor inicial do contador, limite, incremento (cont++ é o mesmo q cont=cont+1)
    {
        printf("%d Boa tarde!\n",cont);
    }

    //Estrutura de repetição while
    cont = 1; //iniciando a variável de controle
    while (cont <= 5)//condição
    {
        printf("%d Linguagem C!\n", cont);
        cont ++; //incremento da variável de controle
    }
    
    //Estrutura de repetição do ... while
    //Executa um comando primeiro e somente testa se a condiçao é verdadeira no final
    //Isto garante que o comando será executado pelo menos uma vez
    cont = 1;
    do
    {
        printf("Digite um valor positivo para repetir: ");
        scanf("%d", & resp);
    } while (resp > 0);
    //em while o teste é feito no inicio e em do... while no fim
    
    //Vetor (Array)
    //Declarando e inicializando o vetor v1 e indicando q terá 4 posições de armazenamento
    float v1[4] = {7.1, 8.4 , 9.5, 5.2};

    printf("v1[0] = %.1f\n", v1[0]);
    printf("v1[1] = %.1f\n", v1[1]);
    printf("v1[2] = %.1f\n", v1[2]);
    printf("v1[3] = %.1f\n", v1[3]);

    printf("Exibindo posicoes atraves do looping for!\n");
    int i = 0; //contado para os índices do vetor
    for ( i = 0; i <= 3; i++)
    {
        printf("v1[%d] = %.1f\n", i, v1[i]);
    }

   //Matriz (array bidimensional)
   //Definindo constantes
   #define LINHAS 2
   #define COLUNAS 2

   //Declarando uma matriz com posição linha e coluna e um contador para cada
    int matriz[LINHAS][COLUNAS], i, j;
    printf("Digite um valor para matriz\n\n");
    //recebendo os valores da matriz
    for ( i = 0; i < LINHAS; i++)//índice i controla a linha
    {
        for (j = 0; j < COLUNAS; j++)//índice j controla a coluna
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", & matriz[i][j]);
        }
        
    }
    printf("\n\n----------Saida de dados----------\n\n");

     for ( i = 0; i < LINHAS; i++)//índice i controla a linha
    {
        for (j = 0; j < COLUNAS; j++)//índice j controla a coluna
        {
            printf("\nElemento[%d][%d] = %d\n ", i, j, matriz[i][j]);
        }
        
    }
    
   //Struct
   //Definindo o valor da struct
   struct fichaAluno
   {
    int matricula;
    float nota1;
    float nota2;
   };
   //criando a variavel aluno que será do tipo struct fichaAluno
   struct fichaAluno aluno;

   printf("Matricula...:");
   scanf("%d", & aluno.matricula);

   printf("Nota 1......:");
   scanf("%f", & aluno.nota1);

   printf("Nota 2......:");
   scanf("%f", & aluno.nota2);

   printf("\n\n----------Lendo dados da struct!----------\n\n");

   printf("Matricula...:%d\n", aluno.matricula);
   printf("Nota 1......:%.2f\n", aluno.nota1);
   printf("Nota 2......:%.2f\n\n", aluno.nota2);
   */

    system("pause");//somente para windows
    return 0;
}