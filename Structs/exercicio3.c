// 3. Considerando a estrutura que representa um vetor R3:
// struct Vetor{
// float x;
// float y;
// float z;
// };
// Implemente um programa que receba, calcule e apresente a soma de dois vetores.

#include <stdio.h>

struct Vetor
{
    float x;
    float y;
    float z;
};

int main()
{
    struct Vetor v[3];

    for (int ii = 0; ii < 2; ii++)
    {
        printf("---------------| V%d |---------------\n", ii + 1);

        printf("Valor de 'x': ");
        scanf("%f", &v[ii].x);

        printf("Valor de 'y': ");
        scanf("%f", &v[ii].y);

        printf("Valor de 'z': ");
        scanf("%f", &v[ii].z);
    }

    printf("------------------------------\n");

    v[2].x = v[0].x + v[1].x;
    v[2].y = v[0].y + v[1].y;
    v[2].z = v[0].z + v[1].z;

    printf("V1 + V2 = V3.x[%.2f] - V3.y[%.2f] - V3.z[%.2f].", v[2].x, v[2].y, v[2].z);

    return 0;
}