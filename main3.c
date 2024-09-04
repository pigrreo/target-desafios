#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIAS 30

// Função para carregar os dados do XML
void carregar_dados(float faturamentos[], int *num_dias) {
    FILE *file = fopen("c:\usuario\arthur\downloads\dados[2].xml", "r");
    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    char linha[256];
    int dia_atual = 0;

    // Percorre o arquivo linha por linha
    while (fgets(linha, sizeof(linha), file)) {
        if (strstr(linha, "<valor>")) {
            // Extrai o valor entre as tags <valor>
            float valor = atof(strchr(linha, '>') + 1);
            if (valor > 0) {  // Ignora dias com faturamento zero
                faturamentos[dia_atual++] = valor;
            }
        }
    }

    *num_dias = dia_atual;
    fclose(file);
}

int main() {
    float faturamentos[MAX_DIAS];
    int num_dias;

    carregar_dados(faturamentos, &num_dias);

    // Calcula o menor e maior valor de faturamento
    float menor_faturamento = faturamentos[0];
    float maior_faturamento = faturamentos[0];
    float soma = 0;

    for (int i = 0; i < num_dias; i++) {
        if (faturamentos[i] < menor_faturamento) {
            menor_faturamento = faturamentos[i];
        }
        if (faturamentos[i] > maior_faturamento) {
            maior_faturamento = faturamentos[i];
        }
        soma += faturamentos[i];
    }

    // Calcula a média mensal
    float media_mensal = soma / num_dias;

    // Conta o número de dias com faturamento acima da média
    int dias_acima_da_media = 0;
    for (int i = 0; i < num_dias; i++) {
        if (faturamentos[i] > media_mensal) {
            dias_acima_da_media++;
        }
    }

    // Exibe os resultados
    printf("Menor valor de faturamento: R$ %.2f\n", menor_faturamento);
    printf("Maior valor de faturamento: R$ %.2f\n", maior_faturamento);
    printf("Número de dias com faturamento superior à média mensal: %d\n", dias_acima_da_media);

    return 0;
}
