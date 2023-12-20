#!/usr/bin/python3
"""
Contains a function that returns the perimeter of the island
"""


def island_perimeter(grid):
    """ arguments: grid
    returns: param
    """
    if not grid or not grid[0]:
        return 0
    perim = 0
    rws = len(grid)
    cols = len(grid[0])

    for i in range(rws):
        for j in range(cols):
            if grid[i][j] == 1:
                perim += 4

                if j > 0 and grid[i][j - 1] == 1:
                    perim -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    perim -= 2
    return perim
