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
    int state;
    int pos;
    int num=0;
    int player_num;
    char player_mark;

    draw();

    while(true){
        num +=1;
        printf("%d\n",num);

        if (num%2==1){
            player_num=1;
            player_mark='O';
        }
        else{
            player_num=2;
            player_mark='X';
        }

        printf("Player %d - Enter the position: ",player_num);
        cin>>pos;


        if (pos_val[pos]=='1' && pos==1){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='2' && pos==2){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='3' && pos==3){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='4' && pos==4){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='5' && pos==5){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='6' && pos==6){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='7' && pos==7){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='8' && pos==8){
            pos_val[pos] = player_mark;
        }
        else if (pos_val[pos]=='9' && pos==9){
            pos_val[pos] = player_mark;
        }
        else{
            printf("Invalid Move");
            cin.ignore();
            cin.get();
            num -=1;
        }
        draw();
        state = check_state();
        if (state==1){
            printf("\nPlayer %d won!!!",player_num);
            break;
        }
        else if(state==0){
            cout<<"\nMatch Drawn"<<endl;
            break;
        }
    }
}
