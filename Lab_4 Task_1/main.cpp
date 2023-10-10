#include <iostream>
using namespace std;
struct student{
    int id, semester, credits;
    float cgpa;
};
int main()
{
    student st[10];

    st[1].id = 42764;
    st[1].semester = 6;
    st[1].credits = 56;
    st[1].cgpa = 3.89;

    //cout<<st[1].id<<" "<<endl;
    //cout<<st[1].semester<<" "<<endl;
    //cout<<st[1].credits<<" "<<endl;
    //cout<<st[1].cgpa<<" "<<endl;

    st[2].id = 45682;
    st[2].semester = 5;
    st[2].credits = 52;
    st[2].cgpa = 3.50;

    //cout<<st[2].id<<" "<<endl;
    //cout<<st[2].semester<<" "<<endl;
    //cout<<st[2].credits<<" "<<endl;
    //cout<<st[2].cgpa<<" "<<endl;

    st[3].id = 53254;
    st[3].semester = 2;
    st[3].credits = 37;
    st[3].cgpa = 3.68;

    //cout<<st[3].id<<" "<<endl;
    //cout<<st[3].semester<<" "<<endl;
    //cout<<st[3].credits<<" "<<endl;
    //cout<<st[3].cgpa<<" "<<endl;

    st[4].id = 51254;
    st[4].semester = 3;
    st[4].credits = 49;
    st[4].cgpa = 3.78;

    //cout<<st[4].id<<" "<<endl;
    //cout<<st[4].semester<<" "<<endl;
    //cout<<st[4].credits<<" "<<endl;
    //cout<<st[4].cgpa<<" "<<endl;

    st[5].id = 49368;
    st[5].semester = 2;
    st[5].credits = 24;
    st[5].cgpa = 3.19;

    //cout<<st[5].id<<" "<<endl;
    //cout<<st[5].semester<<" "<<endl;
    //cout<<st[5].credits<<" "<<endl;
    //cout<<st[5].cgpa<<" "<<endl;

    st[6].id = 56564;
    st[6].semester = 1;
    st[6].credits = 15;
    st[6].cgpa = 4.00;

    //cout<<st[6].id<<" "<<endl;
    //cout<<st[6].semester<<" "<<endl;
    //cout<<st[6].credits<<" "<<endl;
    //cout<<st[6].cgpa<<" "<<endl;

    st[7].id = 41245;
    st[7].semester = 6;
    st[7].credits = 81;
    st[7].cgpa = 3.85;

    //cout<<st[7].id<<" "<<endl;
    //cout<<st[7].semester<<" "<<endl;
    //cout<<st[7].credits<<" "<<endl;
    //cout<<st[7].cgpa<<" "<<endl;

    st[8].id = 39871;
    st[8].semester = 9;
    st[8].credits = 126;
    st[8].cgpa = 3.82;

    //cout<<st[8].id<<" "<<endl;
    //cout<<st[8].semester<<" "<<endl;
    //cout<<st[8].credits<<" "<<endl;
    //cout<<st[8].cgpa<<" "<<endl;

    st[9].id = 40142;
    st[9].semester = 8;
    st[9].credits = 107;
    st[9].cgpa = 2.57;

    //cout<<st[9].id<<" "<<endl;
    //cout<<st[9].semester<<" "<<endl;
    //cout<<st[9].credits<<" "<<endl;
    //cout<<st[9].cgpa<<" "<<endl;

    st[10].id = 55312;
    st[10].semester = 1;
    st[10].credits = 16;
    st[10].cgpa = 3.75;

    //cout<<st[10].id<<" "<<endl;
    //cout<<st[10].semester<<" "<<endl;
    //cout<<st[10].credits<<" "<<endl;
    //cout<<st[10].cgpa<<" "<<endl;


    cout << "\nScholarship Students (CGPA >= 3.75):" << endl;
    for (int i = 1; i <= 10; i++) {
        if (st[i].cgpa >= 3.75) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }

    cout << "\nStudents with more than 50 credits:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (st[i].credits > 50) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }

    cout << "\nStudents with at least 2 semesters and 28 credits:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (st[i].semester >= 2 && st[i].credits >= 28) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }


    return 0;
}

