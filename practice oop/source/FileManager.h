#include <iostream>
#include <fstream>

using namespace std;

class FileManager
{
public:
	FileManager(string someVal);
	~FileManager();
	void writeFileExample(string someString);
	void readFileExample();
};