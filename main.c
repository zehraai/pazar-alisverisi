/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float para=200;
    float domates=5;
    float biber=7;
    float patlican=3;
    float elma=2;
    float armut=6; 
    
    int secim;
    float kg;
    float toplam;
    
    
    do 
    {
        printf("\n====================\n");
        printf("        PAZZAR MENUSU");
        printf("=========================\n");
        
        printf("Paraniz: %2f TL\n\n" , para);
        printf("1 - domates   : %.2f TL /kg\n", domates);
        printf("2 - biber     : %.2f TL /kg\n", biber);
        printf("3 - patlican   : %.2f TL /kg\n", patlican);
        printf("4 - elma   : %.2f TL /kg\n", elma);
        printf("5 - armut   : %.2f TL /kg\n", armut);
        
        printf("\nBir urun seciniz:  ");
        scanf("%d", &secim);
        
        switch (secim)
        {
            case 1 :
            printf("Kac kg domates almak istiyorsunuz:  ");
            scanf("%f", &kg);
            
            toplam=domates * kg;
            
            if (toplam>para)
            {
                printf("\nHATA paraniz yetersiz.\n");
                printf("urun fiyati: %.2f TL\n", toplam);
                printf("paraniz:  %.2f TL\n", para);
                printf("lütfen tekrar secin\n");
            
            }
            else
            {
                para=para-toplam;
                printf("alisveris ok\n");
                printf("%.2f kg domates aldin.\n");
                printf("ucret: %.2f TL\n", toplam);
                printf("kalan para :%.2f TL\n" , para);
            }
            break;
            
            case 2:
             printf("Kac kg biber almak istiyorsunuz:  ");
            scanf("%f", &kg);
            
            toplam=biber * kg;
            
            if (toplam>para)
            {
                printf("\nHATA paraniz yetersiz.\n");
                printf("urun fiyati: %.2f TL\n", toplam);
                printf("paraniz:  %.2f TL\n", para);
                printf("lütfen tekrar secin\n");
            
            }
            else
            {
                para=para-toplam;
                printf("alisveris ok\n");
                printf("%.2f kg biber aldin.\n");
                printf("ucret: %.2f TL\n", toplam);
                printf("kalan para :%.2f TL\n" , para);
            }
             break;
             
             case 3:
              printf("Kac kg patlican almak istiyorsunuz:  ");
            scanf("%f", &kg);
            
            toplam=patlican * kg;
            
            if (toplam>para)
            {
                printf("\nHATA paraniz yetersiz.\n");
                printf("urun fiyati: %.2f TL\n", toplam);
                printf("paraniz:  %.2f TL\n", para);
                printf("lütfen tekrar secin\n");
            
            }
            else
            {
                para=para-toplam;
                printf("alisveris ok\n");
                printf("%.2f kg patlican aldin.\n");
                printf("ucret: %.2f TL\n", toplam);
                printf("kalan para :%.2f TL\n" , para);
            }
             break;
             
             case 4:
              printf("Kac kg elma almak istiyorsunuz:  ");
            scanf("%f", &kg);
            
            toplam=elma* kg;
            
            if (toplam>para)
            {
                printf("\nHATA paraniz yetersiz.\n");
                printf("urun fiyati: %.2f TL\n", toplam);
                printf("paraniz:  %.2f TL\n", para);
                printf("lütfen tekrar secin\n");
            
            }
            else
            {
                para=para-toplam;
                printf("alisveris ok\n");
                printf("%.2f kg elma aldin.\n");
                printf("ucret: %.2f TL\n", toplam);
                printf("kalan para :%.2f TL\n" , para);
            }
              break;
              
              case 5:
               printf("Kac kg armut almak istiyorsunuz:  ");
            scanf("%f", &kg);
            
            toplam=armut * kg;
            
            if (toplam>para)
            {
                printf("\nHATA paraniz yetersiz.\n");
                printf("urun fiyati: %.2f TL\n", toplam);
                printf("paraniz:  %.2f TL\n", para);
                printf("lütfen tekrar secin\n");
            
            }
            else
            {
                para=para-toplam;
                printf("alisveris ok\n");
                printf("%.2f kg armut aldin.\n");
                printf("ucret: %.2f TL\n", toplam);
                printf("kalan para :%.2f TL\n" , para);
            }
            
            break;
            
            default:
            printf("\nHata 1 ile 5 arasinda sec");
        } while (para>0);
        
        printf("\n==================\n");
        printf("para bitti\n");
        printf("=================\n");
        
        return 0;
      }
        
    
    while (para>0);
    
    return 0;
    
        }
    
    