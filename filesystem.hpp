//#include <ofstream>
//#include <ifstream>
#include <iostream>
#include <fstream>

class FileSystem
{
private:
std::fstream file; 
public:
	
	void addReader(const char * name_reader);
	void deleteReader(const char * name_reader);
	void addBooks( char * name_reader,char * book_title);
	
};
