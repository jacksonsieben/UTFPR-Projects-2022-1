#include <stdio.h>

int proxPrimo(int p)
{
    int j, flag;
    for (int i = p + 1;; i++)
    {
        flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            return i;
        }
    }
}

int MMC(int a, int b, int p){
    if (a == 1 && b == 1){return 1;}
    else if (a % p == 0 && b % p == 0){return p * MMC(a/p, b/p, p);}
    else if (a % p != 0 && b % p != 0){return p * MMC(a, b, proxPrimo(p));}
    else if (a % p == 0 && b % p != 0){return p * MMC(a/p, b, p);}
    else if (a % p != 0 && b % p == 0){return p * MMC(a, b/p, p);}
    //else if (a % p == 0 && b % p == 0){return p * MMC(a / p, b / p, p);}
}

void main(){
    int a, b, p = 2;

    printf("Informe o a: ");
    scanf("%d", &a);

    printf("Informe o b: ");
    scanf("%d", &b);

    printf("Resultado: %d\n", MMC(a, b, p));
}