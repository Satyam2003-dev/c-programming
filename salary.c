#include <stdio.h>
int main()
{
    float gross_salary,hra,da,basic;
    int T;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%f",&basic);
        if (basic<1500)
        {
            hra = basic*0.10;
            da = basic*0.90;
            gross_salary=basic+hra+da;
            printf("%0.2f\n",gross_salary); 
        }
        else
        {
            hra = 500;
            da = basic*0.98;
            gross_salary = basic+hra+da;
            printf("%0.2f\n",gross_salary);
        } 
    }
    return 0;
}


