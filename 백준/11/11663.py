import sys
import bisect

input = sys.stdin.readline

n, m = map(int, input().split())
points = list(map(int, input().split()))
points.sort()

for _ in range(m):
    L, R = map(int, input().split())
    left = bisect.bisect_left(points, L)
    right = bisect.bisect_right(points, R)
    print(right - left)
