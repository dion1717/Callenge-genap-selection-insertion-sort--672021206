#include <stdio.h>

//selection
int angka[8]={-23,67,89,5,20,15,27,45};

void main(){
     printf("data sebelum diurutkan: -23,67,89,5,20,15,27,45\n");
    printf("\n\ndata sesudah diurutkan: ");
	for(int i=0; i<8; i++){
		int Min=i;
		for(int j=i; j<8; j++){
			if(angka[j]<angka[Min]){
				Min=j;
			}
		}
		int temp=angka[i];
		angka[i]=angka[Min];
		angka[Min]=temp;
	}
	for(int i=0; i<8; i++){
		printf("%d ", angka[i]);
	}
	getchar();
}

