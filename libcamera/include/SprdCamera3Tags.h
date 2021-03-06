#ifndef ANDROiD_SERVERS_CAMERA_CAMERA2TAG_H
#define ANDROiD_SERVERS_CAMERA_CAMERA2TAG_H
namespace android{

typedef enum sprd_camera_ext_tags{
        /*sprd add flag start*/
        ANDROID_SPRD_BRIGHTNESS =
                VENDOR_SECTION_START,
        ANDROID_SPRD_CONTRAST,
        ANDROID_SPRD_SATURATION,
        ANDROID_SPRD_CAPTURE_MODE,
        ANDROID_SPRD_SENSOR_ORIENTATION,
        ANDROID_SPRD_SENSOR_ROTATION,
        ANDROID_SPRD_UCAM_SKIN_LEVEL,
        ANDROID_SPRD_BURST_CAP_CNT,
        ANDROID_SPRD_REC_BUF_INFO,
        ANDROID_SPRD_ISO,
        ANDROID_SPRD_SLOW_MOTION,
        ANDROID_SPRD_METERING_MODE,
        ANDROID_SPRD_METERING_AREA,
        ANDROID_SPRD_VIDEO_SNAPSHOT_SUPPORT,
        ANDROID_SPRD_SUPPORT_BIG_PRE_REC_SIZE,
        ANDROID_SPRD_AVAILABLE_BRIGHTNESS,
        ANDROID_SPRD_AVAILABLE_CONTRAST,
        ANDROID_SPRD_AVAILABLE_SATURATION,
        ANDROID_SPRD_AVAILABLE_CAPTURE_MODE,
        ANDROID_SPRD_AVAILABLE_ISO,
        ANDROID_SPRD_AVAILABLE_SLOW_MOTION,
        ANDROID_SPRD_AVAILABLE_METERING_MODE,
        ANDROID_SPRD_FLASH_MODE_SUPPORT,
        ANDROID_SPRD_PRV_REC_DIFFERENT_SIZE_SUPPORT,
        ANDROID_SPRD_NOTIFY_FLAG_REC_SYNC,
        ANDROID_SPRD_ZSL_ENABLED,
        ANDROID_SPRD_CONTROL_FRONT_CAMERA_MIRROR,
        ANDROID_SPRD_EIS_ENABLED,
        ANDROID_SPRD_EIS_CROP,
        ANDROID_SPRD_HIGHISO_ENABLED,
        ANDROID_SPRD_AVAILABLE_SMILEENABLE,
        ANDROID_SPRD_AVAILABLE_ANTIBAND_AUTOSUPPORTED,
        VENDOR_SECTION_END,
        /*not parameter but only flag between framework and hal*/
        /*sprd add flag end*/
        }sprd_camera_metadata_tag_t;
}

// ANDROID_SPRD_VIDEO_SNAPSHOT_SUPPORT
typedef enum camera_metadata_enum_android_sprd_video_snapshot_support {
    ANDROID_SPRD_VIDEO_SNAPSHOT_SUPPORT_OFF,
    ANDROID_SPRD_VIDEO_SNAPSHOT_SUPPORT_ON,
} camera_metadata_enum_android_sprd_video_snapshot_support_t;
#endif
