#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int k;
    puts("Vi hotite kupit avtomobil? (1-da, 2-net)");
    std::cin >> k;
    switch (k)
    {
    case 1: {puts("Kakoy? (1-Maybach, 2-Toyota, 3-Lada)");
        std::cin >> k;
        switch (k);
        {
        case 3: puts("Ne slabo"); break;
        case 4: puts("Horowiy vibor"); break;
        case 5: puts("Somnitelniy vibor"); break;
        }
        break;
}
    case 2: puts("Polezno hodit pewkom"); break;
    default: puts("Nekoretniy variant"); break;

}
    return 0;
}
