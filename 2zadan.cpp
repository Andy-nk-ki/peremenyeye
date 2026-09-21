#include <iostream>
#include <clocale>

int main()
{
    int a{};
    int b{};
    int c{};

    std::setlocale(LC_ALL, "Russian");
    std::cin >> a;
    std:: cin >> b;
    std:: cin >> c;
    
    int max = (((a>b) && (a>c)) ? a : ((b > a) && (b > c)) ? b : c);
    int min = (((a<b) && (a<c)) ? a : ((b < a) && (b < c)) ? b : c);
    int fff = ((a+b+c)- min - max);
    std:: cout << max << " " << fff << " " << min << std::endl;
    
}