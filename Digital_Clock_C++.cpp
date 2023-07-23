#include <iostream>
#include <Windows.h>  
using namespace std;
int main() {

    int hours = 0, min = 0, seconds = 0;

    cout << "Hours : \n";
    cin >> hours;

    cout << "Min : \n";
    cin >> min;

    cout << "Sec : \n";
    cin >> seconds;
    while (true)
    {
        system("cls");
        if (seconds > 59) {
            min++;
            seconds = 0;
        }
        if (min > 59) {
            hours++;
            min = 0;
        }
        if (hours > 23) {
            hours = 0;
        }

        if (seconds >= 10) { // => 0
            if (min >= 10) {
                if (hours >= 10) {
                    cout << hours << " : " << min << " : " << seconds++;
                }
                else {// hours < 10
                    cout << 0 << hours << " : " << min << " : " << seconds++;
                }
            }
            else {// min < 10
                if (hours >= 10) {
                    cout << hours << " : " << 0 << min << " : " << seconds++;
                }
                else {
                    cout << 0 << hours << " : " << 0 << min << " : " << seconds++;
                }
            }
        }

        else { // seconds < 10 => 0
            if (min >= 10) {
                if (hours >= 10) {
                    cout << hours << " : " << min << " : " << 0 << seconds++;
                }
                else {// hours < 10
                    cout << 0 << hours << " : " << min << " : " << 0 << seconds++;
                }
            }
            else {// min < 10
                if (hours >= 10) {
                    cout << hours << " : " << 0 << min << " : " << 0 << seconds++;
                }
                else {
                    cout << 0 << hours << " : " << 0 << min << " : " << 0 << seconds++;
                }
            }

        }

        Sleep(200);
    } // while

    return 0;
}// main