#include "gl4es_getenv.h"

/*
	Taken from SDL_getenv.c (https://github.com/libsdl-org/SDL/blob/25203222f55f8fc3a270620609ecfee2e151d76b/src/stdlib/SDL_getenv.c)
*/

static char **gl4es_env = (char **)0;

EXPORT int APIENTRY_GL4ES gl4es_setenv(const char *name, const char *value, int overwrite)
{
	int added;
	size_t len, i;
	char **new_env;
	char *new_variable;

	/* Input validation */
	if (!name || *name == '\0' || strchr(name, '=') != NULL || !value) {
		return (-1);
	}

	/* See if it already exists */
	if (!overwrite && gl4es_getenv(name)) {
		return 0;
	}

	/* Allocate memory for the variable */
	len = strlen(name) + strlen(value) + 2;
	new_variable = (char *)malloc(len);
	if (!new_variable) {
		return (-1);
	}

	snprintf(new_variable, len, "%s=%s", name, value);
	value = new_variable + strlen(name) + 1;
	name = new_variable;

	/* Actually put it into the environment */
	added = 0;
	i = 0;
	if (gl4es_env) {
		/* Check to see if it's already there... */
		len = (value - name);
		for (; gl4es_env[i]; ++i) {
			if (strncmp(gl4es_env[i], name, len) == 0) {
				break;
			}
		}
		/* If we found it, just replace the entry */
		if (gl4es_env[i]) {
			free(gl4es_env[i]);
			gl4es_env[i] = new_variable;
			added = 1;
		}
	}

	/* Didn't find it in the environment, expand and add */
	if (!added) {
		new_env = realloc(gl4es_env, (i + 2) * sizeof(char *));
		if (new_env) {
			gl4es_env = new_env;
			gl4es_env[i++] = new_variable;
			gl4es_env[i++] = (char *)0;
			added = 1;
		}
		else {
			free(new_variable);
		}
	}
	return (added ? 0 : -1);
}

NonAliasExportDecl(int, gl4es_setenv, (const char *name, const char *value, int overwrite));

EXPORT char APIENTRY_GL4ES *gl4es_getenv(const char *name)
{
	size_t len, i;
	char *value;

	/* Input validation */
	if (!name || *name == '\0') {
		return NULL;
	}

	value = (char *)0;
	if (gl4es_env) {
		len = strlen(name);
		for (i = 0; gl4es_env[i] && !value; ++i) {
			if ((strncmp(gl4es_env[i], name, len) == 0) &&
				(gl4es_env[i][len] == '=')) {
				value = &gl4es_env[i][len + 1];
			}
		}
	}
	return value;
}

NonAliasExportDecl(char *, gl4es_getenv, (const char *name));