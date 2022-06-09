#include<stdio.h>
void function(int matris1[][3], int size);
int main(){
	int matris[3][3];
	int i,j;
	printf("matrisin deðerlerini giriniz:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matris[i][j]);
			
		}
	}
	function(matris,3);
	
}
void function(int matris1[][3], int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<3;j++){
			printf("%d ",matris1[i][j]);
		}
		printf("\n");
	}
}

