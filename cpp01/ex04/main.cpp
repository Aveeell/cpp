#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "try: ./replace <file> <old str> <new str>" << std::endl;
	else
	{
		std::ifstream file(argv[1]);
		std::string str1(argv[2]);
		std::string str2(argv[3]);
		std::string content;
		char c;
		int i;
		
		if (!std::string(argv[1]).length() || !str1.length() || !str2.length() || !file.is_open())
		{
			std::cout << "try: ./replace <file> <old str> <new str>" << std::endl;
			return (1);
		}
		while (file.get(c))
			content.push_back(c);
		while((i = content.find(str1)) != -1)
		{
			content.erase(i, str1.length());
			content.insert(i, str2);
		}

		std::ofstream outfile(std::string(argv[1]) + ".replace");
		outfile << content;
		file.close();
		outfile.close();
	}
	return (0);
}