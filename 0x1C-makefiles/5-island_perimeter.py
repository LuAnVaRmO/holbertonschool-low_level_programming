#!/usr/bin/python3
""" island_perimeter module"""


def island_perimeter(grid):
    """ Return the perimeter of a grid"""
    h = len(grid) - 1
    w = len(grid[0]) - 1
    if h == 0 or w == 0:
        return 0
    per = 0
    for x in range(w + 1):
        for y in range(h + 1):
            if grid[y][x] == 1:
                if x == w or grid[y][x + 1] == 0:
                    per += 1
                if x == 0 or grid[y][x - 1] == 0:
                    per += 1
                if y == h or grid[y + 1][x] == 0:
                    per += 1
                if y == 0 or grid[y - 1][x] == 0:
                    per += 1
    return per
