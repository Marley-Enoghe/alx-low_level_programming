/**
 * clear_bit -this sets the value of a given bit to 0
 * @n:this is a  pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: return 1 for success,or  -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int joe = 1;

	if (index > 63)
		return (-1);

	joe <<= index;
	joe = ~joe;
	*n &= joe;
	return (1);
}
