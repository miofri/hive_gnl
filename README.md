# get_next_line
Description:<br>
<i>get_next_line is a function that returns a line read from a file descriptor.
What we call a “line” is a succession of characters that end with ’\n’ (ascii code
0x0a) or with End Of File (EOF).

The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively.

Calling this function get_next_line in a loop will then allow us to read the text
available on a file descriptor one line at a time until the end of the text, no matter
the size of either the text or one of its lines.</i>

Succeeded with 122/100 points.
