#include<iostream>
using namespace std;

class Book{
    public: 
    int noOfPages, price;
    string name;
    string authorName;
    
    void getInfo(){

        cout<<"Enter no. of pages in the book: ";
        cin>>noOfPages;
        cin.ignore();

        cout<<"\nEnter name of author: ";
        getline(cin,authorName);


        cout<<"\nEnter price of book: ";
        cin>>price;
        cin.ignore();

        cout<<"Enter naem of book: ";
        cin>>name;
    }

    void getDetails(){
        cout<<"\nName of book: "<<name<<endl<<"number of pages: "<<noOfPages<<endl<<"name of author: "<<authorName<<endl<<"name of book: "<<name<<endl;
    }
};
    
    int main(){
        Book b;
        b.getInfo();
        b.getDetails();
    }
