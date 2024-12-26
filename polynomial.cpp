#include<iostream>
using namespace std;

struct Node {
    int coef;
    int exp;
    Node* next;
};
void insert(Node** p, int coef, int exp) {
    Node* newNode = new Node();
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = nullptr;

    if (*p == nullptr) {
        *p = newNode;
    } else {
        Node* temp = *p;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void traverse(Node* p) {
    if (p == nullptr) {
        cout << "0" << endl;
        return;
    }
    Node* temp = p;
    while (temp != nullptr) {
        cout << temp->coef << "x^" << temp->exp;
        if (temp->next != nullptr) {
            cout << " + ";
        }
        temp = temp->next;
    }
    cout << endl;
}
Node* add(Node* p1, Node* p2) {
    Node* result = nullptr;
    while (p1 != nullptr && p2 != nullptr) {
        if (p1->exp == p2->exp) {
            insert(&result, p1->coef + p2->coef, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        } else if (p1->exp > p2->exp) {
            insert(&result, p1->coef, p1->exp);
            p1 = p1->next;
        } else {
            insert(&result, p2->coef, p2->exp);
            p2 = p2->next;
        }
    }
    while (p1 != nullptr) {
        insert(&result, p1->coef, p1->exp);
        p1 = p1->next;
    }
    while (p2 != nullptr) {
        insert(&result, p2->coef, p2->exp);
        p2 = p2->next;
    }
    return result;
}
int main() {
    Node* p1 = nullptr;
    Node* p2 = nullptr;
    insert(&p1, 5, 4);
    insert(&p1, 3, 2);
    insert(&p1, 1, 0);
    insert(&p2, 4, 4);
    insert(&p2, 2, 2);
    insert(&p2, 1, 1);
    cout << "First polynomial: ";
    traverse(p1);
    cout << "Second polynomial: ";
    traverse(p2);
    Node* r = add(p1, p2);
    cout << "Result: ";
    traverse(r);

    return 0;
}
