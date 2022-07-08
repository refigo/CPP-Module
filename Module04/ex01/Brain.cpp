/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:07:12 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:18:40 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void Brain::dsplyBrainHdrMsg(void) {
  std::cout << "[Brain] ";
}

Brain::Brain(void) {
  dsplyBrainHdrMsg();
  std::cout << "Default constructor called\n";
}

Brain::Brain(const Brain& origin) {
  dsplyBrainHdrMsg();
  std::cout << "Copy constructor called\n";
  *this = origin;
}

Brain& Brain::operator=(const Brain& origin) {
  if (this != &origin)
  {

  }
  return *this;
}

Brain::~Brain(void) {
  dsplyBrainHdrMsg();
  std::cout << "Destructor called\n";
}

const std::string& Brain::getIdeas(const int index) {
  return ideas_[index];
}

void Brain::setIdea(const int index, const std::string& idea) {
  ideas_[index] = idea;    
}
