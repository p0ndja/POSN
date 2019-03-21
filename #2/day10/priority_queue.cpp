#include <bits/stdc++.h>
using namespace std;
typedef struct {
    int height;
    int id;
} Student;

struct cmp {bool operator()(const Student &a, const Student &b) {
        if (a.height == b.height) return a.id > b.id;
        return a.height > b.height;
}};

priority_queue<Student, vector<Student>, cmp> pq;

int main() {
    Student t;
    t.height = 175; t.id = 2; pq.push(t);
    t.height = 169; t.id = 8; pq.push(t);
    t.height = 175; t.id = 1; pq.push(t);

    while(!pq.empty()) {cout << pq.top().height << " " << pq.top().id << endl; pq.pop();}
    return 0;
}
