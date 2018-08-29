LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)  
LOCAL_MODULE := tbrowser    
LOCAL_SRC_FILES := libtbrowser.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := sitatv    
LOCAL_SRC_FILES := libsitatv.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := tbrowser3
LOCAL_SRC_FILES := tbrowser3.cpp
LOCAL_SHARED_LIBRARIES := tbrowser sitatv
LOCAL_LDLIBS :=-llog
include $(BUILD_SHARED_LIBRARY)