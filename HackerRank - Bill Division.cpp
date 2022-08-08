#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

//It should print Bon Appetit if the bill is fairly split, where Anna 
    //chooses a meal in the array she won't tak, Otherwise, it should print the integer amount of money that Brian owes Anna.
    //bonAppetit has the following parameter(s):
    //bill: an array of integers representing the cost of each item ordered
    //k: an integer representing the zero-based index of the item Anna doesn't eat
    //b: the amount of money that Anna contributed to the bill

void bonAppetit(vector<int>& bill, int& k, int& b) {
    int annaChargedSum;

    cout << "\nEnter what Brian charges Anna: ";
    //Input what Brian charges    
    cin >> annaChargedSum;

    //Calculate Anna's actual half
    int actualSum = 0;
    bill.erase(bill.begin() + b);

    for (int i = 0; i < bill.size(); i++) {
        actualSum += bill[i];
    }

    actualSum /= 2;

    //Check Phase
    if (annaChargedSum > actualSum) {
        cout << annaChargedSum - actualSum;
    }
    else {
        cout << "\nBon Appetit";
    }
}

int main() {
    int menuSize;
    cout << "Enter the menu size: ";
    cin >> menuSize;

    vector<int> menu(menuSize);
    cout << "\nEnter integer items on menu: ";
    for (int i = 0; i < menuSize; i++) {
        cin >> menu[i];
    }

    int rejectedItem;
    cout << "\nEnter the unwanted item index from the list: ";
    cin >> rejectedItem;

    bonAppetit(menu, menuSize, rejectedItem);

    system("pause>nul");
}
