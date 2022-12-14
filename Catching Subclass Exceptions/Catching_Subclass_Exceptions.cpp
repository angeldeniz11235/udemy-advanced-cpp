#include <iostream>
#include <exception>
using namespace std;

void goesWrong() {
   bool error1Detected = true;
   bool error2Detected = false;

   if(error1Detected){
        throw bad_alloc();
   } 
   if (error2Detected){
        throw exception();
   }
}

int main(){

    try{
        goesWrong();
    } catch (exception &e) {
        cout << "Caught exception:" << e.what() << endl;
    } catch (bad_alloc &e) {
        cout << "Caught bad_alloc:" << e.what() << endl;
    }
    return 0;
}