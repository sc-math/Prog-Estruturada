/* Questão:

*/

/* Importação de Bibliotecas */
#include <stdio.h> /* função printf()*/
#include <conio.h> /* função getch()*/

/* Funções */
/* Função para achar o fatorial do numero no argumento */
double Fatorial(double Num1){
    if (Num1 == 0){
        return 1;
    }
    return Num1 * Fatorial(Num1-1);
}

/* Função para achar o resultado da operação que está no numerador da Função F(x,y) */
double NumeradorDaFuncao(double Num1, double Num2){
    double QuadradoX, QuadradoY,Soma;

    QuadradoX = Num1 * Num1;
    QuadradoY = Num2 * Num2;
    Soma = QuadradoX + QuadradoY;
    return Soma;
}

/* Função F(x,y), chama a função fatorial e a função NumeradorDaFunção e imprime os resultados */
void Funcao(double Num1, double Num2){
    double Numerador, Denominador, Soma;

    Numerador = NumeradorDaFuncao(Num1,Num2);
    Soma = Num1 + Num2;

    Denominador = Fatorial(Num1 + Num2);
    printf("%.0lf / %.0lf  | %.0lf %.0lf\n", Numerador, Denominador, Num1, Num2);
}
/* Função Principal */
int main() {

    /* Declaração de váriaveis */
    double X[10] = {1,4,9,16,25,36,49,64,81,100}, Y[6]={0,1,2,3,4,5};
    int i, j;

    /* PROCESSAMENTO E SAIDA */
    /* Loop para calcular todas as possibilidades de respostas de x e y */
    printf("F(x,y) | x y\n");
    printf("-------------------\n");
    for (i = 0; i < 10; i++){
        for (j = 0; j < 6; j++){
            Funcao(X[i],Y[j]);
        }
    }
    getch(); /* Comando de pausa na tela */

    return 0;
    }
