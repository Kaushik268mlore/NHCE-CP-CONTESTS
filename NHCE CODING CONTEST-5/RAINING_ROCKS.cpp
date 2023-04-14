#include <stdio.h>
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
  
void solve()
{
        int n,m;
        cin>>n>>m;
 
        char a[n][m];
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++) 
                cin>>a[i][j];
        
        //creating a 2D-matrix of n-row & m-column filled with '.'
        vector<vector<char>> ans(n,vector<char>(m,'.'));
 
        //for each column
        for(int j=0;j<m;j++)
        {
            //keeping bottom row as immovable position
            int last=n-1;                 

            for(int i=n-1;i>=0;i--)
            {
                //updating the last immovable position to top of obstacle.
                if(a[i][j]=='o') last=i-1,ans[i][j]='o';  
                
                //place the stone in immovabla position and 
                //-store its above position as immovable(decrement last)
                else if(a[i][j]=='*') ans[last--][j] = '*';
            }
        }
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<ans[i][j];
            }
            cout<<endl;
        }
}   
 


int main()
{
 
    int t=1;
    cin>>t; 
 
    for(int i=1;i<=t;i++)
    {    
        solve();
       
    }

    return 0;
}
// Problem  & SOlution by NIkhil Kumar V