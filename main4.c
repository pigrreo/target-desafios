#include <stdio.h>

float percent(float contribuicao, float total) {
    return (contribuicao / total) * 100;
}

int main() {
    float SP = 67836.43;
    float RJ = 36678.66;
    float MG = 29229.88;
    float ES = 27165.58;
    float outros = 19849.53;

    float total = SP + RJ + MG + ES + outros;

    printf("Bem-vindo! Vamos ver a porcentagem de cada estado no faturamento mensal:\n");
    printf("SP faturou: R$%.2f\n", SP);
    printf("RJ faturou: R$%.2f\n", RJ);
    printf("MG faturou: R$%.2f\n", MG);
    printf("ES faturou: R$%.2f\n", ES);
    printf("Outros estados faturaram: R$%.2f\n", outros);

    printf("São Paulo contribui com: %.2f%%\n", percent(SP, total));
    printf("Rio de Janeiro contribui com: %.2f%%\n", percent(RJ, total));
    printf("Minas Gerais contribui com: %.2f%%\n", percent(MG, total));
    printf("Espírito Santo contribui com: %.2f%%\n", percent(ES, total));
    printf("Outros contribuem com: %.2f%%\n", percent(outros, total));

    return 0;
}
