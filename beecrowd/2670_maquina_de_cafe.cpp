#include <iostream>

int main()
{
    int A1, A2, A3;
    std::cin >> A1;
    std::cin >> A2;
    std::cin >> A3;

    int andar1 = A2 * 2 + A3 * 4;
    int andar2 = A1 * 2 + A3 * 2;
    int andar3 = A1 * 4 + A2 * 2;

    if (andar1 <= andar2 && andar1 <= andar3) {
        std::cout << andar1 << "\n";
    }
    else if (andar2 <= andar1 && andar2 <= andar3) {
        std::cout << andar2 << "\n";
    }
    else {
        std::cout << andar3 << "\n";
    }

    return 0;
}
