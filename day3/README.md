# DAY 3 - Rucksack Reorganization

## First part

The solution to this part was to find the common letter between
the two halves. I used C++ to solve this so I could use the string
manipulation from the string library, since it's an easy one to use.
I also made an array used to find for each letter the priority.

```cpp
    char prios[53]; // key - priority && value - letter
```

## Second part

While I used the worst solution to find the common letter, which runs
in O(N^2) where N = (length of string) / 2, I couldn't use it to search 
the common letter for 3 strings, since it could go on the worst case on Theta(N^3),
 so I used a frequency array method which shows me if a letter is in every string using O(N),
where N is the max length of every string.

```c
    // every array takes only 0/1 as values
    int occurences1[53] = {0}; // letter appears in line 1
    int occurences2[53] = {0}; // letter appears in line 2
    int occurences3[53] = {0}; // letter appears in line 3
```