#include <bits/stdc++.h>
using namespace std;
class Student {
private:
    string name;
    int id;
    float gpa;
public:
    Student(string name, int id, float gpa) {
        this->name = name;
        this->id = id;
        this->gpa = gpa;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
    }
    void addstudent() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter GPA: ";
        cin >> gpa;
        students[size] = Student(name, id, gpa);
        size++;
        }
    void displaystudents() {
        for (int i = 0; i < size; i++) {
            students[i].display();

        }
    }
    void searchstudent() {
        int searchid;
        cout << "Enter ID to search: ";
        cin >> searchid;
        for (int i = 0; i < size; i++) {
            if (students[i].id == searchid) {
                students[i].display();
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
    void deletestudent() {
        int deleteid;
        cout << "Enter ID to delete: ";
        cin >> deleteid;
        for (int i = 0; i < size; i++) {
            if (students[i].id == deleteid) {
                for (int j = i; j < size - 1; j++) {
                    students[j] = students[j + 1];
                }
                size--;
                cout << "Student deleted!" << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
  void update_student_info(){
    int updateid;
    cout << "Enter ID to update: ";
    cin >> updateid;

    for (int i = 0; i < size; i++) {
        if (students[i].id == updateid) {
            cout << "Enter new name: ";
            cin >> students[i].name;

            cout << "Enter new GPA: ";
            cin >> students[i].gpa;

            cout << "Student information updated!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}
        void sort_students_by_gpa() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (students[j].gpa < students[j + 1].gpa) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
        cout << "Students sorted by GPA!" << endl;
    }
    void sort_students_by_name() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (students[j].name > students[j + 1].name) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
        cout << "Students sorted by name!" << endl;
    }
    void sort_students_by_id() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (students[j].id > students[j + 1].id) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
        cout << "Students sorted by ID!" << endl;
    }
    void display_top_students() {
        sort_students_by_gpa();
        cout << "Top students:" << endl;
        for (int i = 0; i < min(size, 3); i++) {
            students[i].display();
        }
    }
    void calculate_average_gpa() {
        if (size == 0) {
            cout << "No students to calculate average GPA!" << endl;
            return;
        }
        float total_gpa = 0;
        for (int i = 0; i < size; i++) {
            total_gpa += students[i].gpa;
        }
        float average_gpa = total_gpa / size;
        cout << "Average GPA: " << average_gpa << endl;
    }
    void gpa_more_than_3() {
        cout << "Students with GPA more than 3:" << endl;
        for (int i = 0; i < size; i++) {
            if (students[i].gpa > 3) {
                students[i].display();
            }
        }
    }
    void gpa_less_than_3_and_more_than_2() {
        cout << "Students with GPA less than 3 and more than 2:" << endl;
        for (int i = 0; i < size; i++) {
            if (students[i].gpa < 3 && students[i].gpa > 2) {
                students[i].display();
            }
        }
    }
    void gpa_less_than_2() {
        cout << "Students with GPA less than 2:" << endl;
        for (int i = 0; i < size; i++) {
            if (students[i].gpa < 2) {
                students[i].display();
            }
        }
    }static Student students[100];
        static int size;};
        student Student::students[100];
        int Student::size = 0;

     
    int main(){
        start:
    int choice;
    cout << "Student Management System" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Display students" << endl;
    cout << "3. Search student" << endl;
    cout << "4. Delete student" << endl;
    cout << "5. Update student information" << endl;
    cout << "6. Sort students by GPA" << endl;
    cout << "7. Sort students by name" << endl;
    cout << "8. Sort students by ID" << endl;
    cout << "9. Display top students" << endl;
    cout << "10. Calculate average GPA" << endl;
    cout << "11. Display students with GPA more than 3" << endl;
    cout << "12. Display students with GPA less than 3 and more than 2" << endl;
    cout << "13. Display students with GPA less than 2" << endl;
    cout << "0. Exit" << endl;
    cin >> choice;
    Student s(" ", 0, 0);
    if (choice == 1) {
        s.addstudent();
    } else if (choice == 2) {
        s.displaystudents();
    } else if (choice == 3) {
        s.searchstudent();
    } else if (choice == 4) {
        s.deletestudent();
    } else if (choice == 5) {
        s.update_student_info();
    } else if (choice == 6) {
        s.sort_students_by_gpa();
    } else if (choice == 7) {
        s.sort_students_by_name();
    } else if (choice == 8) {
        s.sort_students_by_id();
    } else if (choice == 9) {
        s.display_top_students();
    } else if (choice == 10) {
        s.calculate_average_gpa();
    } else if (choice == 11) {
        s.gpa_more_than_3();
    } else if (choice == 12) {
        s.gpa_less_than_3_and_more_than_2();
    } else if (choice == 13) {
        s.gpa_less_than_2();
    } else if (choice == 0) {
        cout << "Exiting..." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    goto start;
}#include <bits/stdc++.h>
using namespace std;
class Student {
private:
    string name;
    int id;
    float gpa;
public:
    Student(string name, int id, float gpa) {
        this->name = name;
        this->id = id;
        this->gpa = gpa;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
    }
    void addstudent() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter GPA: ";
        cin >> gpa;
        students[size] = Student(name, id, gpa);
        size++;
        }
    void displaystudents() {
        for (int i = 0; i < size; i++) {
            students[i].display();

        }
    }
    void searchstudent() {
        int searchid;
        cout << "Enter ID to search: ";
        cin >> searchid;
        for (int i = 0; i < size; i++) {
            if (students[i].id == searchid) {
                students[i].display();
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
    void deletestudent() {
        int deleteid;
        cout << "Enter ID to delete: ";
        cin >> deleteid;
        for (int i = 0; i < size; i++) {
            if (students[i].id == deleteid) {
                for (int j = i; j < size - 1; j++) {
                    students[j] = students[j + 1];
                }
                size--;
                cout << "Student deleted!" << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
  void update_student_info(){
    int updateid;
    cout << "Enter ID to update: ";
    cin >> updateid;

    for (int i = 0; i < size; i++) {
        if (students[i].id == updateid) {
            cout << "Enter new name: ";
            cin >> students[i].name;

            cout << "Enter new GPA: ";
            cin >> students[i].gpa;

            cout << "Student information updated!" << endl;
            return;
        }
    }

    cout << "Student not found!" << endl;
}
        void sort_students_by_gpa() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (students[j].gpa < students[j + 1].gpa) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
        cout << "Students sorted by GPA!" << endl;
    }
    void sort_students_by_name() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (students[j].name > students[j + 1].name) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
        cout << "Students sorted by name!" << endl;
    }
    void sort_students_by_id() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (students[j].id > students[j + 1].id) {
                    swap(students[j], students[j + 1]);
                }
            }
        }
        cout << "Students sorted by ID!" << endl;
    }
    void display_top_students() {
        sort_students_by_gpa();
        cout << "Top students:" << endl;
        for (int i = 0; i < min(size, 3); i++) {
            students[i].display();
        }
    }
    void calculate_average_gpa() {
        if (size == 0) {
            cout << "No students to calculate average GPA!" << endl;
            return;
        }
        float total_gpa = 0;
        for (int i = 0; i < size; i++) {
            total_gpa += students[i].gpa;
        }
        float average_gpa = total_gpa / size;
        cout << "Average GPA: " << average_gpa << endl;
    }
    void gpa_more_than_3() {
        cout << "Students with GPA more than 3:" << endl;
        for (int i = 0; i < size; i++) {
            if (students[i].gpa > 3) {
                students[i].display();
            }
        }
    }
    void gpa_less_than_3_and_more_than_2() {
        cout << "Students with GPA less than 3 and more than 2:" << endl;
        for (int i = 0; i < size; i++) {
            if (students[i].gpa < 3 && students[i].gpa > 2) {
                students[i].display();
            }
        }
    }
    void gpa_less_than_2() {
        cout << "Students with GPA less than 2:" << endl;
        for (int i = 0; i < size; i++) {
            if (students[i].gpa < 2) {
                students[i].display();
            }
        }
    }static Student students[100];
        static int size;};
        student Student::students[100];
        int Student::size = 0;

     
    int main(){
        start:
    int choice;
    cout << "Student Management System" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Display students" << endl;
    cout << "3. Search student" << endl;
    cout << "4. Delete student" << endl;
    cout << "5. Update student information" << endl;
    cout << "6. Sort students by GPA" << endl;
    cout << "7. Sort students by name" << endl;
    cout << "8. Sort students by ID" << endl;
    cout << "9. Display top students" << endl;
    cout << "10. Calculate average GPA" << endl;
    cout << "11. Display students with GPA more than 3" << endl;
    cout << "12. Display students with GPA less than 3 and more than 2" << endl;
    cout << "13. Display students with GPA less than 2" << endl;
    cout << "0. Exit" << endl;
    cin >> choice;
    Student s(" ", 0, 0);
    if (choice == 1) {
        s.addstudent();
    } else if (choice == 2) {
        s.displaystudents();
    } else if (choice == 3) {
        s.searchstudent();
    } else if (choice == 4) {
        s.deletestudent();
    } else if (choice == 5) {
        s.update_student_info();
    } else if (choice == 6) {
        s.sort_students_by_gpa();
    } else if (choice == 7) {
        s.sort_students_by_name();
    } else if (choice == 8) {
        s.sort_students_by_id();
    } else if (choice == 9) {
        s.display_top_students();
    } else if (choice == 10) {
        s.calculate_average_gpa();
    } else if (choice == 11) {
        s.gpa_more_than_3();
    } else if (choice == 12) {
        s.gpa_less_than_3_and_more_than_2();
    } else if (choice == 13) {
        s.gpa_less_than_2();
    } else if (choice == 0) {
        cout << "Exiting..." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    goto start;
}
