#include "main.h"

/**
 * append_text_to_file - Appendstext at-end of-file.
 * @filename: A pointer to name offile.
 * @text_content: The strng add to end of the file.
 * Return:function fails-filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int opn, writ, ln = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}
opn = open(filename, O_WRONLY | O_APPEND);
writ = write(opn, text_content, ln);
if (opn == -1 || writ == -1)
return (-1);
close(opn);
return (1);
}
