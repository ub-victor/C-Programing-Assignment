#include <stdio.h>

typedef enum { BASIC, SILVER, GOLD } MembershipLevel;
typedef enum { CASH, MOBILE, CARD } PaymentMethod;

float computeDiscount(MembershipLevel level, float gross) {
    switch(level) {
        case GOLD: return gross * 0.20;
        case SILVER: return gross * 0.10;
        default: return 0;
    }
}

float computePaymentFee(PaymentMethod m, float amount) {
    switch(m) {
        case CARD: return amount * 0.03;
        case MOBILE: return amount * 0.02;
        default: return 0;
    }
}

int main() {
    float gross = 1000;
    float d = computeDiscount(GOLD, gross);
    float fee = computePaymentFee(CARD, gross);

    printf("Discount: %.2f\nFee: %.2f\n", d, fee);
    return 0;
}
