#include <stdlib.h>
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
		
	free(grid);
}
