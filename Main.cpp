#include <cmath>
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
                result = a*0.009348;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*0.8492;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*1.15;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*0.005476;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a*0.6006;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*0.6205;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*0.670062;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*0.23;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a * 0.226388;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*1.09;
                cout<<"the result is "<<result<<endl;
            }
            else
            {
                cout<<"Invaild input"<<endl;
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
                result = a*1.7092;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*155.08;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*208.93;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*182.7;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a*0.0091;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*0.0088;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*0.0082;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*0.024;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a*0.024;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*0.0050;
                cout<<"the result is "<<result<<endl;
            }
            else
            {
                cout<<"Invaild input"<<endl;
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
                result = a*122.29;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*1.35;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*209.08;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*1.14;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a*1.90;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*1.84;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*1.71;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*4.95;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a*5.06;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*1.05;
                cout<<"the result is "<<result<<endl;
            }
            else
            {
                cout<<"Invaild input"<<endl;
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
                result = a*13.13;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*0.14;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*22.38;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*0.12;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = 0.20;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*0.20;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*0.18;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*0.53;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a*0.54;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*0.11;
                cout<<"the result is "<<result<<endl;
            }
            else
            {
                cout<<"Invaild input";
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
                result = a*64.26;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*0.71;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*109.63;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*0.60;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a*0.53;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*0.97;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*0.90;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*2.59;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a*2.64;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*0.55;
                cout<<"the result is "<<result<<endl;
            }
            else
            {
                cout<<"Invaild input"<<endl;
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
                result = a*66.32;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*0.73;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*113.61;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*0.62;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a*0.54;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*0.92;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*2.68;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*2.74;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a*0.56;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*1.03;
                cout<<"the result is "<<result<<endl;
            }
            else
            {
                cout<<"invaild input";
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
                result = a*117.52;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*1.29;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*201.36;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*1.10;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a*0.96;
                cout<<"The result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*1.83;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*1.64;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*4.74;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a*4.85;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*1.77;
                cout<<"the result is "<<result<<endl;
            }
            else
            {
                cout<<"Invaild input";
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
                result = a*11.62;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 2)
            {
                result = a*0.13;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 3)
            {
                result = a*0.11;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 4)
            {
                result = a*20;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 5)
            {
                result = a*0.094;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 6)
            {
                result = a*0.88;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 7)
            {
                result = a*0.18;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 8)
            {
                result = a*0.17;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 9)
            {
                result = a*0.099;
                cout<<"the result is "<<result<<endl;
            }
            else if (Pair_Choose == 10)
            {
                result = a*0.16;
                cout<<"the result is "<<result<<endl;
            }
        default:
            cout << "Invaild input"<<endl;
        }
        return 0;
    }
};
int main()
{

    return 0;
}