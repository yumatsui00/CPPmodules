#include "ShrubberyCreationForm.hpp"

//!------------------------Constructors & Operator----------------------------
ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {};

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ) : AForm(src), _target(src._target) {};

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs ) {
	return *this;
} ;

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {};

//*---------------------------Member Function---------------------------------
void	ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (exector.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	std::ofstream file(this->getName() + "_shrubbery");
    file << "      .     .  .      +     .      .          ." << std::endl;
    file << "	.       .      .     #       .           ."<< std::endl;
    file << "	    .      .         ###            .      .      ."<< std::endl;
    file << "	  .      .   "#:. .:##"##:. .:#''  .      ."<< std::endl;
    file << "	      .      . "####"###"####"  ."<< std::endl;
    file << "	   .     "#:.    .:#"###"#:.    .:#"  .        .       ."<< std::endl;
  	file << "	.             "#########"#########'        .        ."<< std::endl;
    file << "	    .    "#:.  "####"###"####"  .:#"   .       ."<< std::endl;
    file << "	 .     .  "#######""##"##""#######""                  ."<< std::endl;
    file <<  "	            ."##"#####"#####"##""           .      ."<< std::endl;
    file << "	.   "#:. ...  .:##"###"###"##:.  ... .:#""     ."<< std::endl;
    file << "	  .     "#######"##"#####"##"#######"      .     ."<< std::endl;
    file << "	.    .     "#####""#######""#####"""    .      .	"<< std::endl;
    file << "	        .     "      000      "    .     .		"<< std::endl;
    file << "	   .         .   .   000     .        .       .	"<< std::endl;
	file << ".. .. ..................O000O........................ ......	"<< std::endl;
	file.close();
};
