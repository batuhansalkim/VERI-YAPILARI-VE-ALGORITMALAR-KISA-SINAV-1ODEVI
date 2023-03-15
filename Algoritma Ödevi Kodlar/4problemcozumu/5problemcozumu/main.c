#include <stdio.h>
struct student {
    char Isim[20],Soyisim[20], bolum[30], il[20],ilce[20],sokak[20],mahalle[20]; //degiskenlerimizi burada tanimliyoruz
    int roll,no,daireNo;
} s[5];

int main() {
    int i;
    printf("-------------------------------\n");
    printf("5 adet Ogrencinin kisisel bilgilerini Alip depolayip tekrar ekranda gosteren program\n");
    printf("-------------------------------\n\n");

    printf("Ilk once Kisisel Bilgiler Alinacak\n\n");
    printf("Ogrenci Bigilerini Giriniz :\n");

    // storing information
    for (i = 0; i < 5; ++i) { //5 kisiyi sordurmasi icin for dögüsü olusturduk
        s[i].roll = i + 1;//her defasýnda inci ögrenciyi arttiriyor
//ogrenci bilgilerini aliyoruz
        printf("\nOgrenci Icin Bilgiler %d,\n", s[i].roll);//s[i] diyerek aslinda 1.ögrenci bilgilerini aliyoruz
        printf("Isim Giriniz : ");
        scanf("%s", s[i].Isim);
        printf("Soyisim Giriniz: ");
        scanf("%s", s[i].Soyisim);
        printf("Bolum Giriniz: ");
        scanf("%s", s[i].bolum);
        printf("No Giriniz : ");
        scanf("%d", &s[i].no);
        printf("\nSimdi Adres Bilgileri Alinacak\n\n");//adres bilgilerini aliyoruz ayni sekilde
        printf("Il Giriniz: ");
        scanf("%s", s[i].il);
        printf("Ilce Giriniz: ");
        scanf("%s", s[i].ilce);
        printf("Mahalle Giriniz: ");
        scanf("%s", s[i].mahalle);
        printf("Sokak Giriniz: ");
        scanf("%s", s[i].sokak);

    }
    printf("***********************************");
    printf("\n\nBilgiler Ekrana Yazdiriliyor:\n\n");

    for (i = 0; i < 5; ++i) {//burada depoladiklarimizi ekrana yazdiriyoruz
        printf("Ogrenci: %d\n\n", i + 1);//ayni mantikla s[i] icine depoladiklarimizi ekrana yazdiriyoruz
        printf("Isim: ");
        puts(s[i].Isim);
        printf("Soyisim: ");
        puts(s[i].Soyisim);
        printf("Bolum: ");
        puts(s[i].bolum);
        printf("Numara: %.1d", s[i].no);
        printf("\n");

        printf("Il: ");
        puts(s[i].il);
        printf("Ilce: ");
        puts(s[i].ilce);
        printf("Mahalle: ");
        puts(s[i].mahalle);
        printf("Sokak: ");
        puts(s[i].sokak);
        //printf("Daire No: %.1d", s[i].daireNo);
    }
    return 0;
}
