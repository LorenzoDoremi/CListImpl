#include <string>
#include <iostream>
#include <thread>
#include <mutex>
int TIME = 0;
std::mutex mutex;
// The function we want to execute on the new thread.
void task1(std::string name)
{   
    while(TIME < 10) {
    mutex.lock();
    TIME++;
    std::cout << name  << " -> " << TIME << '\n';
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    mutex.unlock();
    }
}

int main()
{
    // costruisco e avvio due thread
    std::thread t1(task1, "thread1");
    std::thread t2(task1, "thread2");
    // eseguo qualcosa di asincrono (non avverà dopo che han finito!)
    std::cout << "ASINCRONO HEHE" << '\n';
    // richiamo i thread prima di finire
    t1.join();
    t2.join();

    std::cout << TIME << '\n';
 
    
    return 0;
}