#include <iostream> 
#include <memory> 
#include <vector> 
 
int main()  
{ 
    std::unique_ptr<std::vector<int>> vec_ptr = std::make_unique<std::vector<int>>(); 
 
    vec_ptr->push_back(1); 
    vec_ptr->push_back(2); 
    vec_ptr->push_back(3); 
 
    for (const int& val : *vec_ptr)  
    { 
        std::cout << val << std::endl; 
    } 
 
    return 0;  
} 
