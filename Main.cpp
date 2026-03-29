#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
using namespace std;

class Basic_Calc
{
public:
    static float add()
    {
        cout << "Enter your first number\n";
        float a = 0;
        cin >> a;
        cout << "Enter your second number\n";
        float b = 0;
        cin >> b;
        float c = a + b;
        cout << "Your answer is " << c << endl;
        return 0;
    }

    static float subtract()
    {
        cout << "Enter your first number\n";
        float a = 0;
        cin >> a;
        cout << "Enter your second number\n";
        float b = 0;
        cin >> b;
        float c = a - b;
        cout << "Your answer is " << c << endl;
        return 0;
    }

    static float multiplication()
    {
        cout << "Enter your First number\n ";
        float a = 0;
        cin >> a;
        cout << "Enter your second number\n";
        float b = 0;
        cin >> b;
        float c = a * b;
        cout << "your answer is " << c << endl;
        return 0;
    }

    static float Percentage()
    {
        cout << "Enter the number\n";
        float a = 0;
        cin >> a;
        cout << "Enter the Percentage\n";
        float b = 0;
        cin >> b;
        float c = a / b * 100;
        cout << "Your result is " << c << endl;
        return 0;
    }

    static float square()
    {
        cout << "Enter the number\n";
        float a = 0;
        cin >> a;
        float b = a * a;
        cout << "The result is " << b << endl;
        return 0;
    }

    static float square_root()
    {
        double num;

        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << "Square root of a negative number is not real.";
        }
        else
        {
            cout << "Square root of " << num << " is " << sqrt(num);
        }
        return 0;
    }

    static float cube()
    {
        float a;
        float b;

        cout << "Enter your number" << endl;
        cin >> a;
        b = a * a * a;
        cout << "Your result is " << b;
        return 0;
    }

    static float cube_root()
    {
        double num;

        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << "Cube root of a negative number is not real.";
        }
        else
        {
            cout << "Cube root of " << num << " is " << cbrt(num);
        }
        return 0;
    }
};

class Scientific_calculation
{
    static float Trigonometric()
    {
        int choice;
        double angle, rad;

        cout << "Enter angle in degrees: ";
        cin >> angle;

        // Convert degree to radian
        rad = angle * 3.14159265359 / 180;

        cout << "\n--- Trigonometric Functions ---\n";
        cout << "1. Sin\n";
        cout << "2. Cos\n";
        cout << "3. Tan\n";
        cout << "4. Cosec\n";
        cout << "5. Sec\n";
        cout << "6. Cot\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Sin(" << angle << ") = " << sin(rad);
            break;

        case 2:
            cout << "Cos(" << angle << ") = " << cos(rad);
            break;

        case 3:
            cout << "Tan(" << angle << ") = " << tan(rad);
            break;

        case 4:
            if (sin(rad) == 0)
                cout << "Cosec undefined!";
            else
                cout << "Cosec(" << angle << ") = " << 1 / sin(rad);
            break;

        case 5:
            if (cos(rad) == 0)
                cout << "Sec undefined!";
            else
                cout << "Sec(" << angle << ") = " << 1 / cos(rad);
            break;

        case 6:
            if (tan(rad) == 0)
                cout << "Cot undefined!";
            else
                cout << "Cot(" << angle << ") = " << 1 / tan(rad);
            break;

        default:
            cout << "Invalid choice!";
        }
        return 0;
    }

    static float log()
    {
        double num;

        cout << "Enter a positive number: ";
        cin >> num;

        if (num <= 0)
        {
            cout << "Logarithm is not defined for zero or negative numbers.";
        }
        else
        {
            cout << "log10(" << num << ") = " << log10(num) << endl;
            // cout << "ln(" << num << ")    = " << log(num) << endl;
        }
        return 0;
    }

    static float Power()
    {
        double base, powerResult;
        int exp;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter exponent: ";
        cin >> exp;

        powerResult = pow(base, exp);
        cout << base << "^" << exp << " = " << powerResult;
        return 0;
    }

    static float factorial()
    {
        long long fact = 1;
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << "Factorial is not defined for negative numbers.";
        }
        else
        {
            for (int i = 1; i <= num; i++)
            {
                fact *= i;
            }
            cout << num << "! = " << fact;
        }
        return 0;
    }

    static float Constants()
    {
        double pi, e;

        // Calculate constants
        pi = acos(-1); // Accurate value of π
        e = exp(1);    // Value of e

        cout << "--- Mathematical Constants ---" << endl;
        cout << "Value of Pi (π) = " << pi << endl;
        cout << "Value of e = " << e << endl;

        return 0;
    }

    static float Mode()
    {
        int mode;
        double angle, rad;

        cout << "--- Angle Mode Selection ---\n";
        cout << "1. Degree Mode\n";
        cout << "2. Radian Mode\n";
        cout << "Select mode: ";
        cin >> mode;

        cout << "Enter angle: ";
        cin >> angle;

        if (mode == 1)
        {
            // Degree to radian conversion
            rad = angle * acos(-1) / 180;
        }
        else if (mode == 2)
        {
            // Already in radians
            rad = angle;
        }
        else
        {
            cout << "Invalid mode!";
            return 0;
        }
        cout << "Angle in radians: " << rad << endl;
        return 0;
    }
};

class Unit_Converters
{
public:
    static float Length()
    {
        int choose;
        int subChoose;
        int meter;
        int inch;

        cout << "Welcome to Length convertors" << endl;
        cout << "1. SI Units" << endl;
        cout << "2. US Customary unit" << endl;
        cout << "Enter your choose ";
        cin >> choose;

        if (choose == 1)
        {
            cout << "Welcome to SI unit" << endl;
            cout << "1. Meter to Millimeter" << endl;
            cout << "2. Meter to Centimeter" << endl;
            cout << "3. Meter to Decimeter" << endl;
            cout << "4. Meter to Decameter" << endl;
            cout << "5. Meter to Hectometer" << endl;
            cout << "6. Meter to Kilometer" << endl;
            cout << "Enter your choose:- ";
            cin >> subChoose;

            if (subChoose == 1)
            {
                cout << "Enter meter to convert:- ";
                cin >> meter;
                int a = meter * 1000;
                cout << "your answer is " << a << endl;
            }
            else if (subChoose == 2)
            {
                cout << "Enter meter to convert:- ";
                cin >> meter;
                int a = meter * 100;
                cout << "your answer is " << a << endl;
            }
            else if (subChoose == 3)
            {
                cout << "Enter meter to convert:- ";
                cin >> meter;
                int a = meter * 10;
                cout << "your answer is " << a << endl;
            }
            else if (subChoose == 4)
            {
                cout << "Enter meter to convert:- ";
                cin >> meter;
                float a = meter * 0.1;
                cout << "your answer is " << a << endl;
            }
            else if (subChoose == 5)
            {
                cout << "Enter meter to convert:- ";
                cin >> meter;
                float a = meter * 0.01;
                cout << "your answer is " << a << endl;
            }
            else if (subChoose == 6)
            {
                cout << "Enter meter to convert:- ";
                cin >> meter;
                float a = meter * 0.001;
                cout << "your answer is " << a << endl;
            }
            else
            {
                cout << "Invaild Input" << endl;
            }
        }
        else if (choose == 2)
        {

            cout << "Welcome to US Customary units" << endl;
            cout << "1. Inch to Nautical mile" << endl;
            cout << "2. Inch to Thou" << endl;
            cout << "3. Inch to Foot" << endl;
            cout << "4. Inch to Yard" << endl;
            cout << "5. Inch to Rod" << endl;
            cout << "6. Inch to Mile" << endl;
            cout << "Enter your choose:- ";
            cin >> subChoose;

            if (subChoose == 1)
            {
                cout << "Enter inch to convert:- ";
                cin >> inch;
                int a = inch / 72910;
                cout << "the result is " << a << endl;
            }
            else if (subChoose == 2)
            {
                cout << "Enter inch to convert:- ";
                cin >> inch;
                int a = inch * 1000;
                cout << "the result is " << a << endl;
            }
            else if (subChoose == 3)
            {
                cout << "Enter inch to convert:- ";
                cin >> inch;
                float a = inch * 0.083333;
                cout << "the result is " << a << endl;
            }
            else if (subChoose == 4)
            {
                cout << "Enter inch to convert:- ";
                cin >> inch;
                float a = inch * 0.0277778;
                cout << "the Result is " << a << endl;
            }
            else if (subChoose == 5)
            {
                cout << "Enter inch to convert:- ";
                cin >> inch;
                float a = inch * 0.00505051;
                cout << "The result is " << a << endl;
            }
            else if (subChoose == 6)
            {
                cout << "Enter inch to convert:- ";
                cin >> inch;
                float a = inch / 63360;
                cout << "the result is " << a << endl;
            }
        }
        return 0;
    }

    static float Weight()
    {
        float a;
        int Choose;
        float result;

        cout << "Welcome Weight Converter\n";
        cout << "1. Gram to Tonne\n";
        cout << "2. Gram to Kilogram\n";
        cout << "3. Gram to Milligram\n";
        cout << "4. Gram to Microgram\n";
        cout << "5. Gram to Quintal\n";
        cout << "6. Gram to Pound\n";
        cout << "7. Gram to Ounce\n";
        cout << "8. Gram to Carat\n";
        cout << "9. Gram to Liang\n";
        cout << "10. Gram to Dan\n";
        cout << "11. Gram to Jin\n";
        cout << "12. Gram to Qian\n";
        cout << "Enter your Choose:- ";
        cin >> Choose;
        cout << "Enter Weight in gram:- ";
        cin >> a;

        switch (Choose)
        {
        case 1:
            result = a * 0.000001;
            cout << "Your result is " << result << endl;
        case 2:
            result = a * 0.001;
            cout << "Your result is " << result << endl;
        case 3:
            result = a * 1000;
            cout << "Your result is " << result << endl;
        case 4:
            result = a * 1000000;
            cout << "Your result is " << result << endl;
        case 5:
            result = a * 0.00001;
            cout << "Your result is " << result << endl;
        case 6:
            result = a * 0.002204622621848775;
            cout << "Your result is " << result << endl;
        case 7:
            result = a * 0.035273961949580412;
            cout << "Your result is " << result << endl;
        case 8:
            result = a * 5;
            cout << "your result is " << result << endl;
        case 9:
            result = a + 0.02;
            cout << "your result is " << result << endl;
        case 10:
            result = a * 0.00002;
            cout << "your result is " << result << endl;
        case 11:
            result = a * 0.002;
            cout << "your result is " << result << endl;
        case 12:
            result = a * 0.2;
            cout << "your result is " << result << endl;
        default:
            cout << "Invaild input";
        }
        return 0;
    }

    static float Area()
    {
        float a;
        int Choose;
        float result;

        cout << "Welcome Area Converter\n";
        cout << "1. Square meter to Square kilometer\n";
        cout << "2. Square meter to Hectare\n";
        cout << "3. Square meter to Are\n";
        cout << "4. Square meter to Square decimeter\n";
        cout << "5. Square meter to Square centimeter\n";
        cout << "6. Square meter to Square millimeter\n";
        cout << "7. Square meter to Acre\n";
        cout << "8. Square meter to Square mile\n";
        cout << "9. Square meter to Square yard\n";
        cout << "10. Square meter to Square foot\n";
        cout << "11. Square meter to Square inch\n";
        cout << "12. Square meter to Square rod\n";
        cout << "Enter your Choose:- ";
        cin >> Choose;
        cout << "Enter Area in Square Meter:- ";
        cin >> a;

        if (Choose == 1)
        {
            result = a * 0.000001;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 2)
        {
            result = a * 0.0001;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 3)
        {
            result = a * 0.01;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 4)
        {
            result = a * 100;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 5)
        {
            result = a * 10000;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 6)
        {
            result = a * 1000000;
            cout << "Your result is " << result << endl;
        }
        else if (Choose == 7)
        {
            result = a * 0.000247105407259363;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 8)
        {
            result = a * 0.000000386102158542;
            cout << "Your result is " << result << endl;
        }
        else if (Choose == 9)
        {
            result = a * 1.195990046301080256;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 10)
        {
            result = a * 10.76391041670972231;
            cout << "your result is " << result << endl;
        }
        else if (Choose == 11)
        {
            result = a * 1550.003100006200012;
            cout << "Your result is " << result << endl;
        }
        else if (Choose == 12)
        {
            result = a * 0.0039536861034746454;
            cout << "Your result is " << result << endl;
        }
        else
        {
            cout << "Invaild input" << endl;
        }
        return 0;
    }

    static float Volume()
    {
        float a;
        int Choose;
        float result;

        cout << "Welcome to Volume Converter\n";
        cout << "1. Cubic meter to cubic millimeter\n";
        cout << "2. Cubic meter to cubic decimeter\n";
        cout << "3. Cubic meter to cubic centimeter\n";
        cout << "4. Cubic meter to Hectoliter\n";
        cout << "5. Cubic meter to liter\n";
        cout << "6. Cubic meter to Deciliter\n";
        cout << "7. Cubic meter to Centiliter\n";
        cout << "8. Cubic meter to Millilitre\n";
        cout << "9. Cubic meter to Cubic foot\n";
        cout << "10. Cubic meter to Cubic inch\n";
        cout << "11. Cubic meter to cubic yard\n";
        cout << "12. Cubic meter to Acre-foot\n";
        cout << "Enter your choose:- ";
        cin >> Choose;
        cout << "Enter your Volume in cubic meter:- ";
        cin >> a;

        switch (Choose)
        {
        case 1:
            result = a * 1000000000;
            cout << "Your result is " << result << endl;
        case 2:
            result = a * 1000;
            cout << "Your result is " << result << endl;
        case 3:
            result = a * 1000000;
            cout << "Your result is " << result << endl;
        case 4:
            result = a * 10;
            cout << "Your result is " << result << endl;
        case 5:
            result = a * 1000;
            cout << "Your result is " << result << endl;
        case 6:
            result = a * 10000;
            cout << "Your result is " << result << endl;
        case 7:
            result = a * 100000;
            cout << "Your result is " << result << endl;
        case 8:
            result = a * 1000000;
            cout << "Your result is " << result << endl;
        case 9:
            result = a * 35.31466672148859025;
            cout << "Your result is " << result << endl;
        case 10:
            result = a * 61023.74409473228395;
            cout << "Your result is " << result << endl;
        case 11:
            result = a * 1.307950619314392231;
            cout << "Your result is " << result << endl;
        case 12:
            result = a * 0.000810372771474878;
            cout << "Your result is " << result << endl;
        default:
            cout << "Invaild input";
        }
        return 0;
    }

