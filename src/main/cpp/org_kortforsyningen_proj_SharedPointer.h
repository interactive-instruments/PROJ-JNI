/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_kortforsyningen_proj_SharedPointer */

#ifndef _Included_org_kortforsyningen_proj_SharedPointer
#define _Included_org_kortforsyningen_proj_SharedPointer
#ifdef __cplusplus
extern "C" {
#endif
#undef org_kortforsyningen_proj_SharedPointer_COORDINATE_SYSTEM
#define org_kortforsyningen_proj_SharedPointer_COORDINATE_SYSTEM 0L
#undef org_kortforsyningen_proj_SharedPointer_AXIS
#define org_kortforsyningen_proj_SharedPointer_AXIS 1L
#undef org_kortforsyningen_proj_SharedPointer_NAME_STRING
#define org_kortforsyningen_proj_SharedPointer_NAME_STRING 0L
#undef org_kortforsyningen_proj_SharedPointer_AUTHORITY_CODE
#define org_kortforsyningen_proj_SharedPointer_AUTHORITY_CODE 1L
#undef org_kortforsyningen_proj_SharedPointer_ABBREVIATION
#define org_kortforsyningen_proj_SharedPointer_ABBREVIATION 2L
#undef org_kortforsyningen_proj_SharedPointer_DIRECTION
#define org_kortforsyningen_proj_SharedPointer_DIRECTION 3L
#undef org_kortforsyningen_proj_SharedPointer_SCOPE
#define org_kortforsyningen_proj_SharedPointer_SCOPE 4L
#undef org_kortforsyningen_proj_SharedPointer_REMARKS
#define org_kortforsyningen_proj_SharedPointer_REMARKS 5L
#undef org_kortforsyningen_proj_SharedPointer_MINIMUM
#define org_kortforsyningen_proj_SharedPointer_MINIMUM 0L
#undef org_kortforsyningen_proj_SharedPointer_MAXIMUM
#define org_kortforsyningen_proj_SharedPointer_MAXIMUM 1L
/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    getObjectProperty
 * Signature: (SI)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_kortforsyningen_proj_SharedPointer_getObjectProperty
  (JNIEnv *, jobject, jshort, jint);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    getStringProperty
 * Signature: (S)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_kortforsyningen_proj_SharedPointer_getStringProperty
  (JNIEnv *, jobject, jshort);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    getNumericProperty
 * Signature: (S)D
 */
JNIEXPORT jdouble JNICALL Java_org_kortforsyningen_proj_SharedPointer_getNumericProperty
  (JNIEnv *, jobject, jshort);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    getDimension
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_kortforsyningen_proj_SharedPointer_getDimension
  (JNIEnv *, jobject);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    inverse
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_kortforsyningen_proj_SharedPointer_inverse
  (JNIEnv *, jobject);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    format
 * Signature: (Lorg/kortforsyningen/proj/Context;IIZZ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_kortforsyningen_proj_SharedPointer_format
  (JNIEnv *, jobject, jobject, jint, jint, jboolean, jboolean);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    isEquivalentTo
 * Signature: (Lorg/kortforsyningen/proj/SharedPointer;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_kortforsyningen_proj_SharedPointer_isEquivalentTo
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    rawPointer
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_kortforsyningen_proj_SharedPointer_rawPointer
  (JNIEnv *, jobject);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_kortforsyningen_proj_SharedPointer_release
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
