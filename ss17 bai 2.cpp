#include<stdio.h>
#include<string.h>

void Menu();
void letter(char *str);
void number(char *str);
void special(char *str);
int main(){
	int n, choice;
	char str[100];
	do{
		Menu();
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap chuoi ky tu bat ki: ");
				getchar();
				fgets(str, 100 , stdin);
				printf("\n");
				break;
			case 2:
				printf("In mang da nhap : %s \n",str);
				printf("\n");
				break;
			case 3:
				letter(str);
				printf("\n");
				break;
			case 4:
				number(str);
				printf("\n");
				break;
			case 5:
				special(str);
				printf("\n");
				break;
			case 6:
				printf("het game \n");
				break;
			default:
				printf("sai roi nhap tum lum \n");
		}
	}while(choice != 6);
	return 0;
}
void Menu(){
	printf("-----Menu-----\n");
	printf("1.Nhap chuoi ky tu \n");
	printf("2.In mang vua nhap \n");
	printf("3.Dem so chu cai \n");
	printf("4.Dem so chu so \n ");
	printf("5.Dem ki tu dac biet \n");
	printf("6.Thoat \n");
}
void letter(char *str){
	int dem =0;
	for(int i=0; str[i] != '0' ; i++){
		if ( ( str[i] >='A' && str[i] <='Z') || (str[i] >='a' && str[i] <='z')){
			dem++;
		}
	}
	printf("So chu cai trong chuoi la: %d\n",dem);
}
void number(char *str){
	int count=0;
	for(int i=0; str[i] !='0' ; i++){
		if( str[i] >= '0' && str[i] <= '9'){
			count++;
		}
	}
	printf("So chu so trong chuoi la : %d\n", count);
}
void special(char *str){
	int dacbiet=0;
	int dem,count;
	for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            dem++;  
        } else if (str[i] >= '0' && str[i] <= '9') {
            count++;
        } else if (str[i] != '\n') {  
            dacbiet++;
 		}
	}
	printf("so luong ky tu dac biet la : %d\n", dacbiet);
}
