def min_paint(x, y, board):
    # 두 가지 체스판 패턴을 기준으로 다시 칠해야 하는 칸의 개수를 계산
    pattern1 = 0 # 왼쪽 위가 'W'인 경우
    pattern2 = 0 # 왼쪽 위가 'B'인 경우

    # 8x8 부분 보드를 순회
    for i in range(8):
        for j in range(8):
            # 짝수 칸은 왼쪽 위의 색과 동일
            # 홀수 칸은 왼쪽 위의 색과 반대
            expected1 = 'W' if (i + j) % 2 == 0 else 'B' # 현재 칸의 예상 색상 (왼쪽 위가 W인 체스판 기준)
            expected2 = 'B' if (i + j) % 2 == 0 else 'W' # 현재 칸의 예상 색상 (왼쪽 위가 B인 체스판 기준)

            # 실제 색상과 예상 색상을 비교
            if expected1 != board[x+i][y+j]:
                pattern += 1
            if expected2 != board[x+i][y+j]:
                pattern2 += 1
    
    # 두 가지 패턴 중 최소한의 수정 횟수를 반환
    return min(pattern1, pattern2)

def solution(N, M, board):
    min_changes = float('inf')

    # 8x8 보드가 시작되는 지점을 찾는 반복문
    for i in range(N-7):
        for j in range(M-7):
            changes = min_paint(i, j, board)
            min_changes = min(min_changes, changes)
    
    print(min_changes)

N, M = map(int, input().split())
board = [input().strip() for _ in range(N)]