#include <iostream>
#include<cstdlib>
bool checkArray(int array[],int size){
	bool flag = true;
	for(int i=0;i<size;i++){
		if(array[i] != 0){
			flag = false;
			break;
		}
	}
	return flag;
}


void PrintStar(int array[],int size,int col){
	int counter = 0;
	for(int i=0;i<size;i++){
		if(counter == col){
			counter = 0;
			cout<<endl;
		}
		if(array[i] != 0){
			cout<<array[i]<<" ";
		}
		else{
			cout<<"# ";
		}
		counter++;
	}
}

void ScoreDisplay(int player,int turn,int score){
	cout<<"Score for player-"<<player<<" is: "<<score<<endl;
	cout<<"Turn number: "<<turn<<endl;
}