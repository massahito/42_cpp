#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> V(100);
	for (size_t i = 0; i < V.size(); i++)
		V[i] = i;
	std::vector<int>::iterator iter = easyfind(V, 90);
	std::cout << *iter << std::endl;
}
