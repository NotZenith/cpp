#include<iostream>
using namespace std;

class Addition {
public:
    int n1, n2;
    
    void getSum() {
        int sum = n1 + n2;
        int average = (n1 + n2) / 2;
        
        cout << "n1 = " << n1 << endl;
        cout << "n2 = " << n2 << endl;
        cout << "sum = " << sum << endl;
        cout << "average = " << average << endl;
    }
};

int main() {
    Addition a;
    cout << "Enter n1: ";
    cin>>a.n1;
    cout<<"enter n2: ";
    cin>>a.n2;
    
    
    a.getSum();
    
    return 0;
}
