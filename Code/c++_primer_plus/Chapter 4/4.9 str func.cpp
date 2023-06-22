// strtype3.cpp -- more string class features
#include <iostream>
#include <string>               // make string class available
#include <cstring>              // C-style string library
int main()
{
    using namespace std;
    char charr1[20]; 
    char charr2[20] = "jaguar"; 
    string str1;  
    string str2 = "panther";

    // strcpy():将字符串复制到字符数组中
    str1 = str2;                
    strcpy(charr1, charr2);     
 
    // strcat():将字符串附加到字符数组末尾
    str1 += " paste";           
    strcat(charr1, " juice");  

    // strlen():确认字符串中字符数
    int len1 = str1.size();     
    int len2 = strlen(charr1);  
 
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";
    // cin.get();

    return 0; 
}
