/* Questão:
Intercalação de vetores ordenados - Faça um programa em C que leia dois vetores de inteiros, A e B,
cada um com 5 elementos. Supor que os 2 vetores de entrada já estejam ordenados crescentemente
(não é preciso fazer essa verificação e/ou ordenação). A partir destes dois vetores obtenha um novo
vetor C (de 10 elementos) ordenado crescentemente.
OBS.: O raciocínio adotado para criar o vetor C deve respeitar o fato de que os vetores A e B já estão
ordenados, ou seja, não é permitido copiar todos os dados para o vetor C e simplesmente ordená-lo
posteriormente.
*/

/* Importação de Bibliotecas */
#include <stdio.h> /* função printf()*/
#include <conio.h> /* função getch()*/

/* Função Principal */
int main() {
    /* Declaração de váriaveis */
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
            /* Mesma coisa do primeiro If, porém para o Vetor B e seu indice K */
            if (k >= 5){
                    C[i] = A[j];
                    j++;
                }
            else{
                /* Faz a comparação dos valores entre os dois vetores A e B, e atribui o menor no vetor C */
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
