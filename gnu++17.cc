#include <optional>

int main() {
    typeof (int) a;
    auto foo = std::make_optional<int>(0);
    return foo.value();
}
