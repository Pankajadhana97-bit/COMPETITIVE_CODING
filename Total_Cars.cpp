#include <bits/stdc++.h> 
using namespace std; 
  
void findCount(string s, int L, int R) 
{ 
    int distinct = 0; 
    int frequency[26] = {}; 
    for (int i = L; i <= R; i++) { 
        frequency[s[i] - 'a']++; 
    } 
    for (int i = 0; i < 26; i++) { 
        if (frequency[i] > 0) 
            distinct++; 
    } 
    cout << distinct << endl; 
} 
int main() 
{ 
    string s;
    cin>>s; 
    int queries; 
    cin>>queries;
    int Q[queries][2];
    for(int j=0;j<queries;j++)
    {
    cin>>Q[j][0];
    cin>>Q[j][1];
    }
    for (int i = 0; i < queries; i++) 
        findCount(s, Q[i][0], Q[i][1]);
    return 0; 
} 