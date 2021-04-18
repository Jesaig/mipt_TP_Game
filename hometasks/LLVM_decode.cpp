#include <iostream>

int LLVM_query(int value)
{
	if (value == 1)
	{
		return 1;
	}
	else
	{
		if (value > 1)
		{
			if (value == 3)
			{
				return 3;
			}
			else
			{
				if (value > 3)
				{
					if (value == 4)
					{
						return 4;
					}
					else
					{
						return -1;
					}
				}
				else
				{
					if (value == 2)
					{
						return 2;
					}
					else
					{
						return -1;
					}
				}
			}
		}
		else
		{
			if (value == 0)
			{
				return 0;
			}
			else
			{
				return -1;
			}
		}
	}
}

int main()
{
	int value = 0;
	std::cin >> value;
	std::cout << LLVM_query(value) << std::endl;
	system("pause");

	return 0;
}
