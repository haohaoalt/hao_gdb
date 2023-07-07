#include <stdio.h>
void print()
{
    printf("hello world\n");
};
int main(int argc, const char * argv[])
{
    int i;
     for(i = 0; i < 5; i++) printf("%d\n",i);
     print();
     return 0;
}
