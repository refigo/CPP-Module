/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:39:02 by mgo               #+#    #+#             */
/*   Updated: 2022/07/08 13:39:06 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

#define IDEAS_MAX 100

class Brain {
  private:
    std::string	ideas_[IDEAS_MAX];
    const std::string ooi_;

    void dsplyBrainHdrMsg(void);

  public:
    Brain(void);
    Brain(const Brain& origin);
    Brain& operator=(const Brain& origin);
    ~Brain(void);

    const std::string& getIdea(const int idx);
    void setIdea(const int idx, const std::string& idea);
};

#endif
