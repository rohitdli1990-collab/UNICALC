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

        result = (subject1grade+subject2grade+subject3grade+subject4grade+subject5grade+subject6grade)/6;
        cout<<"the CGPA of the 6 subject is "<<result<<endl;

        return 0;
    }

    static float averageMarks()
    {
        float sub1marks,sub2marks,sub3marks,sub4marks,sub5marks,sub6marks;
        float result;

        cout<<"Enter your marks of subject1:- ";
        cin>>sub1marks;
        cout<<"Enter your marks of subject2:- ";
        cin>>sub2marks;
        cout<<"Enter your marks of subject3:- ";
        cin>>sub3marks;
        cout<<"Enter your marks of subject4:- ";
        cin>>sub4marks;
        cout<<"enter your marks of subject5:- ";
        cin>>sub5marks;
        cout<<"Enter your marks of subject6:- ";
        cin>>sub6marks;

        result = (sub1marks+sub2marks+sub3marks+sub4marks+sub5marks+sub6marks)/6;
        cout<<"Your average marks of given marks is:-  "<<result<<endl;


        return 0;
    }

    static float gradeCalculate()
    {
        float sub1marks,sub2marks,sub3marks,sub4marks,sub5marks,sub6marks;
        float result;

        cout<<"Enter your marks of subject1:- ";
        cin>>sub1marks;
        cout<<"Enter your marks of subject2:- ";
        cin>>sub2marks;
        cout<<"Enter your marks of subject3:- ";
        cin>>sub3marks;
        cout<<"Enter your marks of subject4:- ";
        cin>>sub4marks;
        cout<<"enter your marks of subject5:- ";
        cin>>sub5marks;
        cout<<"Enter your marks of subject6:- ";
        cin>>sub6marks;

        result = (sub1marks+sub2marks+sub3marks+sub4marks+sub5marks+sub6marks)/6;

        if (result == 100 && result <= 91)
        {
            cout<<"You got A+"<<endl;
        }
        else if (result == 90 && result <= 81)
        {
            cout<<"You got A"<<endl;
        }
        else if (result == 80 && result <= 71)
        {
            cout<<"you got B"<<endl;
        }
        else if (result == 70 && result <= 61)
        {
            cout<<"You got C"<<endl;
        }
        else if (result == 60 && result <= 51)
        {
            cout<<"You got D"<<endl;
        }
        else if (result == 50 && result <= 40)
        {
            cout<<"you got E"<<endl;
        }
        else
        {
            cout << "you got F"<<endl;
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
        int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        if (bd > cd) {
            cd = cd + monthDays[bm - 1];
            cm = cm - 1;
        }

        days = cd - bd;

        if (bm > cm) {
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
        int attendance_sub1,attendance_sub2,attendance_sub3,attendance_sub4,attendance_sub5,attendance_sub6;
        int attendancePercen_sub1,attendancePercen_sub2,attendancePercen_sub3,attendancePercen_sub4,attendancePercen_sub5,attendancePercen_sub6;

        cout<<"Welcome to Attendence calculator"<<endl;
        cout<<"1. Calculate Attendance_percentage"<<endl;
        cout<<"2. Check Eligibility for Exam"<<endl;
        cout<<"3. Required class for 75%"<<endl;
        cout<<"4. Bunk Calculator"<<endl;
        cout<<"5. SubjectWise Attendance"<<endl;
        cout<<"Enter your choose:-  "<<endl;
        cin>>choose;

        switch (choose)
        {
        case 1:
            cout<<"Enter how many class you attendaned"<<endl;
            cin>>attendaned;
            cout<<"Enter how many class you have in total"<<endl;
            cin>>total_Class;

            attendance_percentage = (total_Class/attendaned)*100;
            cout<<"the Attendance percentage is:- "<<attendance_percentage<<endl;
            break;

        case 2:
            cout<<"enter your Attendance in percentage:- ";
            cin>>Percentage;

            if (Percentage >= 75)
            {
                cout<<"You are eligible for Exam"<<endl;
            }
            else
            {
                cout << "You are Not Eligible for Exam"<<endl;
            }
            break;

        case 3:
            cout<<"Enter your Attendance in Percentage:- ";
            cin>>Percentage;

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
            cout<<"Enter how many classes you attended:- ";
            cin>>Attended_classes;

            cout<<"enter How many Classes you have to attend:- ";
            cin>>required_classes;

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
            cout << "Enter your attendance in Subject1:- "<<endl;
            cin>>attendance_sub1;
            cout << "Enter your attendance in Subject2:- "<<endl;
            cin>>attendance_sub2;
            cout<<"Enter Your attendance in Subject3;- "<<endl;
            cin>>attendance_sub3;
            cout<<"Enter your attendance in subject4:- "<<endl;
            cin>>attendance_sub4;
            cout<<"Enter your attendance in subject5:- "<<endl;
            cin>>attendance_sub5;
            cout<<"Enter your attendance in subject6:- "<<endl;
            cin>>attendance_sub6;
            cout<<"Enter Total attendance required for eligibility for Exam:- "<<endl;
            cin>>total_Class;

            attendancePercen_sub1 = (attendance_sub1/total_Class)*100;
            attendancePercen_sub2 = (attendance_sub2/total_Class)*100;
            attendancePercen_sub3 = (attendance_sub3/total_Class)*100;
            attendancePercen_sub4 = (attendance_sub4/total_Class)*100;
            attendancePercen_sub5 = (attendance_sub5/total_Class)*100;
            attendancePercen_sub6 = (attendance_sub6/total_Class)*100;

            cout<<"your percentage of attendance in subject1 is "<<attendance_sub1 << endl;
            cout<<"your percentage of attendance in subject2 is "<<attendance_sub2 << endl;
            cout<<"your percentage of attendance in subject3 is "<<attendance_sub3 << endl;
            cout<<"your percentage of attendance in subject4 is "<<attendance_sub4 << endl;
            cout<<"your percentage of attendance in subject5 is "<<attendance_sub5 << endl;
            cout<<"your percentage of attendance in subject6 is "<<attendance_sub6 << endl;


            if (attendancePercen_sub1 >= 75)
            {
                cout<<"You are eligible for Exam"<<endl;
            }
            else
            {
                cout<<"You are not eligible for Exam"<<endl;
            }
            if (attendancePercen_sub2 >= 75)
            {
                cout<<"You are eligible for Exam"<<endl;
            }
            else
            {
                cout<<"You are not eligible for Exam"<<endl;
            }
            if (attendancePercen_sub3 >= 75)
            {
                cout<<"You are eligible for Exam"<<endl;
            }
            else
            {
                cout<<"You are not eligible for Exam"<<endl;
            }
            if (attendancePercen_sub4 >= 75)
            {
                cout<<"You are eligible for Exam"<<endl;
            }
            else
            {
                cout<<"You are not eligible for Exam"<<endl;
            }
            if (attendancePercen_sub5 >= 75)
            {
                cout<<"You are eligible for Exam"<<endl;
            }
            else
            {
                cout<<"You are not eligible for Exam"<<endl;
            }
            if (attendancePercen_sub6 >= 75)
            {
                cout<<"You are eligible for Exam"<<endl;
            }
            else
            {
                cout<<"You are not eligible for Exam"<<endl;
            }
            break;
        default:
            cout<<"Invalid Input";
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

        cout<<"1. Find Voltage"<<endl;
        cout<<"2. Find Current"<<endl;
        cout<<"3. Find Resistance"<<endl;
        cout<<"Enter your Choose:- "<<endl;
        cin>>choose;

        switch (choose){
        case 1:
            cout<<"Enter the value of Current:- "<<endl;
            cin>>current;
            cout<<"Enter the value of Resistance:- "<<endl;
            cin>>Resistance;

            voltage = current*Resistance;
            cout<<"the value of Voltage is "<<voltage<<endl;
            break;

        case 2:
            cout<<"Enter the value of Voltage:- "<<endl;
            cin>>voltage;
            cout<<"Enter the value of Resistance"<<endl;
            cin>>Resistance;

            current = voltage + Resistance;
            cout<<"the value of Current is "<<current<<endl;
            break;

        case 3:
            cout<<"Enter the value of Voltage:- "<<endl;
            cin>>voltage;
            cout<<"Enter the value of current:- "<<endl;
            cin>>current;

            Resistance = voltage / current;
            cout<<"the value of Resistance is "<<Resistance<<endl;
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

        cout<<"1. find Power using Volts and Amp"<<endl;
        cout<<"2. find Power using current and resistance"<<endl;
        cout<<"3. find Power using Volts and resistance"<<endl;
        cout<<"Enter your Choose:- ";
        cin>>choose;

        switch (choose)
        {
        case 1:
            cout<<"enter the value of Volts:- \n";
            cin>>volts;
            cout<<"Enter the value of Amp:- \n";
            cin>>Amp;

            Power = volts * Amp;
            cout<<"the value of power is:- "<<Power<<endl;
            break;

        case 2:
            cout<<"enter the value of current:- \n";
            cin>>current;
            cout<<"Enter the value of resistance:- \n";
            cin>>resistance;

            Power = (current * current) * resistance;
            cout<<"the value of Power is:- "<<Power<<endl;
            break;

        case 3:
            cout<<"Enter the value of volts:- \n";
            cin>>volts;
            cout<<"enter the value of resistance:- \n";
            cin>>resistance;

            Power = (volts * volts)/resistance;
            cout<<"The value of Power is:- "<<Power<<endl;
            break;
        default:
            cout<<"Invalid input";
        }
        return 0;
    }

    static int Energy_Calculator()
    {
        int energy;
        int Power;
        int time;

        cout<<"Enter the value of Power is:- \n";
        cin>>Power;
        cout<<"Enter the time:- \n";
        cin>>time;

        energy = Power * time;

        cout<<"the value of energy is "<<energy<<endl;
        return 0;
    }

    static float Series_resistance_calculator()
    {
        float resistance_value;
        float num_resistance;
        float series_add;

        cout<<"enter the number of resistance:- \n";
        cin>>num_resistance;

        for (int i = 0;i <= num_resistance; i++)
        {
            cout<<"Enter the value of resistance:- "<<endl;
            cin>>resistance_value;
            series_add += resistance_value;
        }

        cout<<"the value of series of resistance is:- "<<series_add<<endl;
        return 0;
    }

    static float Parallel_resistance_calculator()
    {
        float resistance_value;
        float num_resistance;
        float sum;
        float parallel_resistance;

        cout<<"enter the number of resistance:- \n";
        cin>>num_resistance;

        for (int i = 0;i <= num_resistance; i++)
        {
            cout<<"Enter the value of resistance:- "<<endl;
            cin>>resistance_value;
            sum = sum + (1/resistance_value);
        }

        parallel_resistance = 1 / sum;
        cout<<"the value of Parallel_resistance is "<<parallel_resistance<<endl;
        return 0;
    }

    static float current_calculator()
    {
        int voltage;
        int Power;
        int current;

        cout<<"Enter the value of voltage:- \n";
        cin>>voltage;
        cout<<"Enter the value of Power:- \n";
        cin>>Power;

        current = voltage/Power;
        cout<<"The value of current is "<<current<<endl;
        return 0;
    }

    static int Voltage_Divide()
    {
        int input_voltage;
        int resister1;
        int resister2;
        int out_voltage;

        cout<<"Enter the value of input voltage:- \n";
        cin>>input_voltage;
        cout<<"Enter the value of resister1:- \n";
        cin>>resister1;
        cout<<"Enter the value of resister2:- \n";
        cin>>resister2;

        out_voltage = input_voltage * (resister2/(resister1 + resister2));
        cout<<"the value of voltage out is "<<out_voltage<<endl;
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
        float square,Rectangle,Triangle,Circle;

        cout<<"welcome to Area calculator \n";
        cout<<"1. Square area\n";
        cout<<"2. Rectangle area\n";
        cout<<"3. triangle area\n";
        cout<<"4. circle area\n";
        cout<<"enter your Choose:- ";
        cin>>choose;

        switch (choose)
        {
        case 1:
            cout<<"Enter the side of square:- \n";
            cin>>length;
            square = length*length;
            cout<<"the area of square is "<<square<<endl;
            break;

        case 2 :
            cout<<"Enter the length of rectangle:- \n";
            cin>>length;
            cout<<"Enter the breath of rectangle:- \n";
            cin>>breath;
            Rectangle = length*breath;
            cout<<"The area of Rectangle is:-  "<<Rectangle<<endl;
            break;

        case 3:
            cout<<"Enter the value of base:- \n";
            cin>>base;
            cout<<"Enter the value of height:- \n";
            cin>>height;
            Triangle = 1/2*base*height;
            cout<<"the area of triangle is:- "<<Triangle<<endl;
            break;

        case 4:
            cout<<"Enter the radius of circle:- \n";
            cin>>radius;
            Circle = 22/7*(radius*radius);
            cout<<"the area of circle is:- "<<Circle<<endl;
            break;
        default:
            cout<<"Invalid input";
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
        float Cube,Cuboid,Cylinder,Sphere,Cone;

        cout<<"Welcome to Volume Calculator\n";
        cout<<"1. cube Volume\n";
        cout<<"2. cuboid Volume\n";
        cout<<"3. Cylinder Volume\n";
        cout<<"4. Sphere volume\n";
        cout<<"5. cone Volume\n";
        cout<<"Enter your Choose:- ";
        cin>>choose;

        switch (choose)
        {
        case 1:
            cout<<"Enter the side of cube:- \n";
            cin>>side;
            Cube = side*side*side;
            cout<<"the Volume of cube is "<<Cube<<endl;
            break;

        case 2:
            cout<<"Enter the length of cuboid:- \n";
            cin>>length;
            cout<<"Enter the height of cuboid:- \n";
            cin>>height;
            cout<<"Enter the breath of cuboid:- \n";
            cin>>breath;
            Cuboid = length*breath*height;
            cout<<"the Volume of cuboid is "<<Cuboid<<endl;
            break;

        case 3:
            cout<<"Enter the height of Cylinder:- \n";
            cin>>height;
            cout<<"Enter the radius of the cylinder:- \n";
            cin>>radius;
            Cylinder = 22/7*(radius*radius)*height;
            cout<<"the Volume of Cylinder is:- "<<Cylinder<<endl;
            break;

        case 4:
            cout<<"Enter the radius of sphere:- \n";
            cin>>radius;
            Sphere = (4/3)*(22/7)*(radius*radius*radius);
            cout<<"the volume of Sphere is "<<Sphere<<endl;
            break;

        case 5:
            cout<<"Enter the radius of cone:- \n";
            cin>>radius;
            cout<<"Enter the height of Cone:- \n";
            cin>>height;
            Cone = (1/3)*(22/7)*(radius*radius)*height;
            cout<<"the volume of cone is:- "<<Cone<<endl;
            break;

        default:
            cout<<"Invalid input";
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

        cout<<"welcome to Mechanical calculator\n"<<endl;
        cout<<"1. Speed calculator\n";
        cout<<"2. Force calculator\n";
        cout<<"3. torque Calculator\n";
        cout<<"4. Work Calculator\n";
        cout<<"5. Power Calculator\n";
        cout<<"6. momentum calculator\n";
        cout<<"7. Acceleration calculator\n";
        cout<<"Enter your choose:- ";
        cin>>choose;

        switch (choose)
        {
        case 1:
            cout<<"Enter your distance:- ";
            cin>>Distance;
            cout<<"Enter your time:- ";
            cin>>time;
            Speed = Distance/time;
            cout<<"your speed is "<<Speed<<endl;
            break;

        case 2:
            cout<<"enter your Mass:- ";
            cin>>Mass;
            cout<<"enter your acceleration:- ";
            cin>>Acceleration;
            Force = Mass*Acceleration;
            cout<<"Your force is "<<Force<<endl;
            break;

        case 3:
            cout<<"Enter your Force:-  ";
            cin>>Force;
            cout<<"Enter your Radius:- ";
            cin>>Radius;
            Torque = Force*Radius;
            cout<<"Your torque is:-  "<<Torque<<endl;
            break;

        case 4:
            cout<<"Enter your Force:- \n";
            cin>>Force;
            cout<<"Enter your distance:- \n";
            cin>>Distance;
            Work = Force*Distance;
            cout<<"Your Work is "<<Work<<endl;
            break;

        case 5:
            cout<<"Enter your work:- \n";
            cin>>Work;
            cout<<"Enter your time:- \n";
            cin>>time;
            Power = Work/time;
            cout<<"Your Power is "<<Power<<endl;
            break;

        case 6:
            cout<<"Enter your Mass:- ";
            cin>>Mass;
            cout<<"Enter your Velocity:- ";
            cin>>Velocity;
            momentum = Mass*Velocity;
            cout<<"Your momentum is "<<momentum<<endl;
            break;

        case 7:
            cout<<"Enter your velocity:- ";
            cin>>Velocity;
            cout<<"Enter your time:- ";
            cin>>time;
            Acceleration = Velocity/time;
            cout<<"Your Acceleration is "<<Acceleration<<endl;
            break;
        default:
            cout<<"Invaild Input";
        }
        return 0;
    }
};
int main()
{

    return 0;
}
