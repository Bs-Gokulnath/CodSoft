#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream MyFile("task4.txt");
    MyFile << "Hello All!! This is file handling." ;
    MyFile.close();

    string myfile;
    ifstream MyReadFile("task4.txt");

    while (getline(MyReadFile, myfile)) {
        cout << myfile << "\n";
    }

    MyReadFile.close();

    ifstream MyReadFileAgain("task4.txt");  

    string word;
    int count = 0;

    while (MyReadFileAgain >> word) {
        cout << word << " ";
        count++;
    }

    cout << "\nThe word count is: " << count;

    MyReadFileAgain.close();

    return 0;
}
