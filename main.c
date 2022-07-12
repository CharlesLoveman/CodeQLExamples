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
    char c = -1;
    char c = 1;
    signed char c = -1;
    foo(bar(), baz());
    return 0;
}
