#!/usr/bin/python3
"""
Module: 5-island_perimeter
Description: Technical interview preparation.
"""


def island_perimeter(grid):
    """Computes the perimeter of island
    described by grid.

    Args:
        grid (list of lists): a matrix containing 0s and 1s.
    Return:
        Perimeter (int): perimeter of island.
    """
    NumOfSquares = 0
    for i in range(0, len(grid), 1):
        for ii in range(0, len(grid[i]), 1):
            if grid[i][ii] == 1:
                NumOfSquares += 1
    Perimeter = (2 * NumOfSquares) + 2
    return Perimeter
