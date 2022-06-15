// Zigzag Conversion

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        int r=0,i=0;  //r = current row number
        bool switchon=false; 
        vector<string> v(numRows);
        
        for(int i=0; i<s.length(); i++){ 
            v[r].push_back(s[i]);
            if(r==0) switchon = true;
            else if (r == numRows -1 ) switchon = false;
            r += switchon? 1 : -1;
            // if(switchon == true) r++;
            // else r--;
        }
        
        string result ;
        for( r=0; r<numRows; r++){
            result = result + v[r];
        }
        return result;
    }
};


// Explanation:

//     r=0 =>            P     I    N
//     r=1 =>            A   L S  I G
//     r=2 =>            Y A   H R
//     r=3 =>            P     I
    
// make the switchon true while traversing from starting row to the nth row 
// turn the switchon to false if reached the nth row

// Problem Link : https://leetcode.com/problems/zigzag-conversion/
// Disucssion Link : https://leetcode.com/problems/zigzag-conversion/discuss/2153277/C%2B%2B-Solution-or-Easy-Approach-with-explanation