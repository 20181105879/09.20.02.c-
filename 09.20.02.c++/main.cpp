#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>
using namespace std;
string s1[100];
string s2[100];
int main() {
    int n;
    cin>>n;
    int m;
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m==1)
        {
            cin>>s1[j];
            j++;
        }
        else{
            cin>>s2[k];
            k++;
        }
    }
    
    
    
    
    
    return 0;
}
