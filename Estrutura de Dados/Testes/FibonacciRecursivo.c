#include <stdio.h>

int FibonacciRecursivo(int termo)
{
    if (termo == 1)
    {
        return 0;
    }
    else if (termo == 2)
    {
        return 1;
    }
    else if (termo > 2)
    {
        return FibonacciRecursivo(termo - 1) + FibonacciRecursivo(termo - 2);
    }
}

void main()
{
    int termo;
    printf("Informe o termo: ");
    scanf("%d", &termo);

    printf("Resultado: %d", FibonacciRecursivo(termo));
}