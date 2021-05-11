/* Questão:
O número 3025 possui a seguinte característica:

30 + 25 = 55
55²= 3025

Faça uma função que pesquise e imprima todos os números de quatro algarismos que
apresentarem tal característica.
*/

/* Importação de Bibliotecas */
#include <stdio.h> /* função printf()*/
#include <conio.h> /* função getch()*/

/* Funções */
/* Função: caracteristica
objetivo: separar o numero ao meio, formando dois numero de 2 algorismos, soma-los e fazer o quadrado.
Caso o quadrado seja igual ao numero, imprima o numero */
void caracteristica(int i){
    int Num1, Num2, Soma;

    Num1 = i / 100;
    Num2 = i % 100;
    Soma = Num1 + Num2;
    if (Soma * Soma == i){
        printf("%d\n", i);
    }
}

/* Função Principal */
int main() {

    /* Declaração de váriaveis */
    int i;

    /* PROCESSAMENTO */
    /* Loop para navegar do numero 1000 até o numero 9999 e verificar se ele possuia a caracterisca*/
    for (i=1000; i<10000; i++){
        caracteristica(i);
    }
    getch(); /* Comando de pausa na tela */

    return 0;
    }

