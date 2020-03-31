#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <string>

using namespace std;

class Singleton {
    private:
        static string message;

        Singleton() = default;
        ~Singleton() = default;
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;

    public:
        static Singleton& instance();

        static void saveMessage(string);

        static string getMessage();
};

#endif