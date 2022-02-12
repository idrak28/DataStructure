//
// idrak28
//

#include <iostream>
#include <vector>

using namespace std;

struct InventoryItem {
    string name;
    double unitPrice;
    int quantity;

    InventoryItem() {
        unitPrice = 0;
        quantity = 0;
    }
};


void showInventoryItem(vector<InventoryItem> &inventoryItems) {
    int count = 1;
    for (const auto &item: inventoryItems) {
        cout << "InventoryItem " << count << ": " << endl;
        cout << "Name: " << item.name;
        cout << " | Unit Price: " << item.unitPrice;
        cout << " | Quantity: " << item.quantity;
        cout << endl;
    }
}

void addInventoryItem(vector<InventoryItem> &inventoryItems) {
    InventoryItem inventoryItem;
    cout << "Enter item Name: ";
    cin >> inventoryItem.name;
    cout << "Enter item unit price: ";
    cin >> inventoryItem.unitPrice;

    cout << "Enter item quantity: ";
    cin >> inventoryItem.quantity;

    inventoryItems.push_back(inventoryItem);
    cout << inventoryItem.name << " added successfully !" << endl;
}

void deleteInventoryItem(vector<InventoryItem> &inventoryItems) {
    int number = 0;
    cout << "Enter inventory item's  number to delete: ";
    cin >> number;
    InventoryItem inventoryItem = inventoryItems[number];
    inventoryItems.erase(inventoryItems.begin() + number);
    cout << inventoryItem.name << " deleted successfully !" << endl;
}


void editInventoryItem(vector<InventoryItem> &inventoryItems) {
    int number = 0;
    cout << "Enter inventory item's  number to edit: ";
    cin >> number;

    InventoryItem inventoryItem;
    cout << "Enter item Name: ";
    cin >> inventoryItem.name;
    cout << "Enter item unit price: ";
    cin >> inventoryItem.unitPrice;

    cout << "Enter item quantity: ";
    cin >> inventoryItem.quantity;

    inventoryItems[number] = inventoryItem;
    cout << inventoryItem.name << " edited successfully !" << endl;

}

void calculateTotalCost(vector<InventoryItem> &inventoryItems) {
    double totalCost = 0;
    for (const auto &item: inventoryItems) {
        totalCost += (item.unitPrice * item.quantity);
        cout << "Cost for " << item.name << " -> " << (item.unitPrice * item.quantity) << endl;
    }
    cout << "Total Cost: " << totalCost << endl;
}

int main() {
    vector<InventoryItem> inventoryItems;

    int choice = -1;
    int again = 1;
    while (again) {
        cout
                << "1 Add new inventory item\n2 Edit existing inventory item\n3 Delete existing inventory item\n4 Get total cost\nEnter Number: ";
        cin >> choice;
        if (choice == 1) {
            addInventoryItem(inventoryItems);
        } else if (choice == 2) {
            editInventoryItem(inventoryItems);
        } else if (choice == 3) {
            deleteInventoryItem(inventoryItems);
        } else if (choice == 4) {
            calculateTotalCost(inventoryItems);
        } else {
            showInventoryItem(inventoryItems);
        }

        cout << "Enter 1 for continue, 0 for exit: ";
        cin >> again;

    }
}
