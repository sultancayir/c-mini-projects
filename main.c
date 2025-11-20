#include <stdio.h>

int main(void) {
    int secim;
    double sayi1, sayi2, sonuc;

    while (1) {
        printf("\n=== Basit Hesap Makinesi ===\n");
        printf("1) Toplama\n");
        printf("2) Cikarma\n");
        printf("3) Carpma\n");
        printf("4) Bolme\n");
        printf("5) Mod (kalan)\n");
        printf("0) Cikis\n");
        printf("Seciminizi girin: ");
        
        if (scanf("%d", &secim) != 1) {
            printf("Gecersiz giris! Program kapatiliyor.\n");
            return 0;
        }

        if (secim == 0) {
            printf("Programdan cikiliyor...\n");
            break;
        }

        printf("Birinci sayiyi girin: ");
        scanf("%lf", &sayi1);

        printf("Ikinci sayiyi girin: ");
        scanf("%lf", &sayi2);

        switch (secim) {
            case 1:
                sonuc = sayi1 + sayi2;
                printf("Sonuc: %.2f\n", sonuc);
                break;
            case 2:
                sonuc = sayi1 - sayi2;
                printf("Sonuc: %.2f\n", sonuc);
                break;
            case 3:
                sonuc = sayi1 * sayi2;
                printf("Sonuc: %.2f\n", sonuc);
                break;
            case 4:
                if (sayi2 == 0) {
                    printf("Hata: 0'a bolme yapilamaz!\n");
                } else {
                    sonuc = sayi1 / sayi2;
                    printf("Sonuc: %.2f\n", sonuc);
                }
                break;
            case 5:
                if ((int)sayi2 == 0) {
                    printf("Hata: 0'a bolme/mod yapilamaz!\n");
                } else {
                    int modSonuc = (int)sayi1 % (int)sayi2;
                    printf("Sonuc (mod): %d\n", modSonuc);
                }
                break;
            default:
                printf("Gecersiz secim!\n");
        }
    }

    return 0;
}
