coins = [1,2,5]
amount = 11
count = 0

for coin in reversed(coins):
    count += amount // coin
    amount %= coin

print(count)
