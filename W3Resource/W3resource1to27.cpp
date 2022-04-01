#include <iostream>
#include <limits>
#include <climits>
#include <cfloat>
#include <iomanip> //Allows for setting the precision of the outputs
#include <cmath>

int main()
{
    system("cls");
    std::cout << "Hello World" << std::endl;
    std::cout << std::endl;

    std::cout << "The sum of 20 and 30 is " << 20 + 30 << std::endl;
    std::cout << std::endl;

    std::cout << "Size of char: " << sizeof(char) << " bytes." << std::endl;
    std::cout << "Size of short: " << sizeof(short) << " bytes." << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes." << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes." << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes." << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes." << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes." << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes." << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes." << std::endl;
    std::cout << std::endl;

    int num1 = 20, num2 = 30;
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << std::endl;
    std::cout << std::endl;

    std::cout << "The maximum value of int is: " << INT_MAX << " and the minimum value is: " << INT_MIN << std::endl;
    std::cout << "The maximum value of an unsigned int is: " << UINT_MAX << std::endl;
    std::cout << "The maximum value of a long long is: " << LLONG_MAX << " and the minimum value is: " << LLONG_MIN << std::endl;
    std::cout << "The maximum value of an unsigned long long is: " << ULLONG_MAX << std::endl;
    std::cout << "The maximum value of a char is: " << CHAR_MAX << " and the minimum value is: " << CHAR_MIN << std::endl;
    std::cout << "The maximum value of a signed char is: " << SCHAR_MAX << " and the minimum value is: " << SCHAR_MIN << std::endl;
    std::cout << "The maximum value of an unsigned char is: " << UCHAR_MAX << std::endl;
    std::cout << "The maximum value of a short is: " << SHRT_MAX << " and the minimum value is: " << SHRT_MIN << std::endl;
    std::cout << "The maximum value of an unsigned short is: " << USHRT_MAX << std::endl;
    std::cout << std::endl;

    char Gender = 'F';
    bool isMarried = true;
    unsigned short numofSons = 2;
    short yearappoint = 2009;
    unsigned int Salary = 1500000;
    float height = 79.48f;
    float GPA = 4.69f;
    long totalDraw = 12047235L;
    long long Balance = 995324987LL;
    std::cout << "The Gender is: " << Gender << std::endl;
    std::cout << "Are they married: " << isMarried << std::endl;
    std::cout << "Number of sons: " << numofSons << std::endl;
    std::cout << "Year Appointed: " << yearappoint << std::endl;
    std::cout << "Salary: " << Salary << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "GPA: " << GPA << std::endl;
    std::cout << "Salary Drawn: " << totalDraw << std::endl;
    std::cout << "Balance: " << Balance << std::endl;
    std::cout << std::endl;

    int int1 = 5, int2 = 7;
    double doub1 = 3.7, doub2 = 8.0;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << int1 << " + " << int2 << " = " << int1 + int2 << std::endl;
    std::cout << doub1 << " + " << doub2 << " = " << doub1 + doub2 << std::endl;
    std::cout << int1 << " + " << doub2 << " = " << int1 + doub2 << std::endl;
    std::cout << int1 << " - " << int2 << " = " << int1 - int2 << std::endl;
    std::cout << doub1 << " - " << doub2 << " = " << doub1 - doub2 << std::endl;
    std::cout << int1 << " - " << doub2 << " = " << int1 - doub2 << std::endl;
    std::cout << int1 << " * " << int2 << " = " << int1 * int2 << std::endl;
    std::cout << doub1 << " * " << doub2 << " = " << doub1 * doub2 << std::endl;
    std::cout << int1 << " * " << doub2 << " = " << int1 * doub2 << std::endl;
    std::cout << int1 << " / " << int2 << " = " << int1 / int2 << std::endl;
    std::cout << doub1 << " / " << doub2 << " = " << doub1 / doub2 << std::endl;
    std::cout << int1 << " / " << doub2 << " = " << int1 / doub2 << std::endl;
    std::cout << std::endl;

    int maximum = 2147483647, minimum = -2147483648;
    std::cout << "Overflow the integer range and set in minumum range: " << maximum + 1 << std::endl;
    std::cout << "Increasing from it's minimum range: " << maximum + 2 << std::endl;
    std::cout << "Product is: " << maximum*maximum << std::endl;
    std::cout << std::endl;
    std::cout << "Underflow the range and set in maximum range: " << minimum - 1 << std::endl;
    std::cout << "Decreasing from it's maximum range: " << minimum - 2 << std::endl;
    std::cout << "Product is: " << minimum*minimum << std::endl;
    std::cout << std::endl;

    int int3 = 57;
    std::cout << "The number is: " << int3 << std::endl;
    int3++;
    std::cout << "After post increment the number is: " << int3 << std::endl;
    ++int3;
    std::cout << "After pre incremment the number is: " << int3 << std::endl;
    int3 = int3 + 1;
    std::cout << "After increasing by 1 the number is: " << int3 << std::endl;
    int3--;
    std::cout << "After post decrement the number is: " << int3 << std::endl;
    --int3;
    std::cout << "After pre decrement the number is: " << int3 << std::endl;
    int3 = int3 - 1;
    std::cout << "after decreasing by 1 the number is: " << int3 << std::endl;
    std::cout << std::endl;

    double pi = 3.141592654;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "The value of pi: " << pi << std::endl;
    std::cout << "The value of pi to 4 decimal places of total width 8 is: |" << std::setw(8) << pi << "|" << std::endl;
    std::cout << "The value of pi to 4 decimal places of total width 10 is: |" << std::setw(10) << pi << "|" << std::endl;
    std::cout << std::setfill('-');
    std::cout << "The value of pi to 4 decimal places of total width 8 is: |" << std::setw(8) << pi << "|" << std::endl;
    std::cout << "The value of pi to 4 decimal places of total width 10 is: |" << std::setw(10) << pi << "|" << std::endl;
    std::cout << std::scientific;
    std::cout << "The value of pi in scientific format is: " << pi << std::endl;
    bool done = false;
    std::cout << "Status in number: " << done << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Status in alphabet: " << done << std::endl;
    std::cout << std::endl;
    std::cout << std::defaultfloat;

    std::cout << "The result of the first operation is: " << (2*10) + 3 << std::endl;
    std::cout << "The result of the second operation is: " << (12-7) << std::endl;
    std::cout << "The result of the third operation is: " << (30/3) + 2 << std::endl;
    std::cout << "The result of the fourth operation is: " << (12%9) << std::endl;
    std::cout << std::endl;

    int input1, input2;
    std::cout << "Input 1st number: ";
    std::cin >> input1;
    std::cout << "Input 2nd number: ";
    std::cin >> input2;
    std::cout << "The sum of the two numbers is: " << input1 + input2 << std::endl;
    std::cout << std::endl;

    int input3, input4;
    std::cout << "Input 1st number: ";
    std::cin >> input3;
    std::cout << "Input 2nd number: ";
    std::cin >> input4;
    std::cout << "After swapping the 1st number is: " << input4 << std::endl;
    std::cout << "After swapping the 2nd number is: " << input3 << std::endl;
    std::cout << std::endl;

    double radius;
    float volsphere;
    std::cout << "Input the radius of a sphere: ";
    std::cin >> radius;
    volsphere = (4*3.14*radius*radius*radius)/3;
    std::cout << "The volume of the sphere is: " << volsphere << std::endl;
    std::cout << std::endl;

    double side;
    float volcube;
    std::cout << "Input the side of a cube: ";
    std::cin >> side;
    volcube = side*side*side;
    std::cout << "The volume of the cube is: " << volcube << std::endl;
    std::cout << std::endl;

    double radius2, height2;
    float volcylinder;
    std::cout << "Input the radius of a cylinder: ";
    std::cin >> radius2;
    std::cout << "Input the height of a cylinder: ";
    std::cin >> height2;
    volcylinder = 3.14*radius2*radius2*height2;
    std::cout << "The volume of the cylinder is: " << volcylinder << std::endl;
    std::cout << std::endl;

    int length, width, area, perimeter;
    std::cout << "Input the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Input the width of the rectangle: ";
    std::cin >> width;
    area = length*width;
    perimeter = (2*length) + (2*width);
    std::cout << "The area of the rectangle is: " << area << std::endl;
    std::cout << "The perimeter of the rectangle is: " << perimeter << std::endl;
    std::cout << std::endl;

    float side1, side2, side3, s, areatri;
    std::cout << "Input the length of side 1: ";
    std::cin >> side1;
    std::cout << "Input the length of side 2: ";
    std::cin >> side2;
    std::cout << "Input the length of side 3: ";
    std::cin >> side3;
    s = (side1+side2+side3)/2;
    areatri = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    std::cout << "The area of the triangle is: " << areatri << std::endl;
    std::cout << std::endl;

    double radius3, areacircle, circumference;
    std::cout << "Input the radius of the circle: ";
    std::cin >> radius3;
    circumference = 2*3.14*radius3;
    areacircle = 3.14*radius3*radius3;
    std::cout << "The area of the circle is: " << areacircle << std::endl;
    std::cout << "The circumference of the circle is: " << circumference << std::endl;
    std::cout << std::endl;

    float cel1, fah1;
    std::cout << "Input a temperature in Celsius: ";
    std::cin >> cel1;
    fah1 = (9.0/5)* cel1 + 32;
    std::cout << "The temperature in Celsius is: " << cel1 << std::endl;
    std::cout << "The temperarure in Fahrenheit is: " << fah1 << std::endl;
    std::cout << std::endl;

    float fah2, cel2;
    std::cout << "Input a temperature in Fahrenheit: ";
    std::cin >> fah2;
    cel2 = (fah2 - 32) * (5.0/9);
    std::cout << "The temperarure in Fahrenheit is: " << fah2 << std::endl;
    std::cout << "The temperature in Celsius is: " << cel2 << std::endl;
    std::cout << std::endl;

    int angle1, angle2, angle3;
    std::cout << "Input the first angle of the triangle: ";
    std::cin >> angle1;
    std::cout << "Input the second angle of the triangle: ";
    std::cin >> angle2;
    angle3 = 180 - angle1 - angle2;
    std::cout << "The third angle of the triangle is: " << angle3 << std::endl;
    std::cout << std::endl;

    float speedkph, speedmph;
    std::cout << "Input a speed in kilometers per hour: ";
    std::cin >> speedkph;
    speedmph = speedkph*0.6213712;
    std::cout << "The speed " << speedkph << " km/hr translates to " << speedmph << " miles/hr." << std::endl;
    std::cout << std::endl;

    float kel1, fah3;
    std::cout << "Input a temperature in Kelvin: ";
    std::cin >> kel1;
    fah3 = (9.0/5) * (kel1 - 273.15) + 32;
    std::cout << "The temperature in Kelvin is: " << kel1 << std::endl;
    std::cout << "The temperature in Fahrenheit is: " << fah3 << std::endl;
    std::cout << std::endl;

    float kel2, cel3;
    std::cout << "Input a temperature in Kelvin: ";
    std::cin >> kel2;
    cel3 = kel2 - 273.15;
    std::cout << "The temperature in Kelvin is: " << kel2 << std::endl;
    std::cout << "The temperature in Celsius is: " << cel3 << std::endl;
    std::cout << std::endl;

    float fah4, kel3;
    std::cout << "Input a temperature in Fahrenheit: ";
    std::cin >> fah4;
    kel3 = ((fah4 - 32) * (5.0/9)) + 273.15;
    std::cout << "The temperature in Fahrenheit is: " << fah4 << std::endl;
    std::cout << "The temperature in Kelvin is: " << kel3 << std::endl;
    std::cout << std::endl;

    float cel4, kel4;
    std::cout << "Input a temperature in Celsius: ";
    std::cin >> cel4;
    kel4 = cel4 + 273.15;
    std::cout << "The temperature in Celsius is: " << cel4 << std::endl;
    std::cout << "The temperature in Kelvin is: " << kel4 << std::endl;
    std::cout << std::endl;

    return 0;
}