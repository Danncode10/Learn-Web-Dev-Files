#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
                    //Take note, ganito mag pass ng 2D array sa function
void showBoard(char b[][10]) {
    cout << "\n_____________________________________________________________" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "|     |     |     |     |     |     |     |     |     |     |" << endl;
        for (int j = 0; j < 10; j++){
                cout << "|  " << b[i][j] << "  ";
        }
        cout << "|";
        cout << "\n|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|" << endl;
    }
    
    for(int i = 1; i <= 10; i++){
        if(i == 10){
            cout << "|  " << i << " |\n\n";
        }
        else{
            cout << "|  " << i << "  ";
        }
    }
    cout << "" << endl;
}

void playerChoice(char b[][10], char player){
    int choice;
    
    while(true){
        
        cout << "Enter Choice (1-10) ";
        cin >> choice;
        
        
        if(!(choice >= 1 && choice <=10)){
            cout << "Invalid Choice\n";
            choice = 0;
        }
        else{
            break;
        }
    }
    
    for(int i = 9; i >= 0; i--){
        if(b[i][choice - 1] == ' '){
            b[i][choice - 1] = player;
            break;
        }
    }
}

void computerChoice(char b[][10], char computer){
    srand(static_cast<unsigned int>(time(0)));
    
    int choice = rand() % 10 + 1;
    
    for(int i = 9; i >= 0; i--){
        if(b[i][choice - 1] == ' '){
            b[i][choice - 1] = computer;
            break;
        }
    }
}

int main() {

    char b[10][10] = {
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        
    };
    bool running = true;
    
    char player = 'X';
    char computer = 'O';

    showBoard(b);
    while(running){
        playerChoice(b, player);
        computerChoice(b, computer);
        showBoard(b);
        
    }
    cout << endl;
    return 0;
}

