#include <typeinfo>
int main()
{
    auto x=10;
    auto y=10.33;
    auto z="TESTING";
    std::cout<<typeid(x).name()<<"\n";
    std::cout<<typeid(y).name()<<"\n";
    std::cout<<typeid(z).name()<<"\n";
}
