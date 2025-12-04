#include <stdio.h>

typedef float Amount;
typedef char CustomerName[40];

typedef struct {
    CustomerName name;
    Amount baseFee;
} Payment;

typedef Amount (*FeeStrategy)(Amount);

Amount addTax(Amount base) {
    return base * 1.18;
}

void applyFee(Payment *p, FeeStrategy fs) {
    p->baseFee = fs(p->baseFee);
}

int main() {
    Payment p = {"Alice", 100};
    applyFee(&p, addTax);

    printf("Final Fee: %.2f\n", p.baseFee);
    return 0;
}
