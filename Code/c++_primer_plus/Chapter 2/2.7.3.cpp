#include <iostream>
using namespace std;
void a();
void b();

int main() 
{   
    a();a();
    b();b();
    /*cin.get();*/
    return 0; 
}

void a() {
    cout << "Three blind mice" << endl;
}
void b() {
    cout << "See how they run" << endl;
}