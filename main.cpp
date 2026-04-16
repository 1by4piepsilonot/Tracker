#include <iostream>
#include <fstream>
using namespace std;

void addProblem() {
    string name, difficulty;
    cout << "Enter problem name: ";
    cin >> name;
    cout << "Enter difficulty: ";
    cin >> difficulty;

    ofstream file("problems.txt", ios::app);
    file << name << " - " << difficulty << endl;
    file.close();

    cout << "Saved!\n";
}

int main() {
    int choice;
    cout << "1. Add Problem\n";
    cin >> choice;

    if (choice == 1) addProblem();

    return 0;
}