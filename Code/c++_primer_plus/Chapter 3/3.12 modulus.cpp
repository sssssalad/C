// modulus.cpp -- uses % operator to convert lbs to stone
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;//1英石=14磅
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // whole stone整除取整
    int pounds = lbs % Lbs_per_stn;     // remainder in pounds余数
    cout << lbs << " pounds are " << stone
         << " stone, " << pounds << " pound(s).\n";
    // cin.get();
    // cin.get();
    return 0; 
}
