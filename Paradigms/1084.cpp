// https://www.urionlinejudge.com.br/judge/en/problems/view/1084
#include <stdio.h>
#include <stdlib.h>

int busca (char x, char *v, int inicio, int fim) {
    int meio;

    while (inicio <= fim) {
        meio = (inicio+fim)/2;
        if (v[meio] < x) fim = meio-1;
        else inicio = meio+1;
    }
    return inicio;
}

int main (int argc, char **argv) {
    int n, d, nfinal;
    int i, j, k, p;
    char *numero, *numero2;

    scanf ("%d%d", &n, &d);
    while (n > 0 || d > 0) {
        numero = (char *)malloc ((n+1)*sizeof (char));

        scanf ("%s", numero);

        nfinal = n-d;
        numero2 = (char *)calloc (nfinal+1,sizeof (char));
        numero2[0] = numero[0];
        j = 0;

        for (i = 1; i < n; i++) {
            if (i <= d) p = busca (numero[i], numero2, 0, j);
            else p = busca (numero[i], numero2, i-d, j);

            if (p < nfinal) {
                numero2[p] = numero[i];
                j = p;
            }
        }
        numero2[nfinal] = '\0';
        printf ("%s\n", numero2);

        free (numero2);
        free (numero);
        scanf ("%d%d", &n, &d);
    }

    return 0;
}