
# N,M,K를 공백으로 구분해 입력받기
n, m, k= map(int, input().split())
# N개의 수를 공백으로 구분하여 입력받기
data=list(map(int, input().split()))

arrays.sort(reverse=True)
first=arrays[0]
second=arrays[1]

cnt=0
sum=0
for i in range(0,M):
    if(cnt==3):
        cnt=0
        sum+=second
    else:
        sum+=first
        cnt+=1

print(sum)
    