/* Quest�o:
O n�mero 3025 possui a seguinte caracter�stica:

30 + 25 = 55
55�= 3025

Fa�a uma fun��o que pesquise e imprima todos os n�meros de quatro algarismos que
apresentarem tal caracter�stica.
*/

/* Importa��o de Bibliotecas */
#include <stdio.h> /* fun��o printf()*/
#include <conio.h> /* fun��o getch()*/

/* Fun��es */
/* Fun��o: caracteristica
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

/* Fun��o Principal */
int main() {

    /* Declara��o de v�riaveis */
    int i;

    /* PROCESSAMENTO */
    /* Loop para navegar do numero 1000 at� o numero 9999 e verificar se ele possuia a caracterisca*/
    for (i=1000; i<10000; i++){
        caracteristica(i);
    }
    getch(); /* Comando de pausa na tela */

    return 0;
    }

