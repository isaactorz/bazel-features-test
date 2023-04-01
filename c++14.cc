#include <memory>

int main() {
    auto ret = std::make_unique<int>(0);
    return *ret;
}
