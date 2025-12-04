#include <stdio.h>

typedef struct {
    int itemId;
    char name[40];
    float price;
} Item;

typedef struct {
    Item item;
    int qty;
    float lineTotal;
} CartLine;

void addItemToCart(CartLine cart[], int *cartCount, Item it, int qty) {
    cart[*cartCount].item = it;
    cart[*cartCount].qty = qty;
    cart[*cartCount].lineTotal = it.price * qty;
    (*cartCount)++;
}

typedef float (*Discount)(float);

float gold(float t) { return t * 0.8; }
float silver(float t) { return t * 0.9; }
float none(float t) { return t; }

int main() {
    CartLine cart[10];
    int count = 0;

    Item apple = {1, "Apple", 2.0};
    addItemToCart(cart, &count, apple, 5);

    Discount d = gold;
    float final = d(cart[0].lineTotal);

    printf("Final with GOLD: %.2f\n", final);
    return 0;
}
