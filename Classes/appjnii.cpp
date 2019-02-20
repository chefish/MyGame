//
// Created by 余晓敏 on 2019/2/20.
//

#include <jni.h>
#include <string>

extern "C" {

JNIEXPORT jstring JNICALL Java_org_cocos2dx_Appctivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from PA ++";

    //    char* ppp = cow->readProcStat();
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jstring JNICALL Java_org_cocos2dx_Appctivity_track(
        JNIEnv *env,
        jobject thiz) {
    std::string hello = "Hello from PA ++";

    jmethodID notification_method = env->GetMethodID(env->GetObjectClass(thiz),"showMessage","()V");
    env->CallVoidMethod(thiz,notification_method);

    return env->NewStringUTF(hello.c_str());
}



}

