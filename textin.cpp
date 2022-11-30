// The puropse of this program is ending the text read by EOF
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count=0;
    cout << "Please input the text you want: " << endl;
    cin.get(ch);
    while (cin.fail()==false)
    {
        ++count;
        cin.get(ch);
        cout << ch << endl;
    }
    cout << endl;
    cout << "There are " << count << "characters." << endl;
    return 0;
}