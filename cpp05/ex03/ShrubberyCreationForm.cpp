#include "ShrubberyCreationForm.hpp"
#include <fstream>

//!------------------------Constructors & Operator----------------------------
ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {};

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ) : AForm(src), _target(src._target) {};

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs ) {
	(void)rhs;
	return *this;
} ;

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {};

//*---------------------------Member Function---------------------------------
void	ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
	if (this->getIsSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file((this->_target + "_shrubbery").c_str());
    file << "The Worm's Turn " << std::endl;
    file << "          _{\\ _{\\{\\/}/}/}__" << std::endl;
    file << "         {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
    file << "        {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
    file << "     {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
    file << "    {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
    file << "   _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
    file << "  {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
    file << "  _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
    file << " {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
    file << "  {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
    file << "   {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
    file << "  {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
    file << "   {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
    file << "     {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
    file << "      (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
    file << "        {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
    file << "         {/{\\{\\{\\/}/}{\\{\\}/}" << std::endl;
    file << "          {){/ {\\/}{\\/} \\}\\}" << std::endl;
    file << "          (_)  \\.-'.-/" << std::endl;
    file << "      __...--- |'-.-'| --...__" << std::endl;
    file << "_...--   .-'   |'-.-'|  ' -.  ""--..__" << std::endl;
    file << " -"    "   .  . '    |.'-._| '  . .  '   jro" << std::endl;
    file << " .  '-  '  .--'| '-.'|    .  '  . '" << std::endl;
    file << "      ' ..     |'-_.-|" << std::endl;
    file << ".  '  .     _.-|-._ -|-._  .  '  ." << std::endl;
    file << "          .'   |'- .-|   '." << std::endl;
    file << "..-'   ' .'.   `-._.-'   .'  '  - ." << std::endl;
    file << " .-' '      '-._______.-'     '  ." << std::endl;
    file << "     .      ~," << std::endl;
    file << "  .       .   |\\   .    ' '-." << std::endl;
    file << "  ___________/  \\____________" << std::endl;
    file << " /  Why is it, when you want \\" << std::endl;
    file << "|  something, it is so damn   |" << std::endl;
    file << "|    much work to get it?     |" << std::endl;
    file << "\\___________________________/" << std::endl;
	file.close();
};
