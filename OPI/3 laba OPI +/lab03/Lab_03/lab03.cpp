#include <iostream>
// GurkinTimofey2006
// 47 75 72 6b 69 6e 54 69 6d 6f 66 65 79 32 30 30 36  Windows 1251
// 47 75 72 6b 69 6e 54 69 6d 6f 66 65 79 32 30 30 36  UTF-8
// 004700750072006b0069006e00540069006d006f0066006500790032003000300036 UTF-16

// ГуркинТимофейАлександрович2006
// c3 f3 f0 ea e8 ed d2 e8 ec ee f4 e5 e9 c0 eb e5 ea f1 e0 ed e4 f0 ee e2 e8 f7 32 30 30 36 Windows 1251
// d0 93 d1 83 d1 80 d0 ba d0 b8 d0 bd d0 a2 d0 b8 d0 bc d0 be d1 84 d0 b5 d0 b9 d0 90 d0 bb d0 b5 d0 ba d1 81 d0 b0 d0 bd d0 b4 d1 80 d0 be d0 b2 d0 b8 d1 87 32 30 30 36 UTF-8 
// 13 04 43 04 40 04 3a 04 38 04 3d 04 22 04 38 04 3c 04 3e 04 44 04 35 04 39 04 10 04 3b 04 35 04 3a 04 41 04 30 04 3d 04 34 04 40 04 3e 04 32 04 38 04 47 04 32 00 30 00 30 00 36 00 UTF-16

// Гуркин2006Timofey
// c3 f3 f0 ea e8 ed 32 30 30 36 54 69 6d 6f 66 65 79 Windows 1251
// d0 93 d1 83 d1 80 d0 ba d0 b8 d0 bd 32 30 30 36 54 69 6d 6f 66 65 79 UTF-8
// 13 04 43 04 40 04 3a 04 38 04 3d 04 32 00 30 00 30 00 36 00 54 00 69 00 6d 00 6f 00 66 00 65 00 79 00 UTF-16
// American standart code for information interchange

int main()
{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "GurkinTimofey2006";
	char rfie[] = "ГуркинТимофейАлександрович2006";
	char lr[] = "Гуркин2006Timofey";

	wchar_t Lfie[] = L"GurkinTimofey2006";
	wchar_t Rfie[] = L"ГуркинТимофейАлександрович2006";
	wchar_t LR[] = L"Гуркин2006Timofey";

	std::cout << hello << lfie << std::endl;
	return 0;

}