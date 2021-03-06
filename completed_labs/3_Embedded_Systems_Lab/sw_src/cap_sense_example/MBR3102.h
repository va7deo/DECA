/*
 * MBR3102.h
 *
 *  Created on: Jan 31, 2015
 *      Author: tjd
 */

#ifndef MBR3102_H_
#define MBR3102_H_

#define SENSOR_EN                  0x00
#define FSS_EN                     0x02
#define TOGGLE_EN                   0x04
#define LED_ON_EN                  0x06
#define SENSITIVITY0               0x08
#define SENSITIVITY1               0x09
#define SENSITIVITY2               0x0a
#define SENSITIVITY3               0x0b
#define BASE_THRESHOLD0             0x0c
#define BASE_THRESHOLD1             0x0d
#define FINGER_THRESHOLD2           0x0e
#define FINGER_THRESHOLD3           0x0f
#define FINGER_THRESHOLD4           0x10
#define FINGER_THRESHOLD5           0x11
#define FINGER_THRESHOLD6           0x12
#define FINGER_THRESHOLD7           0x13
#define FINGER_THRESHOLD8           0x14
#define FINGER_THRESHOLD9           0x15
#define FINGER_THRESHOLD10          0x16
#define FINGER_THRESHOLD11          0x17
#define FINGER_THRESHOLD12          0x18
#define FINGER_THRESHOLD13          0x19
#define FINGER_THRESHOLD14          0x1a
#define FINGER_THRESHOLD15          0x1b
#define SENSOR_DEBOUNCE            0x1c
#define BUTTON_HYS                 0x1d
#define BUTTON_LBR                  0x1f
#define BUTTON_NNT                 0x20
#define BUTTON_NT                  0x21
#define PROX_EN                    0x26
#define PROX_CFG                   0x27
#define PROX_CFG2                  0x28
#define PROX_TOUCH_TH0             0x2a
#define PROX_TOUCH_TH1             0x2c
#define PROX_RESOLUTION0            0x2e
#define PROX_RESOLUTION1            0x2f
#define PROX_HYS                   0x30
#define PROX_LBR                   0x32
#define PROX_NNT                   0x33
#define PROX_NT                    0x34
#define PROX_POSITIVE_TH0          0x35
#define PROX_POSITIVE_TH1          0x36
#define PROX_NEGATIVE_TH0          0x39
#define PROX_NEGATIVE_TH1          0x3a
#define LED_ON_TIME                0x3d
#define BUZZER_CFG                 0x3e
#define BUZZER_ON_TIME             0x3f
#define GPO_CFG                    0x40
#define PWM_DUTYCYCLE_CFG0         0x41
#define PWM_DUTYCYCLE_CFG1         0x42
#define PWM_DUTYCYCLE_CFG2         0x43
#define PWM_DUTYCYCLE_CFG3         0x44
#define PWM_DUTYCYCLE_CFG4         0x45
#define PWM_DUTYCYCLE_CFG5         0x46
#define PWM_DUTYCYCLE_CFG6         0x47
#define PWM_DUTYCYCLE_CFG7         0x48
#define SPO_CFG                    0x4c
#define DEVICE_CFG0                0x4d
#define DEVICE_CFG1                0x4e
#define DEVICE_CFG2                0x4f
#define DEVICE_CFG3                0x50
#define I2C_ADDR                   0x51
#define REFRESH_CTRL               0x52
#define STATE_TIMEOUT              0x55
#define SLIDER_CFG                 0x5d
#define SLIDER1_CFG                0x61
#define SLIDER1_RESOLUTION         0x62
#define SLIDER1_THRESHOLD          0x63
#define SLIDER2_CFG                0x67
#define SLIDER2_RESOLUTION         0x68
#define SLIDER2_THRESHOLD          0x69
#define SLIDER_LBR                 0x71
#define SLIDER_NNT                 0x72
#define SLIDER_NT                  0x73
#define CONFIG_CRC                 0x7e
#define GPO_OUTPUT_STATE           0x80
#define SENSOR_ID                  0x82
#define CTRL_CMD                   0x86
#define CTRL_CMD_STATUS            0x88
#define CTRL_CMD_ERR               0x89
#define SYSTEM_STATUS              0x8a
#define PREV_CTRL_CMD_CODE         0x8c
#define FAMILY_ID                  0x8f
#define DEVICE_ID                  0x90
#define DEVICE_REV                 0x92
#define CALC_CRC                   0x94
#define TOTAL_WORKING_SNS          0x97
#define SNS_CP_HIGH                0x98
#define SNS_VDD_SHORT              0x9a
#define SNS_GND_SHORT              0x9c
#define SNS_SNS_SHORT              0x9e
#define CMOD_SHIELD_TEST           0xa0
#define BUTTON_STAT                0xaa
#define LATCHED_BUTTON_STAT        0xac
#define PROX_STAT                  0xae
#define LATCHED_PROX_STAT          0xaf
#define SLIDER1_POSITION           0xb0
#define LIFTOFF_SLIDER1_POSITION   0xb1
#define SLIDER2_POSITION           0xb2
#define LIFTOFF_SLIDER2_POSITION   0xb3
#define SYNC_COUNTER0              0xb9
#define DIFFERENCE_COUNT_SENSOR0   0xba
#define DIFFERENCE_COUNT_SENSOR1   0xbc
#define DIFFERENCE_COUNT_SENSOR2   0xbe
#define DIFFERENCE_COUNT_SENSOR3   0xc0
#define DIFFERENCE_COUNT_SENSOR4   0xc2
#define DIFFERENCE_COUNT_SENSOR5   0xc4
#define DIFFERENCE_COUNT_SENSOR6   0xc6
#define DIFFERENCE_COUNT_SENSOR7   0xc8
#define DIFFERENCE_COUNT_SENSOR8   0xca
#define DIFFERENCE_COUNT_SENSOR9   0xcc
#define DIFFERENCE_COUNT_SENSOR10  0xce
#define DIFFERENCE_COUNT_SENSOR11  0xd0
#define DIFFERENCE_COUNT_SENSOR12  0xd2
#define DIFFERENCE_COUNT_SENSOR13  0xd4
#define DIFFERENCE_COUNT_SENSOR14  0xd6
#define DIFFERENCE_COUNT_SENSOR15  0xd8
#define GPO_DATA                   0xda
#define SYNC_COUNTER1              0xdb
#define DEBUG_SENSOR_ID            0xdc
#define DEBUG_CP                   0xdd
#define DEBUG_DIFFERENCE_COUNT0    0xde
#define DEBUG_BASELINE0            0xe0
#define DEBUG_RAW_COUNT0           0xe2
#define DEBUG_AVG_RAW_COUNT0       0xe4
#define SYNC_COUNTER2              0xe7



#endif /* MBR3102_H_ */
