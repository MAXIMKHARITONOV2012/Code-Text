#include <vector>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>

int main()
{
	setlocale(LC_ALL, "");
	std::cout << std::endl << "Введите сообщение (Программа  понимает только английский язык): " << std::endl;
	std::string text;
	std::getline(std::cin, text);
	std::cout << "Шифровать(1) или Дешифровать(2)?" << std::endl;

	int ans;
	std::cin >> ans;

	if (ans == 1)
	{
		for (int i = 0; i < text.size(); i++)
		{
			if (text[i] >= 32 && text[i] <= 126) {
				text[i] = text[i] + i;
			}
			else {
				std::cout << "Программа не может обработать такие символы";
				std::this_thread::sleep_for(std::chrono::seconds(10));
				return 0;
			}
		}
		std::cout << "Зашифрованная версия: " << std::endl;
		std::cout << text << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(100));
	}
	else
	{
		if (ans == 2)
		{
			for (int i = 0; i < text.size(); i++)
			{
				if (text[i] >= 32 && text[i] <= 126) {

					text[i] = text[i] - i;
				}
				else
				{
					std::cout << "Программа не может обработать такие символы";
					std::this_thread::sleep_for(std::chrono::seconds(10));
					return 0;

				}
			}
			std::cout << "Дешифрованная версия: " << std::endl;
			std::cout << text << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(100));
		}
		else {
			std::cout << "error";
		}

	}



}