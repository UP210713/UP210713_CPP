/*
Date: 23/11/2022
Author: Samuel Salvador Soto Torres
        Jorge Emilio Santacruz Morales
        Osiris Olimpia Martinez 

Description: Conect 4
*/

/*  BOARD

  1   2   3   4   5   6   7
|   |   |   |   |   |   |   |
|   |   |   |   |   |   |   |  
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |  
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |   
|   |   |   |   |   |   |   |  


*/

#include <iostream>


using namespace std;

int mainMenu();//Osiris
void makeBoard();//Jorge
int selectPlay();//Samuel
bool checkPlay();//samuel


// funcion principal 
 int main(){

    makeBoard();

 }

 void makeBoard(){

    int row,col,x=0,y=0;

    cout<<"  1    2    3    4    5    6    7    "<<endl;

    for (row=0;row<=8;row++){
        
        for(col=0;col<=28;col++){

            if(col==0||col==4||col==8||col==12||col==16||col==20||col==24||col==28){
                cout<<"|";
            }
            else if(col==3||col==7||col==11||col==15||col==19||col==23||col==27){

                
                x++;

            }
            else {
                cout<<"  ";
            }
        }

        cout<<endl;

       
    }

}
int selecPlay()
{
    int selectPlay;
    do
    {
        cout << "Give  me your move: "<< endl;
        cout << "Please only give entire numbers: "<< endl;
        cin >> selectPlay;
    } while (selectPlay > 9 && selectPlay < 0);
    return selectPlay;
}

