def is_check(board, x, y):
    for i in range(10):
        if board[x][i] != 0 and i != y: return True
        if board[i][y] != 0 and i != x: return True

    for i in range(10):
        for j in range(10):
            if abs(i - x) == abs(j - y) and board[i][j] != 0 and (i != x and j != y): return True
    return False

def z_y(board, y):
    if y == 10:
        for i in range(0, 10):
            for j in range(0, 10):
                if board[i][j] == 1:
                    print(j, end="")
        print("")
    
    else:
        for x in range(10):
            if not is_check(board, y, x):
                board[y][x] = 1
                z_y(board, y + 1)
                board[y][x] = 0

board = [[], [], [], [], [], [], [], [], [], []]

for i in board:
    for j in range(10):
        i.append(0)

z_y(board, 0)