#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> courseNames(n);
    vector<float> grades(n);
    vector<int> creditHours(n);

    float totalPoints = 0, totalCredits = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Course " << i + 1 << " name: ";
        cin >> courseNames[i];
        cout << "Grade (0-10 or 0-100 scale): ";
        cin >> grades[i];
        cout << "Credit hours: ";
        cin >> creditHours[i];

        totalPoints += grades[i] * creditHours[i];
        totalCredits += creditHours[i];
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\n--- Course Grades ---\n";
    for (int i = 0; i < n; ++i) {
        cout << courseNames[i] << ": Grade = " << grades[i] << ", Credit Hours = " << creditHours[i] << endl;
    }

    cout << "\nFinal CGPA: " << cgpa << endl;
    return 0;
}
