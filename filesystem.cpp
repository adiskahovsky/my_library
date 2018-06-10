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
			std::cout<<"HelloWorld"<<std::endl;
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
			//for (int i = 0; i < 100; i++)
				//std::cout << array[i] << std::endl;
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
	std::fstream file(this->List);
	char array[100] = {};
	char name[100]={};
	char names_of_books[100] = {};
	char books[100]={};
	/*
	for(int i=0;i<100;i++)
	{	
		file>>array[i];

	}
	*/
	//file.seekp(100, std::ios::beg);
	file.getline(array, 100);
	file.close();
	/*file.close();
	for (int i = 0; i < 100; i++)
	{	
		
		names_of_books[i] = array[i];
		if (array[i] == ' ')
			{
				names_of_books[i] =
					'.';
				names_of_books[i
					 + 1] =
					't';
				names_of_books[i
					 + 2] =
					'x';
				names_of_books[i
					 + 3] =
					't';
				names_of_books[i
					+4] =
					' ';
				break;
				
				
			}
	}
	*/
	
	
	
	
	for(int i=0;array[i]!=' ';i++)
		name[i] = array[i];
	
	
		for (int i = 0; i < 80; i++)
		{
			name[i] = name[i];
			if (name[i] == 0)
				{
					name[i] =
						'.';
					name[i
						 + 1] =
						't';
					name[i
						 + 2] =
						'x';
					name[i
						 + 3] =
						't';
					break;
				}
		}
		file.open(name);
		file.getline(books,100);
	
	
		
	
	
	for(int i=0;i<80;i++) std::cout<<array[i];
	std::cout<<std::endl;
	//for(int i=0;i<80;i++) std::cout<<name[i];
	
	
	/*	
	file.open(name);
	
	
	for(int i=0;i<100;i++)
	{	
		if(array[i]!=' ')
		std::cout<<array[i];
		else std::cout<<std::endl;
	}
		
	
		
		
	

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
