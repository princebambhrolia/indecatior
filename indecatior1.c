#include<stdio.h>
int main(){
	int size;
	printf("Enter array's size: ");
	scanf("%d",&size);
	int arry[size][size];
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&arry[i][j]);
		}
	}
	printf("\n\nCubes of all elements:\n");
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			arry[i][j]=arry[i][j]*arry[i][j]*arry[i][j];
			printf("%d ",arry[i][j]);
		}
		printf("\n");
	}
}

