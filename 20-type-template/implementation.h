#pragma once
#include <utility>
#include <cstddef>
#include <boost/optional.hpp>
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
    T cont;
};
template<typename T>
class container_wrapper<boost::optional<T>> {
public:
    container_wrapper() = default;
    
    container_wrapper(boost::optional<T> arg):cont{std::move(arg)}
    {
    }

    container_wrapper(const container_wrapper &) = default;
    container_wrapper(container_wrapper &&) = default;

    container_wrapper & operator=(const container_wrapper &) = default;
    container_wrapper & operator=(container_wrapper &&) = default;

    std::size_t size() const
    {
        return cont ? 1 : 0;
    }

    boost::optional<T> cont;
};
