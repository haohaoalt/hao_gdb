/*
 * @Author: zhanghao
 * @Date: 2023-08-10 21:10:44
 * @LastEditTime: 2023-08-10 22:21:42
 * @FilePath: /Dev/hao_gdb/multi_thread/multi_thread.cpp
 * @Description: 
 */
#include <iostream>
#include <pthread.h>

void* threadFunction(void* arg)
{
    std::cout << "Thread ID: " << pthread_self() << std::endl;
    return nullptr;
}

int main()
{
    pthread_t thread1, thread2;

    pthread_create(&thread1, nullptr, threadFunction, nullptr);
    pthread_create(&thread2, nullptr, threadFunction, nullptr);

    pthread_join(thread1, nullptr);
    pthread_join(thread2, nullptr);

    return 0;
}