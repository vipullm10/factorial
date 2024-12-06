#include <iostream>
#include <vector>


#define MAX_POSSIBLE_NUMBER 10


std::vector<uint64_t> getFibonacci(uint64_t num){
    std::vector<uint64_t> result;
    uint64_t currentProduct = 1;
    while(num>0){
        if(currentProduct*num >= MAX_POSSIBLE_NUMBER){
            result.push_back(currentProduct);
            currentProduct = 1;
        }
        else{
            currentProduct = currentProduct * num;
            num = num - 1;
        }
    }
    std::cout<<"num : "<<num<<std::endl;
    result.push_back(currentProduct);
    return result;
}



int main(int argc , char* argv[]){
    uint64_t num = 10;//number whose fibonacci is to be calculated
    std::vector<uint64_t> vec = getFibonacci(num);
    for(uint64_t num : vec){
        std::cout<<num<<" "<<std::endl;
    }
}