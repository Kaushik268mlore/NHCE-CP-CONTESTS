#include <stdio.h>
#include<bits/stdc++.h>
#include <sstream>
#include <iostream>
using namespace std;

 
#define ld long double
#define ll long long int 

#define EE endl
#define RR return

int main()
{


    int test_case;
    cin>>test_case;
     
     for(int i=1;i<=test_case;i++)
    {

        int no_Of_Holes , basket_size;
        cin>> no_Of_Holes >> basket_size;

        vector<int> holes(no_Of_Holes);
        for(int i=0; i<no_Of_Holes ;i++) cin>>holes[i];
     
        int steps = 1;
        
        for(int i=0; i<no_Of_Holes ;i++)
        {
            holes[i] += steps;
            steps++;
        }
     
        int honey_pots =0;
     
        sort(holes.begin(),holes.end());

        for(int i=0; i<no_Of_Holes ;i++)
        {
            if( basket_size >= holes[i])
            {
                basket_size -= holes[i];
                honey_pots++;
            }
            else
            {
                break;
            }
        }
     
        cout<< honey_pots <<EE;


    }
    
    return 0;
 
}   



    

    