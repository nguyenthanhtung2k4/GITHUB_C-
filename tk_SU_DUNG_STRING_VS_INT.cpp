#include <iostream>
#include <algorithm>

const int MAX_STUDENTS = 100;

struct Student {
    std::string name;
    int score;
};

bool compareStudents(const Student &a, const Student &b) {
    if (a.score == b.score) {
        return a.name < b.name;
    }
    return a.score < b.score;
}

void addStudent(Student students[MAX_STUDENTS], int &size, const std::string &name, int score) {
    // Kiểm tra tên có trùng không
    for (int i = 0; i < size; ++i) {
        if (students[i].name == name) {
            std::cout << "-1" << std::endl;
            exit(1);
        }
    }

    students[size++] = {name, score};
}

int main() {
    int n;
    std::cin >> n;

    if (n <= 0 || n > MAX_STUDENTS) {
        std::cout << "-1" << std::endl;
        return 1;
    }

    Student students[MAX_STUDENTS];
    int size = 0;

    for (int i = 0; i < n; ++i) {
        std::string name;
        int score;

        std::cin >> name >> score;

        addStudent(students, size, name, score);
    }

    // Sắp xếp danh sách sinh viên theo điểm và tên
    std::sort(students, students + size, compareStudents);

    // In ra danh sách theo yêu cầu
    for (int i = 0; i < size; ++i) {
        std::cout << students[i].name << " " << students[i].score << std::endl;
    }

    return 0;
}
