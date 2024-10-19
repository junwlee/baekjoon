import sys

def process_input():
    # print("입력을 마치려면 Ctrl+D (유닉스) 또는 Ctrl+Z (Windows)를 누르세요.")
    
    # sys.stdin.read()로 전체 입력 받기 (종료 신호까지)
    text = sys.stdin.read()
    
    # 개행이 포함된 텍스트 반환
    return text

result = process_input()
print(result)