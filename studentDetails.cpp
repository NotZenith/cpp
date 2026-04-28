#include<iostream>
using namespace std;
int main(){
    int age, grade;
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"\nEnter your age:";
    cin>>age;
    cout<<"\nEnter your grade";
    cin>>grade;

    cout<<"User's name: "<<name<<"\nUser's age"<<age<<"\nUser's grade"<<grade<<endl;
    

}
