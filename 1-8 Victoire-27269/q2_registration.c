#include <stdio.h>
#include <string.h>

typedef struct {
    int courseId;
    char courseName[50];
    int capacity;
    int enrolledCount;
} Course;

int findCourseIndex(const Course courses[], int n, int courseId) {
    for(int i = 0; i < n; i++) {
        if(courses[i].courseId == courseId)
            return i;
    }
    return -1;
}

void registerStudent(Course *c) {
    if(c->enrolledCount < c->capacity) {
        c->enrolledCount++;
        printf("Student registered!\n");
    } else {
        printf("Course full → Student waitlisted.\n");
    }
}

int main() {
    Course list[2] = {
        {101, "C Programming", 2, 1},
        {102, "Math", 3, 3}
    };

    int idx = findCourseIndex(list, 2, 101);
    registerStudent(&list[idx]);
    return 0;
}
