
#ifndef HARL_HPP
# define HARL_HPP

# include <string>

enum e_harl
{
	HARL_DEBUG,
	HARL_INFO,
	HARL_WARNING,
	HARL_ERROR,
	HARL_UNKNOWN
};

class Harl
{
private:
	e_harl	status_;
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	void	complain(std::string level);

	Harl(void);
	~Harl(void);
};

#endif