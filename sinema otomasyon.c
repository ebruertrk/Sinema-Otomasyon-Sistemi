#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char A[5][50];
    char B[5][50];
    char C[5][50];
}Salonlar;

typedef enum
{
   ogrenci=1,
   tam
}ucretler;

typedef enum
{ 
  nakit,
  kart
}odemesekli;

void sifreligiris();  

int main() {

    printf("SINEMA REZARVASYON SISTEMINE HOSGELDINIZ.\n");
    printf("*****************************************\n");
    
    int MenuSec;
    printf("Rezervasyon yapmak icin 1'e\n");
    printf("Yetkili girisi icin 2'ye basiniz\n");
	Salonlar *psalon;
    scanf("%d",&MenuSec);
    char SalonSec;
    int matine;
    int j,k;
    int koltuknum=0;    int i;
    int ucretgrup;
    int tutar=0;
    int hasilat;
    
    switch (MenuSec)
    {
        case 1:
            printf("Hangi salona rezarvasyon yapmak istersiniz?\n(A/B/C)\n");
            scanf(" %c",&SalonSec);
            switch(SalonSec)
           
            {
                case 'A':

                    printf("Kac numarali matinede rezarvasyon yapmak istersiniz?\n(1/2/3/4/5)");
                    scanf("%d",&matine);
                    ?for(i=matine-1;i<matine;i++)
                    {
                        for(j=0;j<50;j++) 
						{
                            if(psalon->A[i][j] == '0')
                            {
                                psalon->A[i][j] = 1;
                                koltuknum = j;
                                break;
                            }
                            else
                                continue;
                	}
            }
        printf("Hangi ücretlendirme grubundasiniz?\n(TAM icin 1'e ÖÐRENCÝ icin 2'ye basin)\n");
        scanf(" %d",&ucretgrup);
        if(ucretgrup == ogrenci )
                    {
                        tutar = 40;
                        hasilat+=tutar;
                    }
                    else if(ucretgrup == tam)
                    {
                        tutar = 45;
                        hasilat+=tutar;
					}
					  printf("Rezarvasyon Bilgileri:\n");
                    printf("%d numarali koltuga rezerve yapilmistir.\n",koltuknum);
                    printf("Ucretiniz %d liradir.\n",tutar);
        
		int odemesekli;
		printf("Odeme sekliniz?\n(Kart icin 1'e Nakit icin 2'ye basin)\n");
    	            scanf(" %d",&odemesekli);
                    if(odemesekli == kart )
                    {
                        printf("Kart ile odeme alinacaktir. Tesekkuler.\n" );
                    }
                    else if(odemesekli == nakit)
                    {
					
                    	printf("Nakit odeme alinacaktir. Tesekkuler.\n" );
                	}	
	FILE *bilet;
    bilet=fopen("C:\\Users\\ebru0\\OneDrive\\Masaüstü\\bilet.txt","w+");
    fprintf(bilet, " *****BÝLETÝNÝZ*****\n");
    fprintf(bilet, " Salon Adi: A \n");
    fprintf(bilet, " KOLTUK NUM: %d \n", koltuknum);
    fprintf(bilet, " *****ÝYÝ SEYÝRLER DÝLERÝZ*****\n");
    fclose(bilet);            
                    break;
            }
		{
                case 'B':

                    printf("Kac numarali matinede rezarvasyon yapmak istersiniz?\n(1/2/3/4/5)");
                    scanf("%d",&matine);
                      for(i=matine-1;i<matine;i++)
                   	{
                        for(j=0;j<50;j++) 
						{
                            if(psalon->A[i][j] == '0')
                            {
                                psalon->A[i][j] = 1;
                                koltuknum = j;
                                break;
                            }
                            else
                                continue;
                	}
            }
        }
        printf("Hangi ücretlendirme grubundasiniz?\n(TAM icin 1'e ÖÐRENCÝ icin 2'ye basin)\n");
        scanf(" %d",&ucretgrup);
        if(ucretgrup == ogrenci )
                    {
                        tutar = 40;
                        hasilat+=tutar;
                    }
                    else if(ucretgrup == tam)
                    {
                        tutar = 45;
                        hasilat+=tutar;
					}
					printf("Rezarvasyon Bilgileri:\n");
                    printf("%d numarali koltuga rezerve yapilmistir.\n",koltuknum);
                    printf("Ucretiniz %d liradir.\n",tutar);
        
		int odemesekli;
		printf("Odeme sekliniz?\n(Kart icin 1'e Nakit icin 2'ye basin)\n");
                    scanf(" %d",&odemesekli);
                    if(odemesekli == kart )
                    {
                        printf("Kart ile odeme alinacaktir. Tesekkuler.\n" );
                    }
                    else if(odemesekli == nakit)
                    {
					
                    	printf("Nakit odeme alinacaktir. Tesekkuler.\n" );
                	}
	FILE *bilet;
    bilet=fopen("C:\\Users\\ebru0\\OneDrive\\Masaüstü\\bilet.txt","w+");
    fprintf(bilet, " *****BÝLETÝNÝZ*****\n");
    fprintf(bilet, " Salon Adi: B \n");
    fprintf(bilet, " KOLTUK NUM: %d \n", koltuknum);
    fprintf(bilet, " *****ÝYÝ SEYÝRLER DÝLERÝZ*****\n");
    fclose(bilet);	            
                    break;
            {
                case 'C':

                    printf("Kac numarali matinede rezarvasyon yapmak istersiniz?\n(1/2/3/4/5)");
                    scanf("%d",&matine);
                      for(i=matine-1;i<matine;i++)
                    {
                        for(j=0;j<50;j++) 
						{
                            if(psalon->A[i][j] == '0')
                            {
                                psalon->A[i][j] = 1;
                                koltuknum = j;
                                break;
                            }
                            else
                                continue;
                	}
            }
        printf("Hangi ucretlendirme grubundasiniz?\n(TAM icin 1'e OGRENCÝ icin 2'ye basin)\n");
        scanf(" %d",&ucretgrup);
        if(ucretgrup == ogrenci )
                    {
                        tutar = 40;
                        hasilat+=tutar;
                    }
                    else if(ucretgrup == tam)
                    {
                        tutar = 45;
                        hasilat+=tutar;
					}
					  printf("Rezarvasyon Bilgileri:\n");
                    printf("%d numarali koltuga rezerve yapilmistir.\n",koltuknum);
                    printf("Ucretiniz %d liradir.\n",tutar);
        
		int odemesekli;
		printf("Odeme sekliniz?\n(Kart icin 1'e Nakit icin 2'ye basin)\n");
                    scanf(" %d",&odemesekli);
                    if(odemesekli == kart )
                    {
                        printf("Kart ile odeme alinacaktir. Tesekkuler.\n" );
                    }
                    else if(odemesekli == nakit)
                    {
					
                    	printf("Nakit odeme alinacaktir. Tesekkuler.\n" );
                	}	  
	FILE *bilet;
    bilet=fopen("C:\\Users\\ebru0\\OneDrive\\Masaüstü\\bilet.txt","w+");
    fprintf(bilet, " *****BÝLETÝNÝZ*****\n");
    fprintf(bilet, " Salon Adi: C \n");
    fprintf(bilet, " KOLTUK NUM: %d \n", koltuknum);
    fprintf(bilet, " *****ÝYÝ SEYÝRLER DÝLERÝZ*****\n");
    fclose(bilet);          
                    break;
            }
        
        case 2:
		{ 
	    void sifreligiris(); 
   		char gercek_sifre[9]="algoritma";
    	char sifre[9]={0};
    	int sonuc1=2;
    	int sonuc2=2;

		sifreligiris();
    	printf("Hasilati gormek icin sifreyi giriniz.\n");
    	scanf("%s",sifre);
    	sonuc1=strcmp(sifre,"sifreniziburayayazin");
    	if(sonuc1==0 && sonuc2==0)
		{
    	printf("Hos geldiniz. Hasilatiniz %d dir.\n",hasilat);
		}	
		else {
		printf("Sifre hatali\n");
		sifreligiris(); 
		}
	
		} 
	}

return 0;
}
	



