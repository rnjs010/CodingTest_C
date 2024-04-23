def solution(s):
    cnt, z_cnt = 0, 0
    while len(s) > 1:
        length = 0
        cnt += 1
        for i in s:
            if i == '0':
                z_cnt += 1
            else:
                length += 1
        
        s = str(format(length, 'b'))
    return [cnt, z_cnt]