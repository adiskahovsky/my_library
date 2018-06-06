//#include <ofstream>
//#include <ifstream>
#include <fstream>
#include <iostream>

class FileSystem
{
      private:
	std::fstream file;

      public:
	void addReader(const char *name_reader);
	void deleteReader(const char *name_reader);
	void addBooks(char *name_reader, char *book_title);
	void deleteBooks(char *name_reader, char *book_title);
	void RAB();
};
