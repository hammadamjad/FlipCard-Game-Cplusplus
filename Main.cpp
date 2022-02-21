#include <iostream>
#include<cstdlib>
#include "NodeClass.cpp"
#include "LinkedListClass.cpp"
#include "Functions.cpp"
using namespace std;
  
int main()
{
	//declaring pair values in array
	int array1[25] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13};
	int array2[49] = {1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,
						13,14,14,15,15,16,16,17,17,18,18,19,19,20,20,21,21,22,22
						,23,23,24,24,25};
	//initializing linked list class object
	Linkedlist list;
	
	//declaring rows and columns variables.
	int row1,col1,row2,col2,choices = 3;
	int mode,counter = 0,score = 0;
	int player = 1,score2 = 0,counter2 = 0;
	
	do{
		system("cls");
		cout<<"\n*********************** Welcome to FLipCard Game*****************************\n";
		cout<<"\n\nEnter 1. for 5 X 5 mode.\n";
		cout<<"Enter 2. for 7 X 7 mode.\n";
		cout<<"Enter 3. Instruction\n";
		cout<<"Enter 0. Exit\n";
		cin>>mode;
		system("cls");
		
		//for mode 5 x 5
		if(mode == 1){
			while(true){
				//generating random index.
				int index = rand() % 25;
				if(checkArray(array1,25)){
					break;
				}
				else if(array1[index] != 0){
					//inserting node in linked list;
					list.insertNode(array1[index]);
					array1[index] = 0;
				}
			}
			
			do{
				if(player == 1)
					ScoreDisplay(player,counter,score);
				else
					ScoreDisplay(player,counter2,score2);
				//choices that are only 3 in number 
				cout<<"choices left: "<<choices<<"\n\n";
				PrintStar(array1,25,5);
				cout<<"\nPlayer-"<<player<<" enter row and col for card-2: ";
				cin>>row1>>col1;
				system("cls");
				if(player == 1)
					ScoreDisplay(player,counter,score);
				else
					ScoreDisplay(player,counter2,score2);
				//assigning value to array index. 
				array1[row1*5 + col1] = list.findEl(row1*5 + col1);
				//showing the card array again.
				PrintStar(array1,25,5);
				cout<<"\nPlayer-"<<player<<" enter row and col for card-2: ";
				cin>>row2>>col2;
				system("cls");
				if(player == 1)
					ScoreDisplay(player,counter,score);
				else
					ScoreDisplay(player,counter2,score2);
				//assigning value to array index. 
				array1[row2*5 + col2] = list.findEl(row2*5 + col2);
				//showing the card array again.
				PrintStar(array1,25,5);
				if(list.findEl(row1*5 + col1) != list.findEl(row2*5 + col2)){
					array1[row1*5 + col1] = 0;
					array1[row2*5 + col2] = 0;
					
					cout<<"\nThe cards do not match"<<endl;
					//decreasing a choice for not match
					choices--;
					system("pause");
				}
				
				if(player == 1){
					score++;
					counter++;
					player++;
				}else{
					score2++;
					counter2++;
					player--;
				}
				counter++;
				//clearing screen so it looks like martrix updates every input.
				system("cls");
				
			}while(choices > 0);
		}
		//for mode 7 x 7
		else if(mode == 2){
			while(true){
				//generating random index.
				int index = rand() % 49;
				if(checkArray(array2,49)){
					break;
				}
				else if(array2[index] != 0){
					//inserting node in linked list;
					list.insertNode(array2[index]);
					array2[index] = 0;
				}
			}
			
			do{
				if(player == 1)
					ScoreDisplay(player,counter,score);
				else
					ScoreDisplay(player,counter2,score2);
				//choices that are only 3 in number 
				cout<<"choices left: "<<choices<<"\n\n";
				PrintStar(array2,49,7);
				cout<<"\nPlayer-"<<player<<" enter row and col for card-2: ";
				cin>>row1>>col1;
				system("cls");
				if(player == 1)
					ScoreDisplay(player,counter,score);
				else
					ScoreDisplay(player,counter2,score2);
				//assigning value to array index. 
				array2[row1*7 + col1] = list.findEl(row1*7 + col1);
				//showing the card array again.
				PrintStar(array2,49,7);
				cout<<"\nPlayer-"<<player<<" enter row and col for card-2: ";
				cin>>row2>>col2;
				system("cls");
				if(player == 1)
					ScoreDisplay(player,counter,score);
				else
					ScoreDisplay(player,counter2,score2);
				//assigning value to array index. 
				array2[row2*7 + col2] = list.findEl(row2*7 + col2);
				//showing the card array again.
				PrintStar(array2,49,7);
				if(list.findEl(row1*7 + col1) != list.findEl(row2*7 + col2)){
					array2[row1*7 + col1] = 0;
					array2[row2*7 + col2] = 0;
					
					cout<<"\nThe cards do not match"<<endl;
					//decreasing a choice for not match
					choices--;
					system("pause");
				}
				if(player == 1){
					score++;
					counter++;
					player++;
				}else{
					score2++;
					counter2++;
					player--;
				}
				
				//clearing screen so it looks like martrix updates every input.
				system("cls");
				
			}while(choices > 0);
		}
		//instructions
		else if(mode == 3){
			system("cls");
			cout<<"****************** Instruction ***************"<<endl;
			cout<<"1. Pick a card from the matrix\n";
			cout<<"2. select second card and if it matches then score will increase.\n";
			cout<<"3. You have only 3 chances then game will be over.\n";
		}
		else if(mode == 0){
			break;
		}
		cout<<"\n\nDo you want to continue: Y(1)/N(0) : (enter 1 for yes and 0 for no) ";
		cin>>mode;
	}while(mode != 0);

}
