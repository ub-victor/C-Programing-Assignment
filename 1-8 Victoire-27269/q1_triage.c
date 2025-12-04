#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[40];
    int age;
    int priority;   // 1=Critical, 2=Serious, 3=Stable
    int bedNo;      // -1 = not assigned
} Patient;

void assignBeds(Patient p[], int n, int totalBeds) {
    // Sort by priority then by age
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(p[j].priority < p[i].priority ||
               (p[j].priority == p[i].priority && p[j].age > p[i].age)) {
                Patient temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    // Assign beds
    for(int i = 0; i < n; i++) {
        if(i < totalBeds)
            p[i].bedNo = i + 1;
        else
            p[i].bedNo = -1;
    }
}

int main() {
    Patient patients[3] = {
        {1, "Alice", 45, 1, -1},
        {2, "John", 70, 3, -1},
        {3, "Eric", 50, 2, -1}
    };

    assignBeds(patients, 3, 2);

    for(int i = 0; i < 3; i++) {
        printf("%s -> Bed: %d\n", patients[i].name, patients[i].bedNo);
    }
    return 0;
}
