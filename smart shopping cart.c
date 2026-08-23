#include <stdio.h>
#include <string.h>

struct Item {
    int itemId;
    char name[50];
    float price;
};

struct CartLine {
    struct Item item;
    int quantity;
    float lineTotal;
};

// Add item to cart
void addItemToCart(struct CartLine *cart, struct Item item, int quantity, int *cartCount) {
    cart[*cartCount].item = item;
    cart[*cartCount].quantity = quantity;
    cart[*cartCount].lineTotal = item.price * quantity;
    (*cartCount)++;
}

// Discount functions
float goldDiscount(float total) { return total * 0.8; }
float silverDiscount(float total) { return total * 0.9; }
float noDiscount(float total) { return total; }

void applyDiscount(float (*discountFunc)(float), float total) {
    printf("Final price after discount: %.2f\n", discountFunc(total));
}

int main() {
    struct Item item1 = {1, "Milk", 2.5};
    struct Item item2 = {2, "Bread", 1.5};

    struct CartLine cart[10];
    int cartCount = 0;

    addItemToCart(cart, item1, 2, &cartCount); // 2 x Milk
    addItemToCart(cart, item2, 3, &cartCount); // 3 x Bread

    float total = 0;
    for (int i = 0; i < cartCount; i++) {
        total += cart[i].lineTotal;
    }

    printf("Total before discount: %.2f\n", total);

    // Apply GOLD discount
    applyDiscount(goldDiscount, total);

    return 0;
}
