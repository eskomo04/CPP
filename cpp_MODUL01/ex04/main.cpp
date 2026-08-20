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
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	if(s1.empty())
	{
		std::cout << "s1 is empty!" << std::endl;
		return 1;
	}

	std::fstream myFile;
	std::string contant;

	myFile.open(argv[1], std::ios::in);
	if(myFile.is_open())
	{
		std::stringstream buffer;
		buffer << myFile.rdbuf();
		contant = buffer.str();
		myFile.close();
	}

	size_t found = 0;
	size_t pos = 0;
	std::string result;

	while(1)
	{
		found = contant.find(s1, pos);
		if (found != std::string::npos)
		{
			result.append(contant, pos,  found - pos);
			result += s2;
			pos = found + s1.length();
		}
		else
		{
			result.append(contant, pos, contant.length() - pos);
			break ;
		}
	}

	std::string replaceFileName = std::string(argv[1]) + ".replace";
	std::ofstream replaceFile(replaceFileName.c_str());

	if(replaceFile.is_open())
	{
		replaceFile << result;
		replaceFile.close();
	}
	else
	{
		std::cout << "Couldn't open replace file!" << std::endl;
		return 1;
	}
	return 0;
}
