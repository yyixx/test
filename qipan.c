#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int arr[10][10] = {0};
	int row, col, cnt;
	srand(time(0));
	do{
		row = rand() % 10;
		col = rand() % 10;
		for(row = 0;row <= 10;row++){
			for(col = 0;col <= 10;col++){
				if(!arr[row][col]){
					arr[row][col] = -1;
					cnt++;
				}
			}
		}
	}while(cnt < 10);
	for(row = 0;row <= 10;row++){
		for(col = 0;col <= 10;col++){
			if(!arr[row][col]){
				printf("O");
			}
			else if(arr[row][col] == -1){
				printf("X");
			}
		}
	}
printf("\n");
return 0;
}







