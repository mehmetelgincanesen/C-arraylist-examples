#include<stdio.h>
int main(){
	float sayilar[6];
	float toplam;
	int i;
	for(i=0;i<6;i++){
		printf("bir sayi giriniz:");
		scanf("%f",&sayilar[i]);
	}
	for(i=0;i<6;i++){
	
	toplam+=sayilar[i];
	
	}
	printf("girilen sayilarin aritmetik ortalamasý=%f",toplam/5);
	return 0;	
}

