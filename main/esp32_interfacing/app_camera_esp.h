#ifndef FLYING_VEHICLE_CLASSIFIER_ESP_APP_CAMERA_ESP_H_
#define FLYING_VEHICLE_CLASSIFIER_ESP_APP_CAMERA_ESP_H_

#include "esp_camera.h"
#include "esp_log.h"
#include "esp_system.h"
#include "sensor.h"

/**
 * PIXFORMAT_RGB565,    // 2BPP/RGB565
 * PIXFORMAT_YUV422,    // 2BPP/YUV422
 * PIXFORMAT_GRAYSCALE, // 1BPP/GRAYSCALE
 * PIXFORMAT_JPEG,      // JPEG/COMPRESSED
 * PIXFORMAT_RGB888,    // 3BPP/RGB888
 */
#define CAMERA_PIXEL_FORMAT PIXFORMAT_GRAYSCALE

/*
 * FRAMESIZE_96X96,    // 96x96
 * FRAMESIZE_QQVGA,    // 160x120
 * FRAMESIZE_QQVGA2,   // 128x160
 * FRAMESIZE_QCIF,     // 176x144
 * FRAMESIZE_HQVGA,    // 240x176
 * FRAMESIZE_QVGA,     // 320x240
 * FRAMESIZE_CIF,      // 400x296
 * FRAMESIZE_VGA,      // 640x480
 * FRAMESIZE_SVGA,     // 800x600
 * FRAMESIZE_XGA,      // 1024x768
 * FRAMESIZE_SXGA,     // 1280x1024
 * FRAMESIZE_UXGA,     // 1600x1200
 */
#define CAMERA_FRAME_SIZE FRAMESIZE_96X96

// IMPORTANT; Modified specifically for TTGO T-Camera ESP32 Module.
#define PWDN_GPIO_NUM    26
#define RESET_GPIO_NUM   -1
#define XCLK_GPIO_NUM    32
#define SIOD_GPIO_NUM    13
#define SIOC_GPIO_NUM    12

#define Y9_GPIO_NUM      39
#define Y8_GPIO_NUM      36
#define Y7_GPIO_NUM      23
#define Y6_GPIO_NUM      18
#define Y5_GPIO_NUM      15
#define Y4_GPIO_NUM      4
#define Y3_GPIO_NUM      14
#define Y2_GPIO_NUM      5
#define VSYNC_GPIO_NUM   27
#define HREF_GPIO_NUM    25
#define PCLK_GPIO_NUM    19
#define FLIP_CAMERA      1

#define XCLK_FREQ 20000000

#ifdef __cplusplus
extern "C" {
#endif

int app_camera_init();

#ifdef __cplusplus
}
#endif
#endif  // FLYING_VEHICLE_CLASSIFIER_ESP_APP_CAMERA_ESP_H_
