#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count=0;
    cout << "Please input chapter (end with '#')" << endl;
    cin >> ch;
    while (ch != '#')
    {
        ++count;
        cout << ch;
        cin >> ch;
    }
    cout << "The are " << count << " characters." << endl;
    cout << "Over" << endl;
    return 0;
}