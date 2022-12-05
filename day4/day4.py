def get_range(r):
    n = tuple(int(c) for c in r.split("-"))
    return range(n[0], n[1] + 1)

subset_pairs, overlaps = 0, 0

with open("input.in") as f:
    for line in f:
        ar, br = line.split(",")
        a, b = get_range(ar), get_range(br)

        if set(a).issubset(set(b)) or set(b).issubset(set(a)):
            subset_pairs += 1

        if set(a).intersection(set(b)) != set():
            overlaps += 1

print("part 1:", subset_pairs)
print("part 2:", overlaps)