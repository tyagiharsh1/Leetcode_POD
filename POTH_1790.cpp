// You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

// Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

 

// Example 1:

// Input: s1 = "bank", s2 = "kanb"
// Output: true
// Explanation: For example, swap the first character with the last character of s2 to make "bank".
// Example 2:

// Input: s1 = "attack", s2 = "defend"
// Output: false
// Explanation: It is impossible to make them equal with one string swap.
// Example 3:

// Input: s1 = "kelb", s2 = "kelb"
// Output: true
// Explanation: The two strings are already equal, so no string swap operation is required.
 

// Constraints:

// 1 <= s1.length, s2.length <= 100
// s1.length == s2.length
// s1 and s2 consist of only lowercase English letters.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        // if(s1==s2)return true;
        // int s1freMap[26]={0};
        // int s2freMap[26]={0};
        // int diff=0;
        // for(int i=0;i<s1.size();i++)
        // {
        //     char s1ch=s1[i];
        //     char s2ch=s2[i];
        //     if(s1ch!=s2ch)
        //     {
        //         diff++;
        //         if(diff>2)
        //         {
        //             return false;
        //         }
        //     }
        //     s1freMap[s1ch-'a']++;
        //     s2freMap[s2ch-'a']++;
        // }
        // for(int i=0;i<26;i++)
        // {
        //     if(s1freMap[i]!=s2freMap[i])
        //     {
        //         return false;
        //     }
        // }
        // return true;

        int firstdiff=0;
        int seconddiff=0;
        int diff=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                diff++;
                if(diff>2)return false;
                else if(diff==1)firstdiff=i;
                else seconddiff=i;
            }
        }
        return s1[firstdiff]==s2[seconddiff] && s1[seconddiff]==s2[firstdiff];


    }
};