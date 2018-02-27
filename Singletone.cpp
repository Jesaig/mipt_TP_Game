#include <iostream>

template<typename T>
class OnlyOne
{
public:
	T val;

	static OnlyOne& Instance()
	{
		static OnlyOne theSingleInstance;
		return theSingleInstance;
	}
private:
	OnlyOne() {};
	OnlyOne(const OnlyOne& root) = delete;
	OnlyOne& operator=(const OnlyOne&) = delete;
};

int main()
{
	OnlyOne<int>::Instance().val = 5;
	std::cout << OnlyOne<int>::Instance().val << std::endl;
	std::cout << OnlyOne<double>::Instance().val << std::endl;
  system("pause");
	return 0;
}
