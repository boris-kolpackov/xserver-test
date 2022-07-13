#include <stdio.h>
#include <X11/Xlib.h>

int main ()
{
    Display *display = XOpenDisplay (NULL);

    if (display == NULL)
    {
      fprintf (stderr, "no X\n");
      return 1;
    }

    fprintf (stderr, "yes X\n");
    return 0;
}
