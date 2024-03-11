//Minesweeper 
#include<iostream>
#include<stdlib.h>
#include<time.h>
//#include"Minesweeper.h" 
using namespace std;
void generaterand(){
	temp[0]=rand()%10+1;
	temp[1]=rand()%10+1;
	
}
int main(){
	int rand();
	int x,y;
	srand(time(NULL));
	int board[10][10];
//	int bomb1[2],bomb2[2],bomb3[2],bomb4[2],bomb5[2],bomb6[2],bomb7[2],bomb8[2],bomb9[2],bomb10[2];
	int bomb[10][2];
	cout<<"Please enter an x,y"<<endl;
	cin>>x;
	cin>>y;
	for(int i=0;i<=10;i++){			//bomb 1~10 
		int temp[2];
		generaterand();
		for(int t=i;i>=0;i--){		//檢查是否有跟先前的炸彈重複位置 
			if(temp[0]!=bomb[i-1][0] && temp[1]!=bomb[i-1][1]){
				bomb[i][0]=temp[0];
				bomb[i][1]=temp[1];
			}
			else{
				generaterand();			//不知道怎麼讓這邊的亂數生成再檢查一次 
			}
		}	
	}	
	
	
} 
