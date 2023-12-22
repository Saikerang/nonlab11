#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0));
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";


    int x = 0;
    while (x < 3) {
    cin.get();
    x++;
    }

    int random = rand() % 9;
    string predictedGrade = grades[random];
    cout << "You will get "<<predictedGrade<<" in this 261102.\n";
}
