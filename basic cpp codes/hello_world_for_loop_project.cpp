#include<iostream>
#include<conio.h>
#include<thread>
#include<chrono>
using namespace std;

int main() {
    //this_thread::sleep_for(chrono::milliseconds(5000));

    for (char loop_1 = 'a'; loop_1 <= 'h'; loop_1++) {
        cout << loop_1 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_2 = 'a'; loop_2 <= 'e'; loop_2++) {
        cout << "h" << loop_2 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'l'; loop_3++) {
        cout << "he" << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'l'; loop_3++) {
        cout << "hel" << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'o'; loop_3++) {
        cout << "hell" << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'w'; loop_3++) {
        cout << "hello " << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'o'; loop_3++) {
        cout << "hello w" << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'r'; loop_3++) {
        cout << "hello wo" << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'l'; loop_3++) {
        cout << "hello wor" << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    for (char loop_3 = 'a'; loop_3 <= 'd'; loop_3++) {
        cout << "hello worl" << loop_3 << endl;
        //this_thread::sleep_for(chrono::milliseconds(75));
    }

    //this_thread::sleep_for(chrono::milliseconds(10000));
    getch();
}
