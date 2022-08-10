#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong(){
        int maxInt = 2147483647;
        char *pMemory = new char[maxInt*1000^4];
        delete [] pMemory;
    }
};

int main(){
    
   try {
     CanGoWrong cgw;
   } catch (bad_alloc &e) {
        cout << "Caught exception:" << e.what() << endl;
   }
   cout << "Program continues" << endl;
    return 0;
}
