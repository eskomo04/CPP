#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int i = 1;
	int x = 0;

	if(argc > 1)
	{
		while(i < argc)
		{
			while(argv[i][x])
			{
				std::cout << (char)std::toupper(argv[i][x]);
				x++;
			}
			x = 0;
			i++;
			std::cout << " ";
		}
		std::cout << std::endl;
		return 0;
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
