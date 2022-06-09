#include<stdio.h>
int matris[3][3];
int i,j;
int sum;
int main(){
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",matris[i][j]);
		}
	printf("\n");
	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum+=matris[j][i];
			
		}
	printf("%d ",sum);
	sum=0;	
	}
	
	return 0;
	
	
}
