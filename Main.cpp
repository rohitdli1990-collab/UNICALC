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
        int a;

        cout<<"Welcome Weight Conveter";
        cout<<"1. ";
        cout<<"2. ";
        return 0;
    }
};
int main() {

    return 0;
}