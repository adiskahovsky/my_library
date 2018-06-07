#include "filesystem.hpp"

//#include <iostream>


void FileSystem::addReader(const char *name_reader)
{

	std::ofstream file(name_reader);
	// File.open(name_reader);
	// File.close();
	file.close();
}

void FileSystem::deleteReader(const char *name_reader)
{
	remove(name_reader);
}


void FileSystem::addBooks(char *name_reader, char *book_title)

{
	std::fstream file(name_reader, std::ios::app);
	if (file.is_open())
		{
			file << (book_title);
			file.close();
		}
	else
		{
			std::cout << "User not found,please add user"
				  << std::endl;
		}
}

void FileSystem::deleteBooks(char *name_reader, char *book_title)
{
	std::fstream file(name_reader);
	if (file.is_open())
		{
			char mass[80] = {};
			for (int i = 0; i < 80; i++)
				{
					file >> mass[i];
				}

			file.close();
			std::ofstream file2(name_reader);

			for (int i = 0; i < 80; i++)
				{
					if (mass[i] == book_title[i])
						{
							mass[i] = ' ';
						}
				}


			for (int i = 0; i < 80; i++)
				{

					file2 << mass[i];
				}

			file2.close();
		}
	else
		{
			std::cout << "User not found,please add user"
				  << std::endl;
		}
}


void FileSystem::AddToList(const char *name_reader)
{
	std::fstream file(this->List, std::ios::app);
	if (file.is_open())
		{


			file << (name_reader) << ' ';
			file.close();
		}
	else
		{

			std::cout << "ERROR!!!!" << std::endl;
		}
}


void FileSystem::DeleteFromList(const char *name_reader)
{
	std::fstream file(this->List);
	if (file.is_open())
		{
			char array[100] = {};
			for (int i = 0; i < 100; i++)

				{
					file >> array[i];
					for (int j = 0; j < 80; j++)
						{
							if (array[i]
							    == name_reader[j])
								{
									array[i] =
										' ';
								}
						}
				}
			file.close();
			std::ofstream file(this->List);
			for (int i = 0; i < 100; i++)
				std::cout << array[i] << std::endl;
			for (int i = 0; i < 100; i++)
				{
					file << array[i];
				}

			file.close();
		}
	else
		{

			std::cout << "ERROR!!!!" << std::endl;
		}
}


void FileSystem::show()
{
	std::ifstream file(this->List);
	char array[100][100] = {};
	for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
				{
					file >> array[i][j];
				}
		}
	/*
	for (int i = 0; i < 100; i++)
		{
			for (int j = 0; j < 100; j++)
				{
					if (array[i][j] != 0)
						{
							std::cout
								<< array[i][j];
							if (array[i][j] == ' ')
								{

									std::cout
										<< std::endl;
								}
						}
				}

			std::cout << std::endl;
		}
	*/
}
