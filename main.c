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
    foo(bar(), baz());
    return 0;
}
