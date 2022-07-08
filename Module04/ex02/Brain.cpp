/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:07:12 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:40:04 by mgo              ###   ########.fr       */
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
  *this = origin;
  dsplyBrainHdrMsg();
  std::cout << "Copy constructor called\n";
}

Brain& Brain::operator=(const Brain& origin) {
  if (this != &origin) {
    for (int idx = 0; idx < IDEAS_MAX; ++idx)
      ideas_[idx] = origin.ideas_[idx];
  }
  return *this;
}

Brain::~Brain(void) {
  dsplyBrainHdrMsg();
  std::cout << "Destructor called\n";
}

const std::string Brain::getIdea(const int idx) {
  if (idx < 0 || IDEAS_MAX <= idx)
    return "OutOfIdeas";
  return ideas_[idx];
}

void Brain::setIdea(const int idx, const std::string& idea) {
  if (0 <= idx && idx < IDEAS_MAX)
    ideas_[idx] = idea;
}
