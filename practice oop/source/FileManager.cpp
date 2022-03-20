#include "FileManager.h"

FileManager :: FileManager(string someVal)
{
	cout<<"Constructor - FileManager: "<<someVal<<endl;
}

FileManager :: ~FileManager()
{
	cout<<"Distructor - FileManager"<<endl;
}

// Write a File
void FileManager :: writeFileExample(string someString)
{
	cout<<"void FileManager :: writeFileExample(string someString)"<<endl;
	ofstream myFile("sampleText.txt");
	myFile<<"Writing to file - "<<someString<<endl;
	myFile.close();
}

// Read a File
void FileManager :: readFileExample()
{
	string sTemp;
	cout<<"string FileManager :: readFileExample()"<<endl;
	ifstream myFile("sampleText.txt");

	while(getline(myFile, sTemp))
	{
		cout<<"Line- "<<sTemp<<endl;
	}
	myFile.close();
}