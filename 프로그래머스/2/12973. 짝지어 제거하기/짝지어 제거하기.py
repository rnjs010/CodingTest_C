from collections import deque
def solution(s):
    li = list(s)
    if len(s) % 2 == 1: return 0
    
    stack1 = deque(li[1:])
    stack2 = deque([li[0]])
    while len(stack1) != 0:
        if not stack2:
            stack2.append(stack1.popleft())
        first = stack2[-1]
        second = stack1.popleft()
        if first == second:
            stack2.pop()
        else:
            stack2.append(second)
    
    ans = 1 if len(stack1) == 0 and len(stack2) == 0 else 0
    return ans