/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opengl_FCLContextImplementation */

#ifndef _Included_org_lwjgl_opengl_FCLContextImplementation
#define _Included_org_lwjgl_opengl_FCLContextImplementation
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    nCreate
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/IntBuffer;Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_nCreate
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    getEGLContext
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_getEGLContext
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    getDisplay
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_getDisplay
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    nSwapBuffers
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_nSwapBuffers
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    nReleaseCurrentContext
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_nReleaseCurrentContext
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    nMakeCurrent
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_nMakeCurrent
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    nIsCurrent
 * Signature: (Ljava/nio/ByteBuffer;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_nIsCurrent
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    nSetSwapInterval
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_nSetSwapInterval
  (JNIEnv *, jclass, jobject, jobject, jint);

/*
 * Class:     org_lwjgl_opengl_FCLContextImplementation
 * Method:    nDestroy
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opengl_FCLContextImplementation_nDestroy
  (JNIEnv *, jclass, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
