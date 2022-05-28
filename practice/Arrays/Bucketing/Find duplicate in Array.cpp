// Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.
// Sample Input:

// [3 4 1 4 1]

// Sample Output:

// 1

// If there are multiple possible answers ( like in the sample case above ), output any one.

// If there is no duplicate, output -1

int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> B = A;
    int n = B.size();
    sort(B.begin(), B.end());
    int i;
    for(i=0; i<n-1; i++){
        if(B[i]==B[i+1]){
            break;
        }
    }
    return B[i];
}
