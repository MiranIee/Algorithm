N=1260
cnt=0

coins=[500,100,50,10]

for coin in coins:
    cnt+=N // coin # //: 나누기 연산 이후 소수점 이하를 버리고 정수만 구함
    N%=coin

print(cnt)