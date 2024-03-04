// Cviceni2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KeyValue.h"
#include "Node.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    KeyValue* k1 = new KeyValue(1, 45.2);

    cout << "Key: " << k1->GetKey() << endl;
    cout << "Value: " << k1->GetValue() << endl;

    KeyValue* k2 = k1->CreateNext(2, 32.9);
    KeyValue* k3 = k2->CreateNext(3, 32.9);

    cout << "Key: " << k2->GetKey() << endl;
    cout << "Value: " << k2->GetValue() << endl;

    // -----------------------------

    int numberOfItems = 1000;
    KeyValue* head = new KeyValue(1, 45.2);
    KeyValue* lastItem = head;
    KeyValue* newItem;

    for (int i = 0; i < numberOfItems; i++)
    {
        newItem = lastItem->CreateNext(i, i * 0.5);
        lastItem = newItem;
    }

    // ----------------------------- 

    KeyValue* item = head;
    while (item != nullptr)
    {
        cout << "Key: " << item->GetKey() << " Value: " << item->GetValue() << endl;
        item = item->GetNext();
    }

    delete k1, k2, k3, head;

    // ---------------------------
    // 

    Node* root = new Node("Age Over 40?");
        Node* node1 = root->CreatePositive("Has another loan?");
            Node* node3 = node1->CreatePositive("Decline Loan");
            Node* node4 = node1->CreateNegative("Approve Loan");

        Node* node2 = root->CreateNegative("Has income over threshold?");
            Node* node5 = node2->CreatePositive("Approve Loan");
            Node* node6 = node2->CreateNegative("Decline Loan");

    // Print from Root

}