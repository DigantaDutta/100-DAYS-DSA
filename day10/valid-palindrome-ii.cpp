#include <bits/stdc++.h> 
using namespace std; 

bool ispalindrome(string s, int i, int j){
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i] == s[j]){
                j--;
                i++;
            }else{
                 return ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1);
            } 
        }
        return true;
    }

    int main() 
{ 
	string str = "Toohotctohoot"; 

	if (validPalindrome(str)) 
		cout << "Sentence is palindrome."; 
	else
		cout << "Sentence is not palindrome."; 

	return 0; 
} 