    static float Speed()
    {
        float a;
        int Choose;
        float result;

        cout << "Welcome to Speed Convertor\n";
        cout << "1. Km/hr to Lightspeed\n";
        cout << "2. Km/hr to Mach\n";
        cout << "3. Km/hr to Meter/sec\n";
        cout << "4. Km/hr to Km/sec\n";
        cout << "5. Km/hr to Knot\n";
        cout << "6. Km/hr to Mile/hr\n";
        cout << "7. Km/hr to Foot/sec\n";
        cout << "8. Km/hr to Inch/sec\n";
        cout << "Enter your Choose:- ";
        cin >> Choose;
        cout << "Enter speed in Km/hr:= ";
        cin >> a;

        switch (Choose)
        {
        case 1:
            result = a * 0.000000000926566931;
            cout << "Your result is " << result << endl;
        case 2:
            result = a * 0.000816273222973193;
            cout << "Your result is " << result << endl;
        case 3:
            result = a * 0.277777777777777777;
            cout << "Your result is " << result << endl;
        case 4:
            result = a * 0.000277777777777777;
            cout << "Your result is " << result << endl;
        case 5:
            result = a * 0.539956803455723542;
            cout << "Your result is " << result << endl;
        case 6:
            result = a * 0.621371192237333969;
            cout << "Your result is " << result << endl;
        case 7:
            result = a * 0.911344415281423155;
            cout << "Your result is " << result << endl;
        case 8:
            result = a * 10.93613298337707786;
            cout << "Your result is " << result << endl;
        default:
            cout << "Invaild input";
        }
        return 0;
    }

    static float Temperature()
    {
        float a;
        int Choose;
        float result;

        cout << "Welcome to Temperature Convertor\n";
        cout << "Celsius to Fahrenheit\n";
        cout << "Celsius to Kelvin\n";
        cout << "Celsius to Rankine\n";
        cout << "Celsius to Reaumur\n";
        cout << "Enter your choose:- ";
        cin >> Choose;
        cout << "Enter your temperature in celsius:- ";
        cin >> a;

        switch (Choose)
        {
        case 1:
            result = a * 33.8;
            cout << "Your result is " << result << endl;
        case 2:
            result = a * 274.15;
            cout << "Your result is " << result << endl;
        case 3:
            result = a * 493.47;
            cout << "your result is " << result << endl;
        case 4:
            result = a * 0.8;
            cout << "your result is " << result << endl;
        default:
            cout << "Invaid Input";
        }
        return 0;
    }

    static float Time()
    {
        float a;
        int Choose;
        float result;

        cout << "Welcome to Time Convertor\n";
        cout << "1. Minute to year\n";
        cout << "2. Minute to week\n";
        cout << "3. Minute to Day\n";
        cout << "4. Minute to hour\n";
        cout << "5. Minute to Second\n";
        cout << "6. Minute to Millisecond\n";
        cout << "7. Minute to Microsecond\n";
        cout << "8. Minute to Picosecond\n";
        cout << "Enter your Choose:- ";
        cin >> Choose;
        cout << "Enter time in minute:- ";
        cin >> a;

        switch (Choose)
        {
        case 1:
            result = a * 0.000001902587519025;
            cout << "Your result is " << result << endl;
        case 2:
            result = a * 0.000099206349206349;
            cout << "Your result is " << result << endl;
        case 3:
            result = a * 0.000694444444444444;
            cout << "Your result is " << result << endl;
        case 4:
            result = a * 0.016666666666666666;
            cout << "Your result is " << result << endl;
        case 5:
            result = a * 60;
            cout << "Your result is " << result << endl;
        case 6:
            result = a * 60000;
            cout << "your result is " << result << endl;
        case 7:
            result = a * 60000000;
            cout << "Your result is " << result << endl;
        case 8:
            result = a * 60000000000000;
            cout << "Your result is " << result << endl;
        default:
            cout << "Invaild Input";
        }
        return 0;
    }
};

class Currency_Convertor
{
public:
    static float currency()
    {
        float a;
        int Currency_Choose;
        int Pair_Choose;
        float result;

        cout << "Welcome to Currency Convertor\n";
        cout << "1. Indian rupee(INR)\n";
        cout << "2. US Dollar(USD)\n";
        cout << "3. Euro (EUR)\n";
        cout << "4. Japanese Yen(JPY)\n";
        cout << "5. British Pound(GBP)\n";
        cout << "6. Chinese Yuan(CNY)\n";
        cout << "7. Australian Dollar(AUD)\n";
        cout << "8. Canadian Dollar(CAD)\n";
        cout << "9. Swiss Franc(CHF)\n";
        cout << "10. Hong Kong Dollar(HKD)\n";
        cout << "11. Singapore Dollar(SGD)\n";
        cout << "Enter your Serial no of Currency:- ";
        cin >> Currency_Choose;

        switch (Currency_Choose)
        {
        case 1:
            cout << "Pairs of Indian rupee\n";
            cout << "1. USD/INR\n";
            cout << "2. EUR/INR\n";
            cout << "3. GBP/INR\n";
            cout << "4. JPY/INR\n";
            cout << "5. AUD/INR\n";
            cout << "6. CAD/INR\n";
            cout << "7. SGD/INR\n";
            cout << "8. AED/INR\n";
            cout << "9. SAR/INR\n";
            cout << "10. CHF/INR\n";
            cout << "Enter your serial no of pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your money in Rupee:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 91.07;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 107.37;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 122.61;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 0.59;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 64.23;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 66.3;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 71.69;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 24.74;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 24.22;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 117.56;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild Input" << endl;
            }
        case 2:
            cout << "Pairs of US Dollar\n";
            cout << "1. INR/USD\n";
            cout << "2. EUR/USD\n";
            cout << "3. GBP/USD\n";
            cout << "4. JPY/USD\n";
            cout << "5. AUD/USD\n";
            cout << "6. CAD/USD\n";
            cout << "7. SGD/USD\n";
            cout << "8. AED/USD\n";
            cout << "9. SAR/USD\n";
            cout << "10. CHF/USD\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in us dollar:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 0.01;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 1.18;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 1.35;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 0.0065;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a + 0.71;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 0.73;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 0.79;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 0.27;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 0.27;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 1.29;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild input" << endl;
            }
        case 3:
            cout << "Pairs of EURO\n";
            cout << "1. INR/EUR\n";
            cout << "2. USD/EUR\n";
            cout << "3. GBP/EUR\n";
            cout << "4. JPY/EUR\n";
            cout << "5. AUD/EUR\n";
            cout << "6. CAD/EUR\n";
            cout << "7. SGD/EUR\n";
            cout << "8. AED/EUR\n";
            cout << "9. SAR/EUR\n";
            cout << "10. CHF/EUR\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in EUR:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 0.009348;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 0.8492;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 1.15;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 0.005476;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 0.6006;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 0.6205;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 0.670062;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 0.23;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 0.226388;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 1.09;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild input" << endl;
            }
        case 4:
            cout << "Pairs of Japanese Yen\n";
            cout << "1. INR/JPY\n";
            cout << "2. USD/JPY\n";
            cout << "3. GBP/JPY\n";
            cout << "4. EUR/JPY\n";
            cout << "5. AUD/JPY\n";
            cout << "6. CAD/JPY\n";
            cout << "7. SGD/JPY\n";
            cout << "8. AED/JPY\n";
            cout << "9. SAR/JPY\n";
            cout << "10. CHF/JPY\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in Japanese Yen:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 1.7092;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 155.08;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 208.93;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 182.7;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 0.0091;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 0.0088;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 0.0082;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 0.024;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 0.024;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 0.0050;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild input" << endl;
            }

        case 5:
            cout << "Pairs of British Pound\n";
            cout << "1. INR/GBP\n";
            cout << "2. USD/GBP\n";
            cout << "3. JPY/GBP\n";
            cout << "4. EUR/GBP\n";
            cout << "5. AUD/GBP\n";
            cout << "6. CAD/GBP\n";
            cout << "7. SGD/GBP\n";
            cout << "8. AED/GBP\n";
            cout << "9. SAR/GBP\n";
            cout << "10. CHF/GBP\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in British Pound:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 122.29;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 1.35;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 209.08;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 1.14;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 1.90;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 1.84;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 1.71;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 4.95;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 5.06;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 1.05;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild input" << endl;
            }

        case 6:
            cout << "Pairs of Chinese Yuan\n";
            cout << "1. INR/CNY\n";
            cout << "2. USD/CNY\n";
            cout << "3. JPY/CNY\n";
            cout << "4. EUR/CNY\n";
            cout << "5. AUD/CNY\n";
            cout << "6. CAD/CNY\n";
            cout << "7. SGD/CNY\n";
            cout << "8. AED/CNY\n";
            cout << "9. SAR/CNY\n";
            cout << "10. CHF/CNY\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in Chinese Yuan :- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 13.13;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 0.14;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 22.38;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 0.12;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = 0.20;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 0.20;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 0.18;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 0.53;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 0.54;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 0.11;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild input";
            }

        case 7:
            cout << "Pairs of Australian Dollar\n";
            cout << "1. INR/AUD\n";
            cout << "2. USD/AUD\n";
            cout << "3. JPY/AUD\n";
            cout << "4. EUR/AUD\n";
            cout << "5. GBP/AUD\n";
            cout << "6. CAD/AUD\n";
            cout << "7. SGD/AUD\n";
            cout << "8. AED/AUD\n";
            cout << "9. SAR/AUD\n";
            cout << "10. CHF/AUD\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in Australian Dollar:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 64.26;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 0.71;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 109.63;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 0.60;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 0.53;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 0.97;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 0.90;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 2.59;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 2.64;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 0.55;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild input" << endl;
            }

        case 8:
            cout << "Pairs of Canadian Dollar\n";
            cout << "1. INR/CAD\n";
            cout << "2. USD/CAD\n";
            cout << "3. JPY/CAD\n";
            cout << "4. EUR/CAD\n";
            cout << "5. GBP/CAD\n";
            cout << "6. AUD/CAD\n";
            cout << "7. SGD/CAD\n";
            cout << "8. AED/CAD\n";
            cout << "9. SAR/CAD\n";
            cout << "10. CHF/CAD\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in Canadian Dollar:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 66.32;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 0.73;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 113.61;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 0.62;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 0.54;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 0.92;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 2.68;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 2.74;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 0.56;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 1.03;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "invaild input";
            }

        case 9:
            cout << "Pairs of Swiss franc\n";
            cout << "1. INR/CHF\n";
            cout << "2. USD/CHF\n";
            cout << "3. JPY/CHF\n";
            cout << "4. EUR/CHF\n";
            cout << "5. GBP/CHF\n";
            cout << "6. AUD/CHF\n";
            cout << "7. SGD/CHF\n";
            cout << "8. AED/CHF\n";
            cout << "9. SAR/CHF\n";
            cout << "10. CAD/CHF\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in Swiss Franc:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 117.52;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 1.29;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 201.36;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 1.10;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 0.96;
                cout << "The result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 1.83;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 1.64;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 4.74;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 4.85;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 1.77;
                cout << "the result is " << result << endl;
            }
            else
            {
                cout << "Invaild input";
            }

        case 10:
            cout << "Pairs of Hong kong dollar\n";
            cout << "1. INR/HKD\n";
            cout << "2. USD/HKD\n";
            cout << "3. JPY/HKD\n";
            cout << "4. EUR/HKD\n";
            cout << "5. GBP/HKD\n";
            cout << "6. AUD/HKD\n";
            cout << "7. SGD/HKD\n";
            cout << "8. AED/HKD\n";
            cout << "9. SAR/HKD\n";
            cout << "10. CAD/HKD\n";
            cout << "Enter your serial number of Pair:- ";
            cin >> Pair_Choose;
            cout << "Enter your amount in Hong kong Dollar:- ";
            cin >> a;

            if (Pair_Choose == 1)
            {
                result = a * 11.62;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a * 0.13;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a * 0.11;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a * 20;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a * 0.094;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a * 0.88;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a * 0.18;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a * 0.17;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 0.099;
                cout << "the result is " << result << endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a * 0.16;
                cout << "the result is " << result << endl;
            }
        default:
            cout << "Invaild input" << endl;
        }
        return 0;
    }
};

class Finance
{
public:
    static float Simple_interest()
    {
        float Princepal;
        float interset;
        int time;

        cout << "Enter Amount:- ";
        cin >> Princepal;
        cout << "Enter interset in percentage:- ";
        cin >> interset;
        cout << "Enter time period of princepal:- ";
        cin >> time;

        float simple_interest = (Princepal * interset * time) / 100;
        cout << "the interest of princepal is:-  " << simple_interest << endl;
        return 0;
    }
    static float Compound_interest()
    {
        float Princepal;
        float interset;
        int time;
        float amount;
        float compoundInterest;

        cout << "enter the princepal amount:- " << endl;
        cin >> Princepal;
        cout << "enter the interset on princepal:- " << endl;
        cin >> interset;
        cout << "enter time of loan:- ";
        cin >> time;

        amount = Princepal * pow((1 + interset / 100), time);
        compoundInterest = amount - Princepal;

        cout << "your interset amount is " << compoundInterest << endl;
        return 0;
    }
    static float EMI_calculator()
    {
        double loanAmount, annualRate, monthlyRate;
        int years, months;
        double emi, totalPayment, totalInterest;

        cout << "Enter Loan Amount: ";
        cin >> loanAmount;

        cout << "Enter Annual Interest Rate (%): ";
        cin >> annualRate;

        cout << "Enter Loan Tenure (in years): ";
        cin >> years;

        // Convert values
        monthlyRate = annualRate / (12 * 100);
        months = years * 12;

        // EMI Calculation
        emi = (loanAmount * monthlyRate * pow(1 + monthlyRate, months)) /
              (pow(1 + monthlyRate, months) - 1);

        totalPayment = emi * months;
        totalInterest = totalPayment - loanAmount;

        cout << "\n------ EMI Details ------\n";
        cout << "Monthly EMI = " << emi << endl;
        cout << "Total Payment = " << totalPayment << endl;
        cout << "Total Interest = " << totalInterest << endl;
        return 0;
    }
    static float GST_calculator()
    {
        double amount, gstRate, gstAmount, finalAmount;

        cout << "\nEnter Original Amount: ";
        cin >> amount;
        cout << "Enter GST Rate (%): ";
        cin >> gstRate;

        gstAmount = (amount * gstRate) / 100;
        finalAmount = amount + gstAmount;

        cout << "GST Amount = " << gstAmount << endl;
        cout << "Final Amount (Including GST) = " << finalAmount << endl;
        return 0;
    }
    static float Discount_Calculator()
    {
        double price, discountRate, discountAmount, finalPrice;

        cout << "\nEnter Original Price: ";
        cin >> price;
        cout << "Enter Discount Rate (%): ";
        cin >> discountRate;

        discountAmount = (price * discountRate) / 100;
        finalPrice = price - discountAmount;

        cout << "Discount Amount = " << discountAmount << endl;
        cout << "Final Price After Discount = " << finalPrice << endl;
        return 0;
    }
};

