#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<< "enter 3 numbers" << endl;
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2 && n1>=n3){
        cout << "the largest number is :" << n1;
    }
    else if (n2>=n1 && n2>=n3){
        cout << "the largest number is :" << n2;  
    }
    else{
        cout << "the largest number is :" << n3;
    }
    return 1;

}