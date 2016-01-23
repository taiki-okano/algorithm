#include <iostream>
#include <string>

bool isPalindrome(std::string str){
    int len = str.size();
    --len;
    for(int i = 0; i < len; ++i){
        if(str[i] != str[len - i]) return false;
    }
    return true;
}

int main(){
    bool is_palindrome[10001];
    for(int i = 1; i <= 10000; ++i){
        is_palindrome[i] = isPalindrome(std::to_string(i));
        //if(is_palindrome[i]) std::cout << i << std::endl;
    }

    int n;

    std::cin >> n;

    for(int i = 0; ; ++i){
        if(n - i >= 0 && is_palindrome[n - i]){
            std::cout << n - i << std::endl;
            break;
        }
        
        if(n + i <= 10000 && is_palindrome[n + i]){
            std::cout << n + i << std::endl;
            break;
        }
    }

}
