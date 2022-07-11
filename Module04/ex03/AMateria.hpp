/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:11:48 by mgo               #+#    #+#             */
/*   Updated: 2022/07/11 10:46:55 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <string>

class ICharacter;

class AMateria {
 private:
  AMateria(void);
  AMateria(const AMateria& orig);
  AMateria &operator=(const AMateria& rhs);

 protected:
  std::string type_;

 public:
  AMateria(const std::string& type);
  virtual ~AMateria(void);
  
  const std::string& getType() const;  // Return the materia type

  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
};

#endif
