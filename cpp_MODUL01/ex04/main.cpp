#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Wrong count of arguments!" << std::endl;
		return (1);
	}
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	if(s1.empty())
	{
		std::cout << "S1 is empty!" << std::endl;
		return (1);
	}

	//Code
	
	return 0;
}