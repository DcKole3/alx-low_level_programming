/**
 * leet - encodes a string into 1337.
 * @c: string
 * Return: changed char values
 */
char *leet(char *c)
{
char alphaleet[] = "a4A4e3E3o0O0t7T7l1L1";
int i;
int j;
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; alphaleet[j] != '\0'; j++)
{
if (c[i] == alphaleet[j])
{
c[i] = alphaleet[j + 1];
break;
}
}
}
return (c);
}
