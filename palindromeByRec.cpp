// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool palindromeRec(string s,int start,int end){
    //base condtion
    if(start>=end){
        return true;
    }
    //call the function
    if(s[start]==s[end]){
       return palindromeRec(s,start+1,end-1);
    }
    else{
        return false;
    }
}
int main() {
    // Write C++ code here
    //palindrome
    string s;
     cin >> s;
     int len = s.size()-1;
    if(palindromeRec(s,0,len)){
        cout<< "Palindrome\n";
    }
    else{
        cout<< "Not a Palindrome\n";
    }

    return 0;
}