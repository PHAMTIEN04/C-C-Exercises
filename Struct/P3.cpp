#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
    Point* next;
};


void insert(Point*& head, double x, double y) {
    Point* newNode = new Point;
    newNode->x = x;
    newNode->y = y;

    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Point* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void input(Point*& head, int n) {
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        insert(head, x, y);

    }
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void findNearestPoint(Point* head, double x, double y) {
    double minDist = distance(head->x, head->y, x, y);
    double minDistX = head->x;
    double minDistY = head->y;

    Point* curr = head->next;
    while (curr != nullptr) {
        double dist = distance(curr->x, curr->y, x, y);
        if (dist < minDist) {
            minDist = dist;
            minDistX = curr->x;
            minDistY = curr->y;

        }
        curr = curr->next;

    }
    cout << minDistX << " " << minDistY << endl;
}


int countPointsOnXAxis(Point* head) {
    int count = 0;
    Point* curr = head;
    while (curr != nullptr) {

 

        if (curr->y == 0) {

 

            count++;

 

        }
       curr = curr->next;
    }
    return count;

}

void deleteList(Point* head) {

    while (head != nullptr) {
        Point* temp = head;
        head = head->next;
        delete temp;
    }

 
}


int main() {
    int n;
    cin >> n;

    Point* head = nullptr;
    input(head, n);

    double x, y;

    cin >> x >> y;

    findNearestPoint(head, x, y);

    int count = countPointsOnXAxis(head);

 

    cout << count << endl;


    deleteList(head);

    return 0;

 

}
