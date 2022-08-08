/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerrok <jerrok@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:56:59 by jerrok            #+#    #+#             */
/*   Updated: 2022/08/08 11:57:00 by jerrok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("untitled", 145, 137)
{
	isSigned = false;
	target = "untitled_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137)
{
	isSigned = false;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old): Form(old.title, 145, 137)
{
	this->isSigned = old.isSigned;
	this->target = old.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm &old)
{
	if(this != &old)
	{
		this->isSigned = old.isSigned;
		this->target = old.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	ofs;

	this->Form::beExecuted(executor);
	ofs.open(((target + "_shrubbery").c_str()), std::ofstream::out | std::ofstream::app);
	if (!ofs.good())
		ofs.close();
	ofs << "                                              ." << std::endl;
	ofs << "                                   .         ;" << std::endl;
	ofs << "      .              .              ;%     ;;" << std::endl;
	ofs << "        ,           ,                :;%  %;" << std::endl;
	ofs << "         :         ;                   :;%;'     .," << std::endl;
	ofs << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	ofs << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	ofs << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	ofs << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	ofs << "             `@%.  `;@%.      ;@@%;" << std::endl;
	ofs << "               `@%%. `@%%    ;@@%;" << std::endl;
	ofs << "                 ;@%. :@%%  %@@%;" << std::endl;
	ofs << "                   %@bd%%%bd%%:;" << std::endl;
	ofs << "                     #@%%%%%:;;" << std::endl;
	ofs << "                     %@@%%%::;" << std::endl;
	ofs << "                     %@@@%(o);  . '" << std::endl;
	ofs << "                     %@@@o%;:(.,'" << std::endl;
	ofs << "                 `.. %@@@o%::;" << std::endl;
	ofs << "                    `)@@@o%::;" << std::endl;
	ofs << "                     %@@(o)::;" << std::endl;
	ofs << "                    .%@@@@%::;" << std::endl;
	ofs << "                    ;%@@@@%::;." << std::endl;
	ofs << "                   ;%@@@@%%:;;;." << std::endl;
	ofs << "               ...;%@@@@@%%:;;;;,.." << std::endl << std::endl;
	ofs.close();
}
