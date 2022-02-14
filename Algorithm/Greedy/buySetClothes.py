# 옷을 같은 색 상하의 세트로 구매하면 더 저렴
# 최소 가격 찾기
def solution(color, prices):
    answer = 0
    top = {}
    bottom = {}
    colors = ["B", "W", "R", "Y", "G"]
    # 색깔 별로 몇 벌 있는지 count
    for c in color:
        top[c[0]] = top.get(c[0], 0)+1
        bottom[c[1]] = bottom.get(c[1], 0)+1

    for c in colors:
        if c in top and c in bottom:
            minClothe = min(top[c], bottom[c])
            top[c] -= minClothe
            bottom[c] -= minClothe
            answer += minClothe * prices[0]
    # 남아있는 옷들 비교
    left = 0
    for c in colors:
        if c in top:
            left += top[c]
    answer += min(left * prices[1], left*prices[0]*2)
    return answer


print(solution(["RG", "WR", "BW", "GG"], [2000, 6000]))
# -> WW, GG, RR + BB, GG (추가 세트로 구매, 옷은 남아도 괜찮음)
