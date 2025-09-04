#include <bits/stdc++.h>
using namespace std;

string hashingSearch(unordered_map<int, string> &table, int key) {
    if (table.find(key) != table.end()) return table[key];
    else return "Not Found";
}

int main() {
    unordered_map<int, string> students;
    students[101] = "Aditya";
    students[102] = "Raj";
    students[103] = "Neha";

    int roll = 102;
    cout << "Roll " << roll << ": " << hashingSearch(students, roll);
    return 0;
}
