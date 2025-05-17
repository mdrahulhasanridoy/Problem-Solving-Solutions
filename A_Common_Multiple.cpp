#include <iostream>
#include <set>          // For using std::set to store unique elements
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // Speeds up input/output
    cin.tie(NULL);               // Unties cin from cout for faster input
    cout.tie(NULL);              // Unties cout from cin for faster output

    int x;                       // Number of test cases
    cin >> x;                    // Read number of test cases

    while(x--){                  // Loop over each test case
        int y;                   // Length of the array for this test case
        cin >> y;                // Read the length

        /*What is a set?
            A set in C++ is like a magic box that only keeps unique numbers.
            If you try to put the same number in twice, it will only keep one copy.*/
        set<int> unique;         // Create a set to store unique elements

        for(int i = 0; i < y; ++i){ // Loop to read all elements of the array
            int num;
            cin >> num;              // Read each element
            unique.insert(num);      // Insert into set (duplicates are ignored)
        }

        cout << unique.size() << '\n'; // Output the number of unique elements
    }
    return 0;
}
