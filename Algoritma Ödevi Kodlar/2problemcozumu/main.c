#include <stdio.h>

int main(){
    printf("-------------------------\n");
    printf("En kucuk degeri buldurma \n");
    printf("--------------------------\n");
    int elemanSayisi; //1 saniyede gerceklesir kullan�c�n�n kac eleman girecegini burada al�yoruz
    printf("kac eleman girisi yapilacak ? :"); //1 saniyede gerceklesir
    scanf("%d",&elemanSayisi); //1 saniyede gerceklesir

     int sayilar[elemanSayisi],min; //1 saniyede gerceklesir degiskenleri tan�mlad�k

     for(int i=0 ; i<elemanSayisi ; i++){ // n+1 saniyede gerceklesir  her bir eleman� sorup almas� i�in for d�ng�s� olusturduk
          printf("%d. sayiyi giriniz : ",i+1); ////1 saniyede gerceklesir  ve inci eleman� bir artt�r�p soruyoruz
          scanf("%d", &sayilar[i]); ////1 saniyede gerceklesir daha sonra elemanlarin degerlerini giriyoruz
     }

     min = sayilar[0]; //1saniyede gerceklesir ilk basta min degerimizi eleman�n ilk deleman�na esitliyoruz

     for(int i=0 ; i<elemanSayisi ; i++){//n+1 saniyede gerceklesir suan min degerimiz ilk eleman eger 2. eleman minden k�c�kse min degerimiz 2. eleman olacak
          if(min > sayilar[i]) //n saniyede gerceklesir
               min = sayilar[i]; // 1 saniyede gerceklesir yani bu y�zden min'den k���k bir eleman var ise yeni min o olacak.
     }

     printf("Dizideki en kucuk sayi : %d", min);// 1 saniyede gerceklesir burada da yeni min degerimizi ekrana bast�r�yoruz
 }
