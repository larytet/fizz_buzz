#include <cstdlib>

static int fiz_buzz(int value)
{
    if (value == 7)
        return 5;

    return 7;
}

int main(int argc, char **argv)
{
    auto res = fiz_buzz(atoi(argv[1]));

    return res;
}