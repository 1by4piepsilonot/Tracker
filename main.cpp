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
void viewProblems() {
    ifstream file("problems.txt");
    string line;

    cout << "\n--- Problem List ---\n";

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

int main() {
    int choice;

    cout << "1. Add Problem\n";
    cout << "2. View Problems\n";
    cin >> choice;

    if (choice == 1) addProblem();
    else if (choice == 2) viewProblems();

    return 0;
}
