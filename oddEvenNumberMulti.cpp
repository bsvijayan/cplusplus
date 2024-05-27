/*
	Print odd even numbers using Multi-threading
*/
#include <array>
#include <future>
#include <iostream>
#include <thread>
#include<condition_variable>
#include<mutex>
using namespace std;

std::mutex mu;
std::condition_variable cond;
volatile bool threadState = false;

void printEven()
{
		for (int i = 0; i < 100; i+=2)
		{
			std::unique_lock<std::mutex>loc(mu);
			cond.wait(loc, [] { return !threadState; });
			if (i % 2 == 0)
				std::cout << "Even number " << i << "\n";
			threadState = true;
			loc.unlock();
			
			cond.notify_one();

		}

	
}
void printOdd()
{
		for (int i = 1; i < 100; i+=2)
		{
			std::unique_lock<std::mutex>loc(mu);
			cond.wait(loc, [] { return threadState; });
			if (i % 2 != 0)
				std::cout << "Odd number " << i << "\n";
			threadState = false;
			loc.unlock();
			cond.notify_one();

		}

	
}
int main()
{
	std::thread evenThread(printEven);
	std::thread oddThread(printOdd);
	evenThread.join();
	oddThread.join();

}
