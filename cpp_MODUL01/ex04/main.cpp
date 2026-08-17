#include <iostream>
#include <string>
#include <fstream>

#include <sstream>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Wrong count of arguments!" << std::endl;
		return 1;
	}
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	if(s1.empty())
	{
		std::cout << "s1 is empty!" << std::endl;
		return 1;
	}

	std::fstream myFile;
	

	myFile.open(argv[1], std::ios::in);
	if(myFile.is_open())
	{
		std::stringstream buffer;
		buffer << myFile.rdbuf();
		std::string contant = buffer.str();

		//std::cout << contant;
		myFile.close();
	}



	return 0;
}