#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> shopping_list;
    string item;
    cout << "Enter 5 shopping items:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Item " << (i + 1) << ": ";
        cin >> item;
        shopping_list.push_back(item);
    }

int choice;

    do {
        cout << "\nCurrent Shopping List:\n";
        for (int i = 0; i < shopping_list.size(); ++i) {     
            cout << i + 1 << ". " << shopping_list[i] << endl;
        }

cout << "\nMenu:\n";
cout << "1. Delete an item\n";
cout << "2. Add an item at a specific position\n";
cout << "3. Add an item at the end\n";
cout << "4. Exit\n";
cout << "Enter your choice: ";
cin >> choice;

        if (choice == 1) {
cout << "Enter item name to delete: ";
            cin >> item;
            bool found = false;
            for (int i = 0; i < shopping_list.size(); ++i) {
                if (shopping_list[i] == item) {
                    shopping_list.erase(shopping_list.begin() + i);
                    cout << "Item deleted.\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Item not found.\n";
            }
 } else if (choice == 2) {
            int pos;
            cout << "Enter position to insert (1 to " << shopping_list.size() + 1 << "): ";
            cin >> pos;
            if (pos >= 1 && pos <= shopping_list.size() + 1) {
                cout << "Enter item name: ";
                cin >> item;
                shopping_list.insert(shopping_list.begin() + pos - 1, item);
                cout << "Item added at position " << pos << ".\n";
            } else {
                cout << "Invalid position.\n";
            }
} else if (choice == 3) {
cout << "Enter item name to add at end: ";
cin >> item;
shopping_list.push_back(item);
cout << "Item added at the end.\n";  


        } else if (choice == 4) {
            cout << "Exit program.\n";

        } else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
