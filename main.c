#include <stdio.h>
#include <stdlib.h>

int main(void)
{


    float notasAlunos[3][3]; //declarar uma matriz com as notas de 3 alunos.
    int notas; // vari�vel que ir� armazenar as notas dos alunos.
    int alunos; // vari�vel que ir� armazenar os nomes dos alunos.
    float mediavetor[3]; // vetor que ir� armazenar as 3 notas de um aluno.
    float media = 0; // vari�vel que ir� armazenar a m�dia de um determinado aluno.


    for (alunos = 0; alunos < 3; alunos++){ // loop para preencher as linhas da matriz
        for (notas = 0; notas < 3; notas++){ //loop para preencher as linhas da matriz
            printf ("Digite a %d nota do %d aluno: ", notas, alunos); // Recebe as notas fornecidas pelo usu�rio.
            scanf ("%f", &notasAlunos[notas][alunos]); // Armazena as notas fornecidas pelo usu�rio na matriz.
            media = media + notasAlunos[notas][alunos]; // Realiza o c�lculo da m�dia
        }

        mediavetor[alunos] = media / 3; // Armazena a m�dia de um aluno em um vetor.
        media = 0; // Reinicia a vari�vel m�dia para calcul�-la para o pr�ximo aluno.

    }

    for (alunos=0; alunos<3; alunos++){
    printf("\n\n\tA media do aluno %i eh %f\n", alunos, mediavetor[alunos]); // Imprime todos as notas que est�o no vetor.
}

return 0;
}

