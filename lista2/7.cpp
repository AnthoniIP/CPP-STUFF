#include <iostream>
using namespace std;

int main(void)
{
    for(int i = 1000; i<= 1999;i++) {
        if(i % 11 == 5) {
            cout << i << endl;
        }
    }
}