class Fitness
{
    static float BMI()
    {
        cout << "Welcome to Body Mass index(BMI)" << endl;
        cout << "enter weigth in lbs and height in inchs" << endl;
        float weigth = 0;
        float heigth = 0;
        cin >> heigth >> weigth;
        float bmi = weigth / (heigth * heigth) * 703;
        cout << "Your body bmi is " << bmi << endl;
        return 0;
    }
    static float BMR()
    {
        cout << "Welcome to Basal matabolic rate(BMR)" << endl;
        cout << "Enter weight in KG and heights in cm and age in year" << endl;
        float weigth = 0;
        float height = 0;
        int age;
        cin >> weigth >> height >> age;
        float bmr = (10 * weigth) + (6.25 * height) - (5 * age) + 5;
        cout << "Your BMR is " << bmr << endl;
        return 0;
    }
    static float TDEE()
    {
        cout << "Total daily Energy expenditure" << endl;
        int a;
        int height;
        int weight;
        int age;
        cout << "Enter how many days you are going for a workout" << endl;
        cin >> a;
        cout << "Enter your height in cm" << endl;
        cin >> height;
        cout << "Enter your weight in KG" << endl;
        cin >> weight;
        cout << "Enter your age in years" << endl;
        cin >> age;

        if (a >= 0)
        {
            cout << "you are sedentary" << endl;
            const float b = (10 * weight) + (6.25 * height) - (5 * age) + 5 * 1.2;
            cout << "your TDEE is " << b << endl;
        }
        else if (a >= 1 && a <= 2)
        {
            cout << "you are lightly active" << endl;
            float c = (10 * weight) + (6.25 * height) - (5 * age) + 5 * 1.175;
            cout << "your TDEE is " << c << endl;
        }
        else if (a >= 3 && a >= 4 && a <= 5)
        {
            cout << "you are moderately active" << endl;
            float d = (10 * weight) + (6.25 * height) - (5 * age) + 5 * 1.55;
            cout << "your TDEE is " << d << endl;
        }
        else if (a >= 6 && a <= 7)
        {
            cout << "you are very active" << endl;
            float e = (10 * weight) + (6.25 * height) - (5 * age) + 5 * 1.725;
            cout << "your TDEE is " << e << endl;
        }
        else
        {
            cout << "your input is wrong." << endl;
        }
        return 0;
    }
    static float BFP()
    {
        cout << "Welcome to Body Fat Percentage" << endl;
        int gender;
        double height, neck, waist, hip, bodyFat;

        cout << "Body Fat Percentage Calculator\n";
        cout << "1. Male\n";
        cout << "2. Female\n";
        cout << "Enter your gender (1 or 2): ";
        cin >> gender;

        cout << "Enter height (in cm): ";
        cin >> height;

        cout << "Enter neck circumference (in cm): ";
        cin >> neck;

        cout << "Enter waist circumference (in cm): ";
        cin >> waist;

        if (gender == 1)
        {
            bodyFat = 86.010 * log10(waist - neck) - 70.041 * log10(height) + 36.76;

            cout << "Body Fat Percentage (Male): " << bodyFat << " %" << endl;
        }
        else if (gender == 2)
        {
            cout << "Enter hip circumference (in cm): ";
            cin >> hip;
            bodyFat = 163.205 * log10(waist + hip - neck) - 97.684 * log10(height) - 78.387;

            cout << "Body Fat Percentage (Female): " << bodyFat << " %" << endl;
        }
        else
        {
            cout << "Invalid gender selection!" << endl;
        }
        return 0;
    }
    static float IBW()
    {
        cout << "Welcome to Ideal body weight calculator" << endl;
        float height;
        float weight;
        float ibw;
        int gender;

        cout << "enter 1 for men and 2 for women" << endl;
        cin >> gender;

        cout << "Enter Your weight" << endl;
        cin >> weight;
        cout << "Enter your height" << endl;
        cin >> height;

        if (gender == 1)
        {
            ibw = 50 + 0.9 * (height - 152);
            cout << "Your ideal weight is " << ibw << "KGs" << endl;
        }
        else if (gender == 2)
        {
            ibw = 45.5 + 0.9 * (height - 152);
            cout << "your ideal weight is " << ibw << "KGs" << endl;
        }
        else
        {
            cout << "Invaild input!" << endl;
        }
        return 0;
    }
    static int DC()
    {
        int weight;
        int deadlift;
        int choose;

        cout << "Welcome to deadlift calculator" << endl;
        cout << "1. beginner" << endl;
        cout << "2. intermediate" << endl;
        cout << "3. advance" << endl;
        cout << "4. Elite" << endl;
        cout << "Enter your choose" << endl;
        cin >> choose;

        cout << "Enter your weight" << endl;
        cin >> weight;

        if (choose == 1)
        {
            deadlift = weight;
            cout << "Your deadlift target should be " << deadlift << endl;
        }
        else if (choose == 2)
        {
            deadlift = weight * 1.5;
            cout << "your deadlift target should be " << deadlift << endl;
        }
        else if (choose == 3)
        {
            deadlift = weight * 2.25;
            cout << "Your deadlift target should be " << deadlift << endl;
        }
        else if (choose == 4)
        {
            deadlift = weight * 3;
            cout << "Your deadlift target should be " << deadlift << endl;
        }
        return 0;
    }
    static int BP()
    {
        int weight;
        int Bp;
        int Choose;

        cout << "Welcome to bench press calculator" << endl;
        cout << "1. begineer" << endl;
        cout << "2. intermediate" << endl;
        cout << "3. Advance" << endl;
        cout << "4. Elite" << endl;
        cout << "Enter your choose " << endl;
        cin >> Choose;

        cout << "Enter your weight" << endl;
        cin >> weight;

        switch (Choose)
        {
        case 1:
            Bp = weight * 0.75;
            cout << "your Bench press target should be " << Bp << "KG" << endl;
        case 2:
            Bp = weight * 1.25;
            cout << "your Bench press target should be " << Bp << "KG" << endl;
        case 3:
            Bp = weight * 1.5;
            cout << "Your Bench press target should be " << Bp << "KG" << endl;
        case 4:
            Bp = weight * 2;
            cout << "Your Bench press target should be " << Bp << "KG" << endl;
        default:
            cout << "Invalid input";
        }
        return 0;
    }
    static int Squat()
    {
        int weight;
        int choose;
        int squat;

        cout << "Welcome to the squat calculator" << endl;
        cout << "1. Beginner" << endl;
        cout << "2. Intermediate" << endl;
        cout << "3. Advance" << endl;
        cout << "4. Elite" << endl;
        cout << "Choose your type:- ";
        cin >> choose;

        cout << "Enter your Weight" << endl;
        cin >> weight;

        switch (choose)
        {
        case 1:
            squat = weight * 0.75;
            cout << "Your Ideal Squat target is " << squat << endl;
        case 2:
            squat = weight * 1.25;
            cout << "Your ideal squat Target is " << squat << endl;
        case 3:
            squat = weight * 1.75;
            cout << "Your ideal squat target is " << squat << endl;
        case 4:
            squat = weight * 2.75;
            cout << "Your ideal squat target is " << squat << endl;
        default:
            cout << "Invaild Input" << endl;
        }
        return 0;
    }
};

class Student_calculation
{
    static float percentage()
    {
        int subject1;
        int subject2;
        int subject3;
        int subject4;
        int subject5;
        int subject6;
        float result;

        cout << "Enter your first number:- ";
        cin >> subject1;
        cout << "enter your second number:- ";
        cin >> subject2;
        cout << "enter your third number:- ";
        cin >> subject3;
        cout << "Enter your fourth number:- ";
        cin >> subject4;
        cout << "enter your fifth number:- ";
        cin >> subject5;
        cout << "Enter your sixth number:- ";
        cin >> subject6;

        result = ((subject1 + subject2 + subject3 + subject4 + subject5 + subject6) / 600) * 100;

        cout << "your Percentage is:- " << result << endl;
        return 0;
    }

    static float CGPA()
    {
        int subject1;
        int subject2;
        int subject3;
        int subject4;
        int subject5;
        int subject6;
        int subject1grade, subject2grade, subject3grade, subject4grade, subject5grade, subject6grade;
        float result;

        cout << "enter your marks of first subject:- ";
        cin >> subject1;
        cout << "Enter your marks of second subject:- ";
        cin >> subject2;
        cout << "Enter your marks of third subject:- ";
        cin >> subject3;
        cout << "Enter your Marks of fourth subject:- ";
        cin >> subject4;
        cout << "enter your marks of fifth subject";
        cin >> subject5;
        cout << "Enter the marks of sixth subject";
        cin >> subject6;

        if (subject1 == 100 && subject1 >= 90)
        {
            subject1grade = 9;
        }
        else if (subject1 == 89 && subject1 >= 80)
        {
            subject1grade = 8;
        }
        else if (subject1 == 79 && subject1 >= 70)
        {
            subject1grade = 7;
        }
        else if (subject1 == 69 && subject1 >= 60)
        {
            subject1grade = 6;
        }
        else if (subject1 == 59 && subject1 >= 50)
        {
            subject1grade = 5;
        }
        else if (subject1 == 49 && subject1 >= 40)
        {
            subject1grade = 4;
        }
        else if (subject1 == 39 && subject1 >= 30)
        {
            subject1grade = 3;
        }
        else
        {
            subject1grade = 0;
        }

        if (subject2 == 100 && subject2 >= 90)
        {
            subject2grade = 9;
        }
        else if (subject2 == 89 && subject2 >= 80)
        {
            subject2grade = 8;
        }
        else if (subject2 == 79 && subject2 >= 70)
        {
            subject2grade = 7;
        }
        else if (subject2 == 69 && subject2 >= 60)
        {
            subject2grade = 6;
        }
        else if (subject2 == 59 && subject2 >= 50)
        {
            subject2grade = 5;
        }
        else if (subject2 == 49 && subject2 >= 40)
        {
            subject2grade = 4;
        }
        else if (subject2 == 39 && subject2 >= 30)
        {
            subject2grade = 3;
        }
        else
        {
            subject2grade = 0;
        }

        if (subject3 == 100 && subject3 >= 90)
        {
            subject3grade = 9;
        }
        else if (subject3 == 89 && subject3 >= 80)
        {
            subject3grade = 8;
        }
        else if (subject3 == 79 && subject3 >= 70)
        {
            subject3grade = 7;
        }
        else if (subject3 == 69 && subject3 >= 60)
        {
            subject3grade = 6;
        }
        else if (subject3 == 59 && subject3 >= 50)
        {
            subject3grade = 5;
        }
        else if (subject3 == 49 && subject3 >= 40)
        {
            subject3grade = 4;
        }
        else if (subject3 == 39 && subject3 >= 30)
        {
            subject3grade = 3;
        }
        else
        {
            subject3grade = 0;
        }

        if (subject4 == 100 && subject4 >= 90)
        {
            subject4grade = 9;
        }
        else if (subject4 == 89 && subject4 >= 80)
        {
            subject4grade = 8;
        }
        else if (subject4 == 79 && subject4 >= 70)
        {
            subject4grade = 7;
        }
        else if (subject4 == 69 && subject4 >= 60)
        {
            subject4grade = 6;
        }
        else if (subject4 == 59 && subject4 >= 50)
        {
            subject4grade = 5;
        }
        else if (subject4 == 49 && subject4 >= 40)
        {
            subject4grade = 4;
        }
        else if (subject4 == 39 && subject4 >= 30)
        {
            subject4grade = 3;
        }
        else
        {
            subject4grade = 0;
        }

        if (5 == 100 && subject5 >= 90)
        {
            subject5grade = 9;
        }
        else if (subject5 == 89 && subject5 >= 80)
        {
            subject5grade = 8;
        }
        else if (subject5 == 79 && subject5 >= 70)
        {
            subject5grade = 7;
        }
        else if (subject5 == 69 && subject5 >= 60)
        {
            subject5grade = 6;
        }
        else if (subject5 == 59 && subject5 >= 50)
        {
            subject5grade = 5;
        }
        else if (subject5 == 49 && subject5 >= 40)
        {
            subject5grade = 4;
        }
        else if (subject5 == 39 && subject5 >= 30)
        {
            subject5grade = 3;
        }
        else
        {
            subject5grade = 0;
        }

        if (subject6 == 100 && subject6 >= 90)
        {
            subject6grade = 9;
        }
        else if (subject6 == 89 && subject6 >= 80)
        {
            subject6grade = 8;
        }
        else if (subject6 == 79 && subject6 >= 70)
        {
            subject6grade = 7;
        }
        else if (subject6 == 69 && subject6 >= 60)
        {
            subject6grade = 6;
        }
        else if (subject6 == 59 && subject6 >= 50)
        {
            subject6grade = 5;
        }
        else if (subject6 == 49 && subject6 >= 40)
        {
            subject6grade = 4;
        }
        else if (subject6 == 39 && subject6 >= 30)
        {
            subject6grade = 3;
        }
        else
        {
            subject6grade = 0;
        }

        result = (subject1grade + subject2grade + subject3grade + subject4grade + subject5grade + subject6grade) / 6;
        cout << "the CGPA of the 6 subject is " << result << endl;

        return 0;
    }

    static float averageMarks()
    {
        float sub1marks, sub2marks, sub3marks, sub4marks, sub5marks, sub6marks;
        float result;

        cout << "Enter your marks of subject1:- ";
        cin >> sub1marks;
        cout << "Enter your marks of subject2:- ";
        cin >> sub2marks;
        cout << "Enter your marks of subject3:- ";
        cin >> sub3marks;
        cout << "Enter your marks of subject4:- ";
        cin >> sub4marks;
        cout << "enter your marks of subject5:- ";
        cin >> sub5marks;
        cout << "Enter your marks of subject6:- ";
        cin >> sub6marks;

        result = (sub1marks + sub2marks + sub3marks + sub4marks + sub5marks + sub6marks) / 6;
        cout << "Your average marks of given marks is:-  " << result << endl;

        return 0;
    }

    static float gradeCalculate()
    {
        float sub1marks, sub2marks, sub3marks, sub4marks, sub5marks, sub6marks;
        float result;

        cout << "Enter your marks of subject1:- ";
        cin >> sub1marks;
        cout << "Enter your marks of subject2:- ";
        cin >> sub2marks;
        cout << "Enter your marks of subject3:- ";
        cin >> sub3marks;
        cout << "Enter your marks of subject4:- ";
        cin >> sub4marks;
        cout << "enter your marks of subject5:- ";
        cin >> sub5marks;
        cout << "Enter your marks of subject6:- ";
        cin >> sub6marks;

        result = (sub1marks + sub2marks + sub3marks + sub4marks + sub5marks + sub6marks) / 6;

        if (result == 100 && result <= 91)
        {
            cout << "You got A+" << endl;
        }
        else if (result == 90 && result <= 81)
        {
            cout << "You got A" << endl;
        }
        else if (result == 80 && result <= 71)
        {
            cout << "you got B" << endl;
        }
        else if (result == 70 && result <= 61)
        {
            cout << "You got C" << endl;
        }
        else if (result == 60 && result <= 51)
        {
            cout << "You got D" << endl;
        }
        else if (result == 50 && result <= 40)
        {
            cout << "you got E" << endl;
        }
        else
        {
            cout << "you got F" << endl;
        }

        return 0;
    }

