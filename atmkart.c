#include <stdio.h>
#include <conio.h>

int main () {
    
    int islem;
    int bakiye = 1000;
    int tutar;
    int sifre;
   
  
  
    printf("kart sifrenizi giriniz:");
    scanf("%d",&sifre);
    
      
      
    if (sifre == 4574) {
              
          printf("Sifre Dogru \n1:Para Cekme\n2:Para Yatirma\n3:Bakiye Sorgulama\n4:Havale Yapma\n5:Kart Iade\n");
              printf("yapmak istediginiz islemin numarasini giriniz:");
              scanf("%d", &islem);
              
              
              switch(islem) {
                            
                            case 1:
                                 printf("Bakiyeniz %d Tl'dir\n", bakiye);
                                 printf("Cekmek istediginiz tutari giriniz ");
                                 scanf("%d", &tutar);
                                 
                                 if (tutar <= 1000) {
                                 bakiye -=tutar;
                                 printf("kalan tutariniz %d TL'dir", bakiye);
                                 
                            }
                            
                            else  printf("yeterli bakiyeniz bulunmamaktadir");
                            break;
                            
                            case 2:
                                 
                                 printf("Bakiyeniz %d Tl'dir\n", bakiye);
                                 printf("Yatirmak istediginiz tutari giriniz ");
                                 scanf("%d", &tutar);
                                 bakiye +=tutar;
                                 printf("Guncel bakiyeniz %d TL'dir", bakiye);
                                 break;
                            
                            case 3:
                                  printf("Bakiyeniz %d Tl'dir\n", bakiye);
                                  break;
                                  
                                  
                            case 4:
                                       
                                    printf("Bakiyeniz %d Tl'dir\n", bakiye);
                                 printf("Havale yapmak istediginiz tutari giriniz ");
                                 scanf("%d", &tutar);
                                 
                                 if (tutar <= 999) {
                                 bakiye -=tutar;
                                 printf("kalan tutariniz %d TL'dir", bakiye);
                                 
                            }
                            
                            else  printf("yeterli bakiyeniz bulunmamaktadir");
                               break;
                            
                            case 5:
                                 printf("kartiniz iade edilmistir");
                                 break;
                            }
              
              }
    
    
    
    
    else printf("sifre yanlis");
    
    
    
 getch ();
 return 0;   
    
}
