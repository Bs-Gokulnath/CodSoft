#include <iostream>

using namespace std;

int main(){

    string name;
    int g[5];
    
    cout << "Enter student name : ";
    getline(cin,name);
    
    for (int i=0 ;i<5 ;i++){
        cout << "Enter grade in subject "<<i+1<<" : ";
        cin >> g[i] ;
    }
    
    cout << "\nStudent Name : " << name ;
    cout << "\n\nGrade in each subject : ";
    
    for (int i=0 ;i<5 ;i++)
        cout << "\n Subject "<<i+1<<" Grade is : " << g[i] ;
        
    float sum = 0 , avg ;
    
    for (int i=0 ;i<5 ;i++) {
        sum += g[i] ;
    }
    
    avg = sum / 5 ;
    
    cout << "\n\nAverage of grades : " << avg ;
	

    int max = g[0];
    int min = g[0];

    for(int i=1;i<5;i++){
        if(g[i]>max){
            max=g[i];
        }else if(g[i]<min){
            min=g[i];
        }
    }

    cout << "\nThe maximum grade is : " << max ;
    cout << "\nThe minimum grade is : " << min ;

    return 0;

}




