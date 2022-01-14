n = int(input())
# 시간 배정 문제는 끝 시간을 기준으로 정렬
info = []
for _ in range(n):
    info.append(tuple(map(int,input().split())))

info.sort(key=lambda x:(x[1],x[0]))

last,ans = 0, 0
for s,e in info:
    if s>=last: # 이전 회의 끝시간 
        last = e
        ans += 1

print(ans)
