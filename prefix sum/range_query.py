nums = [1,2,3,4]
prefix = [0]

for n in nums:
    prefix.append(prefix[-1] + n)

l, r = 1, 3
print(prefix[r+1] - prefix[l])
