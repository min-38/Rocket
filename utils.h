#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <thread>
using namespace std;

template <typename T, typename... Args>

// 스레드를 생성하고 실행할 함수
thread createThread(T* obj, void (T::*func)(Args...), Args... args) {
    // 스레드 생성 및 실행
    thread t(func, obj, args...);
    return t;
}

#endif // UTILS_H