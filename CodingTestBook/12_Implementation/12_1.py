N = input()
lst = [int(i) for i in N]  # 문자열을 숫자 리스트로

half = int(len(lst) / 2)
if sum(lst[0:half]) == sum(lst[half:]):
    print("LUCKY")
else:
    print("READY")
