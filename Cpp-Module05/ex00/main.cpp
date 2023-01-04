#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("KIM", 1);
    Bureaucrat b("LEE", 100);
    Bureaucrat c("CHOI", -5);
    Bureaucrat d("GOOD", 200);
    Bureaucrat ee("TOM", 150);

    std::cout << "\n=============================\n";
    
    try
    {
        std::cout << "UP : " << ee.getName() << '\n';
        ee.downGrade();
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << '\n';
    }

    try
    {
        std::cout << "DOWN " << a.getName() << '\n';
        a.addGrade();
    }
    catch (std::exception & e)
    {
        std::cerr << "Exception : " << e.what() << '\n';
    }

    std::cout << "\n=============================\n";

    return 0;
}