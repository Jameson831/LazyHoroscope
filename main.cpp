//Authors:
#include<iostream>


using namespace std;

int main(){
        string firstName;
        string lastName;
        int lucky = 0;
        int lastLetter;
    cout <<  "What is your first name?"<<endl;
    cin>> firstName;
    cout<< "What is your last name?"<<endl;
    cin>> lastName;
    cout<< "Welcome, " <<firstName.at(0) <<"."  <<lastName.at(0) <<"."<< ", here is your fortune... "<< endl;
 for(int i=0; firstName[i]; i++){
    lucky++;
    }
cout << "your lucky number is "  << lucky<< endl;
if (firstName[0] == 'a' || firstName [0] == 'A' ||firstName[0] == 'e' || firstName[0] == 'E' ||
    firstName[0] == 'I' || firstName[0] == 'i' || firstName[0] == 'o' || firstName[0] == 'O' || 
    firstName[0] == 'u' || firstName[0] == 'U') {
    cout<< "you are destined to be famous!" <<endl;
    }
else{
    cout << "you should keep a low profile." << endl;
    } 
 for (int i =0; lastName[i]; ++i){ 
     lastLetter = i;
     }
if (lastName[lastLetter]== 'a' || lastName[lastLetter] == 'A' || lastName[lastLetter] == 'e' ||
     lastName[lastLetter] == 'E' || lastName[lastLetter] == 'o' || lastName[lastLetter] == 'O' || 
     lastName[lastLetter]== 'i' || lastName[lastLetter] == 'I' || lastName[lastLetter] == 'U' ||
     lastName[lastLetter] == 'u' ){
    cout<< "you have already met your true love." <<endl;
    }
cout << "have a good day!"<<endl; 

return 0;
}
