#include<stdio.h>
#include<math.h>

int main(){
	char window[40][40];
	double degree, sin_index[40], cos_index[40];
	double radian,PI=3.14159;
	for (int x = 0; x < 40; x++){
		for (int y = 0; y < 40; y++){
			window[x][y] = ' ';
		}
	}
	for (int i = 0; i < 40; i++){
		degree = i * 9;
		radian = (2*PI)/ (360/degree);
		sin_index[i] = sin(radian)*20;
		cos_index[i] = cos(radian)*20;
		window[i][0] = '|';
		window[20][i] = '-'; 
		window[20-(int)sin_index[i]][i] = 's';
		window[20-(int)cos_index[i]][i] = 'c';
	}
	for (int x = 0; x < 40; x++){
		for (int y = 0; y < 40; y++){
			
			printf("%c",window[x][y]);
		}
		printf("\n");
	}
	
}