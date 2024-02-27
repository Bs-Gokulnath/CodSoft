#include <iostream>

using namespace std;

int main(){
    
    int num1,num2,o;

    cout << "Enter Number-1 : ";
    cin >> num1;
    
    cout << "Enter Number-2: ";
    cin >> num2;

    cout << "Enter Operation" << "\n" << "1.Addition" << "\n" << "2.Subtraction" << "\n" <<  "3.Multiplication" << "\n" << "4.Division" << "\n";
    cout << "Enter Option (1 - 4) : " ;
    cin >> o;

    switch(o){
        case 1:
        cout << "Sum is : " << num1+num2;
        break;

        case 2:
        cout << "Difference is : " << num1-num2;
        break;

        case 3:
        cout << "Multiplication is : " << num1*num2;
        break;

        case 4:
        if(num2 !=0 )
            cout << "Division is : " << num1/num2;
        else
            cout << "Division by zero is not allowed.";
        break;

        default:
        cout << "Invalid Option";
        break;
    }

}