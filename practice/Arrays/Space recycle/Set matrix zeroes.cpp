// Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.
// Note: This will be evaluated on the extra memory used. Try to minimize the space and time complexity.

// Input Format:

// The first and the only argument of input contains a 2-d integer matrix, A, of size M x N.
// Output Format:

// Return a 2-d matrix that satisfies the given conditions.

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=A.size(),n=A[0].size();
    int r1=0,c1=0;
    for(int i=0;i<n;i++){
        if(A[0][i]==0){
            r1=1;
            break;
        }
    }
    for(int i=0;i<m;i++){
        if(A[i][0]==0){
            c1=1;
            break;
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][j]==0){
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][0]==0||A[0][j]==0)
             A[i][j]=0;
        }
    }
    if(r1==1){
        for(int i=0;i<n;i++)
         A[0][i]=0;
    }    
    if(c1==1){
        for(int i=0;i<m;i++)
         A[i][0]=0;
    }

}

