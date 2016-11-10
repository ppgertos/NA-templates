#pragma once
#include <algorithm>
    template <typename T>
    void vector_erase(T & container,const typename T::value_type & pattern){
        container.erase(std::remove(
          container.begin(),
          container.end(),
          pattern),container.end());    
    }
