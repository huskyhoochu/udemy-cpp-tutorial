#include <iostream>

int main() {

    char text[] = "mouse";
    int nChars = sizeof(text) - 1;
    char *pStart = text;
    char *pEnd = text + nChars - 1;

    std::cout << "원래 문자열: " << text << std::endl;
    std::cout << "문자열의 첫 주소값: " << (int) *pStart << std::endl;
    std::cout << "문자열의 마지막 주소값: " << (int) *pEnd << std::endl;
    std::cout << "문자열의 길이: " << nChars << std::endl;

//    std::cout << *pEnd << std::endl;

    while (pStart < pEnd) {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        pStart++;
        pEnd--;
    }

    std::cout << "뒤집힌 결과: " << text << std::endl;

    return 0;
}