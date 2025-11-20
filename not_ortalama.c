#include <stdio.h>

int main(void) {
    int dersSayisi;
    int i;
    double not, toplam = 0.0, ortalama;

    printf("Kac dersin notunu gireceksiniz? ");
    if (scanf("%d", &dersSayisi) != 1 || dersSayisi <= 0) {
        printf("Gecersiz ders sayisi!\n");
        return 0;
    }

    for (i = 1; i <= dersSayisi; i++) {
        printf("%d. dersin notunu girin: ", i);
        if (scanf("%lf", &not) != 1 || not < 0 || not > 100) {
            printf("Gecersiz not girdiniz!\n");
            return 0;
        }
        toplam += not;
    }

    ortalama = toplam / dersSayisi;

    printf("\nToplam not: %.2f\n", toplam);
    printf("Ortalama: %.2f\n", ortalama);

    if (ortalama >= 90) {
        printf("Durum: Harika! (AA seviyesinde)\n");
    } else if (ortalama >= 80) {
        printf("Durum: Cok iyi (BA-BB civari)\n");
    } else if (ortalama >= 70) {
        printf("Durum: Iyi (CB-CC civari)\n");
    } else if (ortalama >= 60) {
        printf("Durum: Gecer (DC-DD civari)\n");
    } else {
        printf("Durum: Kalmis gibi gozukuyor :( \n");
    }

    return 0;
}
