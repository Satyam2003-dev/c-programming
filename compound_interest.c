#include <math.h>
#include <stdio.h>
int main()
{
    float p, t, r, q,amount;
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i); //accept value
        printf("Enter principal\t");
        scanf("%f", &p);
        printf("Enter rate\t");
        scanf("%f", &r);
        printf("Enter time(in years)");
        scanf("%f", &t);
        printf("Enter compound interest\t");
        scanf("%f", &q);
        amount = p * (pow((1 + r / q), t * q));
        printf("Amount = .2%f\n", amount);
    }
    return 0;
}