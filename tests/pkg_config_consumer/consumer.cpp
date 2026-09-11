#include <time_shield.hpp>

int main() {
    const auto current_ts = time_shield::now();
    const auto mono_ms = time_shield::monotonic_ms();
    return (current_ts > 0 && mono_ms >= 0) ? 0 : 1;
}
