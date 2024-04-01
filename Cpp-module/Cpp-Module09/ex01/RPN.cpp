#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN &rhs)
{
	*this = rhs;
}

RPN::~RPN()
{
    // std::cout << " === RPN is Destroy === " << std::endl;
}

RPN& RPN::operator=(const RPN &rhs)
{
    (void)rhs;
	return *this;
}

int RPN::calc(int num1, int num2, char operation)
{
	if (operation == '+')
		return num1 + num2;
	else if (operation == '-')
		return num2 - num1;
	else if (operation == '*')
		return num1 * num2;
	else if (operation == '/')
	{
		if (num1 == 0)
			throw std::logic_error("Error: Couldn't divide by 0 ");	
		return num2 / num1;
	}
	return (0);
}

void RPN::solve(char *argv)
{
    std::string input = std::string(argv);
	std::string operation = "+-*/";
	int num = 0;
	int oper = 0;

	for (size_t i = 0; i < input.length(); i++)
	{
		if (std::isspace(input[i]))
			continue;
		if (std::isdigit(input[i]))
		{
			num++;
			rpn_stack.push(input[i] - '0');
		}
		else if (operation.find(input[i]) != std::string::npos)
		{
			oper++;
			int num1 = rpn_stack.top();
			rpn_stack.pop();
			int num2 = rpn_stack.top();
			rpn_stack.pop();
			rpn_stack.push(calc(num1, num2, input[i]));
		}
		else
		{
			throw std::invalid_argument("Error");
		}
	}
	if (rpn_stack.size() != 1)
		throw std::exception();
	std::cout << rpn_stack.top() << std::endl;
}