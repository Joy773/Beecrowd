#include<stdio.h>
int main(){
    double s;
    scanf("%lf", &s);

    if(s <= 2000.00)
    {
        printf("Isento\n");
    }
    else if(s >= 2000.01 && s <= 3000.00)
    {
        printf("R$ %.2lf\n", (s - 2000) * 0.08);
    }
    else if(s >= 3000.01 && s <= 4500.00)
    {
        printf("R$ %.2lf\n", (s - 3000.00) * 0.18 + (1000.00 * 0.08));
    }
    else if(s > 4500.01)
    {
        printf("R$ %.2lf\n",(s - 4500.00) * 0.28 +  (1500.00 * 0.18) + (1000.00 * 0.08));
    }
return 0;
}
