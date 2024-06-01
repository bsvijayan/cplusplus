class myClass
{
public:
	int i;
	explicit myClass(int i)
	{
		this->i = i;
		std::cout << "Implicit Constructor";
	}
};
int main()
{
	myClass m1 = 20;
	
}
