#include<stdio.h>
int main(){
	int row,col,n;
	printf("Enter the numebr: ");
	scanf("%d",&n);
	
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("*");
		}
		printf("\n");
	}
	for(row=n;row>=1;row--){
		for(col=1;col<row;col++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
