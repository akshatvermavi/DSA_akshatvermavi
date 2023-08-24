#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

string multiplyStrings(string s1, string s2) {
    cpp_int a(s1);
    cpp_int b(s2);
    cpp_int c = a * b;
    return c.str();
}

int main() {
    string s1 = "123456789012345678901234567890";
    string s2 = "987654321098765432109876543210";
    
    string result = multiplyStrings(s1, s2);
    
    cout << "Product: " << result << endl;
    
    return 0;
}