    static float age_Calculator()
    {
        int bd, bm, by; // birth date
        int cd, cm, cy; // current date

        cout << "Enter Birth Date (DD MM YYYY): ";
        cin >> bd >> bm >> by;

        cout << "Enter Current Date (DD MM YYYY): ";
        cin >> cd >> cm >> cy;

        int days, months, years;

        // Days in months
        int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (bd > cd)
        {
            cd = cd + monthDays[bm - 1];
            cm = cm - 1;
        }

        days = cd - bd;

        if (bm > cm)
        {
            cm = cm + 12;
            cy = cy - 1;
        }

        months = cm - bm;
        years = cy - by;

        cout << "\nYour Age is: ";
        cout << years << " Years " << months << " Months " << days << " Days";

        return 0;
    }

    static float attendance_Calculator()
    {
        int attendance_percentage = 0;
        int attendaned;
        int total_Class;
        int choose;
        int Percentage;
        int required_classes;
        int Attended_classes;
        int attendance_sub1, attendance_sub2, attendance_sub3, attendance_sub4, attendance_sub5, attendance_sub6;
        int attendancePercen_sub1, attendancePercen_sub2, attendancePercen_sub3, attendancePercen_sub4, attendancePercen_sub5, attendancePercen_sub6;

        cout << "Welcome to Attendence calculator" << endl;
        cout << "1. Calculate Attendance_percentage" << endl;
        cout << "2. Check Eligibility for Exam" << endl;
        cout << "3. Required class for 75%" << endl;
        cout << "4. Bunk Calculator" << endl;
        cout << "5. SubjectWise Attendance" << endl;
        cout << "Enter your choose:-  " << endl;
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "Enter how many class you attendaned" << endl;
            cin >> attendaned;
            cout << "Enter how many class you have in total" << endl;
            cin >> total_Class;

            attendance_percentage = (total_Class / attendaned) * 100;
            cout << "the Attendance percentage is:- " << attendance_percentage << endl;
            break;

        case 2:
            cout << "enter your Attendance in percentage:- ";
            cin >> Percentage;

            if (Percentage >= 75)
            {
                cout << "You are eligible for Exam" << endl;
            }
            else
            {
                cout << "You are Not Eligible for Exam" << endl;
            }
            break;

        case 3:
            cout << "Enter your Attendance in Percentage:- ";
            cin >> Percentage;

            if (Percentage >= 75)
            {
                cout << "You are Good to GO for Exam" << endl;
            }
            else
            {
                cout << "You required a Extra Class for Exam " << endl;
            }
            break;

        case 4:
            cout << "Enter how many classes you attended:- ";
            cin >> Attended_classes;

            cout << "enter How many Classes you have to attend:- ";
            cin >> required_classes;

            if (Attended_classes >= required_classes)
            {
                cout << "you can go for Bunk " << endl;
            }
            else
            {
                cout << "You cannot go for Bunk" << endl;
            }
            break;

        case 5:
            cout << "Enter your attendance in Subject1:- " << endl;
            cin >> attendance_sub1;
            cout << "Enter your attendance in Subject2:- " << endl;
            cin >> attendance_sub2;
            cout << "Enter Your attendance in Subject3;- " << endl;
            cin >> attendance_sub3;
            cout << "Enter your attendance in subject4:- " << endl;
            cin >> attendance_sub4;
            cout << "Enter your attendance in subject5:- " << endl;
            cin >> attendance_sub5;
            cout << "Enter your attendance in subject6:- " << endl;
            cin >> attendance_sub6;
            cout << "Enter Total attendance required for eligibility for Exam:- " << endl;
            cin >> total_Class;

            attendancePercen_sub1 = (attendance_sub1 / total_Class) * 100;
            attendancePercen_sub2 = (attendance_sub2 / total_Class) * 100;
            attendancePercen_sub3 = (attendance_sub3 / total_Class) * 100;
            attendancePercen_sub4 = (attendance_sub4 / total_Class) * 100;
            attendancePercen_sub5 = (attendance_sub5 / total_Class) * 100;
            attendancePercen_sub6 = (attendance_sub6 / total_Class) * 100;

            cout << "your percentage of attendance in subject1 is " << attendance_sub1 << endl;
            cout << "your percentage of attendance in subject2 is " << attendance_sub2 << endl;
            cout << "your percentage of attendance in subject3 is " << attendance_sub3 << endl;
            cout << "your percentage of attendance in subject4 is " << attendance_sub4 << endl;
            cout << "your percentage of attendance in subject5 is " << attendance_sub5 << endl;
            cout << "your percentage of attendance in subject6 is " << attendance_sub6 << endl;

            if (attendancePercen_sub1 >= 75)
            {
                cout << "You are eligible for Exam" << endl;
            }
            else
            {
                cout << "You are not eligible for Exam" << endl;
            }
            if (attendancePercen_sub2 >= 75)
            {
                cout << "You are eligible for Exam" << endl;
            }
            else
            {
                cout << "You are not eligible for Exam" << endl;
            }
            if (attendancePercen_sub3 >= 75)
            {
                cout << "You are eligible for Exam" << endl;
            }
            else
            {
                cout << "You are not eligible for Exam" << endl;
            }
            if (attendancePercen_sub4 >= 75)
            {
                cout << "You are eligible for Exam" << endl;
            }
            else
            {
                cout << "You are not eligible for Exam" << endl;
            }
            if (attendancePercen_sub5 >= 75)
            {
                cout << "You are eligible for Exam" << endl;
            }
            else
            {
                cout << "You are not eligible for Exam" << endl;
            }
            if (attendancePercen_sub6 >= 75)
            {
                cout << "You are eligible for Exam" << endl;
            }
            else
            {
                cout << "You are not eligible for Exam" << endl;
            }
            break;
        default:
            cout << "Invalid Input";
            break;
        }
        return 0;
    }
};

