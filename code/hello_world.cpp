#include <iostream> // These header library files that have prebuilt features
#include <cstdlib> // c in cstdlib indicates that this header file is from C

using namespace std;


int main() {
    // // Types
    // int x = 0;
    // double y = 0.01;
    // char z = 'a';
    // string a = "all range";
    // bool b = false;

    // // Output
    // cout << "Hello World \n";
    // cout << "and Hi \t He\\ll\"o ";
    
    // // Variable assignment
    // cout << "I am " << a << " Atomic\n";
    // int sum = x + y;
    // cout << sum;
    // int p = 8, q = 9, r = 10;
    // cout << p + q + r << "\n";
    
    // // Multi var assignment at once
    // int s, t, u;
    // s = t = u = 30;
    // cout << s + t + u;
    // system("PAUSE");

    // // Input - doesnt accept double i think
    // int myConstant;
    // cout << "Type a constant!";
    // cin >> myConstant;
    // cout << "Your number is" << myConstant << "\n\n";

    // // Calculate sum
    // int l, m;
    // cout << "Enter first number \n";
    // cin >> l;
    // cout << "Enter second number \n";
    // cin >> m;
    // cout << "Sum: " << l + m << "\n\n";

    // // Chars
    // char myGrade = 'Z';
    // cout << "My grade is: " << myGrade;
    // char e = 65, f = 66;
    // cout << e;

    int j = 30, k = 32;
    // // Arithmetic Operators
    // cout << j + k << "\n";
    // cout << j - k << "\n";
    // cout << j * k << "\n";
    // cout << j / k << "\n";
    // cout << j % k << "\n";
    // cout << ++j << "\n";
    // cout << --k << "\n";

    // // Assignment Operators
    // j += 5;
    // j -= 2;
    // j *= 4;
    // j /= 9;

    // https://www.programiz.com/cpp-programming/bitwise-operators
    // Bitwise operations - performed on interger or char data types at individual bit level
    // These operators are necessary as ALU arithmetic logic unit in computer's CPU performs arithmetic operations at bit level.
    // Tasks - TESTING, SETTING, SHIFTING bits
    // & AND
    // | OR 
    // ^ XOR
    // ~ Complement
    // << Shift left
    // >> Shift right

    // Decimal to binary - 4 algorithms - 2 for integers, 2 for fractions.
    // https://indepth.dev/posts/1019/the-simple-math-behind-decimal-binary-conversion-algorithms
    // Dividend / Divisor (always 2) = Quotient + Remainder. Stack the Remainders in reverse order to get the binary rep of a num 
    // Ex: 
    // 12 / 2 = 6 + 0
    // 6 / 2 = 3 + 0
    // 3 / 2 = 1 + 1
    // 1 / 2 = 0 + 1 ----> Since 2 cannot divide 1, the quotient will be 0 and the remainder is whats left which is 1.
    // Stack up the remainders in reverse order. 1100 is the binary rep of 12.

    // Fraction to binary - keep multiplying the fraction by 2 until u get 0
    // Fraction * 2 = integer part + fraction part
    // Ex: 
    // 0.375 * 2        = 0 + 0.75
    // 0.75 * 2 = 1.5   = 1 + 0.5
    // 0.5 * 2 = 1      = 1 + 0
    // Stack the integer part. So 0.375 in binary is 0.011
    // If the fraction had both integer and fraction parts like 1.345 then we have to calculate integer part separately 
    // and fraction part separately. For integer part to find its binary rep divide by 2. For fraction part multiply by 2.
    j &= 3;
    j |= 3;
    j ^= 3;
    j >>= 3;
    j <<= 3;




    // RESUME - https://www.w3schools.com/cpp/cpp_operators_assignment.asp
    return 0;
}