// array.cpp by Bill Weinman [bw.org]
// updated 2020-07-07
#include <cstdio>

int main()
{
    int array[3];
    *array = 10;
    *(array + 1) = 20;
    *(array + 2) = 30;
    for(int i : array) {
        printf("%d ", i);
    }
    // puts("");
    return 0;
}
