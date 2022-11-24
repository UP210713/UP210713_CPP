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

//MAIN FUNCTIONS OF THE CODE
int mainMenu();//Osiris
void makeBoard();//Jorge
int selectPlay();//Samuel
bool checkPlay();//samuel
void gotoxy(int,int);

char areaGame[7][7]={{'1','2','3','4','5','6','7'},{'8','9','10','11','12','13','14'},{'15','16','17','18','19','20','21'},
                {'22','23','24','25','26','27','28'},{'29','30','31','32','33','34','35'}{'36','37','38','39','40','41','42'},{'43','44','45','46','47','48','49'}};


// funcion principal 
 int main(){
    menu();
   // makeBoard();

 }

void gotoxy(int x,int y){
    cout<<"\033["<<y<<"i"<<x<<"f";
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


int mainMenu(){
    gotoxy(15,3);
    int gameMode;
    cout<<"Welcome to Connect 4"<<endl;
    cout<<"Choose the game mode: 1.vs the PC or 2.vs another player  "
    cin>>gameMode;
    return gameMode;
}