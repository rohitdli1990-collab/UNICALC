#include <cmath>
#include <iostream>
using namespace std;

class Basic_Calc {
public:
    static float add() {
        cout<<"Enter your first number";
        float a = 0;
        cin>>a;
        cout<<"Enter your second number";
        float b = 0;
        cin>>b;
        float c = a + b;
        cout<<"Your answer is "<<c<<endl;
        return 0;
    }

    static float subtract() {
        cout<<"Enter your first number";
        float a = 0;
        cin>>a;
        cout<<"Enter your second number";
        float b = 0;
        cin>>b;
        float c = a - b;
        cout<<"Your answer is "<<c<<endl;
        return 0;
    }

    static float multiplication() {
        cout<<"Enter your First number ";
        float a = 0;
        cin>>a;
        cout<<"Enter your second number";
        float b = 0;
        cin>>b;
        float c = a * b;
        cout<<"your answer is "<<c<<endl;
        return 0;
    }

    static float Percentage() {
        cout<<"Enter the number";
        float a = 0;
        cin>>a;
        cout<<"Enter the Percentage";
        float b = 0;
        cin>>b;
        float c = a/b*100;
        cout<<"Your result is "<<c<<endl;
        return 0;
    }

    static float square() {
        cout<<"Enter the number";
        float a = 0;
        cin>>a;
        float b = a*a;
        cout<<"The result is "<<b<<endl;
        return 0;
    }

    static float square_root() {
        double num;

        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            cout << "Square root of a negative number is not real.";
        } else {
            cout << "Square root of " << num << " is " << sqrt(num);
        }
        return 0;
    }

    static float cube() {
        float a;
        float b;

        cout<<"Enter your number"<<endl;
        cin>>a;
        b = a*a*a;
        cout<<"Your result is "<<b;
        return 0;
    }

    static float cube_root() {
        double num;

        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            cout << "Cube root of a negative number is not real.";
        } else {
            cout << "Cube root of " << num << " is " << cbrt(num);
        }
        return 0;
    }
};

