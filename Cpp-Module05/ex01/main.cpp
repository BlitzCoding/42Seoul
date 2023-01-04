#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat	test1("KIM", 11);
		Form		test2("LEE", 11, 18);
		std::cout << test2 << '\n';
		test2.beSigned(test1);
		std::cout << test1.signForm(test2) << '\n';
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << '\n';
	}
    return 0;
}