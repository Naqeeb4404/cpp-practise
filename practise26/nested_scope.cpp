#include <iostream>
using namespace std;
int reused = 42; // reused has global scope
int main()
{
    int unique = 0; // unique has block scope
                    // output #1: uses global reused; prints 42 0
    cout << reused << " " << unique << endl;
    int reused = 0; // new, local object named reused hides global reused
                    // output #2: uses local reused; print 0 0
    cout << reused << " " << unique << endl;
    // output #3: explicitly request the global reused; print 42 0
    cout << ::reused << " " << unique << endl;
    return 0;
}