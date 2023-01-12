#include "RobotomyRequestForm.hpp"
#include <unistd.h>
#include <random>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) :  Form("RobtomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & in) : Form(in.getName(), in.getGrade2Sign(), in.getGrade2Execute()), _target(in._target)
{
}

void RobotomyRequestForm::action() const
{
	srand((unsigned int)time(NULL));
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " was not robotomized" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & in)
{
	this->_target = in._target;
	return (*this);
}