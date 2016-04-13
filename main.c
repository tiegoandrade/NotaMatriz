#include <stdio.h>
#include <stdlib.h>

int main(void)
{


    float notasAlunos[3][3]; //declarar uma matriz com as notas de 3 alunos.
    int notas; // variável que irá armazenar as notas dos alunos.
    int alunos; // variável que irá armazenar os nomes dos alunos.
    float mediavetor[3]; // vetor que irá armazenar as 3 notas de um aluno.
    float media = 0; // variável que irá armazenar a média de um determinado aluno.


    for (alunos = 0; alunos < 3; alunos++){ // loop para preencher as linhas da matriz
        for (notas = 0; notas < 3; notas++){ //loop para preencher as linhas da matriz
            printf ("Digite a %d nota do %d aluno: ", notas, alunos); // Recebe as notas fornecidas pelo usuário.
            scanf ("%f", &notasAlunos[notas][alunos]); // Armazena as notas fornecidas pelo usuário na matriz.
            media = media + notasAlunos[notas][alunos]; // Realiza o cálculo da média
        }

        mediavetor[alunos] = media / 3; // Armazena a média de um aluno em um vetor.
        media = 0; // Reinicia a variável média para calculá-la para o próximo aluno.

    }

    for (alunos=0; alunos<3; alunos++){
    printf("\n\n\tA media do aluno %i eh %f\n", alunos, mediavetor[alunos]); // Imprime todos as notas que estão no vetor.
}

return 0;
}

