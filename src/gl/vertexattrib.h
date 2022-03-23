#ifndef _GL4ES_VERTEXATTRIB_H_
#define _GL4ES_VERTEXATTRIB_H_

#include "gles.h"

// actual definition of vertexattrib_t is in buffer.h, as they are part of VAO...

EXPORT void APIENTRY_GL4ES gl4es_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer);
EXPORT void APIENTRY_GL4ES gl4es_glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
EXPORT void APIENTRY_GL4ES gl4es_glEnableVertexAttribArray(GLuint index);
EXPORT void APIENTRY_GL4ES gl4es_glDisableVertexAttribArray(GLuint index);

// other variant are defined in wrap...
EXPORT void APIENTRY_GL4ES gl4es_glVertexAttrib4f(GLuint index, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
EXPORT void APIENTRY_GL4ES gl4es_glVertexAttrib4fv(GLuint index, const GLfloat *v);


EXPORT void APIENTRY_GL4ES gl4es_glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params);
EXPORT void APIENTRY_GL4ES gl4es_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params);
EXPORT void APIENTRY_GL4ES gl4es_glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params);
EXPORT void APIENTRY_GL4ES gl4es_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid **pointer);

// GL_ARB_instanced_arrays
EXPORT void APIENTRY_GL4ES gl4es_glVertexAttribDivisor(GLuint index, GLuint divisor);

#endif // _GL4ES_VERTEXATTRIB_H_
