#include <stdio.h>
int main(){
    int pin;
    int giris;
    float bakiye;
    float para_cek;
    float para_yatır;
    int islem_tipi;
    bakiye = 5000;
    printf("\t X BANK'a HOŞGELDİNİZ\n");
    printf("Lütfen 4 Haneli Pin tanımlayınız\n");
    scanf("%i", &pin);
    
    if(pin > 9999 ||pin < 1000){
        printf("4 Haneden Farklı Bir Pin Girdiniz Daha Sonra Tekrar Deneyin");
        return 0;
    }
   printf("Pin Başarıyla Tanımlandı");
   printf("\nLütfen Tanımlı Pin'inizi Giriniz\n");
   scanf("%i", &giris);
 
   if(giris != pin){
       printf("Hatalı PİN");
       return 0;
   }
   printf("Doğru PİN\n");
   printf("Lutfen Yapılacak İşlemi Seçin\n");
   printf("Para Çekmek İçin   : 1 \nPara Yatırmak İçin : 2\nMevcut Bakiye İçin : 3\n");
   scanf("%i", &islem_tipi);
   if(islem_tipi == 1){
       printf("Hesabınızdaki çekilebilecek tutar %.2f TL\n", bakiye);
       printf("Çekilecek Tutarı Girin\n");
       scanf("%f", &para_cek);
       if((int) para_cek % 10 != 0){
                  printf("Yalnızca 10,20,50,100,200 Çekilebilir");
       return 0;
       }
       
       
       if(para_cek > bakiye){
           
          printf("Yetersiz Bakiye");
          return 0;
       }
       bakiye = bakiye - para_cek;
       printf("Çekim İşlemi Başarılı Mevcut Bakiyeniz %.2f TL", bakiye);
     
   }
   else if(islem_tipi == 2){
       printf("Hesabınızdaki Mevcut Bakiye %.2f TL\n", bakiye);
       printf("Yatırılacak Tutarı Girin\n");
       scanf("%f", &para_yatır);
       if((int)para_yatır % 10 != 0){
       printf("Yalnızca 10,20,50,100,200 Yatırılabilir");
       return 0;
}
       if(para_yatır <= 0){
           
          printf("0 Lira Yatırılamaz");
          return 0;
       }
       bakiye = bakiye + para_yatır;
       printf("Yatırma İşlemi Başarılı Mevcut Bakiyeniz %.2f TL", bakiye);
     
   }
    else if(islem_tipi == 3){
       printf("Hesabınızdaki Mevcut Bakiye %.2f TL\n", bakiye);
   }
   else
   printf("Hatalı Tuşlama İşleminiz Seçilemedi");
   
}