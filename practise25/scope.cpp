#include <iostream>
int main()
{
    for (int val = 1; val <= 10; ++val)
    {
        cout << "sum of 1 to 10 inclusive is" << sum << endl;
        another_func();
        return 0;
    }
    int another_func()
    {
        cout << "This is antoher function outside main";
        return 0;
    }
}