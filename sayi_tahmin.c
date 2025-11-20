#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int rastgele, tahmin, deneme = 0;

    // Rastgele sayı üretimi için başlangıç
    srand(time(NULL));
    rastgele = rand() % 100 + 1;  // 1-100 arası sayı

    printf("=== Sayi Tahmin Oyunu ===\n");
    printf("1 ile 100 arasinda bir sayi tuttum. Tahmin et!\n");

    while (1) {
        printf("Tahmininiz: ");
        if (scanf("%d", &tahmin) != 1) {
            printf("Gecersiz giris! Program kapatiliyor.\n");
            return 0;
        }

        deneme++;

        if (tahmin < rastgele) {
            printf("Daha buyuk bir sayi gir.\n");
        } else if (tahmin > rastgele) {
            printf("Daha kucuk bir sayi gir.\n");
        } else {
            printf("Tebrikler Sultan! %d denemede bildin!\n", deneme);
            break;
        }
    }

    return 0;
}
