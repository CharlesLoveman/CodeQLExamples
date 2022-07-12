int foo(int x, int y) {
    return x + y;
}

int g = 0;

int bar() {
    g++;
    return g;
}

int baz() {
    g++;
    return g;
}

int main() {
    char x = -1;
    char y = 1;
    signed char z = -1;
    foo(bar(), baz());
    return 0;
}
