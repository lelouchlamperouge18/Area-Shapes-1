#include <iostream>

using namespace std;
void showMenu(){
    cout << "----- CHOOSE -----" << endl;
    cout << "1. Trapezoid" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "------------------" << endl;
}
int getChoice(){
    int choice;
	// Get and validate user's choice
    cout << "Pick your choice: ";
    cin >> choice;
	//Return the choice
    return choice;
}

int main()
{
    float a,b,h;
    float s = 0.0;
    cout << "----- Hello world -----" << endl;
    cout << "***** TEST GITHUB -----" << endl;
    showMenu();
    int choice = getChoice();
    switch (choice) {
        case 1:
            cout << "Nhap a,b,h: ";
            cin >> a >> b >> h;
            s = (a+b)*h/2;
            break;
        case 2:
            cout << "Nhap a,b: ";
            cin >> a >> b;
            s = a*b;
            break;
        case 3:
            cout << "Nhap do dai canh: ";
            cin >>  a;
            s = a*a;
            break;
        default:
            cout << "Error choice";
            break;
    }
    cout << "Dien tich can tinh la: " << s;
    return 1;
}
