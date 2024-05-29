// 2. Faça um programa que leia um vetor de 10 posições. Conte e mostre quantos valores pares ele possui.
#include <stdio.h>

int main()
{
    int numbers[10];
    int pair = 0;

    numbers[0] = 34;
    numbers[1] = 78;
    numbers[2] = 23;
    numbers[3] = 56;
    numbers[4] = 12;
    numbers[5] = 89;
    numbers[6] = 45;
    numbers[7] = 67;
    numbers[8] = 91;
    numbers[9] = 10;

    for (int ii = 0; ii < 10; ii++)
    {
        if(numbers[ii] % 2 == 0){
            pair++;
        }
    }
    
    printf("Há %d valores pares no vetor.", pair);

    return 0;
}