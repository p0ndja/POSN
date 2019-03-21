#include <bits/stdc++.h>

using namespace std;

int number,question,row;
int q[1000];

struct arm {
    int id;
    int height;
    int say;
    int countSay;
}; arm army[1000];

bool compareFuncion(arm a,arm b) {
    if(a.height == b.height) return a.id < b.id; //Same height level, Sort by ID
    else return a.height > b.height; //Not same height level, Sort by Height (Many to Little)
}

int findID(int id) {
    for(int i = 0; i < number; i++) if(army[i].id == id) return i; //Get ID
}

int main () {
    scanf("%d %d %d", &number, &question, &row);
    for(int i = 0; i < number; i++) {
        scanf("%d", &army[i].height);
        army[i].id = i + 1;
    }
    for(int i = 0; i < question; i++) scanf("%d", &q[i]);

    sort(army, army + number, compareFuncion);

    for(int i = 0; i < number; i++) {
        army[i].say = (i + 1) % row; //Row Format loop 1 -> 2 -> 3 -> ... -> k -> 1 -> 2 -> ...
        army[i].countSay = (i / row) + 1;
        if(army[i].say == 0) army[i].say = row;
    }

    for(int i = 0; i < question; i++) {
        int id = findID(q[i]); //Get Data from People 'ID'
        printf("%d %d\n", army[id].countSay, army[id].say);
    }
}
