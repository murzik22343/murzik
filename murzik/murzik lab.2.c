#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int test;

    printf("\nÌåíþ:\n");
    printf("[0] Âûõîä\n");
    printf("[1] 0. Ïðèâåò Ìèð!\n");
    printf("[2] 1.1 Òèïû äàííûõ\n");
    printf("[3] 1.2 Îïåðàòîðû âåòâëåíèÿ\n");
    printf("[4] 1.3 Öèêëû.\n");
    scanf("%d", &test);

    switch (test) {
    case 0:
        return 0;

    case 1:
        printf("%s", "Ïðèâåò, Ìèð!");
        break;

    case 2: {
        char a1 = '1';
        unsigned char a2 = '1';
        short a3 = 1;
        unsigned short a4 = 1;
        int a5 = 1;
        unsigned int a6 = 1;
        long a7 = 1;
        long long a8 = 1;
        float a9 = 1.0;
        double a10 = 1.0;

        printf("char %c ðàâåí %zu áàéò\n", a1, sizeof(a1));
        printf("unsigned char %c ðàâåí %zu áàéò\n", a2, sizeof(a2));
        printf("short %hd ðàâåí  %zu\n", a3, sizeof(a3));
        printf("unsighed short %hu ðàâåí %zu áàéò\n", a4, sizeof(a4));
        printf("int %d %zu\n", a5, sizeof(a5));
        printf("unsigned int %u ðàâåí %zu áàéò\n", a6, sizeof(a6));
        printf("long %ld ðàâåí %zu áàéò\n", a7, sizeof(a7));
        printf("long long %lld ðàâåí %zu áàéò\n", a8, sizeof(a8));
        printf("float %f ðàâåí %zu áàéò\n", a9, sizeof(a9));
        printf("double %lf ðàâåí %zu áàéò\n", a10, sizeof(a10));
        break;
    }
    case 3: {
        int c2;
        printf("Ââåäèòå ãîä: ");
        scanf("%d", &c2);

        if ((c2 % 400 == 0) || (c2 % 100 != 0 && c2 % 4 == 0)) {
            printf("Âèñîêîñíûé");
            break;
        }
        else {
            printf("Íå âèñîêîñíûé");
            break;
        }
        return 0;
    }
    case 4: {
        int v33a, v33b;

        printf("Ââåäèòå äâà íåîòðèöàòåëüíûõ öåëûõ ÷èñëà (a è b, ãäå a <= b): ");
        scanf("%d %d", &v33a, &v33b);

        if (v33a > v33b) {
            printf("Îøèáêà: a äîëæíî áûòü ìåíüøå èëè ðàâíî b!\n");
            return 1;
        }

        printf("Êâàäðàòû ÷èñåë îò %d äî %d:\n", v33a, v33b);

        for (int n = v33a; n <= v33b; n++) {
            int square = 0;
            int odd_number = 1;

            for (int i = 0; i < n; i++) {
                square = square + odd_number;
                odd_number = odd_number + 2;
            }

            printf("%d = %d\n", n, square);
        }
        return 0;
    }
    }
    return 0;
}
