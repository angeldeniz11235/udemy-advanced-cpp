#include <iostream>
using namespace std;

void mightGoWrong()
{
    bool error1 = false;
    bool error2 = true;

    if (error1)
    {
        throw "Something went wrong";
    }

    if (error2)
    {
        throw string("Something else went wrong");
    }
}

int main()
{

    try {
        mightGoWrong();
    } catch (int e) {
        cout << "Exception: " << e << endl;
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    } catch (string &msg) {
        cout << "Exception: " << msg << endl;
    } catch (...) {
        cout << "Unknown exception" << endl;
    }
    cout << "Program continues" << endl;
    return 0;
}