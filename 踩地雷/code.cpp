//Minesweeper 
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int rand();
	srand(time(NULL));
	int a[10][10];
//	int bomb1[2],bomb2[2],bomb3[2],bomb4[2],bomb5[2],bomb6[2],bomb7[2],bomb8[2],bomb9[2],bomb10[2];
	int bomb[10][2];
	for(int i=0;i<=10;i++){
		int temp[1][1]=rand()%10+1;
		for(int t=i;i>=0;i--){
			if(temp[0][0]!=bomb[i][0]){
				bomb[i][0]=rand()%10+1;
			}
		}
		
	}	
	
} 
