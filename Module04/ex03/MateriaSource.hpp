#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
 private:
  // memory(4 materias)
  AMateria  *memory;

 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource& orig);
  MateriaSource& operator=(const MateriaSource& rhs);
  ~MateriaSource(void);
};

#endif
