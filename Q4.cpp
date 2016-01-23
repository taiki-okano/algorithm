#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string str;
    std::cin >> str;
    std::cout << str.size() << std::endl;

    int start = 0, last = 2;

    int o_score, x_score;
    for(int i = start; i < last; ++i){
        if(str[i] == 'o'){
            o_score = i;
            break;
        }
        str[i] = 'o';
    }
    for(int i = last; i > start; --i){
        if(str[i] == 'o'){
            o_score = std::max(i, o_score);
            break;
        }
        str[i] = 'o';
    }

    for(int i = start; i < last; ++i){
        if(str[i] == 'x'){
            x_score = i;
            break;
        }
    }
    for(int i = last; i > start; --i){
        if(str[i] == 'x'){
            x_score = std::max(i, x_score);
            break;
        }
    }
    
    if(o_score > x_score) std::cout << 'o' << std::endl;
    else std::cout << 'x' << std::endl;

    return 0;
}