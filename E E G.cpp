#include<iostream>
#include<stdlib.h>
#include<unistd.h> // for sleep()

using namespace std;

int color = 0;

int rainbow() {
    if(color == 7) {
        color = 1;
        return color;
    }else {
        color ++;
        return color;
    }
}

void printName() {
    cout << "\033[1;37m\n\tThis is EEG" << endl;
}

/* 
takes a numebvr from 1 to 6 and will color the E E G acordingly
*/
void printEGG(int c) {
    if(c == 1) {
        printName();
        cout << "\033[0;37m\t     ▄   \n";
        cout << "\033[37m\t   ▄███▄ \n";
        cout << "\033[37m\t  ▄█████▄\n";
        cout << "\033[37m\t  ███████\n";
        cout << "\033[37m\t  ▀█████▀\n";
    }else if(c == 2) {
        printName();
        cout << "\033[0;32m\t     ▄   \n";
        cout << "\033[32m\t   ▄███▄ \n";
        cout << "\033[32m\t  ▄█████▄\n";
        cout << "\033[32m\t  ███████\n";
        cout << "\033[32m\t  ▀█████▀\n";
    }else if(c == 3) {
        printName();
        cout << "\033[0;33m\t     ▄   \n";
        cout << "\033[33m\t   ▄███▄ \n";
        cout << "\033[33m\t  ▄█████▄\n";
        cout << "\033[33m\t  ███████\n";
        cout << "\033[33m\t  ▀█████▀\n";
    }else if(c == 4) {
        printName();
        cout << "\033[0;34m\t     ▄   \n";
        cout << "\033[34m\t   ▄███▄ \n";
        cout << "\033[34m\t  ▄█████▄\n";
        cout << "\033[34m\t  ███████\n";
        cout << "\033[34m\t  ▀█████▀\n";
    }else if(c == 5) {
        printName();
        cout << "\033[0;35m\t     ▄   \n";
        cout << "\033[35m\t   ▄███▄ \n";
        cout << "\033[35m\t  ▄█████▄\n";
        cout << "\033[35m\t  ███████\n";
        cout << "\033[35m\t  ▀█████▀\n";
    }else if(c == 6) {
        printName();
        cout << "\033[0;36m\t     ▄   \n";
        cout << "\033[36m\t   ▄███▄ \n";
        cout << "\033[36m\t  ▄█████▄\n";
        cout << "\033[36m\t  ███████\n";
        cout << "\033[36m\t  ▀█████▀\n";
    }else if(c == 7) {
        printName();
        cout << "\033[0;31m\t     ▄   \n";
        cout << "\033[31m\t   ▄███▄ \n";
        cout << "\033[31m\t  ▄█████▄\n";
        cout << "\033[31m\t  ███████\n";
        cout << "\033[31m\t  ▀█████▀\n";
    }else {
        EXIT_FAILURE;
    }
}

int main() {
    int cColor;
    while(true) {
        system("clear");
        cColor = rainbow();
        printEGG(cColor);
        sleep(1);
    }
    return 0;
}
