def solution(s):
    ans = ''
    li = list(map(int, s.split()))
    li.sort()
    ans += (str(li[0]) + ' ' + str(li[-1]))
    return ans