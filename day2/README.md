# DAY 2 - Rock Paper Scissors

## First part

The solution to this part is just playing the game
each time. I used D to solve this one because of
the associative arrays and because it's also a kind of
new language and its syntax is nice.

```c
int[char] points; // associative array where I can assign to each letter a points value
points['A'] = points['X'] = 1;
```

## Second part

The solution to this part was just to reverse engineer who
should be the player 2 in order to achieve the result. I also
used associative arrays in order to see for every result who should
be the second player.

```c
char[char] winner;
winner['A'] = 'Y';
winner['B'] = 'Z';
winner['C'] = 'X';

char[char] loser;
loser['A'] = 'Z';
loser['B'] = 'X';
loser['C'] = 'Y';

char[char] tie;
tie['A'] = 'X';
tie['B'] = 'Y';
tie['C'] = 'Z';
```