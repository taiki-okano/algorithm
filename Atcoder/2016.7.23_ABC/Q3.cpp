#include <cstdio>
#include <cstring>
#include <cstdlib>

int main(){
    int N, K;
    bool is_ng_num[10] = {false};
    scanf("%d%d", &N, &K);
    for(int i = 0; i < K; ++i){
        int tmp;
        scanf("%d", &tmp);
        is_ng_num[tmp] = true;
    }
    do{
        char str[5];
        bool flag = true;
        sprintf(str, "%d\n", N);
        for(int i = 0; i < strlen(str); ++i){
            if(is_ng_num[str[i] - '0']){
                flag = false;
                break;
            }
        }
        if(flag){
            printf("%d\n", N);
            break;
        }
    }while(++N);

    return 0;
}