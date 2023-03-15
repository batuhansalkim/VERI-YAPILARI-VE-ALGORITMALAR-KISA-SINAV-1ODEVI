#include <stdio.h>

int main(){
    printf("-------------------------\n");
    printf("En kucuk degeri buldurma \n");
    printf("--------------------------\n");
    int elemanSayisi; //1 saniyede gerceklesir kullanýcýnýn kac eleman girecegini burada alýyoruz
    printf("kac eleman girisi yapilacak ? :"); //1 saniyede gerceklesir
    scanf("%d",&elemanSayisi); //1 saniyede gerceklesir

     int sayilar[elemanSayisi],min; //1 saniyede gerceklesir degiskenleri tanýmladýk

     for(int i=0 ; i<elemanSayisi ; i++){ // n+1 saniyede gerceklesir  her bir elemaný sorup almasý için for döngüsü olusturduk
          printf("%d. sayiyi giriniz : ",i+1); ////1 saniyede gerceklesir  ve inci elemaný bir arttýrýp soruyoruz
          scanf("%d", &sayilar[i]); ////1 saniyede gerceklesir daha sonra elemanlarin degerlerini giriyoruz
     }

     min = sayilar[0]; //1saniyede gerceklesir ilk basta min degerimizi elemanýn ilk delemanýna esitliyoruz

     for(int i=0 ; i<elemanSayisi ; i++){//n+1 saniyede gerceklesir suan min degerimiz ilk eleman eger 2. eleman minden kücükse min degerimiz 2. eleman olacak
          if(min > sayilar[i]) //n saniyede gerceklesir
               min = sayilar[i]; // 1 saniyede gerceklesir yani bu yüzden min'den küçük bir eleman var ise yeni min o olacak.
     }

     printf("Dizideki en kucuk sayi : %d", min);// 1 saniyede gerceklesir burada da yeni min degerimizi ekrana bastýrýyoruz
 }
