/*  
 * Contains macros for kyvernitis CAN.
 */
#define LATTEPANDA_ID 0x100
#define BIO_ARM_ID 0x300
#define GRIPPER_ARM_ID 0x200
#define ASTRO_ASSIST_ID 0x400
#define FPV_SWITCH_ID 0x500 

/*
* Actuators will range from 10 - 25 
* Roboclaws- 2 
* Sabertooths 2
* Servos will range from 15 - 19
* DC motor will range from 25 - 28
* Stepper motor will range from 20 - 21
*/
#define ACTUATOR_COMMAND_ID 10
#define SENSOR_DATA_ID 30
#define FPV_SWITCH_CMD_ID 40

#define ROBOCLAW_BASE_ID 10
#define SABERTOOTH_BASE_ID 12
#define SERVO_BASE_ID 15
#define L298N_BASE_ID 25
#define STEPPER_BASE_ID 20
