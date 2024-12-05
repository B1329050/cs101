#include <stdio.h>

int main(){
    int i = 8;
    if(i & (i-1)){
        print("faslse");
    }
    else {
        printf("true");
    }
    return 0;
}
