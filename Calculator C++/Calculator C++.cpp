
#include <iostream>
using namespace std;

int main()
{
    cout << "*** Simpale Calculator***\n";
    float number_1, number_2;
    char calculation;
    cin >> number_1 >> calculation >> number_2;
   
    if (number_1 >= 0 && number_2 >= 0) {


        switch (calculation)
        {
        case '+':cout << number_1 << calculation << number_2 << "=" << number_1 + number_2; break;
        case '-':cout << number_1 << calculation << number_2 << "=" << number_1 - number_2; break;
        case '*':cout << number_1 << calculation << number_2 << "=" << number_1 * number_2; break;
        case '/':cout << number_1 << calculation << number_2 << "=" << number_1 / number_2; break;
        case '%':
            bool intNumber_1, intNumber_2;
            intNumber_1 = ((int)number_1 == number_1);
            intNumber_2 = ((int)number_2 == number_2);

            if (intNumber_1 && intNumber_2)
            {
                cout << number_1 << calculation << number_2 << "=" << (int)number_1 % (int)number_2;
            }
            else
            {
                cout << "Invalid number formate." << endl;
            }
            break;

        default:  cout << "Enter a valid operation." << endl;
        }
    }
    else
    {
        cout << "Enter valid number!" << endl;
    }


    system("pause>0");
}
