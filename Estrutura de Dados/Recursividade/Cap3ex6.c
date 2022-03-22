#include <stdio.h>

float percurso(float h, float r)
{
    if (h < 0.0000001)
    {
        return 0;
    }
    else
    {
        return h + (h * r) + percurso(h * r, r);
    }
}

void main()
{
    float h, r;

    printf("Informe o h: ");
    scanf("%f", &h);

    printf("Informe o r: ");
    scanf("%f", &r);

    printf("Resultado: %f", percurso(h, r));
}