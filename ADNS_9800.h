#ifndef ADNS_9800
#define ADNS_9800

#define     ADNS_PRODUCT_ID                 0x00
#define     ADNS_REVISION_ID                0x01
#define     ADNS_MOTION                     0x02
#define     ADNS_DELTA_X_L                  0x03
#define     ADNS_DELTA_X_H                  0x04
#define     ADNS_DELTA_Y_L                  0x05
#define     ADNS_DELTA_Y_H                  0x06
#define     ADNS_SQUAL                      0x07
#define     ADNS_PIXEL_SUM                  0x08
#define     ADNS_MAX_PIXEL                  0x09
#define     ADNS_MIN_PIXEL                  0x0a
#define     ADNS_SHUTTER_LOWER              0x0b
#define     ADNS_SHUTTER_UPPER              0x0c
#define     ADNS_FRAME_PERIOD_LOWER         0x0d
#define     ADNS_FRAME_PERIOD_UPPER         0x0e
#define     ADNS_CONFIG_I                   0x0f
#define     ADNS_CONFIG_II                  0x10
#define     ADNS_FRAME_CAPTURE              0x12
#define     ADNS_SROM_ENABLE                0x13
#define     ADNS_RUN_DOWNSHIFT              0x14
#define     ADNS_REST1_RATE                 0x15
#define     ADNS_REST1_DOWNSHIFT            0x16
#define     ADNS_REST2_RATE                 0x17
#define     ADNS_REST2_DOWNSHIFT            0x18
#define     ADNS_REST3_RATE                 0x19
#define     ADNS_FP_MAX_BOUND_LOWER         0x1a
#define     ADNS_FP_MAX_BOUND_UPPER         0x1b
#define     ADNS_FP_MIN_BOUND_LOWER         0x1c
#define     ADNS_FP_MIN_BOUND_UPPER         0x1d
#define     ADNS_SHUTTER_MAX_BOUND_LOWER    0x1e
#define     ADNS_SHUTTER_MAX_BOUND_UPPER    0x1f
#define     ADNS_LASER_CTRL0                0x20
// 0x21 - 0x23 Reserved
#define     ADNS_OBSERVATION                0x24
#define     ADNS_DATA_OUT_LOWER             0x25
#define     ADNS_DATA_OUT_UPPER             0x26
// 0x27 - 0x29 Reserved
#define     ADNS_SROM_ID                    0x2a
#define     ADNS_LIFT_DETECTION_THREASHOLD  0x2e
#define     ADNS_CONFIG_V                   0x2f
// 0x30 - 0x38 Reserved
#define     ADNS_CONFIG_IV                  0x39
#define     ADNS_POWER_UP_RESET             0x3a
#define     ADNS_SHUTDOWN                   0x3b
// 0x3c - 0x3e Reserved
#define     ADNS_INVERSE_PRODUCT_ID         0x3f
// 0x40 - 0x41 Reserved
#define     ADNS_SNAP_ANGLE                 0x42
// 0x43 - 0x4f Reserved
#define     ADNS_MOTION_BURST               0x50
#define     ADNS_SROM_LOAD_BURST            0x62
#define     ADNS_PIXEL_BURST                0x64


// ADNS_MOTION
#define     ADNS_MOTION_MOT_mask                (0x01 << 7)
#define     ADNS_MOTION_MOT_TRUE                (0x01 << 7)
#define     ADNS_MOTION_MOT_FALSE               (0x00 << 7)
#define     ADNS_MOTION_OP_MODE_mask            (0x03 << 1)
#define     ADNS_MOTION_OP_MODE_RUN             (0x00 << 1)
#define     ADNS_MOTION_OP_MODE_REST1           (0x01 << 1)
#define     ADNS_MOTION_OP_MODE_REST2           (0x02 << 1)
#define     ADNS_MOTION_OP_MODE_REST3           (0x03 << 1)
#define     ADNS_MOTION_FRAME_PIX_FIRST_mask    (0x01)
#define     ADNS_MOTION_FRAME_PIX_FIRST_TRUE    (0x01)
#define     ADNS_MOTION_FRAME_PIX_FIRST_FALSE   (0x00)

