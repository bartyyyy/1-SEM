#include <iostream>
#include <cstdarg>
#include <ctime>

int days(int count, ...) {
    int totalDays = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count - 1; i += 2) {
        int day = va_arg(args, int);
        int month = va_arg(args, int);
        int year = va_arg(args, int);

        std::tm timeinfo = { 0 };
        timeinfo.tm_year = year - 1900;
        timeinfo.tm_mon = month - 1;
        timeinfo.tm_mday = day;

        std::time_t time1 = std::mktime(&timeinfo);

        int nextDay = va_arg(args, int);
        int nextMonth = va_arg(args, int);
        int nextYear = va_arg(args, int);

        std::tm nextTimeinfo = { 0 };
        nextTimeinfo.tm_year = nextYear - 1900;
        nextTimeinfo.tm_mon = nextMonth - 1;
        nextTimeinfo.tm_mday = nextDay;

        std::time_t time2 = std::mktime(&nextTimeinfo);

        double diff = std::difftime(time2, time1);
        int daysBetween = static_cast<int>(diff / (60 * 60 * 24));

        std::cout << "Между датами " << day << "." << month << "." << year << " и "
            << nextDay << "." << nextMonth << "." << nextYear << " "
            << "прошло " << daysBetween << " дней." << std::endl;

        totalDays += daysBetween;
    }

    va_end(args);
    return totalDays;
}

int main() {
    int result1 = days(3, 1, 1, 2023, 31, 12, 2023, 1, 1, 2024);
    int result2 = days(2, 1, 1, 2023, 31, 12, 2024);
    int result3 = days(6, 1, 1, 2023, 31, 12, 2023, 1, 1, 2024, 1, 2, 2024, 1, 2, 2024, 1, 3, 2024);

    std::cout << "Количество обработанных дат: " << result1 << std::endl;
    std::cout << "Количество обработанных дат: " << result2 << std::endl;
    std::cout << "Количество обработанных дат: " << result3 << std::endl;

    return 0;
}