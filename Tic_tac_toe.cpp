#include<iostream>
// #include<time.h>
// #include<stdlib.h>
#include<conio.h>
using namespace std;

//-----------------------------------------------------------------------------
class tictactoe
{
 int a;
 int b;
 public:
 tictactoe()
 {
   a='X';
   b='O';
 
 }
 void check(int arr[][3])
{
 int count=0;
 for(int i=0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {
        if(arr[i][j]==a)
        count++;
    }
    if(count==3)
    {
        
        cout<<"First player won the match";
        exit(0);
    }
    else
    count=0;
 }
  for(int j=0;j<3;j++)
 {
    for(int i=0;i<3;i++)
    {
        if(arr[i][j]==a)
        count++;
    }
    if(count==3)
    {
        
        cout<<"First player won the match";
        exit(0);
    }
    else
    count=0;
 }
 for(int i=0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {
        if(arr[i][j]==b)
        count++;
    }
    if(count==3)
    {
        
        cout<<"Second Player won the match";
        exit(0);
    }
    count=0;
 }
  for(int j=0;j<3;j++)
 {
    for(int i=0;i<3;i++)
    {
        if(arr[i][j]==b)
        count++;
    }
    if(count==3)
    {
        
        cout<<"Second Player won the match";
        exit(0);
    }
    count=0;
 }
 if(arr[0][0]==a && arr[1][1]==a && arr[2][2]==a)
 {
    cout<<"First player won the match";
        exit(0);
 }
 if(arr[0][2]==a && arr[1][1]==a && arr[2][0]==a)
 {
     cout<<"First Player won the match";
        exit(0);
 }
  if(arr[0][0]==b && arr[1][1]==b &&arr[2][2]==b)
 {
    cout<<"Second Player won the match";
        exit(0);
 }
 if(arr[0][2]==b &&arr[1][1]==b && arr[2][0]==b)
 {
     cout<<"Second Player won the match";
        exit(0);
 }
}
//---------------------------------------------------------------------
void gamedisplay(int arr[][3])
{
int count=1;
    cout<<"################ Tic Tac Toe ##################"<<endl;
    cout<<"First Player X"<<endl;
    cout<<"Second Player O"<<endl;
    for(int i=0;i<3;i++)
    { cout<<"   "<<"|"<<"   "<<"|"<<"   "<<endl;
       
        for(int j=0;j<3;j++)
        { if(arr[i][j]=='X' || arr[i][j]=='O')
           cout<<" "<<(char)arr[i][j]<<" ";
        else
           cout<<" "<<arr[i][j]<<" ";
           if(j!=2)
           cout<<"|";
        
         
        }
        cout<<endl;
        cout<<"___"<<"|"<<"___"<<"|"<<"___"<<endl;
        // cout<<"---"<<" "<<"---"<<" "<<"---"<<endl;
    }
    cout<<"################################################"<<endl;
}
//-------------------------------------------------------------------------------
void player()
{
int a; 
int arr[3][3]={1,2,3,4,5,6,7,8,9};
int count=0;
gamedisplay(arr);
int p=1;
while(1)
{
    a=getch();
    system("cls");
switch(a)
{   
    case 49:
    {
       if(p%2==1)
       {
         arr[0][0]='X';
         count++;
       }
       else
       {
         arr[0][0]='O';
         count++;
       }
       break;      
    }
    case 50:
    {
       if(p%2==1)
       {
         arr[0][1]='X';
         count++;
       }
       else
       {
         arr[0][1]='O';
         count++;
       }
       break;
    }
    case 51:
    {
       if(p%2==1)
       {
         arr[0][2]='X';
         count++;
       }
       else
       {
         arr[0][2]='O';
         count++;
       }
       break;
    }
    case 52:
    {
       if(p%2==1)
       {
         arr[1][0]='X';
         count++;
       }
       else
       {
         arr[1][0]='O';
         count++;
       }
       break;
    }
    case 53:
    {
       if(p%2==1)
       {
         arr[1][1]='X';
         count++;
       }
       else
       {
        arr[1][1]='O';
        count++;
       }
       break;
    }
    case 54:
    {
       if(p%2==1)
       {
         arr[1][2]='X';
        count++;
       }
       else
       {
            arr[1][2]='O';
            count++;
       }
       break;
    }
    case 55:
    {
       if(p%2==1)
       {
           arr[2][0]='X';
           count++;
       }
       else
       {
           arr[2][0]='O';
           count++;
       }
       break;
    }
    case 56:
    {
       if(p%2==1)
       {
          arr[2][1]='X';
          count++;
       }
       else
       {
          arr[2][1]='O';
          count++;
       }
       break;
    }
    case 57:
    {
       if(p%2==1)
       {
          arr[2][2]='X';
          count++;
       }
       else
       {
          arr[2][2]='O';
          count++;
       }
       break;
    }
   
}
gamedisplay(arr);
check(arr);
p++;

if(count==9)
{
    cout<<"Game Draw";
    break;
}

}
// getch();
}
void gamerule()
{
    cout << "Tic-Tac-Toe Game Rules:" << endl;
    cout << "1. The game is played on a grid of 3x3 squares." << endl;
    cout << "2. There are two players: Player X and Player O." << endl;
    cout << "3. Players take turns placing their symbol (X or O) on any empty square." << endl;
    cout << "4. The objective is to get three of your symbols in a row, either horizontally, vertically, or diagonally." << endl;
    cout << "5. The game ends when one player achieves the winning condition or if there are no more empty squares." << endl;
    cout << "6. If all squares are filled and no player has won, the game is a draw." << endl;
    cout << "7. Players can start a new game after the current game ends." << endl;

}
};


//---------------------------------------------------------------------------



int main()
{
   tictactoe s;
    s.gamerule();
   //  system("cls");
    s.player();
      

    return 0;
}