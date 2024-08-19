import minesweeper as ms

M = ms.Minesweeper()
S = ms.Sentence({(2,3),(1,3)},0)
print(S.known_mines())
