#include <time_shield.hpp>

int main() {
    return time_shield::now() > 0 ? 0 : 1;
}
