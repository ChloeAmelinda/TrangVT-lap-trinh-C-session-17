#include<stdio.h>
#include<string.h> 
void khai_bao();
void max();
int main(){
	int n, arr[n];
	int choice;
	int sum=0;
	do{
		khai_bao();
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so luong phan tu :");
				scanf("%d",&n);
				for(int i=0; i<n;i++){
					printf("Nhap phan tu thu %d:",i+1);
					scanf("%d",&arr[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("Mang da nhap la:");
				for(int i=0; i<n; i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("do dai cua mang la:%d\n",n);
				printf("\n");
				break;
			case 4:
				for(int i=0; i<n ; i++){
					sum+=arr[i];
				}
				printf("Tong mang la:%d\n",sum);
				printf("\n");
				break;
			case 5:
				max();
				break;
			case 6:
				printf("vuot chong gai thanh cong \n");
				break;
			default:
				printf("Loi du lieu roi, nhap tum lum a\n");
		}
		
	} while(choice!=0);
	return 0; 
} 
void khai_bao(){
	printf("-----Menu-----\n");
	printf("1.Nhap so luong phan tu\n");
	printf("2.In mang da nhap\n");
	printf("3.Tinh do dai\n");
	printf("4.tinh tong \n");
	printf("5.Hien phan tu lon nhat\n");
	printf("6.Thoat\n");
}
void max(){
	int n,arr[n];
	int lon;
	lon=arr[0];
	for(int i=0; i<n ; i++){
		if(lon < arr[i]){
			lon=arr[i];
		}
	}
	printf("phan tu lon nhat :%d\n",lon);
}
