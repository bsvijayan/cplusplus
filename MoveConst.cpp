#include<iostream>
#include<vector>
#include<map>
class Single
{
	public:
		char* str;
		int i;
	Single() noexcept {
		i = 0;
		str = new char[10];
		strcpy_s(str,5, "TEST");
		std::cout << "Default constr" << "\n";
	};
	Single(const Single& s) noexcept
	{
		if (this != &s)
		{
			this->i = s.i;
			this->str = new char[10];
			strcpy_s(this->str, sizeof(s.str), s.str);
			std::cout << "Copy constr" << "\n";
		}
	}
	Single & operator=(const Single& s) noexcept
	{
		if (this != &s)
		{
			delete(this->str);
			this->str = new char(sizeof(s.str));
			this->i = s.i;
			std::cout << "Assignment Operator " << "\n";
		}
		return *this;
	}
	//Move constrctor
	Single(Single&& s):str(s.str) 
	{
		this->i = s.i;
		//this->str = s.str;
		
		//Remove existing copy
		s.i = 0;
		s.str = NULL;
		std::cout << "Move Constructor " << "\n";
	}
	//Move assignment
	Single& operator=(Single&& S) noexcept
	{
		
		if (this != &S)
		{
			//strcpy_s(this->str, sizeof(S.str), S.str);
			this->i = S.i;
			this->str = S.str;
			//Remove existing copy
			S.i = 0;
			S.str = NULL;
		}
		return *this;
	}
	~Single()
	{ 
		std::cout << "Destru"<<"\n";
	}
	bool operator<(const Single& s1)
	{
		return true;
	}
};
bool operator<(const Single& s1, const Single& s2)
{
	return true;
}
int main()
{
	Single s1;
	std::vector<Single>vecSingle;
	std::map<Single, int>mapSingle;
	std::cout << "Before MAP"<<"\n";
	mapSingle.insert(std::pair<Single, int>(s1, 19));
	std::cout << "After MAP"<<"\n";
	std::cout << "Before Vec Insert" << "\n";
	vecSingle.emplace_back(s1);
	std::cout << "After Vec Insert" << "\n";
	vecSingle.emplace_back(s1);
	std::cout << "After Vec Insert" << "\n";

	for (auto x : vecSingle)
	{
		std::cout << x.str;
	}
	
}