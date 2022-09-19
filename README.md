# Usage

This should work in a Linux environment

```
g++ main.cpp -o fizz_buzz
# Should print 7
./fizz_buzz 5 || echo $?
```

# Questions

* Write a few different implementations of the function fizz_buzz().
* Try to avoid using if..else in the code.
* Could you write 5 different implementations? May be 7 implementations?
* What is the performnace of the best implementation?
* What is the performnace of the worst implementation?

## Bonus.

* Write a simple implementation of an asycnhronous call to fizz_buzz().
* What if the logic changes to 
```
static int fiz_buzz(int value)
{
    if (value == 7)
        return 5;
    if (value == 5)
        return 7;
    return 0;
}
```
What implementations could be salvaged and how?