// ADNS_CONFIG_I
#define     ADNS_CONFIG_I_mask          0x3f // DPI n * 200

// ADNS_CONFIG_II
#define     ADNS_CONFIG_II_F_REST_mask              (0x03 << 6)
#define     ADNS_CONFIG_II_F_REST_NORMAL            (0x00 << 6)
#define     ADNS_CONFIG_II_F_REST_REST1             (0x01 << 6)
#define     ADNS_CONFIG_II_F_REST_REST2             (0x02 << 6)
#define     ADNS_CONFIG_II_F_REST_REST3             (0x03 << 6)
#define     ADNS_CONFIG_II_REST_EN_mask             (0x01 << 5)
#define     ADNS_CONFIG_II_REST_EN_TRUE             (0x01 << 5)
#define     ADNS_CONFIG_II_REST_EN_FALSE            (0x00 << 5)
#define     ADNS_CONFIG_II_NAGC_mask                (0x01 << 4)
#define     ADNS_CONFIG_II_NAGC_TRUE                (0x01 << 4)
#define     ADNS_CONFIG_II_NAGC_FALSE               (0x00 << 4)
#define     ADNS_CONFIG_II_FIXED_FR_mask            (0x01 << 3)
#define     ADNS_CONFIG_II_FIXED_FR_AUTO            (0x00 << 3)
#define     ADNS_CONFIG_II_FIXED_FR_FIXED           (0x01 << 3)
#define     ADNS_CONFIG_II_RPT_MOD_mask             (0x01 << 2)
#define     ADNS_CONFIG_II_RPT_MOD_SYNC             (0x00 << 2)
#define     ADNS_CONFIG_II_RPT_MOD_INDI             (0x01 << 2)

// ADNS_LASER_CTRL0
#define     ADNS_LASER_CTRL0_CW_mask                (0x07 << 1)
#define     ADNS_LASER_CTRL0_CW_ON                  (0x02 << 1)
#define     ADNS_LASER_CTRL0_CW_OFF                 (0x00 << 1)
#define     ADNS_LASER_CTRL0_FORCE_DISABLED_mask    (0x01)
#define     ADNS_LASER_CTRL0_FORCE_DISABLED_TRUE    (0x01)
#define     ADNS_LASER_CTRL0_FORCE_DISABLED_FALSE   (0x00)

// ADNS_SNAP_ANGLE
#define ADNS_SNAP_ANGLE_mask        (0x01 << 7)
#define ADNS_SNAP_ANGLE_TRUE        (0x01 << 7)
#define ADNS_SNAP_ANGLE_FALSE       (0x00 << 7)

// Emulated status structure
typedef struct {
    unsigned char product_id;
    unsigned char revision_id;
    unsigned char config_i;
    unsigned char config_ii;
    unsigned char frame_capture;
    unsigned char run_downshift;
    unsigned char rest1_rate;
    unsigned char rest1_downshift;
    unsigned char rest2_rate;
    unsigned char rest2_downshift;
    unsigned char rest3_rate;
    unsigned short int frame_period_max_bound;
    unsigned short int frame_period_min_bound;
    unsigned short int shutter_max_bound;
    unsigned char laser_ctrl0;
    unsigned char observation;
    unsigned char srom_id;
    unsigned char lift_detection_threashold;
    unsigned char config_v;
    unsigned char config_iv;
    unsigned char inverse_product_id;
    unsigned char snap_angle;
} ADNS_STATUS_t;

typedef struct {
    unsigned char motion;
    unsigned char observation;
    short int delta_x;
    short int delta_y;
    unsigned char squal;
    unsigned char pixel_sum;
    unsigned char max_pixel;
    unsigned char min_pixel;
    unsigned short int shutter;
    unsigned short int frame_period;
} ADNS_MOTION_BURST_t;


#endif // ADNS_9800