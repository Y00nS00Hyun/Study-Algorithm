import sys
import bisect          # 이분 탐색 관련 함수(bisect_left, bisect_right)를 제공하는 모듈

input = sys.stdin.readline   # 빠른 입력을 위해 sys.stdin.readline 사용

# n : 점의 개수, m : 쿼리(구간)의 개수
n, m = map(int, input().split())

# n개의 점 좌표 입력
points = list(map(int, input().split()))

# 이분 탐색을 하기 위해 점 배열을 오름차순 정렬
points.sort()

# m개의 구간 [L, R] 에 대해 각각 처리
for _ in range(m):
    L, R = map(int, input().split())   # 구간의 왼쪽 끝 L, 오른쪽 끝 R

    # left = points에서 "L 이상(>= L)" 이 처음 나오는 위치(인덱스)
    # -> 구간 [L, R] 안에 들어가는 첫 번째 점의 위치
    left = bisect.bisect_left(points, L)

    # right = points에서 "R 초과(> R)" 가 처음 나오는 위치(인덱스)
    # -> 구간 [L, R] 안에 들어가는 마지막 점의 '다음' 위치
    right = bisect.bisect_right(points, R)

    # [left, right) 구간에 있는 점들이 모두 L 이상, R 이하
    # 따라서 그 개수는 (right - left)
    print(right - left)
