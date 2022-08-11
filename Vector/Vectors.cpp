#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{

    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    vector<string>::iterator it = strings.begin();
    while (it != strings.end())
    {
        cout << *it << endl;
        it++;
    }
    return 0;
}
