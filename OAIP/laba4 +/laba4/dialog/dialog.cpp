#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int choose;
    puts("Kakoy tovar hotite kupit? (1-Molochniy, 2-Chto-to sladkoe)");
    scanf_s("%d", &choose);
    switch (choose)
    {
    case 1: {
        puts("Kakoy imenno molochniy tovar? (1-Moloko, 2-Kefir, 3-Sir, 4-Yougurt)");
        scanf_s("%d", &choose);
        switch (choose)
        {
        case 1: puts("Vidimo lubite moloko,horowiy vibor"); break;
        case 2: puts("Horowiy variant "); break;
        case 3: puts("Normalniy variant "); break;
        case 4: puts("Ochen horowiy variant"); break;
        default: puts("Nekkorektniy variant");  break;
        }
        break;
    }
    case 2: {
        puts("Chto imenno? (1-Snikers, 2-Pechen'e, 3-Vipechka)");
        scanf_s("%d", &choose);
        switch (choose)
        {
        case 1: puts("Sladkoezhka)"); break;
        case 2: puts("Horowiy variant"); break;
        case 3: puts("Bulochki kaif, sam lublu"); break;
        default: puts("Nekkorektniy variant");  break;
        }
        break;
    }
    default: puts("Nekkorektniy variant");  break;
    }
    return 0;
}