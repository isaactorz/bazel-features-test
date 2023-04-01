#include <expected>

int main() {
    auto res = std::expected<int, int>(0);
    return res.value();
}
