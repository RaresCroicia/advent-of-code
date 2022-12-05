# DAY 4 - Camp Cleanup

## First part

The solution to this part was just to see if the one of the
lists was a subset of the other list. To solve this, I transformed
the ranges into sets and used the issubset method. Sets being implemented
nicely in python made me use this language today!

```python
    if set(a).issubset(set(b)) or set(b).issubset(set(a)):
        subset_pairs += 1
```

## Second part

Well, since at the first part we searched for subsets, here
we just search for intersections, so I used the intersection
method for sets.

```python
    if set(a).intersection(set(b)) != set(): 
        overlaps += 1
```