#include <stdio.h>

char calc(float media) {
    if (media >= 0.0 && media <= 4.9) {
        return 'D';
    } else if (media >= 5.0 && media <= 6.9) {
        return 'C';
    } else if (media >= 7.0 && media <= 8.9) {
        return 'B';
    } else if (media >= 9.0 && media <= 10.0) {
        return 'A';
    }
}

int main() {
    float nota0, nota1, media;
    
    printf("\nDigite a 1º nota do aluno: ");
    scanf("%f", &nota0);
    
    printf("\nDigite a 2º nota do aluno: ");
    scanf("%f", &nota1);
    
    media = (nota0 * 4 + nota1 * 6) / 10;
    
    printf("\nSua média é: %.1f\n", media);
    
    char conceito = calc(media);
    
    printf("\nConceito: %c\n", conceito);
    
    return 0;
//Guilherme Germano Ferreira      Mátricula: 202202147796
}