class Scientific_calculation {
    static float Trigonometric() {
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

        switch (choice) {
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

    static float log() {
        double num;

        cout << "Enter a positive number: ";
        cin >> num;

        if (num <= 0) {
            cout << "Logarithm is not defined for zero or negative numbers.";
        } else {
            cout << "log10(" << num << ") = " << log10(num) << endl;
            // cout << "ln(" << num << ")    = " << log(num) << endl;
        }
        return 0;
    }

    static float Power() {
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

    static float factorial() {
        long long fact = 1;
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            cout << "Factorial is not defined for negative numbers.";
        } else {
            for (int i = 1; i <= num; i++) {
                fact *= i;
            }
            cout << num << "! = " << fact;
        }
    }

    static float Constants() {
        double pi, e;

        // Calculate constants
        pi = acos(-1);   // Accurate value of π
        e  = exp(1);     // Value of e

        cout << "--- Mathematical Constants ---" << endl;
        cout << "Value of Pi (π) = " << pi << endl;
        cout << "Value of e = " << e << endl;

        return 0;
    }

    static float Mode() {
        int mode;
        double angle, rad;

        cout << "--- Angle Mode Selection ---\n";
        cout << "1. Degree Mode\n";
        cout << "2. Radian Mode\n";
        cout << "Select mode: ";
        cin >> mode;

        cout << "Enter angle: ";
        cin >> angle;

        if (mode == 1) {
            // Degree to radian conversion
            rad = angle * acos(-1) / 180;
        } else if (mode == 2) {
            // Already in radians
            rad = angle;
        } else {
            cout << "Invalid mode!";
            return 0;
        }
    }
};

class Unit_Converters {
public:
    static float Length() {
        int choose;
        int subChoose;
        int meter;
        int inch;

        cout<<"Welcome to Length convertors"<<endl;
        cout<<"1. SI Units"<<endl;
        cout<<"2. US Customary unit"<<endl;
        cout<<"Enter your choose ";
        cin>>choose;

        if (choose == 1) {
            cout<<"Welcome to SI unit"<<endl;
            cout<<"1. Meter to Millimeter"<<endl;
            cout<<"2. Meter to Centimeter"<<endl;
            cout<<"3. Meter to Decimeter"<<endl;
            cout<<"4. Meter to Decameter"<<endl;
            cout<<"5. Meter to Hectometer"<<endl;
            cout<<"6. Meter to Kilometer"<<endl;
            cout<<"Enter your choose:- ";
            cin>>subChoose;

            if (subChoose == 1) {
                cout<<"Enter meter to convert:- ";
                cin>>meter;
                int a = meter * 1000;
                cout<<"your answer is "<<a<<endl;
            }
            else if (subChoose == 2) {
                cout<<"Enter meter to convert:- ";
                cin>>meter;
                int a = meter * 100;
                cout<<"your answer is "<<a<<endl;
            }
            else if (subChoose == 3) {
                cout<<"Enter meter to convert:- ";
                cin>>meter;
                int a = meter * 10;
                cout<<"your answer is "<<a<<endl;
            }
            else if (subChoose == 4) {
                cout<<"Enter meter to convert:- ";
                cin>>meter;
                float a = meter * 0.1;
                cout<<"your answer is "<<a<<endl;
            }
            else if (subChoose == 5) {
                cout<<"Enter meter to convert:- ";
                cin>>meter;
                float a = meter * 0.01;
                cout<<"your answer is "<<a<<endl;
            }
            else if (subChoose == 6) {
                cout<<"Enter meter to convert:- ";
                cin>>meter;
                float a = meter * 0.001;
                cout<<"your answer is "<<a<<endl;
            }
            else {
                cout<<"Invaild Input"<<endl;
            }
        }
        else if (choose == 2) {

            cout<<"Welcome to US Customary units"<<endl;
            cout<<"1. Inch to Nautical mile"<<endl;
            cout<<"2. Inch to Thou"<<endl;
            cout<<"3. Inch to Foot"<<endl;
            cout<<"4. Inch to Yard"<<endl;
            cout<<"5. Inch to Rod"<<endl;
            cout<<"6. Inch to Mile"<<endl;
            cout<<"Enter your choose:- ";
            cin>>subChoose;

            if (subChoose == 1) {
                cout<<"Enter inch to convert:- ";
                cin>>inch;
                int a = inch/72910;
                cout<<"the result is "<<a<<endl;
            }
            else if (subChoose == 2) {
                cout<<"Enter inch to convert:- ";
                cin>>inch;
                int a = inch*1000;
                cout<<"the result is "<<a<<endl;
            }
            else if (subChoose == 3) {
                cout<<"Enter inch to convert:- ";
                cin>>inch;
                float a = inch*0.083333;
                cout<<"the result is "<<a<<endl;
            }
            else if (subChoose == 4) {
                cout<<"Enter inch to convert:- ";
                cin>>inch;
                float a = inch*0.0277778;
                cout<<"the Result is "<<a<<endl;
            }
            else if (subChoose == 5) {
                cout<<"Enter inch to convert:- ";
                cin>>inch;
                float a = inch*0.00505051;
                cout<<"The result is "<<a<<endl;
            }
            else if (subChoose == 6) {
                cout<<"Enter inch to convert:- ";
                cin>>inch;
                float a = inch/63360;
                cout<<"the result is "<<a<<endl;
            }
        }
        return 0;
    }

    static float Weight() {
        float a;
        int Choose;
        float result;

        cout<<"Welcome Weight Converter";
        cout<<"1. Gram to Tonne";
        cout<<"2. Gram to Kilogram";
        cout<<"3. Gram to Milligram";
        cout<<"4. Gram to Microgram";
        cout<<"5. Gram to Quintal";
        cout<<"6. Gram to Pound";
        cout<<"7. Gram to Ounce";
        cout<<"8. Gram to Carat";
        cout<<"9. Gram to Liang";
        cout<<"10. Gram to Dan";
        cout<<"11. Gram to Jin";
        cout<<"12. Gram to Qian";
        cout<<"Enter your Choose:- ";
        cin>>Choose;
        cout<<"Enter Weight in gram:- ";
        cin>>a;

        switch (Choose) {
            case 1:
                result = a*0.000001;
                cout<<"Your result is "<<result<<endl;
            case 2:
                result = a*0.001;
                cout<<"Your result is "<<result<<endl;
            case 3:
                result = a*1000;
                cout<<"Your result is "<<result<<endl;
            case 4:
                result = a*1000000;
                cout<<"Your result is "<<result<<endl;
            case 5:
                result = a*0.00001;
                cout<<"Your result is "<<result<<endl;
            case 6:
                result = a*0.002204622621848775;
                cout<<"Your result is "<<result<<endl;
            case 7:
                result = a*0.035273961949580412;
                cout<<"Your result is "<<result<<endl;
            case 8:
                result = a*5;
                cout<<"your result is "<<result<<endl;
            case 9:
                result = a+0.02;
                cout<<"your result is "<<result<<endl;
            case 10:
                result = a*0.00002;
                cout<<"your result is "<<result<<endl;
            case 11:
                result = a*0.002;
                cout<<"your result is "<<result<<endl;
            case 12:
                result = a*0.2;
                cout<<"your result is "<<result<<endl;
            default:
                cout<<"Invaild input";
        }
        return 0;
    }

    static float Area() {
        float a;
        int Choose;
        float result;

        cout<<"Welcome Area Converter";
        cout<<"1. Square meter to Square kilometer";
        cout<<"2. Square meter to Hectare";
        cout<<"3. Square meter to Are";
        cout<<"4. Square meter to Square decimeter";
        cout<<"5. Square meter to Square centimeter";
        cout<<"6. Square meter to Square millimeter";
        cout<<"7. Square meter to Acre";
        cout<<"8. Square meter to Square mile";
        cout<<"9. Square meter to Square yard";
        cout<<"10. Square meter to Square foot";
        cout<<"11. Square meter to Square inch";
        cout<<"12. Square meter to Square rod";
        cout<<"Enter your Choose:- ";
        cin>>Choose;
        cout<<"Enter Area in Square Meter:- ";
        cin>>a;

        if (Choose==1) {
            result = a*0.000001;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 2) {
            result = a*0.0001;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 3) {
            result = a*0.01;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 4) {
            result = a*100;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 5) {
            result = a*10000;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 6) {
            result = a*1000000;
            cout<<"Your result is "<<result<<endl;
        }
        else if (Choose == 7) {
            result = a*0.000247105407259363;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 8) {
            result = a*0.000000386102158542;
            cout<<"Your result is "<<result<<endl;
        }
        else if (Choose == 9) {
            result = a*1.195990046301080256;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 10) {
            result = a*10.76391041670972231;
            cout<<"your result is "<<result<<endl;
        }
        else if (Choose == 11) {
            result = a*1550.003100006200012;
            cout<<"Your result is "<<result<<endl;
        }
        else if (Choose == 12) {
            result = a*0.0039536861034746454;
            cout<<"Your result is "<<result<<endl;
        }
        else {
            cout<<"Invaild input"<<endl;
        }
        return 0;
    }

    static float Volume() {
        float a;
        int Choose;
        float result;

        cout<<"Welcome to Volume Converter";
        cout<<"1. Cubic meter to cubic millimeter";
        cout<<"2. Cubic meter to cubic decimeter";
        cout<<"3. Cubic meter to cubic centimeter";
        cout<<"4. Cubic meter to Hectoliter";
        cout<<"5. Cubic meter to liter";
        cout<<"6. Cubic meter to Deciliter";
        cout<<"7. Cubic meter to Centiliter";
        cout<<"8. Cubic meter to Millilitre";
        cout<<"9. Cubic meter to Cubic foot";
        cout<<"10. Cubic meter to Cubic inch";
        cout<<"11. Cubic meter to cubic yard";
        cout<<"12. Cubic meter to Acre-foot";
        cout<<"Enter your choose";
        cin>>Choose;
        cout<<"Enter your Volume in cubic meter:- ";
        cin>>a;

        switch (Choose) {
            case 1:
                result = a*1000000000;
                cout<<"Your result is "<<result<<endl;
            case 2:
                result = a*1000;
                cout<<"Your result is "<<result<<endl;
            case 3:
                result = a*1000000;
                cout<<"Your result is "<<result<<endl;
            case 4:
                result = a*10;
                cout<<"Your result is "<<result<<endl;
            case 5:
                result = a*1000;
                cout<<"Your result is "<<result<<endl;
            case 6:
                result = a*10000;
                cout<<"Your result is "<<result<<endl;
            case 7:
                result = a*100000;
                cout<<"Your result is "<<result<<endl;
            case 8:
                result = a*1000000;
                cout<<"Your result is "<<result<<endl;
            case 9:
                result = a*35.31466672148859025;
                cout<<"Your result is "<<result<<endl;
            case 10:
                result = a*61023.74409473228395;
                cout<<"Your result is "<<result<<endl;
            case 11:
                result = a*1.307950619314392231;
                cout<<"Your result is "<<result<<endl;
            case 12:
                result = a*0.000810372771474878;
                cout<<"Your result is "<<result<<endl;
            default:
                cout<<"Invaild input";
        }
    }

    static float Speed() {
        float a;
        int Choose;
        float result;

        cout<<"Welcome to Speed Convertor";
        cout<<"1. Km/hr to Lightspeed";
        cout<<"2. Km/hr to Mach";
        cout<<"3. Km/hr to Meter/sec";
        cout<<"4. Km/hr to Km/sec";
        cout<<"5. Km/hr to Knot";
        cout<<"6. Km/hr to Mile/hr";
        cout<<"7. Km/hr to Foot/sec";
        cout<<"8. Km/hr to Inch/sec";
        cout<<"Enter your Choose:- ";
        cin>>Choose;
        cout<<"Enter speed in Km/hr:= ";
        cin>>a;

        switch (Choose) {
            case 1:
                result = a*0.000000000926566931;
                cout<<"Your result is "<<result<<endl;
            case 2:
                result = a*0.000816273222973193;
                cout<<"Your result is "<<result<<endl;
            case 3:
                result =
            default:
                cout<<"Invaild input";
        }
    }
};
int main() {

    return 0;
}