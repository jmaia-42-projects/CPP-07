#include <cstdlib>
#include <iostream>
#include <Array.hpp>

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		int	tmpp;

		tmpp = tmp[0];
		tmp[0] = tmp[1];
		tmp[1] = tmpp;
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << " ";
		std::cout << std::endl;
		for (unsigned int i = 0; i < tmp.size(); i++)
			std::cout << tmp[i] << " ";
		std::cout << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	{
		Array<std::string>	strs;
		std::cout << strs.size() << std::endl;
		try
		{
			strs[0] = std::string("hello");
		}
		catch (std::exception const &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
    return 0;
}
