#include <stdio.h>
#include <string.h>

struct shops {
    int price;
    union {
        struct {
            char author[50];
            char bookname[50];
        } book;
        struct {
            char model[50];
            char color[20];
        } phone;
    } shop;
} o;

int main() {
    strcpy(o.shop.phone.model, "I Phone");
    strcpy(o.shop.phone.color, "Pink");
    o.price = 60000;
    printf("\nModel: %s", o.shop.phone.model);
    printf("\nColor: %s", o.shop.phone.color);
    printf("\nPrice: %d", o.price);
    return 0;
}