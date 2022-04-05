#include <iostream>
using namespace std;

char Player_Symbol, PC_Symbol;                                  //Determining Player and Robot Symbol
char Play_Pool[9] = { '1','2','3','4','5','6','7','8','9' };    //Drawing Grid

char Player_Positions[3][3];                                    //Storing Player Choices
char PC_Positions[3][3];                                        //Storing Robot Choices

int infinite_loop = 80;                                         //Preventing Termination

char PC[9] = { '1','2','3','4','5','6','7','8','9' };           //Robot Chooses moves from here

void Start()
{
//Determining Game Scenario
    //int Array_of_Scenarios[3] = { 1,2,3 };
    //srand(time(NULL));
    //int Scenarios = rand() % 3;

    cout << "Choose Your Symobl Please 'X','O' = ";
    cin >> Player_Symbol;
    if (Player_Symbol == 'X' || Player_Symbol == 'x')
    {
        cout << "Your Symbol is = " << Player_Symbol << "\n";
        PC_Symbol = 'O';
        cout << "PC Symbol is = " << PC_Symbol;
        cout << "\n\n\n";
    }
    else if (Player_Symbol == 'O' || Player_Symbol == 'o')
    {
        cout << "Your Symbol is = " << Player_Symbol << "\n";
        PC_Symbol = 'X';
        cout << "PC Symbol is = " << PC_Symbol;
        cout << "\n\n\n";
    }
    else
    {
        cout << "Am i a Joke to You?" << "\t" << "Press Ctrl + C" << "\t" << "And Try Again";
        infinite_loop++;
    }
}

void Play_Pool_Drawing()
{
    int j = 0;
    for (int i = 0; i <= 8; i++)
    {
        
        if (j == 3 || j == 6)
        {
            cout << "\n";
        }
        cout << "   ";
        cout << Play_Pool[i];
        j++;
    }
    cout << "\n\n\n";
}

void Playing_Proccess()
{

    cout << "Choose Your Position = ";
    cin >> 




    //
    //srand(time(0));
    //char Robot_Choice = rand() % 9;
    //for (int i = 0; i <= 8; i++)
    //{
    //    if (Robot_Choice == Player_Positions[i])
    //    {
    //        srand(time(0));
    //        Robot_Choice = rand() % 9;
    //    }
    //    if(Robot_Choice == Robot[i])
    //    {
    //        srand(time(0));
    //        Robot_Choice = rand() % 9;
    //    }
    //}
    //cout << "Robot Position is = " << Robot[Robot_Choice] << "\n";

    //Check_Win();
    //Check_loss();
    //Check_Draw();
    //Play_Pool_ReDraw();
    
}

//void Play_Pool_ReDraw()
//{
//
//}

void check_win()
{
    char Winning[3][3];

}


int main()
{
    Start();
    while (infinite_loop == 81)
    {
        for(int i = 0; i==0; i++)
        {
            i++;
        }
    }
    Play_Pool_Drawing();
    Playing_Proccess();





    cout << "\n\n\n";
}





