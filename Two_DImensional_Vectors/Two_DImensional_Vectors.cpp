#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector< vector<int> > grid(3, vector<int>(4, 7));

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
