// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationES1_autogen.h:
//   Validation functions for the OpenGL ES 1.0 entry points.

#ifndef LIBANGLE_VALIDATION_ES1_AUTOGEN_H_
#define LIBANGLE_VALIDATION_ES1_AUTOGEN_H_

#include "common/PackedEnums.h"
#include "common/entry_points_enum_autogen.h"

namespace gl
{
class Context;
class PrivateState;
class ErrorSet;

bool ValidateAlphaFunc(const PrivateState &state,
                       ErrorSet *errors,
                       angle::EntryPoint entryPoint,
                       AlphaTestFunc funcPacked,
                       GLfloat ref);
bool ValidateAlphaFuncx(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        AlphaTestFunc funcPacked,
                        GLfixed ref);
bool ValidateClearColorx(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         GLfixed red,
                         GLfixed green,
                         GLfixed blue,
                         GLfixed alpha);
bool ValidateClearDepthx(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         GLfixed depth);
bool ValidateClientActiveTexture(const Context *context,
                                 angle::EntryPoint entryPoint,
                                 GLenum texture);
bool ValidateClipPlanef(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLenum p,
                        const GLfloat *eqn);
bool ValidateClipPlanex(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLenum plane,
                        const GLfixed *equation);
bool ValidateColor4f(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     GLfloat red,
                     GLfloat green,
                     GLfloat blue,
                     GLfloat alpha);
bool ValidateColor4ub(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      GLubyte red,
                      GLubyte green,
                      GLubyte blue,
                      GLubyte alpha);
bool ValidateColor4x(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     GLfixed red,
                     GLfixed green,
                     GLfixed blue,
                     GLfixed alpha);
bool ValidateColorPointer(const Context *context,
                          angle::EntryPoint entryPoint,
                          GLint size,
                          VertexAttribType typePacked,
                          GLsizei stride,
                          const void *pointer);
bool ValidateDepthRangex(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         GLfixed n,
                         GLfixed f);
bool ValidateDisableClientState(const Context *context,
                                angle::EntryPoint entryPoint,
                                ClientVertexArrayType arrayPacked);
bool ValidateEnableClientState(const Context *context,
                               angle::EntryPoint entryPoint,
                               ClientVertexArrayType arrayPacked);
bool ValidateFogf(const PrivateState &state,
                  ErrorSet *errors,
                  angle::EntryPoint entryPoint,
                  GLenum pname,
                  GLfloat param);
bool ValidateFogfv(const PrivateState &state,
                   ErrorSet *errors,
                   angle::EntryPoint entryPoint,
                   GLenum pname,
                   const GLfloat *params);
bool ValidateFogx(const PrivateState &state,
                  ErrorSet *errors,
                  angle::EntryPoint entryPoint,
                  GLenum pname,
                  GLfixed param);
bool ValidateFogxv(const PrivateState &state,
                   ErrorSet *errors,
                   angle::EntryPoint entryPoint,
                   GLenum pname,
                   const GLfixed *param);
bool ValidateFrustumf(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      GLfloat l,
                      GLfloat r,
                      GLfloat b,
                      GLfloat t,
                      GLfloat n,
                      GLfloat f);
bool ValidateFrustumx(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      GLfixed l,
                      GLfixed r,
                      GLfixed b,
                      GLfixed t,
                      GLfixed n,
                      GLfixed f);
bool ValidateGetClipPlanef(const PrivateState &state,
                           ErrorSet *errors,
                           angle::EntryPoint entryPoint,
                           GLenum plane,
                           const GLfloat *equation);
bool ValidateGetClipPlanex(const PrivateState &state,
                           ErrorSet *errors,
                           angle::EntryPoint entryPoint,
                           GLenum plane,
                           const GLfixed *equation);
bool ValidateGetFixedv(const Context *context,
                       angle::EntryPoint entryPoint,
                       GLenum pname,
                       const GLfixed *params);
bool ValidateGetLightfv(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLenum light,
                        LightParameter pnamePacked,
                        const GLfloat *params);
bool ValidateGetLightxv(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLenum light,
                        LightParameter pnamePacked,
                        const GLfixed *params);
bool ValidateGetMaterialfv(const PrivateState &state,
                           ErrorSet *errors,
                           angle::EntryPoint entryPoint,
                           GLenum face,
                           MaterialParameter pnamePacked,
                           const GLfloat *params);
bool ValidateGetMaterialxv(const PrivateState &state,
                           ErrorSet *errors,
                           angle::EntryPoint entryPoint,
                           GLenum face,
                           MaterialParameter pnamePacked,
                           const GLfixed *params);
bool ValidateGetTexEnvfv(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         TextureEnvTarget targetPacked,
                         TextureEnvParameter pnamePacked,
                         const GLfloat *params);
bool ValidateGetTexEnviv(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         TextureEnvTarget targetPacked,
                         TextureEnvParameter pnamePacked,
                         const GLint *params);
bool ValidateGetTexEnvxv(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         TextureEnvTarget targetPacked,
                         TextureEnvParameter pnamePacked,
                         const GLfixed *params);
bool ValidateGetTexParameterxv(const Context *context,
                               angle::EntryPoint entryPoint,
                               TextureType targetPacked,
                               GLenum pname,
                               const GLfixed *params);
bool ValidateLightModelf(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         GLenum pname,
                         GLfloat param);
bool ValidateLightModelfv(const PrivateState &state,
                          ErrorSet *errors,
                          angle::EntryPoint entryPoint,
                          GLenum pname,
                          const GLfloat *params);
bool ValidateLightModelx(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         GLenum pname,
                         GLfixed param);
bool ValidateLightModelxv(const PrivateState &state,
                          ErrorSet *errors,
                          angle::EntryPoint entryPoint,
                          GLenum pname,
                          const GLfixed *param);
bool ValidateLightf(const PrivateState &state,
                    ErrorSet *errors,
                    angle::EntryPoint entryPoint,
                    GLenum light,
                    LightParameter pnamePacked,
                    GLfloat param);
bool ValidateLightfv(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     GLenum light,
                     LightParameter pnamePacked,
                     const GLfloat *params);
bool ValidateLightx(const PrivateState &state,
                    ErrorSet *errors,
                    angle::EntryPoint entryPoint,
                    GLenum light,
                    LightParameter pnamePacked,
                    GLfixed param);
bool ValidateLightxv(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     GLenum light,
                     LightParameter pnamePacked,
                     const GLfixed *params);
bool ValidateLineWidthx(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLfixed width);
bool ValidateLoadIdentity(const PrivateState &state,
                          ErrorSet *errors,
                          angle::EntryPoint entryPoint);
bool ValidateLoadMatrixf(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         const GLfloat *m);
bool ValidateLoadMatrixx(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         const GLfixed *m);
bool ValidateLogicOp(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     LogicalOperation opcodePacked);
bool ValidateMaterialf(const PrivateState &state,
                       ErrorSet *errors,
                       angle::EntryPoint entryPoint,
                       GLenum face,
                       MaterialParameter pnamePacked,
                       GLfloat param);
bool ValidateMaterialfv(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLenum face,
                        MaterialParameter pnamePacked,
                        const GLfloat *params);
bool ValidateMaterialx(const PrivateState &state,
                       ErrorSet *errors,
                       angle::EntryPoint entryPoint,
                       GLenum face,
                       MaterialParameter pnamePacked,
                       GLfixed param);
bool ValidateMaterialxv(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLenum face,
                        MaterialParameter pnamePacked,
                        const GLfixed *param);
bool ValidateMatrixMode(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        MatrixType modePacked);
bool ValidateMultMatrixf(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         const GLfloat *m);
bool ValidateMultMatrixx(const PrivateState &state,
                         ErrorSet *errors,
                         angle::EntryPoint entryPoint,
                         const GLfixed *m);
bool ValidateMultiTexCoord4f(const PrivateState &state,
                             ErrorSet *errors,
                             angle::EntryPoint entryPoint,
                             GLenum target,
                             GLfloat s,
                             GLfloat t,
                             GLfloat r,
                             GLfloat q);
bool ValidateMultiTexCoord4x(const PrivateState &state,
                             ErrorSet *errors,
                             angle::EntryPoint entryPoint,
                             GLenum texture,
                             GLfixed s,
                             GLfixed t,
                             GLfixed r,
                             GLfixed q);
bool ValidateNormal3f(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      GLfloat nx,
                      GLfloat ny,
                      GLfloat nz);
bool ValidateNormal3x(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      GLfixed nx,
                      GLfixed ny,
                      GLfixed nz);
bool ValidateNormalPointer(const Context *context,
                           angle::EntryPoint entryPoint,
                           VertexAttribType typePacked,
                           GLsizei stride,
                           const void *pointer);
bool ValidateOrthof(const PrivateState &state,
                    ErrorSet *errors,
                    angle::EntryPoint entryPoint,
                    GLfloat l,
                    GLfloat r,
                    GLfloat b,
                    GLfloat t,
                    GLfloat n,
                    GLfloat f);
bool ValidateOrthox(const PrivateState &state,
                    ErrorSet *errors,
                    angle::EntryPoint entryPoint,
                    GLfixed l,
                    GLfixed r,
                    GLfixed b,
                    GLfixed t,
                    GLfixed n,
                    GLfixed f);
bool ValidatePointParameterf(const PrivateState &state,
                             ErrorSet *errors,
                             angle::EntryPoint entryPoint,
                             PointParameter pnamePacked,
                             GLfloat param);
bool ValidatePointParameterfv(const PrivateState &state,
                              ErrorSet *errors,
                              angle::EntryPoint entryPoint,
                              PointParameter pnamePacked,
                              const GLfloat *params);
bool ValidatePointParameterx(const PrivateState &state,
                             ErrorSet *errors,
                             angle::EntryPoint entryPoint,
                             PointParameter pnamePacked,
                             GLfixed param);
bool ValidatePointParameterxv(const PrivateState &state,
                              ErrorSet *errors,
                              angle::EntryPoint entryPoint,
                              PointParameter pnamePacked,
                              const GLfixed *params);
bool ValidatePointSize(const PrivateState &state,
                       ErrorSet *errors,
                       angle::EntryPoint entryPoint,
                       GLfloat size);
bool ValidatePointSizex(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLfixed size);
bool ValidatePolygonOffsetx(const PrivateState &state,
                            ErrorSet *errors,
                            angle::EntryPoint entryPoint,
                            GLfixed factor,
                            GLfixed units);
bool ValidatePopMatrix(const PrivateState &state, ErrorSet *errors, angle::EntryPoint entryPoint);
bool ValidatePushMatrix(const PrivateState &state, ErrorSet *errors, angle::EntryPoint entryPoint);
bool ValidateRotatef(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     GLfloat angle,
                     GLfloat x,
                     GLfloat y,
                     GLfloat z);
bool ValidateRotatex(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     GLfixed angle,
                     GLfixed x,
                     GLfixed y,
                     GLfixed z);
bool ValidateSampleCoveragex(const PrivateState &state,
                             ErrorSet *errors,
                             angle::EntryPoint entryPoint,
                             GLclampx value,
                             GLboolean invert);
bool ValidateScalef(const PrivateState &state,
                    ErrorSet *errors,
                    angle::EntryPoint entryPoint,
                    GLfloat x,
                    GLfloat y,
                    GLfloat z);
bool ValidateScalex(const PrivateState &state,
                    ErrorSet *errors,
                    angle::EntryPoint entryPoint,
                    GLfixed x,
                    GLfixed y,
                    GLfixed z);
bool ValidateShadeModel(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        ShadingModel modePacked);
bool ValidateTexCoordPointer(const Context *context,
                             angle::EntryPoint entryPoint,
                             GLint size,
                             VertexAttribType typePacked,
                             GLsizei stride,
                             const void *pointer);
bool ValidateTexEnvf(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     TextureEnvTarget targetPacked,
                     TextureEnvParameter pnamePacked,
                     GLfloat param);
bool ValidateTexEnvfv(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      TextureEnvTarget targetPacked,
                      TextureEnvParameter pnamePacked,
                      const GLfloat *params);
bool ValidateTexEnvi(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     TextureEnvTarget targetPacked,
                     TextureEnvParameter pnamePacked,
                     GLint param);
bool ValidateTexEnviv(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      TextureEnvTarget targetPacked,
                      TextureEnvParameter pnamePacked,
                      const GLint *params);
bool ValidateTexEnvx(const PrivateState &state,
                     ErrorSet *errors,
                     angle::EntryPoint entryPoint,
                     TextureEnvTarget targetPacked,
                     TextureEnvParameter pnamePacked,
                     GLfixed param);
bool ValidateTexEnvxv(const PrivateState &state,
                      ErrorSet *errors,
                      angle::EntryPoint entryPoint,
                      TextureEnvTarget targetPacked,
                      TextureEnvParameter pnamePacked,
                      const GLfixed *params);
bool ValidateTexParameterx(const Context *context,
                           angle::EntryPoint entryPoint,
                           TextureType targetPacked,
                           GLenum pname,
                           GLfixed param);
bool ValidateTexParameterxv(const Context *context,
                            angle::EntryPoint entryPoint,
                            TextureType targetPacked,
                            GLenum pname,
                            const GLfixed *params);
bool ValidateTranslatef(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLfloat x,
                        GLfloat y,
                        GLfloat z);
bool ValidateTranslatex(const PrivateState &state,
                        ErrorSet *errors,
                        angle::EntryPoint entryPoint,
                        GLfixed x,
                        GLfixed y,
                        GLfixed z);
bool ValidateVertexPointer(const Context *context,
                           angle::EntryPoint entryPoint,
                           GLint size,
                           VertexAttribType typePacked,
                           GLsizei stride,
                           const void *pointer);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_ES1_AUTOGEN_H_