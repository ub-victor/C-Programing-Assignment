#include <stdio.h>

typedef union {
    int nationalId;
    char passport[20];
} PatientID;

typedef struct {
    int isForeign; // 0=National, 1=Foreign
    PatientID id;
} PatientInfo;

int main() {
    PatientInfo p1 = {0}; // national
    p1.id.nationalId = 12345;

    PatientInfo p2 = {1}; // foreign
    snprintf(p2.id.passport, 20, "RWA123456");

    if(p1.isForeign)
        printf("Passport: %s\n", p1.id.passport);
    else
        printf("National ID: %d\n", p1.id.nationalId);

    if(p2.isForeign)
        printf("Passport: %s\n", p2.id.passport);
    else
        printf("National ID: %d\n", p2.id.nationalId);

    return 0;
}
