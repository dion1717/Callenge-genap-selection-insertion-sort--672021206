#include <stdio.h>

//inserttion
int angka[8]={-23,67,89,5,20,15,27,45};

void main(){
    printf("data sebelum diurutkan: -23,67,89,5,20,15,27,45\n");
    printf("\n\ndata sesudah diurutkan: ");
	for(int i=1; i<8; i++){
		for(int j=i; j>0 && angka[j]<angka[j-1]; j--){
			int temp=angka[j-1];
			angka[j-1]=angka[j];
			angka[j]=temp;
		}
	}
	for(int i=0; i<8; i++){
		printf("%d ", angka[i]);
	}
	getchar();
}
