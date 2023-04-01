#include <optional>

int main() {
    auto foo = std::make_optional<int>(0);
    return foo.value();
}
