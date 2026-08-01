#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "Enter a String:";
    getline(cin,s);
    int i=0;
    int j=s.length()-1;
    while (i <j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout << "Reversed String :" << s << endl;

    return 0;
}