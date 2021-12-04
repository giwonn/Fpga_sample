LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := fpga-sample-jni
LOCAL_SRC_FILES := fpga-sample-jni.c
LOCAL_LDLIBS    := -llog

include $(BUILD_SHARED_LIBRARY)
