/**
 * _isalpha - check for alphabet character return 1 if c is lowercase or uppercase
 * @c: char data type
 * Return: return 1 if its aplhabet
 */


int _isalpha(int c)
{
if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
}
