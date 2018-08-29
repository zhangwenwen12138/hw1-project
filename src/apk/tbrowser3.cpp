#include <jni.h>
#include <android/log.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "com_tcl_tbrowser3_NativeClass.h"
#include "tos_tbrowser.h"
#include "tos_key_code.h"
#define TAG "tbrw2" // 这个是自定义的LOG的标识
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__) // 定义LOGD类型
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__) // 定义LOGW类型
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__) // 定义LOGE类型
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__) // 定义LOGF类型
#ifdef __cplusplus  //最好有这个，否则被编译器改了函数名字找不到不要怪我
extern "C" {
#endif

/*
 * Class:     com_tcl_tbrowser3_NativeClass
 * Method:    tbrowserLoadUrlWithName
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jboolean JNICALL Java_com_tcl_tbrowser3_NativeClass_tbrowserLoadUrlWithName
  (JNIEnv *env, jclass, jstring pageName, jstring url){
	jboolean isCopy;
	const char * page_name=env->GetStringUTFChars(pageName,&isCopy);
	const char * url0=env->GetStringUTFChars(url,&isCopy);
	if(page_name==NULL||url0==NULL)
		return JNI_FALSE;
	LOGI("=========>tbrw2 tos_tbrowser_load_url_with_name, page_name=%s, url0=%s", page_name, url0);
	jint result=tos_tbrowser_load_url_with_name(page_name,url0);
	env->ReleaseStringUTFChars(pageName,page_name);
	env->ReleaseStringUTFChars(url,url0);
	if(result == 0)
		return JNI_TRUE;
	else
		return JNI_FALSE;
}

/*
 * Class:     com_tcl_tbrowser3_NativeClass
 * Method:    tbrowserPushKeyEventWithName
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jboolean JNICALL Java_com_tcl_tbrowser3_NativeClass_tbrowserPushKeyEventWithName
  (JNIEnv *env,jclass,jstring pageName,jint action,jint keyCode,jint unicodeCharacter,jint flags){
	jboolean isCopy;
	const char * page_name=env->GetStringUTFChars(pageName,&isCopy);
	if(page_name==NULL)
      return JNI_FALSE;
	LOGI("=========>tbrw2 tos_tbrowser_push_key_event_with_name page_name=%s", page_name);
	TOS_KeyEvent key_event;
	key_event.size=sizeof(key_event);
	key_event.action=(TOS_KeyAction)(action);
	key_event.key_code=(TOS_KeyCode)(keyCode);
	key_event.unicode_character=unicodeCharacter;
	key_event.flags=flags;
	jint result=tos_tbrowser_push_key_event_with_name(page_name,&key_event);
	env->ReleaseStringUTFChars(pageName,page_name);
	if(result == 0)
		return JNI_TRUE;
	else
		return JNI_FALSE;

}

/*
 * Class:     com_tcl_tbrowser3_NativeClass
 * Method:    tbrowserDestoryWithName
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jboolean JNICALL Java_com_tcl_tbrowser3_NativeClass_tbrowserDestoryWithName
  (JNIEnv *env, jclass, jstring pageName){
	jboolean isCopy;
	const char * page_name=env->GetStringUTFChars(pageName,&isCopy);
	if(page_name==NULL)
		return JNI_FALSE;
	LOGI("=========>tbrw2 tos_tbrowser_destory_with_name,page_name=%s",page_name);
	jint result=tos_tbrowser_destory_with_name(page_name);
	env->ReleaseStringUTFChars(pageName,page_name);
	if(result == 0)
		return JNI_TRUE;
	else
		return JNI_FALSE;
}

/*
 * Class:     com_tcl_tbrowser3_NativeClass
 * Method:    tbrowserSetVisible
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jboolean JNICALL Java_com_tcl_tbrowser3_NativeClass_tbrowserSetVisible
  (JNIEnv *env, jclass, jstring pageName, jint visible){
	return JNI_TRUE;
}

/*
 * Class:     com_tcl_tbrowser3_NativeClass
 * Method:    tbrowserSetActive
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jboolean JNICALL Java_com_tcl_tbrowser3_NativeClass_tbrowserSetActive
  (JNIEnv *env, jclass, jstring pageName){
	return JNI_TRUE;
}

#ifdef __cplusplus
}
#endif
