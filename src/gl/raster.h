#ifndef _GL4ES_RASTER_H_
#define _GL4ES_RASTER_H_

#include "gles.h"
#include "list.h"

#ifndef GL_STENCIL_INDEX
#define GL_STENCIL_INDEX			0x1901
#endif // GL_STENCIL_INDEX
#ifndef GL_DEPTH_COMPONENT
#define GL_DEPTH_COMPONENT			0x1902
#endif // GL_DEPTH_COMPONENT

typedef struct {
    GLfloat x;
    GLfloat y;
    GLfloat z;
} rasterpos_t;

typedef struct {
    GLint x;
    GLint y;
    GLsizei width;
    GLsizei height;
} viewport_t;

int raster_need_transform();

EXPORT void APIENTRY_GL4ES gl4es_glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig,
                     GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
EXPORT void APIENTRY_GL4ES gl4es_glDrawPixels(GLsizei width, GLsizei height, GLenum format,
                         GLenum type, const GLvoid *data);
EXPORT void APIENTRY_GL4ES gl4es_glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);
EXPORT void APIENTRY_GL4ES gl4es_glWindowPos3f(GLfloat x, GLfloat y, GLfloat z);
EXPORT void APIENTRY_GL4ES gl4es_glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
void render_raster();

EXPORT void APIENTRY_GL4ES gl4es_glPixelZoom(GLfloat xfactor, GLfloat yfactor);

EXPORT void APIENTRY_GL4ES gl4es_glPixelTransferf(GLenum pname, GLfloat param);

EXPORT void APIENTRY_GL4ES gl4es_glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values);
EXPORT void APIENTRY_GL4ES gl4es_glPixelMapuiv(GLenum map,GLsizei mapsize, const GLuint *values);
EXPORT void APIENTRY_GL4ES gl4es_glPixelMapusv(GLenum map,GLsizei mapsize, const GLushort *values);
EXPORT void APIENTRY_GL4ES gl4es_glGetPixelMapfv(GLenum map, GLfloat *data);
EXPORT void APIENTRY_GL4ES gl4es_glGetPixelMapuiv(GLenum map, GLuint *data);
EXPORT void APIENTRY_GL4ES gl4es_glGetPixelMapusv(GLenum map, GLushort *data);

void render_raster_list(rasterlist_t* raster);

void bitmap_flush();
	
#endif // _GL4ES_RASTER_H_
