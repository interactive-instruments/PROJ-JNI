/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_kortforsyningen_proj_SharedPointer */

#ifndef _Included_org_kortforsyningen_proj_SharedPointer
#define _Included_org_kortforsyningen_proj_SharedPointer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    getObjectProperty
 * Signature: (S)Lorg/kortforsyningen/proj/IdentifiableObject;
 */
JNIEXPORT jobject JNICALL Java_org_kortforsyningen_proj_SharedPointer_getObjectProperty
  (JNIEnv *, jobject, jshort);

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
 * Method:    getBooleanProperty
 * Signature: (S)Z
 */
JNIEXPORT jboolean JNICALL Java_org_kortforsyningen_proj_SharedPointer_getBooleanProperty
  (JNIEnv *, jobject, jshort);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    getVectorSize
 * Signature: (S)I
 */
JNIEXPORT jint JNICALL Java_org_kortforsyningen_proj_SharedPointer_getVectorSize
  (JNIEnv *, jobject, jshort);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    getVectorElement
 * Signature: (SI)Lorg/kortforsyningen/proj/IdentifiableObject;
 */
JNIEXPORT jobject JNICALL Java_org_kortforsyningen_proj_SharedPointer_getVectorElement
  (JNIEnv *, jobject, jshort, jint);

/*
 * Class:     org_kortforsyningen_proj_SharedPointer
 * Method:    inverse
 * Signature: ()Lorg/kortforsyningen/proj/IdentifiableObject;
 */
JNIEXPORT jobject JNICALL Java_org_kortforsyningen_proj_SharedPointer_inverse
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
