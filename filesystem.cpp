#include "filesystem.hpp"
//#include <iostream>



void FileSystem::addReader(const char * name_reader)
{
	
	std::ofstream file(name_reader);
	//File.open(name_reader);
	//File.close();
	file.close();
	
}

void FileSystem::deleteReader(const char * name_reader)
{
	remove(name_reader);
	
}


void FileSystem::addBooks (char * name_reader, char * book_title)
					
					{	
						std::fstream file(name_reader);
						if(file.is_open())
						{
							file<<(book_title);
							file.close();
						}
						else
						{
							std::cout<<"User not found,please add user"
							<<std::endl;
							
							
						}
						
						
					}
