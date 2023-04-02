#include <iostream>
#include <list>
using namespace std;

int main(){
    int totalBill = 0;
    char category;
    char item;
    bool selectingItems = true;

    cout << "----------------------WELCOME-------------------------" << endl;
    cout << "----------------------Please follow these instructions-------------------------" << endl;
    cout << "Step 1: Please press s to start your order" << endl;
    cout << "Step 2: both veg and non veg options are available" << endl;
    cout << "Step 3: press v to order veg item" << endl;
    cout << "Step 4: press n to order non veg item" << endl;
    cout << "Step 5: you will get your final bill at the end" << endl;

    while (true) {
        cout << "Press s to start your order: ";
        cin >> category;
    

        if (category == 's' || category == 'S') {
            while (selectingItems) {
                cout << "Please select veg or non veg (v/n): ";
                cin >> category;

                if (category == 'v' || category == 'V') {
                    cout << "Please select an item no. from the following list:" << endl;
                    cout << "(1) paneer: price : Rs. 150" << endl;
                    cout << "(2) burger: price : Rs. 50" << endl;
                    cout << "(3) pizza: price : Rs. 250" << endl;
                    cout << "(4) veg roll: price : Rs. 100" << endl;
                    cout << "(5) chinese platter: price : Rs. 250" << endl;
                    cin >> item;
              
                    switch (item) {
                        case '1':
                            totalBill += 150;
                            break;
                        case '2':
                            totalBill += 50;
                            break;
                        case '3':
                            totalBill += 250;
                            break;
                        case '4':
                            totalBill += 100;
                            break;
                        case '5':
                            totalBill += 250;
                            break;
                        default:
                            cout << "Invalid selection. Please try again." << endl;
                            continue;
                    }

                    cout << "Do you want to add more items (y/n)? ";
                    cin >> category;
                if (category == 'n' || category == 'N') {
                        selectingItems = false;
                    }
                }
                else if (category == 'n' || category == 'N') {
                    cout << "Please select an item no. from the following list:" << endl;
                    cout << "(1) chicken tikka: price : Rs. 350" << endl;
                    cout << "(2) chicken 65: price : Rs. 200" << endl;
                    cout << "(3) chicken wings: price : Rs. 380" << endl;
                    cout << "(4) mutton roll: price : Rs. 220" << endl;
                    cout << "(5) non veg platter: price : Rs. 550" << endl;
                    cin >> item;
                    
                    switch (item) {
                        case '1':
                            totalBill += 350;
                            break;
                        case '2':
                            totalBill += 200;
                            break;
                        case '3':
                            totalBill += 380;
                            break;
                        case '4':
                            totalBill += 220;
                            break;
                        case '5':
                            totalBill += 550;
                            break;
                        default:
                            cout << "Invalid selection. Please try again." << endl;
                            continue;
                    }
            cout << "Do you want to add more items (y/n)? ";
            cin >> category;
            if (category == 'n' || category == 'N') {
                        selectingItems = false;
                    }
                }
                else{ 
                    cout<<"Invalid selection. Please try again."<< endl;
                    continue;
                }
                
            }
            cout<<"Your total bill is :Rs. "<<totalBill<<endl;
            cout<<"Please scan the QR Code to pay the bill."<<endl;
       
            break;
        }
    }
}