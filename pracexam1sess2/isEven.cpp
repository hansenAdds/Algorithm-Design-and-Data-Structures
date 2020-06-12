#include<iostream>
#include<vector>
using namespace std;

/* General instructions: Please modify this file and submit the modified one
 via websubmission according to the instructions for this session. 
 
 Please note, you must use recursion in answering the second question.
 */

/* Task 2: Implement the following boolean function
 */
bool is_even(int i)
{
	if (i==0){
		return true; //return true
	}
	else if (i==1){
		return false;  //return false
	}
	else{
		return is_even(i%2);  //just using % function to define output
	}
  // put recursive code for is_even here..
}

// You are not supposed to change the main function
int main() {
    // Below are the y test cases. If you pass x cases, then your mark is x/y.
    cout << is_even(1)<< endl; //
    cout << is_even(2)<< endl; //
    cout << is_even(733)<< endl; //
    cout << is_even(1026)<< endl; //
}
