/* Quest�o:
Intercala��o de vetores ordenados - Fa�a um programa em C que leia dois vetores de inteiros, A e B,
cada um com 5 elementos. Supor que os 2 vetores de entrada j� estejam ordenados crescentemente
(n�o � preciso fazer essa verifica��o e/ou ordena��o). A partir destes dois vetores obtenha um novo
vetor C (de 10 elementos) ordenado crescentemente.
OBS.: O racioc�nio adotado para criar o vetor C deve respeitar o fato de que os vetores A e B j� est�o
ordenados, ou seja, n�o � permitido copiar todos os dados para o vetor C e simplesmente orden�-lo
posteriormente.
*/

/* Importa��o de Bibliotecas */
#include <stdio.h> /* fun��o printf()*/
#include <conio.h> /* fun��o getch()*/

/* Fun��o Principal */
int main() {
    /* Declara��o de v�riaveis */
    /* Dois vetores A e B com tamanho 5, um Vetor C com tamanho 10 e 3 variaveis para indices, i, j e k */
    int A[5], B[5], C[10],i=0,j=0,k=0;

    /* ENTRADA */
    /* preenchimento dos Vetores A e B*/
    printf("Informe cinco numeros:\n");
    for (i=0; i<5; i++){
        scanf("%d", &A[i]);
    }
    printf("Informe cinco numeros:\n");
    for (i=0; i<5; i++){
        scanf("%d", &B[i]);
    }
    /* PROCESSAMENTO */
    /* i = indice do vetor C
       j = indice do vetor A
       k = indice do vetor B
       loop para colocar os valores dos vetores A e B no vetor C ordenados */
    i = 0;
    do{
        /* se J for igual ou maior que o tamanho do seu Vetor A, C[i] vai receber os valores do Vetor B */
        if (j >= 5){
            C[i] = B[k];
            k++;
        }
        else{
            /* Mesma coisa do primeiro If, por�m para o Vetor B e seu indice K */
            if (k >= 5){
                    C[i] = A[j];
                    j++;
                }
            else{
                /* Faz a compara��o dos valores entre os dois vetores A e B, e atribui o menor no vetor C */
                if (A[j] <= B[k]){
                    C[i] = A[j];
                    j++;
                }
                else{
                    C[i] = B[k];
                    k++;
                }
            }
        }
        i++;
    }while(i<10);

    /* SAIDA */
    /* Imprimir o Vetor C */
    for(i=0; i<10; i++){
        printf("%d ", C[i]);
    }

    getch(); /* Comando de pausa na tela */
    return 0;
    }
