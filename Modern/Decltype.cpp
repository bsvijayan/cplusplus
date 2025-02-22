template<typename T1,typename T2>
auto add(T1 a,T2 b)->decltype(a+b)
{
   return a+b;
}
template<typename T1,typename T2>
T2 sum(T1 a,T2 b)
{
   return a+b;
}
int main()
{

   std::cout<<add(1,12.1)<<"\n";
   std::cout<<add(11.1,1)<<"\n";
   
   std::cout<<sum(1,12.1)<<"\n";
   std::cout<<sum(11.1,1)<<"\n";
}
