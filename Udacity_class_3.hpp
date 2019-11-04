/*header file for main.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition

Gameboard::Gameboard(){
    for(int i=0; i<4 ; i++){
        for(int x=0; x<4 ; x++){
            gameSpace[i][x]='x';
        }
    }
}

void Gameboard::setGameSpace(int row,int column, char value){
    gameSpace[row][column]= value;
}

char Gameboard::getGameSpace(int row,int column){
    return gameSpace[row][column];
}
int Gameboard::fourInRow(){
    int state = 0;
    for(int i=0; i<4; i++){
        int counter=0;
        for (int x=0; x<4 ;x++){
            if(gameSpace[i][x]=='x')
                counter++;
        }
        if(counter==4)
            state=1;
    }
    return state;
}

void Gameboard::printInfo(){
    for(int i=0; i<4 ; i++){
        for(int x=0; x<4 ; x++){
            std::cout<<gameSpace[i][x]<<" ";
        }
        std::cout<<"\n";
    }
}
