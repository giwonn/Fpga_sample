//
// Created by etkim@kpu.ac.kr on 2018-11-14.
// File : fpga-sample-jni.c
//

#include <string.h>
#include <jni.h>
#include <android/log.h>
#include <fcntl.h>
#include <unistd.h>

#define FPGA_DEVICE "/dev/fpga_xxx"

int fpga_calc()
{
    int dev;

    dev = open(FPGA_DEVICE, O_RDWR);

    if (dev <0) {
          __android_log_print(ANDROID_LOG_INFO, "Device Open Error", "-1");
          return -1;
    }
    else {
          __android_log_print(ANDROID_LOG_INFO, "Device Open Success", "0");
        // device read or write functions are inserted
        return 0;
    }

}


jint Java_com_example_android_fpga_1sample_MainActivity_ReceiveFPGAvalue
        (JNIEnv *env, jobject thiz)
{
    jint result;

    result = fpga_calc();

    return result;

}