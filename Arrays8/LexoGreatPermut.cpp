
//Program to find next lexo greater permutation


/*Brute force
Time Complexity: O(N!*N)
Space Complexity: O(1)
*/ 

#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermut(vector<int> &A )
{
	int ind=-1;
	int n= A.size();
	for(int i=n-2;i>=0;i--)
		if(A[i]<A[i+1]){
			ind=i;
			break;	
		}
		
	if(ind == -1){
		reverse(A.begin(),A.end());
		return A;
	}
	
	for(int i=n-1; i>ind; i--)
	{
		if(A[i] > A[ind]){
			swap(A[i],A[ind]);
			break;
		}
		
	}
	
	reverse(A.begin()+ind+1,A.end());	
	return A;
}

/*Optimal Complexity
Time Complexity: O(3N)
Space Complexity: O(1)
*/

int main()
{
		
		
    vector<int> arr;
    string input;
    getline(cin, input);                  //getting the input in single line
    istringstream is(input);              // traferring it to stream
    int num;
    while(is>>num) arr.push_back(num);	  //transferring it to array
    
    nextGreaterPermut(arr);
    
    copy(arr.begin(),arr.end(),ostream_iterator<int>(cout," "));	//printing vector in one line
     
	/* for(int i:arr){
    	cout<<i<< " ";
	}  */
		
	return 0;
        
}
