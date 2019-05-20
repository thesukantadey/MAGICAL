/****************************************************************************

COPYRIGHT NOTICE:

  The source code in this directory is provided free of
  charge to anyone who wants it.  It is in the public domain
  and therefore may be used by anybody for any purpose.  It
  is provided "AS IS" with no warranty of any kind
  whatsoever.  For further details see the README files in
  the wnlib parent directory.

AUTHOR:

  Will Naylor

****************************************************************************/
#include "wnlib.h"

#include "wnstr.h"



void wn_strncpy(register char *out,register char *in,register int n)
{
  register char ci;

  ci = *in;

  while((n > 0)&&(ci != '\0'))
  {
    *out = ci;

    ++out; ++in;
    --n;

    ci = *in;
  }

  *out = '\0';
}