class Engineering_tool
{
    static int ohm_Law()
    {
        int voltage;
        int current;
        int Resistance;
        int choose;

        cout << "1. Find Voltage" << endl;
        cout << "2. Find Current" << endl;
        cout << "3. Find Resistance" << endl;
        cout << "Enter your Choose:- " << endl;
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "Enter the value of Current:- " << endl;
            cin >> current;
            cout << "Enter the value of Resistance:- " << endl;
            cin >> Resistance;

            voltage = current * Resistance;
            cout << "the value of Voltage is " << voltage << endl;
            break;

        case 2:
            cout << "Enter the value of Voltage:- " << endl;
            cin >> voltage;
            cout << "Enter the value of Resistance" << endl;
            cin >> Resistance;

            current = voltage + Resistance;
            cout << "the value of Current is " << current << endl;
            break;

        case 3:
            cout << "Enter the value of Voltage:- " << endl;
            cin >> voltage;
            cout << "Enter the value of current:- " << endl;
            cin >> current;

            Resistance = voltage / current;
            cout << "the value of Resistance is " << Resistance << endl;
            break;
        }
        return 0;
    }

    static int Electrical_Power()
    {
        int choose;
        int volts;
        int Amp;
        int Power;
        int resistance;
        int current;

        cout << "1. find Power using Volts and Amp" << endl;
        cout << "2. find Power using current and resistance" << endl;
        cout << "3. find Power using Volts and resistance" << endl;
        cout << "Enter your Choose:- ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "enter the value of Volts:- \n";
            cin >> volts;
            cout << "Enter the value of Amp:- \n";
            cin >> Amp;

            Power = volts * Amp;
            cout << "the value of power is:- " << Power << endl;
            break;

        case 2:
            cout << "enter the value of current:- \n";
            cin >> current;
            cout << "Enter the value of resistance:- \n";
            cin >> resistance;

            Power = (current * current) * resistance;
            cout << "the value of Power is:- " << Power << endl;
            break;

        case 3:
            cout << "Enter the value of volts:- \n";
            cin >> volts;
            cout << "enter the value of resistance:- \n";
            cin >> resistance;

            Power = (volts * volts) / resistance;
            cout << "The value of Power is:- " << Power << endl;
            break;
        default:
            cout << "Invalid input";
        }
        return 0;
    }

    static int Energy_Calculator()
    {
        int energy;
        int Power;
        int time;

        cout << "Enter the value of Power is:- \n";
        cin >> Power;
        cout << "Enter the time:- \n";
        cin >> time;

        energy = Power * time;

        cout << "the value of energy is " << energy << endl;
        return 0;
    }

    static float Series_resistance_calculator()
    {
        float resistance_value;
        float num_resistance;
        float series_add;

        cout << "enter the number of resistance:- \n";
        cin >> num_resistance;

        for (int i = 0; i <= num_resistance; i++)
        {
            cout << "Enter the value of resistance:- " << endl;
            cin >> resistance_value;
            series_add += resistance_value;
        }

        cout << "the value of series of resistance is:- " << series_add << endl;
        return 0;
    }

    static float Parallel_resistance_calculator()
    {
        float resistance_value;
        float num_resistance;
        float sum;
        float parallel_resistance;

        cout << "enter the number of resistance:- \n";
        cin >> num_resistance;

        for (int i = 0; i <= num_resistance; i++)
        {
            cout << "Enter the value of resistance:- " << endl;
            cin >> resistance_value;
            sum = sum + (1 / resistance_value);
        }

        parallel_resistance = 1 / sum;
        cout << "the value of Parallel_resistance is " << parallel_resistance << endl;
        return 0;
    }

    static float current_calculator()
    {
        int voltage;
        int Power;
        int current;

        cout << "Enter the value of voltage:- \n";
        cin >> voltage;
        cout << "Enter the value of Power:- \n";
        cin >> Power;

        current = voltage / Power;
        cout << "The value of current is " << current << endl;
        return 0;
    }

    static int Voltage_Divide()
    {
        int input_voltage;
        int resister1;
        int resister2;
        int out_voltage;

        cout << "Enter the value of input voltage:- \n";
        cin >> input_voltage;
        cout << "Enter the value of resister1:- \n";
        cin >> resister1;
        cout << "Enter the value of resister2:- \n";
        cin >> resister2;

        out_voltage = input_voltage * (resister2 / (resister1 + resister2));
        cout << "the value of voltage out is " << out_voltage << endl;
        return 0;
    }

    static float Area_calculators()
    {
        int choose;
        float length;
        float breath;
        float height;
        float base;
        float radius;
        float square, Rectangle, Triangle, Circle;

        cout << "welcome to Area calculator \n";
        cout << "1. Square area\n";
        cout << "2. Rectangle area\n";
        cout << "3. triangle area\n";
        cout << "4. circle area\n";
        cout << "enter your Choose:- ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "Enter the side of square:- \n";
            cin >> length;
            square = length * length;
            cout << "the area of square is " << square << endl;
            break;

        case 2:
            cout << "Enter the length of rectangle:- \n";
            cin >> length;
            cout << "Enter the breath of rectangle:- \n";
            cin >> breath;
            Rectangle = length * breath;
            cout << "The area of Rectangle is:-  " << Rectangle << endl;
            break;

        case 3:
            cout << "Enter the value of base:- \n";
            cin >> base;
            cout << "Enter the value of height:- \n";
            cin >> height;
            Triangle = 1 / 2 * base * height;
            cout << "the area of triangle is:- " << Triangle << endl;
            break;

        case 4:
            cout << "Enter the radius of circle:- \n";
            cin >> radius;
            Circle = 22 / 7 * (radius * radius);
            cout << "the area of circle is:- " << Circle << endl;
            break;
        default:
            cout << "Invalid input";
            break;
        }
        return 0;
    }

    static float Volume_Calculators()
    {
        int choose;
        float side;
        float height;
        float length;
        float breath;
        float radius;
        float Cube, Cuboid, Cylinder, Sphere, Cone;

        cout << "Welcome to Volume Calculator\n";
        cout << "1. cube Volume\n";
        cout << "2. cuboid Volume\n";
        cout << "3. Cylinder Volume\n";
        cout << "4. Sphere volume\n";
        cout << "5. cone Volume\n";
        cout << "Enter your Choose:- ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "Enter the side of cube:- \n";
            cin >> side;
            Cube = side * side * side;
            cout << "the Volume of cube is " << Cube << endl;
            break;

        case 2:
            cout << "Enter the length of cuboid:- \n";
            cin >> length;
            cout << "Enter the height of cuboid:- \n";
            cin >> height;
            cout << "Enter the breath of cuboid:- \n";
            cin >> breath;
            Cuboid = length * breath * height;
            cout << "the Volume of cuboid is " << Cuboid << endl;
            break;

        case 3:
            cout << "Enter the height of Cylinder:- \n";
            cin >> height;
            cout << "Enter the radius of the cylinder:- \n";
            cin >> radius;
            Cylinder = 22 / 7 * (radius * radius) * height;
            cout << "the Volume of Cylinder is:- " << Cylinder << endl;
            break;

        case 4:
            cout << "Enter the radius of sphere:- \n";
            cin >> radius;
            Sphere = (4 / 3) * (22 / 7) * (radius * radius * radius);
            cout << "the volume of Sphere is " << Sphere << endl;
            break;

        case 5:
            cout << "Enter the radius of cone:- \n";
            cin >> radius;
            cout << "Enter the height of Cone:- \n";
            cin >> height;
            Cone = (1 / 3) * (22 / 7) * (radius * radius) * height;
            cout << "the volume of cone is:- " << Cone << endl;
            break;

        default:
            cout << "Invalid input";
        }
        return 0;
    }

    static float Mechanical_calculator()
    {
        int choose;
        float Speed;
        float Distance;
        float time;
        float Force;
        float Acceleration;
        float Mass;
        float Torque;
        float Radius;
        float Work;
        float Power;
        float Velocity;
        float momentum;

        cout << "welcome to Mechanical calculator\n"
             << endl;
        cout << "1. Speed calculator\n";
        cout << "2. Force calculator\n";
        cout << "3. torque Calculator\n";
        cout << "4. Work Calculator\n";
        cout << "5. Power Calculator\n";
        cout << "6. momentum calculator\n";
        cout << "7. Acceleration calculator\n";
        cout << "Enter your choose:- ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "Enter your distance:- ";
            cin >> Distance;
            cout << "Enter your time:- ";
            cin >> time;
            Speed = Distance / time;
            cout << "your speed is " << Speed << endl;
            break;

        case 2:
            cout << "enter your Mass:- ";
            cin >> Mass;
            cout << "enter your acceleration:- ";
            cin >> Acceleration;
            Force = Mass * Acceleration;
            cout << "Your force is " << Force << endl;
            break;

        case 3:
            cout << "Enter your Force:-  ";
            cin >> Force;
            cout << "Enter your Radius:- ";
            cin >> Radius;
            Torque = Force * Radius;
            cout << "Your torque is:-  " << Torque << endl;
            break;

        case 4:
            cout << "Enter your Force:- \n";
            cin >> Force;
            cout << "Enter your distance:- \n";
            cin >> Distance;
            Work = Force * Distance;
            cout << "Your Work is " << Work << endl;
            break;

        case 5:
            cout << "Enter your work:- \n";
            cin >> Work;
            cout << "Enter your time:- \n";
            cin >> time;
            Power = Work / time;
            cout << "Your Power is " << Power << endl;
            break;

        case 6:
            cout << "Enter your Mass:- ";
            cin >> Mass;
            cout << "Enter your Velocity:- ";
            cin >> Velocity;
            momentum = Mass * Velocity;
            cout << "Your momentum is " << momentum << endl;
            break;

        case 7:
            cout << "Enter your velocity:- ";
            cin >> Velocity;
            cout << "Enter your time:- ";
            cin >> time;
            Acceleration = Velocity / time;
            cout << "Your Acceleration is " << Acceleration << endl;
            break;
        default:
            cout << "Invaild Input";
        }
        return 0;
    }

    static float Electrial()
    {
        int choice;
        do
        {
            cout << "\nElectronics Calculator\n";
            cout << "1. 4-Band Resistor Calculator\n";
            cout << "2. 5-Band Resistor Calculator\n";
            cout << "3. Color Code Table\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1)
            {
                string c1, c2, c3, c4;
                int d1, d2;
                double multiplier, resistance;

                cout << "Enter 4 colors (lowercase):\n";
                cin >> c1 >> c2 >> c3 >> c4;

                // Digit conversion
                string colors[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
                d1 = d2 = -1;
                for (int i = 0; i < 10; i++)
                {
                    if (c1 == colors[i])
                        d1 = i;
                    if (c2 == colors[i])
                        d2 = i;
                }

                // Multiplier
                string mcolors[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white", "gold", "silver"};
                double mvalues[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 0.1, 0.01};
                multiplier = 1;
                for (int i = 0; i < 12; i++)
                {
                    if (c3 == mcolors[i])
                        multiplier = mvalues[i];
                }

                resistance = ((d1 * 10) + d2) * multiplier;

                cout << "Resistance = " << resistance << " Ohms ";

                // Tolerance
                if (c4 == "brown")
                    cout << "±1%";
                else if (c4 == "red")
                    cout << "±2%";
                else if (c4 == "green")
                    cout << "±0.5%";
                else if (c4 == "blue")
                    cout << "±0.25%";
                else if (c4 == "violet")
                    cout << "±0.1%";
                else if (c4 == "grey")
                    cout << "±0.05%";
                else if (c4 == "gold")
                    cout << "±5%";
                else if (c4 == "silver")
                    cout << "±10%";
                else
                    cout << "±20%";

                cout << endl;
            }

            else if (choice == 2)
            {
                string c1, c2, c3, c4, c5;
                int d1 = -1, d2 = -1, d3 = -1;
                double multiplier, resistance;

                cout << "Enter 5 colors (lowercase):\n";
                cin >> c1 >> c2 >> c3 >> c4 >> c5;

                string colors[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
                for (int i = 0; i < 10; i++)
                {
                    if (c1 == colors[i])
                        d1 = i;
                    if (c2 == colors[i])
                        d2 = i;
                    if (c3 == colors[i])
                        d3 = i;
                }

                string mcolors[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white", "gold", "silver"};
                double mvalues[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 0.1, 0.01};
                multiplier = 1;
                for (int i = 0; i < 12; i++)
                {
                    if (c4 == mcolors[i])
                        multiplier = mvalues[i];
                }

                resistance = ((d1 * 100) + (d2 * 10) + d3) * multiplier;

                cout << "Resistance = " << resistance << " Ohms ";

                if (c5 == "brown")
                    cout << "±1%";
                else if (c5 == "red")
                    cout << "±2%";
                else if (c5 == "green")
                    cout << "±0.5%";
                else if (c5 == "blue")
                    cout << "±0.25%";
                else if (c5 == "violet")
                    cout << "±0.1%";
                else if (c5 == "grey")
                    cout << "±0.05%";
                else if (c5 == "gold")
                    cout << "±5%";
                else if (c5 == "silver")
                    cout << "±10%";
                else
                    cout << "±20%";

                cout << endl;
            }

            else if (choice == 3)
            {
                cout << "\nColor Code Table:\n";
                cout << "Black=0 Brown=1 Red=2 Orange=3 Yellow=4\n";
                cout << "Green=5 Blue=6 Violet=7 Grey=8 White=9\n";
                cout << "Gold=0.1 Silver=0.01\n";
            }

            else if (choice == 4)
            {
                cout << "Exiting...\n";
            }

            else
            {
                cout << "Invalid choice!\n";
            }

        } while (choice != 4);

        return 0;
    }
};

class Statices
{
    static float Mean()
    {
        float count;
        float num;
        float mean;
        float total;

        cout<<"Enter the count of number:- ";
        cin>>count;

        for (int i = 0;i <= count;i++)
        {
            cout<<"Enter the number:- ";
            cin>>num;
            num += total;
        }

        mean = total / count;
        cout<<"your Mean is:- "<<mean<<endl;

        return 0;
    }

    static float Median()
    {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;

        float arr[n];

        cout << "Enter " << n << " numbers:\n";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort the array
        sort(arr, arr + n);

        float median;

        if(n % 2 == 0) {
            // Even case
            median = (arr[n/2 - 1] + arr[n/2]) / 2;
        } else {
            // Odd case
            median = arr[n/2];
        }

        cout << "Median = " << median;
        return 0;
    }

    static float Mode()
    {
        int n;

        cout << "Enter number of elements: ";
        cin >> n;

        int arr[n];

        cout << "Enter " << n << " numbers:\n";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxCount = 0;

        // Find frequency of each element
        for(int i = 0; i < n; i++) {
            int count = 1;

            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }

            if(count > maxCount) {
                maxCount = count;
            }
        }

        // Check if mode exists
        if(maxCount == 1) {
            cout << "No mode (all elements are unique)";
            return 0;
        }

        cout << "Mode value(s): ";

        // Print all modes
        for(int i = 0; i < n; i++) {
            int count = 1;

            // Avoid duplicates
            bool alreadyPrinted = false;
            for(int k = 0; k < i; k++) {
                if(arr[i] == arr[k]) {
                    alreadyPrinted = true;
                    break;
                }
            }

            if(alreadyPrinted) continue;

            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }

            if(count == maxCount) {
                cout << arr[i] << " ";
            }
        }

        cout << "\nFrequency = " << maxCount;

        return 0;
    }

    static float Range()
    {
        int n;

        cout << "Enter number of elements: ";
        cin >> n;

        int arr[n];

        cout << "Enter " << n << " numbers:\n";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int max = arr[0];
        int min = arr[0];

        // Find max and min
        for(int i = 1; i < n; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
            if(arr[i] < min) {
                min = arr[i];
            }
        }

        int range = max - min;

        cout << "Maximum = " << max << endl;
        cout << "Minimum = " << min << endl;
        cout << "Range = " << range << endl;

        return 0;
    }

    static float count_number()
    {
        int n;

        cout << "Enter number of elements: ";
        cin >> n;

        int arr[n];

        cout << "Enter " << n << " numbers:\n";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "Total count of numbers = " << n;

        return 0;
    }

    static float Standard_Deviation()
    {
        int choice, n;

        do {
            cout << "\nStandard Deviation Calculator\n";
            cout << "1. Population Standard Deviation\n";
            cout << "2. Sample Standard Deviation\n";
            cout << "3. Variance\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if(choice >= 1 && choice <= 3) {
                cout << "Enter number of elements: ";
                cin >> n;

                float arr[n], sum = 0, mean, variance = 0, stddev;

                cout << "Enter " << n << " numbers:\n";
                for(int i = 0; i < n; i++) {
                    cin >> arr[i];
                    sum += arr[i];
                }

                mean = sum / n;

                // Calculate variance
                for(int i = 0; i < n; i++) {
                    variance += pow(arr[i] - mean, 2);
                }

                if(choice == 1) {
                    // Population
                    variance = variance / n;
                    stddev = sqrt(variance);

                    cout << "Mean = " << mean << endl;
                    cout << "Population Variance = " << variance << endl;
                    cout << "Population Standard Deviation = " << stddev << endl;
                }

                else if(choice == 2) {
                    // Sample
                    variance = variance / (n - 1);
                    stddev = sqrt(variance);

                    cout << "Mean = " << mean << endl;
                    cout << "Sample Variance = " << variance << endl;
                    cout << "Sample Standard Deviation = " << stddev << endl;
                }

                else if(choice == 3) {
                    // Variance only (population)
                    variance = variance / n;

                    cout << "Mean = " << mean << endl;
                    cout << "Variance = " << variance << endl;
                }
            }

            else if(choice == 4) {
                cout << "Exiting...\n";
            }

            else {
                cout << "Invalid choice!\n";
            }

        } while(choice != 4);

        return 0;
    }

    static float Variance()
    {
        int choice, n;

        do {
            cout << "\nVariance Calculator\n";
            cout << "1. Population Variance\n";
            cout << "2. Sample Variance\n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if(choice == 1 || choice == 2) {
                cout << "Enter number of elements: ";
                cin >> n;

                float arr[n], sum = 0, mean, variance = 0;

                cout << "Enter " << n << " numbers:\n";
                for(int i = 0; i < n; i++) {
                    cin >> arr[i];
                    sum += arr[i];
                }

                mean = sum / n;

                // Calculate squared differences
                for(int i = 0; i < n; i++) {
                    variance += (arr[i] - mean) * (arr[i] - mean);
                }

                if(choice == 1) {
                    variance = variance / n;   // Population
                    cout << "Mean = " << mean << endl;
                    cout << "Population Variance = " << variance << endl;
                }

                else {
                    variance = variance / (n - 1);   // Sample
                    cout << "Mean = " << mean << endl;
                    cout << "Sample Variance = " << variance << endl;
                }
            }

            else if(choice == 3) {
                cout << "Exiting...\n";
            }

            else {
                cout << "Invalid choice!\n";
            }

        } while(choice != 3);

        return 0;
    }

    static float Probability()
    {
        int choice;

    do {
        cout << "\nProbability Calculator\n";
        cout << "1. Basic Probability\n";
        cout << "2. Complementary Probability\n";
        cout << "3. Addition Rule\n";
        cout << "4. Multiplication Rule\n";
        cout << "5. Conditional Probability\n";
        cout << "6. Permutation (nPr)\n";
        cout << "7. Combination (nCr)\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {
            float fav, total;
            cout << "Enter favourable outcomes: ";
            cin >> fav;
            cout << "Enter total outcomes: ";
            cin >> total;

            cout << "Probability = " << (fav / total) << endl;
        }

        else if(choice == 2) {
            float p;
            cout << "Enter P(A): ";
            cin >> p;

            cout << "Complementary Probability = " << (1 - p) << endl;
        }

        else if(choice == 3) {
            float pa, pb, pab;
            cout << "Enter P(A): ";
            cin >> pa;
            cout << "Enter P(B): ";
            cin >> pb;
            cout << "Enter P(A ∩ B): ";
            cin >> pab;

            cout << "P(A U B) = " << (pa + pb - pab) << endl;
        }

        else if(choice == 4) {
            float pa, pb;
            cout << "Enter P(A): ";
            cin >> pa;
            cout << "Enter P(B): ";
            cin >> pb;

            cout << "P(A ∩ B) = " << (pa * pb) << endl;
        }

        else if(choice == 5) {
            float pab, pb;
            cout << "Enter P(A ∩ B): ";
            cin >> pab;
            cout << "Enter P(B): ";
            cin >> pb;

            cout << "P(A | B) = " << (pab / pb) << endl;
        }

        else if(choice == 6) {
            int n, r;
            long long factN = 1, factNR = 1;

            cout << "Enter n and r: ";
            cin >> n >> r;

            for(int i = 1; i <= n; i++)
                factN *= i;

            for(int i = 1; i <= (n - r); i++)
                factNR *= i;

            cout << "nPr = " << (factN / factNR) << endl;
        }

        else if(choice == 7) {
            int n, r;
            long long factN = 1, factR = 1, factNR = 1;

            cout << "Enter n and r: ";
            cin >> n >> r;

            for(int i = 1; i <= n; i++)
                factN *= i;

            for(int i = 1; i <= r; i++)
                factR *= i;

            for(int i = 1; i <= (n - r); i++)
                factNR *= i;

            cout << "nCr = " << (factN / (factR * factNR)) << endl;
        }

        else if(choice == 8) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 8);

        return 0;
    }

    static float Regression()
    {
        int choice, n;

        do {
            cout << "\nRegression Calculator\n";
            cout << "1. Calculate Regression Line (a, b)\n";
            cout << "2. Predict Y for given X\n";
            cout << "3. Correlation Coefficient (r)\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            if(choice >= 1 && choice <= 3) {
                cout << "Enter number of data points: ";
                cin >> n;

                float x[n], y[n];
                float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0;

                cout << "Enter values of X:\n";
                for(int i = 0; i < n; i++) {
                    cin >> x[i];
                    sumX += x[i];
                    sumX2 += x[i] * x[i];
                }

                cout << "Enter values of Y:\n";
                for(int i = 0; i < n; i++) {
                    cin >> y[i];
                    sumY += y[i];
                    sumXY += x[i] * y[i];
                    sumY2 += y[i] * y[i];
                }

                float b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
                float a = (sumY - b * sumX) / n;

                if(choice == 1) {
                    cout << "Regression Equation: Y = " << a << " + " << b << "X\n";
                }

                else if(choice == 2) {
                    float Xval;
                    cout << "Enter value of X: ";
                    cin >> Xval;

                    float Ypred = a + b * Xval;
                    cout << "Predicted Y = " << Ypred << endl;
                }

                else if(choice == 3) {
                    float r = (n * sumXY - sumX * sumY) /
                              sqrt((n * sumX2 - sumX * sumX) *
                                   (n * sumY2 - sumY * sumY));

                    cout << "Correlation Coefficient (r) = " << r << endl;
                }
            }

            else if(choice == 4) {
                cout << "Exiting...\n";
            }

            else {
                cout << "Invalid choice!\n";
            }

        } while(choice != 4);

        return 0;
    }
};

