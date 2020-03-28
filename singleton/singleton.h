#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
    private:
        Singleton()= default;
        ~Singleton() = default;
        Singleton(const Singleton&)= delete;
        Singleton& operator=(const Singleton&)= delete;

    public:
        static Singleton& instance();
};

#endif