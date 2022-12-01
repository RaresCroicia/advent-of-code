file1 = open('input.in', 'r')
lines = file1.readlines()

elves = []

sumAct = 0
sumMax = 0
for line in lines:
    if line.strip() == "":
        sumMax = max(sumMax, sumAct)
        elves.append(sumAct)
        sumAct = 0

    else:
        sumAct += int(line.strip())

elves.sort()
top3 = elves[-1] + elves[-2] + elves[-3]

print("Top 3 calories:", top3)
print("Top calories:", sumMax)