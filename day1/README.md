# DAY 1 - Calorie Counting

## First part

The solution to this part is realising how to slice the chunks. Personally, 
python was the best tool because of its easy syntax and already existing
functions.

```python
file.readlines() # To read each line
line.strip() # To get rid of newlines as characters
```

## Second part

My solution to this part was to just create a array containing every
elf's snacks calories and just sort this array and get the sum of
the last 3 of them.

```python
# this gets the last, second last and third last elements from the array
solution = elves[-1] + elves[-2] + elves[-3] 
```