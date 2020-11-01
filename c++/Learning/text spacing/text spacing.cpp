/*Formatting Output
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    std::cout << a;
    std::cout << "\t" << b;
    std::cout << "\t" << c << "\n";
    std::cout << aa;
    std::cout << "\t" << bb;
    std::cout << "\t" << cc << "\n";
    std::cout << aaa;
    std::cout << "\t" << bbb;
    std::cout << "\t" << ccc << "\n";

    return 0;
}