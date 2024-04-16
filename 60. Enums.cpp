#include <iostream>
using namespace std;

enum day{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main(){

    day today = sunday;
    
    switch(today){
            case 0:    cout << "It is Sunday!\n";
                            break;
            case 1:    cout << "It is Monday!\n";
                            break;
            case 2:   cout << "It is Tuesday!\n";
                            break;
            case 3: cout << "It is Wednesday!\n";
                            break;
            case 4:  cout << "It is Thursday!\n";
                            break;
            case 5:    cout << "It is Friday!\n";
                            break;
            case 6:  cout << "It is Saturday!\n";
                            break;
        }

    
    cout << endl;
    return 0;
}








//switch(today){
//        case sunday:    cout << "It is Sunday!\n";
//                        break;
//        case monday:    cout << "It is Monday!\n";
//                        break;
//        case tuesday:   cout << "It is Tuesday!\n";
//                        break;
//        case wednesday: cout << "It is Wednesday!\n";
//                        break;
//        case thursday:  cout << "It is Thursday!\n";
//                        break;
//        case friday:    cout << "It is Friday!\n";
//                        break;
//        case saturday:  cout << "It is Saturday!\n";
//                        break;
//    }
