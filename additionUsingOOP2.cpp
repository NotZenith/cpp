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
    
    a.n1 = 10;
    a.n2 = 20;
    
    a.getSum();
    
    return 0;
}