class Programming
{
    static float Number_System_Convertors()
    {
        int choice;

    do {
        cout << "\nNumber System Converter\n";
        cout << "1. Decimal to Binary\n";
        cout << "2. Decimal to Octal\n";
        cout << "3. Decimal to Hexadecimal\n";
        cout << "4. Binary to Decimal\n";
        cout << "5. Octal to Decimal\n";
        cout << "6. Hexadecimal to Decimal\n";
        cout << "7. Binary Addition\n";
        cout << "8. Binary to Hexadecimal\n";
        cout << "9. Hexadecimal to Binary\n";
        cout << "10. Octal to Hexadecimal\n";
        cout << "11. Hexadecimal to Octal\n";
        cout << "12. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Decimal → Binary
        if(choice == 1) {
            int n, bin[32], i = 0;
            cout << "Enter decimal: ";
            cin >> n;
            while(n > 0) {
                bin[i++] = n % 2;
                n /= 2;
            }
            cout << "Binary = ";
            for(int j = i - 1; j >= 0; j--) cout << bin[j];
            cout << endl;
        }

        // Decimal → Octal
        else if(choice == 2) {
            int n, oct[32], i = 0;
            cout << "Enter decimal: ";
            cin >> n;
            while(n > 0) {
                oct[i++] = n % 8;
                n /= 8;
            }
            cout << "Octal = ";
            for(int j = i - 1; j >= 0; j--) cout << oct[j];
            cout << endl;
        }

        // Decimal → Hex
        else if(choice == 3) {
            int n; char hex[32]; int i = 0;
            cout << "Enter decimal: ";
            cin >> n;
            while(n > 0) {
                int r = n % 16;
                hex[i++] = (r < 10) ? r + '0' : r - 10 + 'A';
                n /= 16;
            }
            cout << "Hex = ";
            for(int j = i - 1; j >= 0; j--) cout << hex[j];
            cout << endl;
        }

        // Binary → Decimal
        else if(choice == 4) {
            int b, dec = 0, base = 1;
            cout << "Enter binary: ";
            cin >> b;
            while(b > 0) {
                int r = b % 10;
                if(r != 0 && r != 1) {
                    cout << "Invalid binary!\n"; break;
                }
                dec += r * base;
                base *= 2;
                b /= 10;
            }
            cout << "Decimal = " << dec << endl;
        }

        // Octal → Decimal
        else if(choice == 5) {
            int o, dec = 0, base = 1;
            cout << "Enter octal: ";
            cin >> o;
            while(o > 0) {
                int r = o % 10;
                if(r > 7) {
                    cout << "Invalid octal!\n"; break;
                }
                dec += r * base;
                base *= 8;
                o /= 10;
            }
            cout << "Decimal = " << dec << endl;
        }

        // Hex → Decimal
        else if(choice == 6) {
            string h; int dec = 0, base = 1;
            cout << "Enter hex: ";
            cin >> h;
            for(int i = h.length() - 1; i >= 0; i--) {
                if(h[i] >= '0' && h[i] <= '9')
                    dec += (h[i] - '0') * base;
                else if(h[i] >= 'A' && h[i] <= 'F')
                    dec += (h[i] - 'A' + 10) * base;
                else if(h[i] >= 'a' && h[i] <= 'f')
                    dec += (h[i] - 'a' + 10) * base;
                else {
                    cout << "Invalid hex!\n"; break;
                }
                base *= 16;
            }
            cout << "Decimal = " << dec << endl;
        }

        // Binary Addition
        else if(choice == 7) {
            int b1, b2, res = 0, carry = 0, base = 1;
            cout << "Enter two binary numbers: ";
            cin >> b1 >> b2;
            while(b1 > 0 || b2 > 0 || carry) {
                int s = (b1 % 10) + (b2 % 10) + carry;
                res += (s % 2) * base;
                carry = s / 2;
                b1 /= 10; b2 /= 10; base *= 10;
            }
            cout << "Result = " << res << endl;
        }

        // Binary → Hex
        else if(choice == 8) {
            int b, dec = 0, base = 1;
            cout << "Enter binary: ";
            cin >> b;
            while(b > 0) {
                dec += (b % 10) * base;
                base *= 2;
                b /= 10;
            }
            char hex[32]; int i = 0;
            while(dec > 0) {
                int r = dec % 16;
                hex[i++] = (r < 10) ? r + '0' : r - 10 + 'A';
                dec /= 16;
            }
            cout << "Hex = ";
            for(int j = i - 1; j >= 0; j--) cout << hex[j];
            cout << endl;
        }

        // Hex → Binary
        else if(choice == 9) {
            string h;
            cout << "Enter hex: ";
            cin >> h;
            cout << "Binary = ";
            for(int i = 0; i < h.length(); i++) {
                switch(toupper(h[i])) {
                    case '0': cout<<"0000"; break;
                    case '1': cout<<"0001"; break;
                    case '2': cout<<"0010"; break;
                    case '3': cout<<"0011"; break;
                    case '4': cout<<"0100"; break;
                    case '5': cout<<"0101"; break;
                    case '6': cout<<"0110"; break;
                    case '7': cout<<"0111"; break;
                    case '8': cout<<"1000"; break;
                    case '9': cout<<"1001"; break;
                    case 'A': cout<<"1010"; break;
                    case 'B': cout<<"1011"; break;
                    case 'C': cout<<"1100"; break;
                    case 'D': cout<<"1101"; break;
                    case 'E': cout<<"1110"; break;
                    case 'F': cout<<"1111"; break;
                    default: cout<<"Invalid"; break;
                }
            }
            cout << endl;
        }

        // Octal → Hex
        else if(choice == 10) {
            int o, dec = 0, base = 1;
            cout << "Enter octal: ";
            cin >> o;
            while(o > 0) {
                int r = o % 10;
                if(r > 7) { cout<<"Invalid!\n"; break; }
                dec += r * base;
                base *= 8;
                o /= 10;
            }
            char hex[32]; int i = 0;
            while(dec > 0) {
                int r = dec % 16;
                hex[i++] = (r < 10) ? r + '0' : r - 10 + 'A';
                dec /= 16;
            }
            cout << "Hex = ";
            for(int j = i - 1; j >= 0; j--) cout << hex[j];
            cout << endl;
        }

        // Hex → Octal
        else if(choice == 11) {
            string h; int dec = 0, base = 1;
            cout << "Enter hex: ";
            cin >> h;
            for(int i = h.length() - 1; i >= 0; i--) {
                if(h[i] >= '0' && h[i] <= '9')
                    dec += (h[i] - '0') * base;
                else
                    dec += (toupper(h[i]) - 'A' + 10) * base;
                base *= 16;
            }
            int oct[32], i = 0;
            while(dec > 0) {
                oct[i++] = dec % 8;
                dec /= 8;
            }
            cout << "Octal = ";
            for(int j = i - 1; j >= 0; j--) cout << oct[j];
            cout << endl;
        }

        else if(choice == 12) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 12);

        return 0;
    }

    static float BitWise_Operations()
    {
        int choice;

    do {
        cout << "\nBitwise Calculator\n";
        cout << "1. AND (&)\n";
        cout << "2. OR (|)\n";
        cout << "3. XOR (^)\n";
        cout << "4. NOT (~)\n";
        cout << "5. Left Shift (<<)\n";
        cout << "6. Right Shift (>>)\n";
        cout << "7. Check Bit (ON/OFF)\n";
        cout << "8. Toggle Bit\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";

        if(!(cin >> choice)) {
            cout << "Invalid input!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        // Function-like block for binary display
        auto printBinary = [](int num) {
            for(int i = 7; i >= 0; i--) {
                cout << ((num >> i) & 1);
            }
        };

        if(choice >= 1 && choice <= 3) {
            int a, b;
            cout << "Enter two integers: ";

            if(!(cin >> a >> b)) {
                cout << "Invalid input!\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

            cout << "A in binary: "; printBinary(a); cout << endl;
            cout << "B in binary: "; printBinary(b); cout << endl;

            int result;
            if(choice == 1) result = a & b;
            else if(choice == 2) result = a | b;
            else result = a ^ b;

            cout << "Result = " << result << endl;
            cout << "Result in binary: "; printBinary(result); cout << endl;
        }

        else if(choice == 4) {
            int a;
            cout << "Enter integer: ";

            if(!(cin >> a)) {
                cout << "Invalid input!\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

            cout << "Binary: "; printBinary(a); cout << endl;
            int result = ~a;

            cout << "Result = " << result << endl;
            cout << "Result in binary: "; printBinary(result); cout << endl;
        }

        else if(choice == 5 || choice == 6) {
            int a, shift;
            cout << "Enter number: ";

            if(!(cin >> a)) {
                cout << "Invalid input!\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

            cout << "Enter shift value: ";

            if(!(cin >> shift) || shift < 0) {
                cout << "Invalid shift!\n";
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }

            cout << "Binary before: "; printBinary(a); cout << endl;

            int result = (choice == 5) ? (a << shift) : (a >> shift);

            cout << "Result = " << result << endl;
            cout << "Binary after: "; printBinary(result); cout << endl;
        }

        else if(choice == 7) {
            int num, pos;
            cout << "Enter number: ";
            cin >> num;

            cout << "Enter bit position (0-7): ";
            cin >> pos;

            if(pos < 0 || pos > 7) {
                cout << "Invalid position!\n";
                continue;
            }

            if(num & (1 << pos))
                cout << "Bit is ON\n";
            else
                cout << "Bit is OFF\n";
        }

        else if(choice == 8) {
            int num, pos;
            cout << "Enter number: ";
            cin >> num;

            cout << "Enter bit position (0-7): ";
            cin >> pos;

            if(pos < 0 || pos > 7) {
                cout << "Invalid position!\n";
                continue;
            }

            cout << "Before: "; printBinary(num); cout << endl;

            num = num ^ (1 << pos);

            cout << "After: "; printBinary(num); cout << endl;
            cout << "Result = " << num << endl;
        }

        else if(choice == 9) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 9);
        return 0;
    }

    static float ASCII_Convertor()
    {
        int choice;

    do {
        cout << "\nASCII Converter\n";
        cout << "1. Character to ASCII\n";
        cout << "2. ASCII to Character\n";
        cout << "3. String to ASCII\n";
        cout << "4. ASCII to String\n";
        cout << "5. Case Conversion\n";
        cout << "6. Show ASCII Table\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";

        if(!(cin >> choice)) {
            cout << "Invalid input!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        // 1. Character → ASCII
        if(choice == 1) {
            char ch;
            cout << "Enter a character: ";
            cin >> ch;

            cout << "ASCII value = " << (int)ch << endl;
        }

        // 2. ASCII → Character
        else if(choice == 2) {
            int num;
            cout << "Enter ASCII value (0-127): ";
            cin >> num;

            if(num < 0 || num > 127) {
                cout << "Invalid ASCII range!\n";
            } else {
                cout << "Character = " << (char)num << endl;
            }
        }

        // 3. String → ASCII
        else if(choice == 3) {
            cin.ignore();
            string str;

            cout << "Enter a string: ";
            getline(cin, str);

            cout << "ASCII values: ";
            for(int i = 0; i < str.length(); i++) {
                cout << (int)str[i] << " ";
            }
            cout << endl;
        }

        // 4. ASCII → String
        else if(choice == 4) {
            int n;
            cout << "How many ASCII values? ";
            cin >> n;

            if(n <= 0) {
                cout << "Invalid count!\n";
                continue;
            }

            cout << "Enter ASCII values:\n";
            for(int i = 0; i < n; i++) {
                int val;
                cin >> val;

                if(val < 0 || val > 127) {
                    cout << "Invalid ASCII!\n";
                } else {
                    cout << (char)val;
                }
            }
            cout << endl;
        }

        // 5. Case Conversion
        else if(choice == 5) {
            char ch;
            cout << "Enter a character: ";
            cin >> ch;

            if(ch >= 'A' && ch <= 'Z') {
                cout << "Lowercase = " << (char)(ch + 32) << endl;
            }
            else if(ch >= 'a' && ch <= 'z') {
                cout << "Uppercase = " << (char)(ch - 32) << endl;
            }
            else {
                cout << "Not an alphabet!\n";
            }
        }

        // 6. ASCII Table
        else if(choice == 6) {
            cout << "\nASCII Table (A-Z, a-z, 0-9)\n";

            cout << "\nA-Z:\n";
            for(char c = 'A'; c <= 'Z'; c++) {
                cout << c << " = " << (int)c << endl;
            }

            cout << "\na-z:\n";
            for(char c = 'a'; c <= 'z'; c++) {
                cout << c << " = " << (int)c << endl;
            }

            cout << "\n0-9:\n";
            for(char c = '0'; c <= '9'; c++) {
                cout << c << " = " << (int)c << endl;
            }
        }

        else if(choice == 7) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 7);

        return 0;
    }

    static float base_conversion()
    {
        int choice;

    do {
        cout << "\nBase Conversion Calculator\n";
        cout << "1. Any Base to Decimal\n";
        cout << "2. Decimal to Any Base\n";
        cout << "3. Any Base to Any Base (with steps)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if(!(cin >> choice)) {
            cout << "Invalid input!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        // char → value
        auto charToVal = [](char c) {
            if(c >= '0' && c <= '9') return c - '0';
            if(c >= 'A' && c <= 'Z') return c - 'A' + 10;
            if(c >= 'a' && c <= 'z') return c - 'a' + 10;
            return -1;
        };

        // value → char
        auto valToChar = [](int v) {
            if(v < 10) return char(v + '0');
            return char(v - 10 + 'A');
        };

        // 1. Any Base → Decimal
        if(choice == 1) {
            string num;
            int base;
            cout << "Enter number: ";
            cin >> num;
            cout << "Enter base (2-36): ";
            cin >> base;

            if(base < 2 || base > 36) {
                cout << "Invalid base!\n";
                continue;
            }

            bool negative = false;
            if(num[0] == '-') {
                negative = true;
                num = num.substr(1);
            }

            long long decimal = 0;
            bool valid = true;

            for(int i = 0; i < num.length(); i++) {
                int val = charToVal(num[i]);

                if(val < 0 || val >= base) {
                    cout << "Invalid digit '" << num[i] << "' for base " << base << endl;
                    valid = false;
                    break;
                }

                decimal = decimal * base + val;
            }

            if(valid) {
                if(negative) decimal = -decimal;
                cout << "Decimal = " << decimal << endl;
            }
        }

        // 2. Decimal → Any Base
        else if(choice == 2) {
            long long num;
            int base;

            cout << "Enter decimal number: ";
            cin >> num;
            cout << "Enter base (2-36): ";
            cin >> base;

            if(base < 2 || base > 36) {
                cout << "Invalid base!\n";
                continue;
            }

            bool negative = false;
            if(num < 0) {
                negative = true;
                num = -num;
            }

            string result = "";

            while(num > 0) {
                int rem = num % base;
                result = valToChar(rem) + result;
                num /= base;
            }

            if(result == "") result = "0";
            if(negative) result = "-" + result;

            cout << "Converted = " << result << endl;
        }

        // 3. Any Base → Any Base (with steps)
        else if(choice == 3) {
            string num;
            int base1, base2;

            cout << "Enter number: ";
            cin >> num;
            cout << "Enter source base: ";
            cin >> base1;
            cout << "Enter target base: ";
            cin >> base2;

            if(base1 < 2 || base1 > 36 || base2 < 2 || base2 > 36) {
                cout << "Invalid base!\n";
                continue;
            }

            bool negative = false;
            if(num[0] == '-') {
                negative = true;
                num = num.substr(1);
            }

            // Step 1: Base → Decimal
            long long decimal = 0;
            bool valid = true;

            for(int i = 0; i < num.length(); i++) {
                int val = charToVal(num[i]);

                if(val < 0 || val >= base1) {
                    cout << "Invalid digit '" << num[i] << "' for base " << base1 << endl;
                    valid = false;
                    break;
                }

                decimal = decimal * base1 + val;
            }

            if(!valid) continue;

            cout << "Step 1: Base " << base1 << " → Decimal = " << decimal << endl;

            // Step 2: Decimal → Target Base
            long long temp = decimal;
            string result = "";

            while(temp > 0) {
                int rem = temp % base2;
                result = valToChar(rem) + result;
                temp /= base2;
            }

            if(result == "") result = "0";
            if(negative) result = "-" + result;

            cout << "Step 2: Decimal → Base " << base2 << " = " << result << endl;
            cout << "Final Answer = " << result << endl;
        }

        else if(choice == 4) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 4);

        return 0;
    }
};

class DATE_TIME
{
    static int Age_calculator()
    {
    int choice;

    do {
        cout << "\nAge Calculator\n";
        cout << "1. Calculate Age (till today)\n";
        cout << "2. Calculate Age (custom date)\n";
        cout << "3. Total Days Lived\n";
        cout << "4. Next Birthday\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int d1, m1, y1;
        cout << "Enter DOB (dd mm yyyy): ";
        cin >> d1 >> m1 >> y1;

        // Validate DOB
        int dim;
        if(m1 == 2)
            dim = ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)) ? 29 : 28;
        else if(m1==4||m1==6||m1==9||m1==11)
            dim = 30;
        else
            dim = 31;

        if(m1 < 1 || m1 > 12 || d1 < 1 || d1 > dim) {
            cout << "Invalid DOB!\n";
            continue;
        }

        // -------- AGE CALCULATION --------
        if(choice == 1 || choice == 2) {
            int d2, m2, y2;

            cout << "Enter date (dd mm yyyy): ";
            cin >> d2 >> m2 >> y2;

            // Validate date
            if(m2 == 2)
                dim = ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)) ? 29 : 28;
            else if(m2==4||m2==6||m2==9||m2==11)
                dim = 30;
            else
                dim = 31;

            if(m2 < 1 || m2 > 12 || d2 < 1 || d2 > dim) {
                cout << "Invalid date!\n";
                continue;
            }

            if(d2 < d1) {
                m2--;
                int prevMonth = (m2 == 0) ? 12 : m2;
                int prevYear = (m2 == 0) ? y2 - 1 : y2;

                if(prevMonth == 2)
                    dim = ((prevYear % 4 == 0 && prevYear % 100 != 0) || (prevYear % 400 == 0)) ? 29 : 28;
                else if(prevMonth==4||prevMonth==6||prevMonth==9||prevMonth==11)
                    dim = 30;
                else
                    dim = 31;

                d2 += dim;
            }

            if(m2 < m1) {
                y2--;
                m2 += 12;
            }

            cout << "Age = "
                 << (y2 - y1) << " Years, "
                 << (m2 - m1) << " Months, "
                 << (d2 - d1) << " Days\n";
        }

        // -------- TOTAL DAYS --------
        else if(choice == 3) {
            int d2, m2, y2;
            cout << "Enter current date (dd mm yyyy): ";
            cin >> d2 >> m2 >> y2;

            int total = 0;

            for(int y = y1; y < y2; y++)
                total += ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 366 : 365;

            for(int m = 1; m < m2; m++) {
                if(m == 2)
                    total += ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)) ? 29 : 28;
                else if(m==4||m==6||m==9||m==11)
                    total += 30;
                else
                    total += 31;
            }

            total += d2;

            for(int m = 1; m < m1; m++) {
                if(m == 2)
                    total -= ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)) ? 29 : 28;
                else if(m==4||m==6||m==9||m==11)
                    total -= 30;
                else
                    total -= 31;
            }

