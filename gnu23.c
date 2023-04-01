[[nodiscard]] int foo() {
    return 0;
}

int main() {
    typeof (int) a;
    return foo();
}
