def isGroupWord(word):
    alphabet = [False] * 26
    prev = ''

    for c in word:
        if (c != prev):
            if (alphabet[ord(c) - ord('a')]):
                return False
            alphabet[ord(c) - ord('a')] = True
        prev = c
    return True

def main():
    N = int(input())
    groupWordCount = 0
    i = 0
    while(i < N):
        word = input()
        if (isGroupWord(word)):
            groupWordCount += 1
        i += 1

    print(groupWordCount)

main()