            total -= d1;

            cout << "Total Days Lived = " << total << endl;
        }

        // -------- NEXT BIRTHDAY --------
        else if(choice == 4) {
            int cd, cm, cy;
            cout << "Enter current date (dd mm yyyy): ";
            cin >> cd >> cm >> cy;

            int nextY = cy;
            if(cm > m1 || (cm == m1 && cd > d1))
                nextY++;

            int td = cd, tm = cm, ty = cy, days = 0;

            while(td != d1 || tm != m1 || ty != nextY) {
                td++;

                int dim2;
                if(tm == 2)
                    dim2 = ((ty % 4 == 0 && ty % 100 != 0) || (ty % 400 == 0)) ? 29 : 28;
                else if(tm==4||tm==6||tm==9||tm==11)
                    dim2 = 30;
                else
                    dim2 = 31;

                if(td > dim2) {
                    td = 1;
                    tm++;
                }

                if(tm > 12) {
                    tm = 1;
                    ty++;
                }

                days++;
            }

            cout << "Days until next birthday = " << days << endl;
        }

        else if(choice == 5) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
    }

    static int Date_Difference_calculator()
    {
        int choice;

    do {
        cout << "\nDate Difference Calculator\n";
        cout << "1. Difference (Years, Months, Days)\n";
        cout << "2. Total Days Difference\n";
        cout << "3. Weeks and Days\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int d1, m1, y1, d2, m2, y2;

        cout << "Enter First Date (dd mm yyyy): ";
        cin >> d1 >> m1 >> y1;

        cout << "Enter Second Date (dd mm yyyy): ";
        cin >> d2 >> m2 >> y2;

        // Function-like logic: days in month
        auto daysInMonth = [](int m, int y) {
            if(m == 2)
                return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 29 : 28;
            if(m==4||m==6||m==9||m==11)
                return 30;
            return 31;
        };

        // Validate dates
        if(m1 < 1 || m1 > 12 || d1 < 1 || d1 > daysInMonth(m1, y1) ||
           m2 < 1 || m2 > 12 || d2 < 1 || d2 > daysInMonth(m2, y2)) {
            cout << "Invalid date!\n";
            continue;
        }

        // Swap if date1 > date2
        if(y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
            swap(d1, d2);
            swap(m1, m2);
            swap(y1, y2);
        }

        // -------- OPTION 1 --------
        if(choice == 1) {
            int dd = d2, mm = m2, yy = y2;

            if(dd < d1) {
                mm--;
                int prevMonth = (mm == 0) ? 12 : mm;
                int prevYear = (mm == 0) ? yy - 1 : yy;
                dd += daysInMonth(prevMonth, prevYear);
            }

            if(mm < m1) {
                yy--;
                mm += 12;
            }

            cout << "Difference = "
                 << (yy - y1) << " Years, "
                 << (mm - m1) << " Months, "
                 << (dd - d1) << " Days\n";
        }

        // -------- OPTION 2 --------
        else if(choice == 2) {
            int total1 = 0, total2 = 0;

            // Convert first date to total days
            for(int y = 0; y < y1; y++)
                total1 += ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 366 : 365;

            for(int m = 1; m < m1; m++)
                total1 += daysInMonth(m, y1);

            total1 += d1;

            // Convert second date to total days
            for(int y = 0; y < y2; y++)
                total2 += ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 366 : 365;

            for(int m = 1; m < m2; m++)
                total2 += daysInMonth(m, y2);

            total2 += d2;

            cout << "Total Days Difference = " << (total2 - total1) << endl;
        }

        // -------- OPTION 3 --------
        else if(choice == 3) {
            int total1 = 0, total2 = 0;

            for(int y = 0; y < y1; y++)
                total1 += ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 366 : 365;

            for(int m = 1; m < m1; m++)
                total1 += daysInMonth(m, y1);

            total1 += d1;

            for(int y = 0; y < y2; y++)
                total2 += ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 366 : 365;

            for(int m = 1; m < m2; m++)
                total2 += daysInMonth(m, y2);

            total2 += d2;

            int diff = total2 - total1;

            cout << "Weeks = " << diff / 7 << ", Days = " << diff % 7 << endl;
        }

        else if(choice == 4) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 4);

        return 0;
    }

    static int Working_Days_calculator()
    {
        int choice;

    do {
        cout << "\nWorking Days Calculator\n";
        cout << "1. Working Days (Mon–Fri)\n";
        cout << "2. Working Days with Holidays\n";
        cout << "3. Total Days + Working Days\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int d1, m1, y1, d2, m2, y2;

        cout << "Enter Start Date (dd mm yyyy): ";
        cin >> d1 >> m1 >> y1;

        cout << "Enter End Date (dd mm yyyy): ";
        cin >> d2 >> m2 >> y2;

        // Days in month
        auto dim = [](int m, int y) {
            if(m == 2)
                return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 29 : 28;
            if(m==4||m==6||m==9||m==11)
                return 30;
            return 31;
        };

        // Day name array
        string dayName[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

        // Validate
        if(m1 < 1 || m1 > 12 || d1 < 1 || d1 > dim(m1,y1) ||
           m2 < 1 || m2 > 12 || d2 < 1 || d2 > dim(m2,y2)) {
            cout << "Invalid date!\n";
            continue;
        }

        // Swap if needed
        if(y1 > y2 || (y1==y2 && m1>m2) || (y1==y2 && m1==m2 && d1>d2)) {
            swap(d1,d2); swap(m1,m2); swap(y1,y2);
        }

        // Weekend customization
        bool isWeekend[7] = {false};

        cout << "\nChoose weekend system:\n";
        cout << "1. Saturday & Sunday\n";
        cout << "2. Sunday only\n";
        cout << "3. Friday & Saturday\n";
        cout << "Enter option: ";

        int wopt;
        cin >> wopt;

        if(wopt == 1) { isWeekend[0]=true; isWeekend[6]=true; }
        else if(wopt == 2) { isWeekend[0]=true; }
        else if(wopt == 3) { isWeekend[5]=true; isWeekend[6]=true; }
        else {
            cout << "Invalid weekend option!\n";
            continue;
        }

        int totalDays = 0, workingDays = 0;

        int d=d1, m=m1, y=y1;

        while(true) {
            // Zeller’s Formula
            int mm = (m < 3) ? m + 12 : m;
            int yy = (m < 3) ? y - 1 : y;

            int K = yy % 100;
            int J = yy / 100;

            int h = (d + (13*(mm+1))/5 + K + K/4 + J/4 + 5*J) % 7;
            int day = (h + 6) % 7; // 0=Sunday

            cout << d << "-" << m << "-" << y << " : " << dayName[day] << endl;

            totalDays++;

            if(!isWeekend[day])
                workingDays++;

            if(d==d2 && m==m2 && y==y2)
                break;

            d++;
            if(d > dim(m,y)) { d=1; m++; }
            if(m > 12) { m=1; y++; }
        }

        // OPTIONS
        if(choice == 1) {
            cout << "Working Days = " << workingDays << endl;
        }

        else if(choice == 2) {
            int holidays;
            cout << "Enter number of holidays: ";
            cin >> holidays;

            if(holidays < 0 || holidays > workingDays) {
                cout << "Invalid holidays!\n";
                continue;
            }

            cout << "Working Days (excluding holidays) = "
                 << (workingDays - holidays) << endl;
        }

        else if(choice == 3) {
            cout << "Total Days = " << totalDays << endl;
            cout << "Working Days = " << workingDays << endl;
        }

        else if(choice == 4) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 4);
        return 0;
    }

    static int Time_Zone_Convertor()
    {
        int choice;

    string zoneNames[] = {"UTC","IST","EST","PST","CET"};
    double offsets[]   = {0, 5.5, -5, -8, 1};

    string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    do {
        cout << "\nTime Zone Converter\n";
        cout << "1. Convert Time (Standard Zones)\n";
        cout << "2. Convert with Custom Offset\n";
        cout << "3. 12-hour ↔ 24-hour Format\n";
        cout << "4. Multi Time Zone Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // -------- COMMON INPUT --------
        int h, m, d, mon, y;
        cout << "Enter time (HH MM): ";
        cin >> h >> m;

        cout << "Enter date (dd mm yyyy): ";
        cin >> d >> mon >> y;

        if(h<0||h>23||m<0||m>59) {
            cout << "Invalid time!\n";
            continue;
        }

        // Zeller for day
        int mm = (mon < 3) ? mon + 12 : mon;
        int yy = (mon < 3) ? y - 1 : y;
        int K = yy % 100;
        int J = yy / 100;
        int hday = (d + (13*(mm+1))/5 + K + K/4 + J/4 + 5*J) % 7;
        int dayIndex = (hday + 6) % 7;

        // -------- OPTION 1 --------
        if(choice == 1) {
            int from, to;

            cout << "\nSelect FROM zone:\n";
            for(int i=0;i<5;i++) cout<<i+1<<"."<<zoneNames[i]<<endl;
            cin >> from;

            cout << "Select TO zone:\n";
            for(int i=0;i<5;i++) cout<<i+1<<"."<<zoneNames[i]<<endl;
            cin >> to;

            double diff = offsets[to-1] - offsets[from-1];

            int newH = h + (int)diff;
            int newM = m + (diff - (int)diff)*60;

            // adjust minutes
            if(newM >= 60) { newH++; newM -= 60; }
            if(newM < 0)   { newH--; newM += 60; }

            int dayShift = 0;
            if(newH >= 24) { newH -= 24; dayShift = 1; }
            if(newH < 0)   { newH += 24; dayShift = -1; }

            int newDayIndex = (dayIndex + dayShift + 7) % 7;

            cout << "Converted Time = "
                 << newH << ":" << newM << endl;
            cout << "Day = " << days[newDayIndex] << endl;
        }

        // -------- OPTION 2 --------
        else if(choice == 2) {
            double from, to;
            cout << "Enter source UTC offset: ";
            cin >> from;
            cout << "Enter target UTC offset: ";
            cin >> to;

            double diff = to - from;

            int newH = h + (int)diff;
            int newM = m + (diff - (int)diff)*60;

            if(newM >= 60) { newH++; newM -= 60; }
            if(newM < 0)   { newH--; newM += 60; }

            int shift = 0;
            if(newH >= 24) { newH -= 24; shift = 1; }
            if(newH < 0)   { newH += 24; shift = -1; }

            int newDayIndex = (dayIndex + shift + 7) % 7;

            cout << "Converted Time = " << newH << ":" << newM << endl;
            cout << "Day = " << days[newDayIndex] << endl;
        }

        // -------- OPTION 3 --------
        else if(choice == 3) {
            int format;
            cout << "1. 24 → 12\n2. 12 → 24\nEnter: ";
            cin >> format;

            if(format == 1) {
                string ampm = (h >= 12) ? "PM" : "AM";
                int hour = h % 12;
                if(hour == 0) hour = 12;

                cout << "12-hour = " << hour << ":" << m << " " << ampm << endl;
            }
            else {
                int hour;
                string ampm;
                cout << "Enter hour minute and AM/PM: ";
                cin >> hour >> m >> ampm;

                if(ampm == "PM" && hour != 12) hour += 12;
                if(ampm == "AM" && hour == 12) hour = 0;

                cout << "24-hour = " << hour << ":" << m << endl;
            }
        }

        // -------- OPTION 4 --------
        else if(choice == 4) {
            cout << "\nAll Time Zones:\n";

            for(int i=0;i<5;i++) {
                double diff = offsets[i];

                int newH = h + (int)diff;
                int newM = m + (diff - (int)diff)*60;

                if(newM >= 60) { newH++; newM -= 60; }
                if(newM < 0)   { newH--; newM += 60; }

                int shift = 0;
                if(newH >= 24) { newH -= 24; shift = 1; }
                if(newH < 0)   { newH += 24; shift = -1; }

                int newDayIndex = (dayIndex + shift + 7) % 7;

                cout << zoneNames[i] << " = "
                     << newH << ":" << newM
                     << " (" << days[newDayIndex] << ")\n";
            }
        }

        else if(choice == 5) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 5);
        return 0;
    }

    static int Date_time_convertor()
    {
        int choice;

    string days[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    do {
        cout << "\nDate & Time Converter\n";
        cout << "1. Date Format Conversion\n";
        cout << "2. Time Format Conversion\n";
        cout << "3. Date + Time Conversion\n";
        cout << "4. Add/Subtract Days\n";
        cout << "5. Day Name Finder\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // Days in month
        auto dim = [](int m, int y) {
            if(m == 2)
                return ((y%4==0 && y%100!=0) || (y%400==0)) ? 29 : 28;
            if(m==4||m==6||m==9||m==11)
                return 30;
            return 31;
        };

        // -------- OPTION 1 --------
        if(choice == 1) {
            int d,m,y;
            cout << "Enter date (dd mm yyyy): ";
            cin >> d >> m >> y;

            if(m<1||m>12||d<1||d>dim(m,y)) {
                cout << "Invalid date!\n";
                continue;
            }

            cout << "YYYY-MM-DD = " << y << "-" << m << "-" << d << endl;
            cout << "MM-DD-YYYY = " << m << "-" << d << "-" << y << endl;
            cout << "DD/MM/YYYY = " << d << "/" << m << "/" << y << endl;
        }

        // -------- OPTION 2 --------
        else if(choice == 2) {
            int h,m;
            cout << "Enter time (HH MM): ";
            cin >> h >> m;

            if(h<0||h>23||m<0||m>59) {
                cout << "Invalid time!\n";
                continue;
            }

            string ampm = (h>=12) ? "PM" : "AM";
            int hh = h % 12;
            if(hh == 0) hh = 12;

            cout << "12-hour = " << hh << ":" << m << " " << ampm << endl;

            int hour;
            string ap;
            cout << "Enter 12-hour (hh mm AM/PM): ";
            cin >> hour >> m >> ap;

            if(ap=="PM" && hour!=12) hour+=12;
            if(ap=="AM" && hour==12) hour=0;

            cout << "24-hour = " << hour << ":" << m << endl;
        }

        // -------- OPTION 3 --------
        else if(choice == 3) {
            int d,m,y,h,min;
            cout << "Enter date (dd mm yyyy): ";
            cin >> d >> m >> y;
            cout << "Enter time (HH MM): ";
            cin >> h >> min;

            if(m<1||m>12||d<1||d>dim(m,y)||h<0||h>23||min<0||min>59) {
                cout << "Invalid input!\n";
                continue;
            }

            string ampm = (h>=12) ? "PM" : "AM";
            int hh = h % 12;
            if(hh == 0) hh = 12;

            cout << "Converted = "
                 << y << "/" << m << "/" << d
                 << " " << hh << ":" << min << " " << ampm << endl;
        }

        // -------- OPTION 4 --------
        else if(choice == 4) {
            int d,m,y,add;
            cout << "Enter date (dd mm yyyy): ";
            cin >> d >> m >> y;
            cout << "Enter days to add (+/-): ";
            cin >> add;

            if(m<1||m>12||d<1||d>dim(m,y)) {
                cout << "Invalid date!\n";
                continue;
            }

            while(add != 0) {
                if(add > 0) {
                    d++;
                    if(d > dim(m,y)) {
                        d = 1; m++;
                        if(m > 12) { m = 1; y++; }
                    }
                    add--;
                } else {
                    d--;
                    if(d < 1) {
                        m--;
                        if(m < 1) { m = 12; y--; }
                        d = dim(m,y);
                    }
                    add++;
                }
            }

            cout << "New Date = " << d << "-" << m << "-" << y << endl;
        }

        // -------- OPTION 5 --------
        else if(choice == 5) {
            int d,m,y;
            cout << "Enter date (dd mm yyyy): ";
            cin >> d >> m >> y;

            if(m<1||m>12||d<1||d>dim(m,y)) {
                cout << "Invalid date!\n";
                continue;
            }

            // Zeller's Formula
            int mm = (m < 3) ? m + 12 : m;
            int yy = (m < 3) ? y - 1 : y;

            int K = yy % 100;
            int J = yy / 100;

            int h = (d + (13*(mm+1))/5 + K + K/4 + J/4 + 5*J) % 7;
            int dayIndex = (h + 6) % 7;

            cout << "Day = " << days[dayIndex] << endl;
        }

        else if(choice == 6) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 6);
        return 0;
    }
};

class Tools_and_utilites
{
    static int tool_unit()
    {
        int choice;

    srand(time(0)); // for random

    do {
        cout << "\nTools & Utilities\n";
        cout << "1. Unit Converter\n";
        cout << "2. Random Number Generator\n";
        cout << "3. Password Generator\n";
        cout << "4. Prime Number Checker\n";
        cout << "5. Palindrome Checker\n";
        cout << "6. Number Tools\n";
        cout << "7. File Size Converter\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // -------- 1. UNIT CONVERTER --------
        if(choice == 1) {
            int opt;
            cout << "\n1. Length (m ↔ km ↔ cm)\n";
            cout << "2. Weight (kg ↔ g)\n";
            cout << "3. Temperature (C ↔ F)\n";
            cin >> opt;

            double val;

            if(opt == 1) {
                cout << "Enter meters: ";
                cin >> val;
                cout << "KM = " << val/1000 << endl;
                cout << "CM = " << val*100 << endl;
            }
            else if(opt == 2) {
                cout << "Enter kg: ";
                cin >> val;
                cout << "Grams = " << val*1000 << endl;
            }
            else if(opt == 3) {
                cout << "Enter Celsius: ";
                cin >> val;
                cout << "Fahrenheit = " << (val*9/5)+32 << endl;
            }
            else cout << "Invalid!\n";
        }

        // -------- 2. RANDOM --------
        else if(choice == 2) {
            int a,b;
            cout << "Enter range (min max): ";
            cin >> a >> b;

            if(a > b) swap(a,b);

            int r = a + rand() % (b - a + 1);
            cout << "Random Number = " << r << endl;
        }

        // -------- 3. PASSWORD --------
        else if(choice == 3) {
            int len;
            cout << "Enter password length: ";
            cin >> len;

            if(len <= 0) {
                cout << "Invalid length!\n";
                continue;
            }

            string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#$%&";
            cout << "Password: ";

            for(int i=0;i<len;i++) {
                cout << chars[rand() % chars.length()];
            }
            cout << endl;
        }

        // -------- 4. PRIME --------
        else if(choice == 4) {
            int n, flag=1;
            cout << "Enter number: ";
            cin >> n;

            if(n <= 1) flag = 0;

            for(int i=2;i*i<=n;i++) {
                if(n % i == 0) {
                    flag = 0;
                    break;
                }
            }

            if(flag) cout << "Prime Number\n";
            else cout << "Not Prime\n";
        }

        // -------- 5. PALINDROME --------
        else if(choice == 5) {
            int n, rev=0, temp;
            cout << "Enter number: ";
            cin >> n;

            temp = n;
            while(n > 0) {
                rev = rev*10 + n%10;
                n/=10;
            }

            if(temp == rev) cout << "Palindrome\n";
            else cout << "Not Palindrome\n";
        }

        // -------- 6. NUMBER TOOLS --------
        else if(choice == 6) {
            int n;
            cout << "Enter number: ";
            cin >> n;

            int temp = n, sum=0, rev=0;
            long long fact=1;

            while(temp > 0) {
                int d = temp % 10;
                sum += d;
                rev = rev*10 + d;
                fact *= d;
                temp /= 10;
            }

            cout << "Sum of digits = " << sum << endl;
            cout << "Reverse = " << rev << endl;
            cout << "Product of digits = " << fact << endl;
        }

        // -------- 7. FILE SIZE --------
        else if(choice == 7) {
            double kb;
            cout << "Enter size in KB: ";
            cin >> kb;

            cout << "MB = " << kb/1024 << endl;
            cout << "GB = " << kb/(1024*1024) << endl;
        }

        else if(choice == 8) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 8);
    return 0;
    }

    static int tip_calculator()
    {
        int choice;

    do {
        cout << "\nTip Calculator\n";
        cout << "1. Calculate Tip & Split Bill\n";
        cout << "2. Show Tip Amount Only\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1 || choice == 2) {
            double bill, tipPercent;
            int people;

            cout << "Enter total bill amount: ";
            cin >> bill;

            if(bill <= 0) {
                cout << "Invalid bill amount!\n";
                continue;
            }

            // Tip selection
            int tipChoice;
            cout << "\nSelect Tip:\n";
            cout << "1. 5%\n2. 10%\n3. 15%\n4. Custom\n";
            cout << "Enter choice: ";
            cin >> tipChoice;

            if(tipChoice == 1) tipPercent = 5;
            else if(tipChoice == 2) tipPercent = 10;
            else if(tipChoice == 3) tipPercent = 15;
            else if(tipChoice == 4) {
                cout << "Enter custom tip %: ";
                cin >> tipPercent;
                if(tipPercent < 0) {
                    cout << "Invalid tip!\n";
                    continue;
                }
            }
            else {
                cout << "Invalid choice!\n";
                continue;
            }

            double tipAmount = (bill * tipPercent) / 100.0;

            if(choice == 2) {
                cout << "Tip Amount = " << tipAmount << endl;
                continue;
            }

            cout << "Enter number of people: ";
            cin >> people;

            if(people <= 0) {
                cout << "Invalid number of people!\n";
                continue;
            }

            double total = bill + tipAmount;
            double perPerson = total / people;

            // Optional rounding
            char roundOpt;
            cout << "Round off per person amount? (y/n): ";
            cin >> roundOpt;

            if(roundOpt == 'y' || roundOpt == 'Y') {
                perPerson = round(perPerson);
            }

            cout << "\n--- Result ---\n";
            cout << "Bill Amount = " << bill << endl;
            cout << "Tip (" << tipPercent << "%) = " << tipAmount << endl;
            cout << "Total Amount = " << total << endl;
            cout << "Each Person Pays = " << perPerson << endl;
        }

        else if(choice == 3) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 3);

        return 0;
    }

    static int Loan_Eligibility_Calculator()
    {
        int choice;

    do {
        cout << "\nLoan Eligibility Calculator\n";
        cout << "1. Check Eligibility\n";
        cout << "2. Estimate Loan Amount\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1 || choice == 2) {
            double income, expenses, emi;

            cout << "Enter Monthly Income: ";
            cin >> income;

            cout << "Enter Monthly Expenses: ";
            cin >> expenses;

            cout << "Enter Existing EMI: ";
            cin >> emi;

            if(income <= 0 || expenses < 0 || emi < 0 || expenses + emi > income) {
                cout << "Invalid financial data!\n";
                continue;
            }

            double netIncome = income - expenses - emi;

            // Bank rule: Max EMI should be 40% of income
            double maxEMI = income * 0.4;

            cout << "\n--- Result ---\n";
            cout << "Net Available Income = " << netIncome << endl;
            cout << "Maximum Allowed EMI = " << maxEMI << endl;

            if(netIncome >= maxEMI) {
                cout << "Status: Eligible for Loan\n";
            } else {
                cout << "Status: Not Eligible\n";
            }

            // -------- OPTION 2 --------
            if(choice == 2) {
                double rate, years;

                cout << "\nEnter Interest Rate (% per year): ";
                cin >> rate;

                cout << "Enter Loan Tenure (years): ";
                cin >> years;

                if(rate <= 0 || years <= 0) {
                    cout << "Invalid input!\n";
                    continue;
                }

                // Simple estimation (not EMI formula)
                double months = years * 12;

                // Assume EMI = maxEMI
                double loanAmount = maxEMI * months;

                cout << "\nEstimated Loan Amount = " << loanAmount << endl;
            }
        }

        else if(choice == 3) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
    }

    static int Fuel_Cost()
    {
        int choice;

        do {
            cout << "\nFuel Cost Calculator\n";
            cout << "1. Calculate Fuel Cost\n";
            cout << "2. Round Trip Cost\n";
            cout << "3. Cost per KM\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            double distance, mileage, price;

            if(choice >= 1 && choice <= 3) {
                cout << "Enter distance (km): ";
                cin >> distance;

                cout << "Enter mileage (km/l): ";
                cin >> mileage;

                cout << "Enter fuel price (per liter): ";
                cin >> price;

                if(distance <= 0 || mileage <= 0 || price <= 0) {
                    cout << "Invalid input!\n";
                    continue;
                }
            }

            // -------- OPTION 1 --------
            if(choice == 1) {
                double fuel = distance / mileage;
                double cost = fuel * price;

                cout << "\nFuel Needed = " << fuel << " liters\n";
                cout << "Total Cost = " << cost << endl;
            }

            // -------- OPTION 2 --------
            else if(choice == 2) {
                double totalDistance = distance * 2;
                double fuel = totalDistance / mileage;
                double cost = fuel * price;

                cout << "\nRound Trip Distance = " << totalDistance << " km\n";
                cout << "Fuel Needed = " << fuel << " liters\n";
                cout << "Total Cost = " << cost << endl;
            }

            // -------- OPTION 3 --------
            else if(choice == 3) {
                double costPerKm = price / mileage;

                cout << "\nCost per KM = " << costPerKm << endl;
            }

            else if(choice == 4) {
                cout << "Exiting...\n";
            }

            else {
                cout << "Invalid choice!\n";
            }

        } while(choice != 4);
        return 0;
    }
};
int main()
{

    return 0;
}
