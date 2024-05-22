"""
Tic Tac Toe Player
"""

import math

X = "X"
O = "O"
EMPTY = None


def initial_state():
    """
    Returns starting state of the board.
    """
    return [[EMPTY, EMPTY, EMPTY],
            [EMPTY, EMPTY, EMPTY],
            [EMPTY, EMPTY, EMPTY]]


def player(board):
    """
    Returns player who has the next turn on a board.
    """
    xcount = 0
    ocount = 0
    for row in board:
        for column in row:
            if column == X:
                xcount+=1
            if column == O:
                ocount+=1

    if xcount == ocount:
        return X
    if xcount > ocount:
        return O

def actions(board):
    """
    Returns set of all possible actions (i, j) available on the board.
    """
    all_action = set()
    for index,row in enumerate(board):
        for ind,column in enumerate(row):
            if column == EMPTY:
                all_action.add((index,ind))

    return all_action


def result(board, action):
    """
    Returns the board that results from making move (i, j) on the board.
    """
    if action not in actions(board):
        raise Exception("Sorry, invalid action")

    copy_board = board[:]
    i,j = action
    copy_board[i][j] = player(copy_board)
    return copy_board

def winner(board):
    """
    Returns the winner of the game, if there is one.
    """
    




    raise NotImplementedError


def terminal(board):
    """
    Returns True if game is over, False otherwise.
    """
    raise NotImplementedError


def utility(board):
    """
    Returns 1 if X has won the game, -1 if O has won, 0 otherwise.
    """
    raise NotImplementedError


def minimax(board):
    """
    Returns the optimal action for the current player on the board.
    """
    raise NotImplementedError
