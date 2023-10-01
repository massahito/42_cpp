#include "rpn.hpp"

int main(int argc, char *argv[])
{
	RPN rpn;

	if (argc != 2)
	{
		std::cerr << "the argument must be 1." << std::endl;
		return (1);
	}
	try
	{
		std::cout << rpn.perse(argv[1]) << std::endl;
	}
	catch (std::invalid_argument &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
