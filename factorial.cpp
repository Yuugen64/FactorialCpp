#include <iostream>

using namespace std;

void testPalindrome(int a)
{
    int reverseNum = 0;
    int remainder;
    //This is for holding the passed variable for comparison because the original will be truncated upon division by 10.
    int myNumHolder;

    myNumHolder = a;

    cout << "The number to test for palindrome: " << a << endl;

    while( a > 0 )
    {
        remainder = a % 10;
        a = a / 10;
        reverseNum = (reverseNum * 10) + remainder;
    }

    cout << "The remainder is: " << remainder << endl;
    cout << "The reverseNum is: " << reverseNum << endl;

    if (reverseNum == myNumHolder)
    {
        cout << "The number entered (" << myNumHolder << ") is a palindrome. " << endl;
    }
    else
    {
        cout << "The number entered (" << myNumHolder << ") is NOT a palindrome. " << endl;
    }
}

int main()
{
    /*A factorial is ' n! = n * (n - 1) * (n - 2) * (n - 3) ... '
    - Basically it is the product of all postive integers less than
    n. 1's factorial is 1, because 0 is not counted as a positive integer,
    and 0's factorial is 1 because it is not positive, but cannot be factorial-nothing since
    it is still a number, therefore it is 1.
    
    Common Factorials To derive our Algorithm from:
    n   |   n!
    ----------
    0       1
    1       1
    2       2
    3       6
    4       24
    5       120
    6       720
    7       5,040
    */

    //Declare variables
    //myFactorial is the actual Factorial that has to go from 1 to whatever # anyway.
    //'n' is the 'limit' that the user will enter, this keeps our user control and our algorithm separate.
    int n = 0;
    int myFactorial = 1;

	cout<<"Please enter the number that you want the factorial (Less than 25) for: " << endl;
    cin>>n;

    //DYNAMICALLY Declare AND Initialize the counter for the loop inside the loop.
	for(int i = 1; i <= n; i++)
	{
		myFactorial = myFactorial * i;
	}

	cout<<"The factorial of "<< n <<" is "<< myFactorial <<endl;

    testPalindrome(n);

    //Hold the window open.
    cout << "Type any number and press ENTER to exit." << endl;
    cin >> n;

    //Exit code
    return 0;
}

