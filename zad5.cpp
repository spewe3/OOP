#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

void move_by(Point* p, double dx, double dy) {
    p->x += dx;
    p->y += dy;
}

double dist(const Point* a, const Point* b) {
    return sqrt((a->x - b->x) * (a->x - b->x) +
                (a->y - b->y) * (a->y - b->y));
}

void move_by_ref(Point& p, double dx, double dy) {
    p.x += dx;
    p.y += dy;
}

double dist_ref(const Point& a, const Point& b) {
    return sqrt((a.x - b.x) * (a.x - b.x) +
                (a.y - b.y) * (a.y - b.y));
}

int main() {
    Point a = {1, 2};
    Point b = {4, 6};

    move_by(&a, 2, 3);
    cout << "dist: " << dist(&a, &b) << endl;

    move_by_ref(a, 1, 1);
    cout << "dist_ref: " << dist_ref(a, b) << endl;

    Point points[5] = {
        {3, 4},
        {1, 2},
        {-1, 1},
        {5, 2},
        {0, 3}
    };

    Point origin = {0, 0};
    int min = 0;

    for (int i = 1; i < 5; i++) {
        if (dist(&points[i], &origin) < dist(&points[min], &origin)) {
            min = i;
        }
    }

    cout << "Najbliza tocka: (" << points[min].x << ", "
         << points[min].y << ")" << endl;

    return 0;
}