# NHCE CODING CONTEST 2 (EDITORIAL)

THIS IS ONE OF THE CODING CONTESTS HELD BY THE CODING CLUB OF NHCE 

[Contest Link](www.hackerrank.com/nhce-coding-contest-2)


## Acknowledgements
Problem Setters
 - [Kaushik Kumar](https://kaushikk.bio.link)
 - [Samit Mohan](https://linktr.ee/samitmohan)
 - [Nikhil Kumar V](https://codeforces.com/profile/nikhilkumarv)
 - [Vinayak Sonar](https://www.codechef.com/users/dev1ce_io)
 <br>
 
#
## [Operations on String 1](https://www.hackerrank.com/contests/nhce-coding-contest-2/challenges/operations-on-strings-1) 
<br>
Time Complexity: <i> O(n*m)</i><br>

[Find it on leetcode](https://leetcode.com/problems/edit-distance/solutions/3230613/day-57-recursive-memoization-dp-c-easiest-beginner-friendly-sol/?languageTags=python3&topicTags=recursion)

**Intuition :**<br>
Here we have to find the minimum edit distance problem between two strings s1 and s2.<br>
The minimum edit distance is defined as the minimum number of operations required to transform one string into another.

**Approach :** <br>
The approach here that I am using is dynamic programming. The idea is to build a 2D matrix dp where dp[i][j] represents the minimum number of operations required to transform the substring s1[0...i-1] into the substring s2[0...j-1].

s1 = abc<br>
s2 = abc<br>
acd<br>
b (i) and c(j) not equal : insert, delete, replace :

***Insert :*** acbd : now no need to move i pointer, need to find b in s2<br>
    operations = 1 (shift pointer) : (i, j + 1) : 1 operation
    
**Delete :** (i + 1, j) : abd : ad and acd remains same : 1 operation

**Replace :** from s1 that shows up in s2 : abd replace b with c : acd now s1 = s2 : (i + 1, j + 1) (same as equal) : 1 operation

[Similar to LCS Problem](https://www.geeksforgeeks.org/python-program-for-longest-common-subsequence/)

[C++/Java Solution](https://leetcode.com/problems/edit-distance/solutions/3230613/day-57-recursive-memoization-dp-c-easiest-beginner-friendly-sol/) 
<br>

[Samit's solution](https://github.com/Kaushik268mlore/NHCE-CP-CONTESTS/blob/main/NHCE%20CODING%20CONTEST-2/Operations_On_Strings.py)
#
## [BIBBA & BIBBI](https://www.hackerrank.com/contests/nhce-coding-contest-2/challenges/bibba-bibbi)<br>
Time Complexity : *O(1)* <br>
**`Intuition:`** <br> 
<i>```In a pile of n objects and if you are supposed to pick at-most 'k' objects in the end of the game if there are 'k+1' objects , then you'll alwways loose , so inorder to win you make sure that there are no 'k+1' objects available . ```</i><br>
This is also known as [**Sprague-Grundy Theorem**](https://brilliant.org/wiki/sprague-grundy-theorem/)

**`Approach:`** <br>
Just check if (n % (k+1)) is 0 , in that case you'll always leave one Pan Cake for BIBBA ,hence he'll win , if not BIBBI will win .
<br>

[Kaushik's Solution](https://github.com/Kaushik268mlore/NHCE-CP-CONTESTS/blob/main/NHCE%20CODING%20CONTEST-2/BIBBA%26BIBBI.cpp)
#
## [Bunny Hunts Honey](https://www.hackerrank.com/contests/nhce-coding-contest-2/challenges/bunny-hunts-honey)<br>
**`Intuition & Approach:`** <br>
As we understood from problem statement bunny has to jump till that hole for sure to enter that hole .
For example consider the test case two explained in the problem statement 
that is 

 N=8, B=32<br>
100 52 13 6 9 4 100 35

----------------------------------------------------------------

Bunny has to jump 1 step from start to enter the first hole having 100 carrots, therefore bunny needs to have a basket with size of greater then or equal to ( 1 + 100 ). 100 for the carrots in hole and 1 carrot it got from god because of 1 jump.

Bunny has to jump 2 step from start to enter the second hole having 52 carrots, therefore bunny needs to have a basket with size of greater then or equal to (2 + 52 ). 52 for the carrots in hole and 2 carrot it got from god because of 2 jump.

Bunny has to jump 4 step from start to enter the forth hole having 6 carrots, therefore bunny needs to have a basket with size of greater then or equal to (4 + 6 ). 6 for the carrots in hole and 4 carrot it got from god because of 4 jump.
and soo on .

----------------------------------------------------------------

By this observation its optimal to add number of jumps reqiured to reach each hole to the number of carrots given it self 
there for the above test case becomes as follows

<br>
N=8, B=32 <br>
(100+1) (52+2) (13+3) (6+4) (9+5) (4+6) (100+7) (35+8) <br>
after addition:
<br>N=8, B=32<br>
101 54 16 10 14 10 107 43<br>

-----------------------------------------------------------------------
<br>
Now we get to see total number of carrots needed to be collected in order to enter each hole and eat that honey_pot from that hole.

From this array [101 54 16 10 14 10 107 43], its optimal that bunny has to select hole having lesser Total-carrots to be collected and it should be lesser than or equal to basket size.

Therefore bunny will select 4th hole where it has to collect 10 carrots in total( remaining size of basket = 32-10 = 22)<br>
Then bunny will select 6th hole where it has to collect 10 carrots in total( remaining size of basket = 22-10 = 12)<br>
now remaining size of basket is 12 and all other hole's carrot are greater than remaining size of other carrots in the array.

therefore total holes bunny entered and eat honey-pot is 2.<br>

-----------------------------------------------------------------------
By this 2nd observation, we can say that we hav to select the holes having lesser carrots first then bigger once, so its optimal to sort the array first.<br>
Therefore the array becomes 

10 10 14 16 43 54 101 107

After this, keep adding these integers into a variable until sum is strictly lessser that or equal to max size of bag(B=32)<br> 
At last return the count of total blocks of these integers got added that will be final solution. 

cnt=0,sum=0,B=32;<br>
arr = {10 10 14 16 43 54 101 107}
<it>

1) (sum+a[0])<=B <br>
	sum+=a[0];   //sum=10;<br>
	cnt++;	     //cnt=1;<br>
2) (sum+a[1])<=B <br>
	sum+=a[1]     //sum=20;<br>
	cnt++; 		//cnt=2;<br>

3) (sum+a[2]) > B	//34 > 32<br>
	so break;<br>
	return cnt;	 //cnt=2;
    
</it>

-----------------------------------------------------------------------

Time complexity => *[ traversing the given array = O(n) ]+ [ sorting = O(n*log(n)) ] <br>
i.e O(n*log(n))* <br>

[Nikhil's Solution](https://github.com/Kaushik268mlore/NHCE-CP-CONTESTS/blob/main/NHCE%20CODING%20CONTEST-2/Bunny_Hunts_honey.cpp)		   
#

