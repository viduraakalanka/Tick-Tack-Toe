#include <iostream>
#include <typeinfo>
using namespace std;

char pos_val[11] = {'N','1','2','3','4','5','6','7','8','9'};

//Function to draw the box
void draw(){
    //system() is the function that lets you pass a string to the target system’s command line interpreter
    system("cls");

    cout << "   TICK TAC TOE   "  << endl;
    cout << " _________________"  << endl;
    cout << "|     |     |     |" << endl;

    cout << "|  " << pos_val[1] << "  |  " << pos_val[2] << "  |  " << pos_val[3] << "  |"<<endl;

    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;

    cout << "|  " << pos_val[4] << "  |  " << pos_val[5] << "  |  " << pos_val[6] << "  |"<<endl;


    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;

    cout << "|  " << pos_val[7] << "  |  " << pos_val[8] << "  |  " << pos_val[9] << "  |"<<endl;

    cout << "|_____|_____|_____|" << endl;

    cout << " Player 1 : O" << endl;
    cout << " Player 2 : X" << endl;

}

//function to determine the state of the game.
//  returning 0 indicates draw
//  returning 1 indicates win
//  returning 2 indicates game is still in progress
int check_state(){
    if (pos_val[1]==pos_val[2] && pos_val[1]==pos_val[3]){
        return 1;
    }
    else if (pos_val[4]==pos_val[5] && pos_val[4]==pos_val[6]){
        return 1;
    }
    else if (pos_val[7]==pos_val[8] && pos_val[7]==pos_val[9]){
        return 1;
    }
    else if (pos_val[1]==pos_val[4] && pos_val[1]==pos_val[7]){
        return 1;
    }
    else if (pos_val[2]==pos_val[5] && pos_val[2]==pos_val[8]){
        return 1;
    }
    else if (pos_val[3]==pos_val[6] && pos_val[3]==pos_val[9]){
        return 1;
    }
    else if (pos_val[1]==pos_val[5] && pos_val[1]==pos_val[9]){
        return 1;
    }
    else if (pos_val[3]==pos_val[5] && pos_val[3]==pos_val[7]){
        return 1;
    }
    else if (pos_val[1]!='1' && pos_val[2]!='2' && pos_val[3]!='3'
         && pos_val[4]!='4' && pos_val[5]!='5' && pos_val[6]!='6'
         && pos_val[7]!='7' && pos_val[8]!='8' && pos_val[9]!='9'){
        return 0;
    }
    else{
        return 2;
    }

}

int main (){
    int state=2;
    int pos;

    draw();

    while(true){
        cout<<"Player 1 - Enter the position: ";
        cin>>pos;

        pos_val[pos] = 'O';

        draw();
        //cout<<typeid(pos).name();
        state = check_state();
        if (state==1){
            cout<<"Player 1 won!!!"<<endl;
            break;
        }
        else if(state==0){
            cout<<"It's a Draw"<<endl;
            break;
        }

        cout<<"Player 2 - Enter the position: ";
        cin>>pos;
        pos_val[(int)pos] = 'X';

        draw();
        state = check_state();
        if (state==1){
            cout<<"Player 2 won!!!"<<endl;
            break;
        }
        else if(state==0){
            cout<<"It's a Draw"<<endl;
            break;
        }
    }
}
