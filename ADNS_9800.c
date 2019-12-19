#include "ADNS_9800.h"

unsigned char not_readable[4] = {
    ADNS_SROM_ENABLE,
    ADNS_POWER_UP_RESET,
    ADNS_SHUTDOWN,
    ADNS_SROM_LOAD_BURST,
}

unsigned char motion_burst[14] = {
    ADNS_MOTION,
    ADNS_OBSERVATION,
    ADNS_DELTA_X_L,
    ADNS_DELTA_X_H,
    ADNS_DELTA_Y_L,
    ADNS_DELTA_Y_H,
    ADNS_SQUAL,
    ADNS_PIXEL_SUM,
    ADNS_MAX_PIXEL,
    ADNS_MIN_PIXEL,
    ADNS_SHUTTER_UPPER,
    ADNS_SHUTTER_LOWER,
    ADNS_FRAME_PERIOD_UPPER,
    ADNS_FRAME_PERIOD_LOWER
};

unsigned char mem_data[127] = {
    0x33, // ADNS_PRODUCT_ID
    0x03, // ADNS_REVISION_ID
    0x00, // ADNS_MOTION
    0x00, // ADNS_DELTA_X_L
    0x00, // ADNS_DELTA_X_H
    0x00, // ADNS_DELTA_Y_L
    0x00, // ADNS_DELTA_Y_H
    0xa9, // ADNS_SQUAL
    0x00, // ADNS_PIXEL_SUM
    0x00, // ADNS_MAX_PIXEL
    0x00, // ADNS_MIN_PIXEL
    0x20, // ADNS_SHUTTER_LOWER
    0x4e, // ADNS_SHUTTER_UPPER
    0xc0, // ADNS_FRAME_PERIOD_LOWER
    0x5d, // ADNS_FRAME_PERIOD_UPPER
    0x12, // ADNS_CONFIG_I
    0x00, // ADNS_CONFIG_II
    0x00, // Reserved
    0x00, // ADNS_FRAME_CAPTURE
    0x00, // ADNS_SROM_ENABLE
    0x32, // ADNS_RUN_DOWNSHIFT
    0x01, // ADNS_REST1_RATE
    0x1f, // ADNS_REST1_DOWNSHIFT
    0x09, // ADNS_REST2_RATE
    0xbc, // ADNS_REST2_DOWNSHIFT
    0x31, // ADNS_REST3_RATE
    0xc0, // ADNS_FP_MAX_BOUND_LOWER
    0x5d, // ADNS_FP_MAX_BOUND_UPPER
    0xa0, // ADNS_FP_MIN_BOUND_LOWER
    0x0f, // ADNS_FP_MIN_BOUND_UPPER
    0x20, // ADNS_SHUTTER_MAX_BOUND_LOWER
    0x4e, // ADNS_SHUTTER_MAX_BOUND_UPPER
    0x81, // ADNS_LASER_CTRL0
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // ADNS_OBSERVATION
    0x00, // ADNS_DATA_OUT_LOWER
    0x00, // ADNS_DATA_OUT_UPPER
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // ADNS_SROM_ID
    0x10, // ADNS_LIFT_DETECTION_THREASHOLD
    0x12, // ADNS_CONFIG_V
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // ADNS_CONFIG_IV
    0x00, // ADNS_POWER_UP_RESET
    0x00, // ADNS_SHUTDOWN
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0xcc, // ADNS_INVERSE_PRODUCT_ID
    0x00, // Reserved
    0x00, // Reserved
    0x06, // ADNS_SNAP_ANGLE
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved
    0x00, // Reserved

};



unsigned char parse_packet(unsigned char packet, unsigned char data) {
    unsigned char command = packet & ADNS_COMMAND_mask;
    if(packet & ADNS_WRITE_mask)
    { // Write Operation

    }
    else
    { // Read Operation

    }
}

unsigned char read_command(unsigned char command) {

}

void append_to_send_buffer(unsigned char data) {
    // append data
}