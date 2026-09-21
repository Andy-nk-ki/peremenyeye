#include <iostream>

int main()
{
    bool a{true};
    bool b{true};
    std::cout << std::boolalpha<< std::endl;
    std:: cout << "||" << std:: endl;
    std:: cout << a << " " << b << " " << (a||b ? "true" : "false") << std::endl;

    a = false;
    std::cout << a << " " << b << " " << (a||b) << std::endl;
    
    b = false;
    a = true;
    std::cout << a << " " << b << " " << (a||b)<< std::endl;

    b=false;
    std::cout << a << " " << b << " " << (a||b) << std::endl;

    std::cout << "&&" << std::endl;
    a = true ;
    b = true ;
    std::cout << a << " " << b << " " << (a&&b) << std:: endl;

    a=false;
    std::cout << a << " " << b << " " << (a&&b ? "true" : "false") << std:: endl;

    a = true;
    b = false;
    std::cout << a << " " << b << " " << (a&&b ? "true" : "false")<< std:: endl;

    a= false;
    std::cout << a << " " << b << " " << (a&&b ? "true" : "false") << std::endl ;

}
