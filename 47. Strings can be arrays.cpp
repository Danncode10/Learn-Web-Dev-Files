#include <iostream>
using namespace std;

int main() {
    string word;
    
    cout << "Enter Word: ";
    cin >> word;
    /*
    for (int i = 0; i < word.size(); i++) {
        cout << word[i];
    }
    
    for (int i = 0; i < word.size(); i+=2) {
        cout << word[i];
    }
    */
    
    for (int i = word.size(); i >= 0; i--) {
        cout << word[i];
    }
    
    
    //------------------//
    cout << endl;
    cin.get();
    return 0;
}
