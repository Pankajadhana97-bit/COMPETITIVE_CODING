#include <bits/stdc++.h> 
using namespace std; 
  
void findCount(string s, int L, int R) 
{ 
    int distinct = 0; 
   
    int frequency[26] = {}; 
  
    for (int i = L; i <= R; i++) { 
  
        // incrementing the count 
        // of s[i] character in frequency array 
        frequency[s[i] - 'a']++; 
    } 
  
    for (int i = 0; i < 26; i++) { 
  
        // if frequency of any character is > 0 
        // then increment the counter 
        if (frequency[i] > 0) 
            distinct++; 
    } 
  
    cout << distinct << endl; 
} 
  
/* Driver code*/
int main() 
{ 
    string s = "geeksforgeeksisacomputerscienceportal"; 
    int queries = 3; 
    int Q[queries][2] = { { 0, 10 }, 
                          { 15, 18 }, 
                          { 12, 20 } }; 
  
    for (int i = 0; i < queries; i++) 
        findCount(s, Q[i][0], Q[i][1]); 
  
    return 0; 
} 