#ifndef _GL4ES_GL4ES_GETENV_H_
#define _GL4ES_GL4ES_GETENV_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "attributes.h"

// for platforms that do not have setenv, use this instead
EXPORT int APIENTRY_GL4ES gl4es_setenv(const char *name, const char *value, int overwrite);
// for platforms that do not have getenv, use this instead
EXPORT char APIENTRY_GL4ES *gl4es_getenv(const char *name);

#endif // _GL4ES_GL4ES_GETENV_H_
