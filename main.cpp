//Authors:
#include<iostream>


using namespace std;

int main(){
        string firstName;
        string lastName;
        int lucky = 0;
    cout <<  "What is your first name?"<<endl;
    cin>> firstName;
    cout<< "What is your last name?"<<endl;
    cin>> lastName;
    cout<< "Welcome, " <<firstName.at(0) <<"."  <<lastName.at(0) <<"."<< ", here is your fortune..."<< endl;
 for(int i=0; firstName[i]; i++){
    lucky++;
    }
cout << "your lucky number is "  << lucky<< endl;
    cout<< "you are destined to be famous!" <<endl;
    cout << "you should keep a low profile." << endl;

return 0;
}
