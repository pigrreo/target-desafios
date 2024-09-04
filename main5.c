#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[50];

    printf("Digite uma palavra para ser lida ao contrário: ");
    scanf("%s", str);

    printf("String original: %s\n", str);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}
