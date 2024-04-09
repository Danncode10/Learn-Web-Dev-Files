#include <iostream>
using namespace std;

void showBoard(char* space){
    cout << "     |     |     " << endl;
    cout << "  " << space[0] << "  |  " << space[1] << "  |  " << space[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << space[3] << "  |  " << space[4] << "  |  " << space[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << space[6] << "  |  " << space[7] << "  |  " << space[8] << "  " << endl;
}

int main(){
    
    char space[9] = {' ', ' ', ' ',' ', ' ', ' ',' ', ' ', ' '};
    
    showBoard(space);
    
    cout << endl;
    return 0;
}
