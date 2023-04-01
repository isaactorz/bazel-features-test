#include <compare>

int main() {
    int a = 0;
    int b = 0;
    auto res = a <=> b;
    if (res == 0) {
        return 0;
    } else {
        return 1;
    }
}
