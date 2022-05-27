// Given a positive integer n and a string s consisting only of letters D or I, you have to find any permutation of first n positive integer that satisfy the given input string.

// D means the next number is smaller, while I means the next number is greater.

// Notes

// Length of given string s will always equal to n - 1
// Your solution should run in linear time and space.

vector<int> Solution::findPerm(const string A, int B) {
    vector<int> res;
    int max = B;
    int min =1;
    for(int i=B-2 ; i>=0  ; i--){
        if(A[i] == 'I'){
            res.push_back(max);
            max--;
        }
        else{
            res.push_back(min);
            min++;
        }
    }
    res.push_back(max);
    reverse(res.begin(),res.end());
    return res;
}