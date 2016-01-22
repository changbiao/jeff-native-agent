#ifndef JEFF_NATIVE_AGENT_JVMTI_H
#define JEFF_NATIVE_AGENT_JVMTI_H

#include "jvmti.h"
#include <string>

#include "boost.hpp"

std::string get_method_name(jvmtiEnv &jvmti, jmethodID method);

std::string get_thread_name(jvmtiEnv &jvmti, JNIEnv &jni, jthread thread);

std::string get_error_name(jvmtiEnv &jvmti, jvmtiError error, const std::string message = "");

void check_jvmti_error(jvmtiEnv &jvmti, jvmtiError error, const std::string message = "");

void deallocate(jvmtiEnv &jvmti, void *ptr);

void *allocate(jvmtiEnv &jvmti, jint len);

#endif // JEFF_NATIVE_AGENT_JVMTI_H