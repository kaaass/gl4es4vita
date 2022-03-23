#ifndef _GL4ES_BLEND_H_
#define _GL4ES_BLEND_H_

#include "gles.h"

EXPORT void APIENTRY_GL4ES gl4es_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
EXPORT void APIENTRY_GL4ES gl4es_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
EXPORT void APIENTRY_GL4ES gl4es_glBlendEquationSeparate(GLenum modeRGB, GLenum modeA);
EXPORT void APIENTRY_GL4ES gl4es_glBlendFunc(GLenum sfactor, GLenum dfactor);
EXPORT void APIENTRY_GL4ES gl4es_glBlendEquation(GLenum mode);

#endif //_GL4ES_BLEND_H_
