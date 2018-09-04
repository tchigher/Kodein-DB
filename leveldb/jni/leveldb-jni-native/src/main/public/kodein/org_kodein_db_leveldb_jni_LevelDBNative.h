/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_kodein_db_leveldb_jni_LevelDBNative */

#ifndef _Included_org_kodein_db_leveldb_jni_LevelDBNative
#define _Included_org_kodein_db_leveldb_jni_LevelDBNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_NewOptions
 * Signature: (ZZZZIIIIIIZI)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1NewOptions
  (JNIEnv *, jclass, jboolean, jboolean, jboolean, jboolean, jint, jint, jint, jint, jint, jint, jboolean, jint);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_ReleaseOptions
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1ReleaseOptions
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_OpenDB
 * Signature: (Ljava/lang/String;JZ)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1OpenDB
  (JNIEnv *, jclass, jstring, jlong, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_DestroyDB
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1DestroyDB
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Put_BB
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;IIZ)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Put_1BB
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Put_AB
 * Signature: (J[BIILjava/nio/ByteBuffer;IIZ)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Put_1AB
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jobject, jint, jint, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Put_BA
 * Signature: (JLjava/nio/ByteBuffer;II[BIIZ)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Put_1BA
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jbyteArray, jint, jint, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Put_AA
 * Signature: (J[BII[BIIZ)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Put_1AA
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Delete_B
 * Signature: (JLjava/nio/ByteBuffer;IIZ)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Delete_1B
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Delete_A
 * Signature: (J[BIIZ)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Delete_1A
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Write
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Write
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Get_B
 * Signature: (JLjava/nio/ByteBuffer;IIZZJ)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Get_1B
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jboolean, jboolean, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Get_A
 * Signature: (J[BIIZZJ)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Get_1A
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jboolean, jboolean, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_IndirectGet_B
 * Signature: (JLjava/nio/ByteBuffer;IIZZJ)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1IndirectGet_1B
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jboolean, jboolean, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_IndirectGet_A
 * Signature: (J[BIIZZJ)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1IndirectGet_1A
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jboolean, jboolean, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_IndirectGet_I
 * Signature: (JJZZJ)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1IndirectGet_1I
  (JNIEnv *, jclass, jlong, jlong, jboolean, jboolean, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_NewIterator
 * Signature: (JZZJ)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1NewIterator
  (JNIEnv *, jclass, jlong, jboolean, jboolean, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_NewSnapshot
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1NewSnapshot
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_NewWriteBatch
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1NewWriteBatch
  (JNIEnv *, jclass);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBNative
 * Method:    n_Release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBNative_n_1Release
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
