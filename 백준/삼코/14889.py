N = int(input())
S = [list(map(int, input().split())) for _ in range(N)]

player = [False]*N
player[0] = True  # 중복 제거
scoreDifference = float('inf')  # 무한대


def dfs(depth, start):
    global scoreDifference
    if depth == N//2:  # 몫 연산
        scoreDifference = min(scoreDifference, calc())
        if scoreDifference == 0:
            print(0)
            exit()
        return

    for i in range(start, N):
        if not player[i]:
            player[i] = True  # 선택
            dfs(depth + 1, i + 1)  # 재귀 호출
            player[i] = False  # 되돌리기


def calc():
    start_team = []
    link_team = []
    for i in range(N):
        if player[i]:
            start_team.append(i)
        else:
            link_team.append(i)

    start_score = 0
    link_score = 0
    for i in range(N//2-1):
        for j in range(i+1, N//2):
            start_score += S[start_team[i]][start_team[j]] + \
                S[start_team[j]][start_team[i]]
            link_score += S[link_team[i]][link_team[j]] + \
                S[link_team[j]][link_team[i]]

    return abs(start_score-link_score)  # 절댓값


dfs(1, 1)
print(scoreDifference)
