//for loop
#include<iostream>
using namespace std;
   
int main(){
    int i, n = 5;
    
    cout << "The numbers from 1 to "<<n<<" are: \n";
    for(i=1; i<=n; ++i) {
        cout << i << "\t";
    }
    return 0;
    
}