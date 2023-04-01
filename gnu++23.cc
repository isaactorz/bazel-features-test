#include <expected>

int main() {
    typeof (int) a;
    auto res = std::expected<int, int>(0);
    return res.value();
}
