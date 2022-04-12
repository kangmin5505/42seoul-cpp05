/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kangkim <kangkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:11:58 by kangkim           #+#    #+#             */
/*   Updated: 2022/04/12 11:23:26 by kangkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H_ 
# define SHRUBBERY_CREATION_FORM_H_ 

# include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
  ShrubberyCreationForm(void);
  ShrubberyCreationForm(const ShrubberyCreationForm &origin);
  ~ShrubberyCreationForm(void);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

  void execute(Bureaucrat const &executor) const;
private:

};

#endif
