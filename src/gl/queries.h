#ifndef _GL4ES_QUERIES_H_
#define _GL4ES_QUERIES_H_

#include "khash.h"
#include "gles.h"

EXPORT void APIENTRY_GL4ES gl4es_glBeginQuery(GLenum target, GLuint id);
EXPORT void APIENTRY_GL4ES gl4es_glEndQuery(GLenum target);
EXPORT void APIENTRY_GL4ES gl4es_glGenQueries(GLsizei n, GLuint * ids);
EXPORT void APIENTRY_GL4ES gl4es_glDeleteQueries(GLsizei n, const GLuint* ids);
EXPORT GLboolean APIENTRY_GL4ES gl4es_glIsQuery(GLuint id);
EXPORT void APIENTRY_GL4ES gl4es_glGetQueryiv(GLenum target, GLenum pname, GLint* params);
EXPORT void APIENTRY_GL4ES gl4es_glGetQueryObjectiv(GLuint id, GLenum pname, GLint* params);
EXPORT void APIENTRY_GL4ES gl4es_glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint* params);
EXPORT void APIENTRY_GL4ES gl4es_glQueryCounter(GLuint id, GLenum target);
EXPORT void APIENTRY_GL4ES gl4es_glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params);
EXPORT void APIENTRY_GL4ES gl4es_glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params);

unsigned long long get_clock();

#endif // _GL4ES_QUERIES_H_
