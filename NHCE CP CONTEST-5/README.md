## FILES AND PAPERS 
[FILES AND PAPERS] (https://www.hackerrank.com/contests/nhce-cp-contest-5/challenges/files-and-papers)
You have N papers and K files. You want to divide the N papers into K files such that:

Each file contains ≥ 1 papers.
No two files contain the same number of papers.
Determine if it is possible to do so.

Input Format

The first and only line of each test case contains two space-separated integers N and K— the number of papers and the number of files respectively.

Constraints

1 ≤ N ≤ 10^9
1 ≤ K ≤ 10^4
Output Format

For each test case, output YES if it is possible to divide the N papers into K files such that the conditions are satisfied. Otherwise, output NO.

Sample Input 0

3 4
Sample Output 0

NO

## [ANGRY BIRDS] (https://www.hackerrank.com/contests/nhce-cp-contest-5/challenges/angry-birds)

There is a long wire along a straight line which contains N bird nests at positions x1, x2 .. xN.

There are B birds (Given : B<=N) who are angry towards each other once put into a nest. Obviously you do not want them to be angry and destroy all the nests.

To put birds from hurting each other you want to assign birds to nests such that minimum distance between 2 birds is maximum so that they don't fight. What is the minimum distance?

Input Format

First line contains number of nests.
Next line contains the positions of next (x1, x2, x3 ...)
Next line contains number of birds (Birds <= Nests)
Constraints

1 ≤ N ≤ 100000 1 ≤ B ≤ N

Output Format

Minimum distance between 2 birds to keep them from fighting is returned (Format : Integer)

Sample Input 0

5 
1 2 4 8 9 
3
Sample Output 0

3

## [DIRTY CHARS] (https://www.hackerrank.com/contests/nhce-cp-contest-5/challenges/dirty-chars)
You are given a string s, which contains any of the special characters(!,@,#,$,*,).

These Characters are considered dirty and you are asked to perform the following operations for its riddance.

Choose a special character in s.
Remove the closest non-DIRTY CHAR to its left, as well as remove the DIRTY CHAR itself.
Input Format

THE FIRST LINE IS AN INTEGER "T" WHICH IS THE NUMBER OF TESTCASES.
THEN WE HAVE THE SIZE OF THE STRING "N",FOR EACH TESTCASE
THEN WE HAVE THE STRING OF SIZE "N".
Constraints

1<=T<=100000

2<=N<=1000

Output Format

PRINT THE CLEANSED STRING AFTER REMOVING THE DIRTY CHARS

Sample Input 0

2
10
erase*****
22
hackck!*errr$@rara*#nk
Sample Output 0

'\n'
hackerrank
Explanation 0

IN TEST CASE 1 : AFTER ALL THE OPERATIONS WE GET A NULL STRING.
IN TEST CASE 2 : SELF EXPLANATORY.
