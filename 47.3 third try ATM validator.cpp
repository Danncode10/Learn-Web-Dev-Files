#include <iostream>
using namespace std;

int getDigit(const int number){
    
    int firstNum, secondNum, realNumber;
    if(number > 10){
        firstNum = number - 10; //9+9 = 18 kaya pag minus 10 results to 8
        secondNum = 1;
        realNumber = secondNum + firstNum;
    }
    else{
        realNumber = number;
    }
    
    return realNumber;
    
    
    //example
    //number = 18
    //     18%10 = 8      18/10 = 1(kase integer)      1%10 = 1 :::::: 8 + 1 = 9
    //return number % 10 + (number / 10 % 10);
}

int sumEven(const string cardNum){
    
    int sum = 0;
    for(int i = cardNum.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNum[i] - '0')*2); //This makes single character from string to numbers ( - '0')
        //even digits are doubled
    }
    return sum;
}

int sumOdd(const string cardNum){
    int sum = 0;
    for(int i = cardNum.size() - 1; i >= 0; i-=2){
        sum += getDigit(cardNum[i] - '0'); //This makes single character from string to numbers ( - '0' )
        
    }
    return sum;
}

int main(){
    string cardNumber;
    int result = 0;
    
    cout << "Enter Card #: ";
    cin >> cardNumber;
    
    result = sumEven(cardNumber) + sumOdd(cardNumber);
    
    if(result % 10 == 0){
        cout << "\nVALID" << endl;
    }
    else{
        cout << "\nNOT VALID" << endl;
    }
    
    return 0;
}
//6011000990139424
