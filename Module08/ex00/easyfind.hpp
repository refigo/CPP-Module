/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:08:08 by mgo               #+#    #+#             */
/*   Updated: 2022/07/25 16:30:09 by mgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception> // coonsider
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
  return (std::find(container.begin(), container.end(), value));
}

#endif
