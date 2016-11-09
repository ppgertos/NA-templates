#pragma once
#include <utility>
#include <cstddef>
template<typename T>
class container_wrapper{
public:
    container_wrapper() = default;
    
    container_wrapper(T arg):cont{std::move(arg)}
    {
    }

    container_wrapper(const container_wrapper &) = default;
    container_wrapper(container_wrapper &&) = default;

    container_wrapper & operator=(const container_wrapper &) = default;
    container_wrapper & operator=(container_wrapper &&) = default;

    std::size_t size() const
    {
        return cont.size();
    }
    //void operator= (T a){
    //    this->cont = a;
    //}    
    T cont;
};

