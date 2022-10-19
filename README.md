# Usage.

This should work in a Linux environment

```
g++ main.cpp -o fizz_buzz
# Should print 7
./fizz_buzz 5 || echo $?
# Should print 5
./fizz_buzz 7 || echo $?
```

# Questions.

* Write a few different implementations of the function fizz_buzz() in the main.cpp.
* Can you avoid using if..else in the code?
* Could you write 5 different implementations of the code? May be 7 implementations?
* What is the performnace of the best implementation?
* What is the performnace of the worst implementation?
* https://godbolt.org/ ?

## Bonus questions.

* What implementations could be salvaged and how if the logic changes to 
```
static int fizz_buzz(int value)
{
    if (value == 7)
        return 5;
    if (value == 5)
        return 7;
    return 0;
}
```

* Explain this 
```
fizz_buzz:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        cmp     DWORD PTR [rbp-4], 7
        jne     .L2
        mov     eax, 5
        jmp     .L3
.L2:
        mov     eax, 7
.L3:
        pop     rbp
        ret
```        
* Write a simple implementation of an asycnhronous call to fizz_buzz(). Use of STL is Ok.


## Java

What does this call do 
```
FileMapping = CreateFileMapping(File, NULL, PAGE_READWRITE, 0, 0, NULL);
```

## Windows
What is `IMAGE_FILE_HEADER` ?


## CSharp

What does this code do
```
CollectionsMarshall.AsSpan() ?
```


