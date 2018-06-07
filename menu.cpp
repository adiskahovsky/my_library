#include "filesystem.hpp"
#include "menu.hpp"

void Menu::show()
{

	std::cout << "1.Readers and book of the readers" << std::endl;
	std::cout << "2.Take book/return book" << std::endl;
	std::cout << "3.Add/delete readers" << std::endl;
	std::cout << "4.Main menu" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Input nubmer:" << std::endl;
}

void Menu::Introduce()
{
	int value;
	char name[80] = {};
	char book_title[80] = {};
	char name2[80] = {};
	FileSystem obj;
	std::cin >> value;
	switch (value)
		{
		case 1:

			// obj.addBooks();
			obj.show();

			break;


		case 2:
			std::cout << "1.Take book" << std::endl;
			std::cout << "2.Return book" << std::endl;
			std::cin >> value;
			switch (value)
				{
				case 1:
					std::cout
						<< "Input User name and book title: "
						<< std::endl;

					std::cin >> name2 >> book_title;
					for (int i = 0; i < 80; i++)
						{
							name2[i] = name2[i];
							if (name2[i] == 0)
								{
									name2[i] =
										'.';
									name2[i
									      + 1] =
										't';
									name2[i
									      + 2] =
										'x';
									name2[i
									      + 3] =
										't';
									break;
								}
						}
					obj.addBooks(name2, book_title);
					break;

				case 2:
					std::cout
						<< "Input User name and book title: "
						<< std::endl;
					std::cin >> name2 >> book_title;
					for (int i = 0; i < 80; i++)

						{
							name2[i] = name2[i];
							if (name2[i] == 0)
								{
									name2[i] =
										'.';
									name2[i
									      + 1] =
										't';
									name2[i
									      + 2] =
										'x';
									name2[i
									      + 3] =
										't';
									break;
								}
						}
					obj.deleteBooks(name2, book_title);
					break;
				}

			break;
		case 3:

			std::cout << "1.Add Reader" << std::endl;
			std::cout << "2.Delete Reader" << std::endl;
			std::cin >> value;

			switch (value)
				{
				case 1:

					std::cout << "Input name:" << std::endl;

					std::cin >> name;
					obj.AddToList(name);
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


					obj.addReader(name);

					break;
				case 2:

					std::cout << "Input name:" << std::endl;

					std::cin >> name;
					obj.DeleteFromList(name);
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
					obj.deleteReader(name);
					break;
				}
		case 4:
			Menu obj;
			while (1)
				{
					obj.show();
					obj.Introduce();
				}

			break;
		}
}
