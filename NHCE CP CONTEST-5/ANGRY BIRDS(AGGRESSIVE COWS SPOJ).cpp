#include <bits/stdc++.h>
using namespace std;

bool canPlaceBirds(int B, int N, vector<int> &nests, int seperation)
{
    
    int birds = 1;
    int last_location = nests[0]; 

    for (int i = 1; i <= N - 1; i++)
    {
        int current_location = nests[i];
        if (current_location - last_location >= seperation)
        {
            birds++;
            last_location = current_location;

            
            if (birds == B)
            {
                return true;
            }
        }
    }
    return false;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 
    int N;cin>>N;
    vector<int>nests(N);
    for(int i=0;i<N;i++)cin>>nests[i];
    int B;cin>>B;
    // Sort
    sort(nests.begin(), nests.end());

    // Binary Search
    int low = 0;
    int high = nests[N - 1] - nests[0]; // max distance
    int answer = -1;                    // no such config is possible as of now.

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // If it's feasible to place B number of birds in these nests as mid position

        bool canPlace = canPlaceBirds(B, N, nests, mid); // birds, nest, seperation
        if (canPlace == true)
        {
            answer = mid;  // potential answer
            low = mid + 1; // check for bigger number (maximise it)
        }
        else
        {
            high = mid - 1; // check for left side.
        }
    }

    cout << answer << endl;

    return 0;
}
