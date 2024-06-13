//program to store the s data and and finding the topper of the class
#include<iostream>
#include<string>
using namespace std;
struct stu_data {
    string name[50];
    int roll_num[50];
    string branch[50];
    int total_marks[50];

};
int main() {
    int c_max, i, n;
    struct stud_data s[50];
    cout << "Enter the number of student" << endl;
    cin >> n;
    for (;i <= n;i++) {
        cout << "enter the details of s" << endl;
        cin >> s[i];
        /* if (i == 1) {
             c_max = s.total_marks[1];
         }
         else
             if (c_max > s.total_marks[i]) {
                 c_max = c_max;
             }
             else
                 c_max = s.total_marks[i];
     }
     cout << c_max << endl;*/

    }
    return 0;

}