<h1 align=center> Readme of the third program "03-juegos"</h1>

``` c++

    int main (){
    int edad;
    //In the first part, the program needs the user intruce her age
    cout<<"How old are you?"<<endl;
    cin>>edad;
    //In thes second parte, the program evaluate the answer of the user and selects one option
    if (edad<4)
    {
        //This is the output of the program
        cout<<"Congratulations, you can entrance free"<<endl;
    }
    else if (edad >= 4 && edad <=18)
    {
        //This is the output of the program
        cout << "Sorry my friend, you most pay $5.00" << endl;
    }
    else if (edad > 18)
    {
        //This is the output of the program
        cout << "You are to old, you most pay $10.00" << endl;
    }
    else
    {
        //This is the output of the program
        cout << "Your data is incorrect, please try again" << endl;
    }
//This comand retun an int to the main function of the program
return 0;        
}

```
