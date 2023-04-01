#include <memory>

int main() {
    typeof (int) a;
    auto ret = std::make_unique<int>(0);
    return *ret;
}
