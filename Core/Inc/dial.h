#include "main.h"
#include "can.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* DIAL CONFIG */
#define DIAL_FREQUENCY 100 // How often to check the dial status (unit is ms)

/* CAN ID */
#define DIAL_CANID_IO 0x681

/*
* @brief Check if the dial timer has expired.
* @return true if the timer has expired, false otherwise.
*/
bool dial_timer();

/*
* @brief Check which dial switch is currently active.
* @return The active switch number (1-5) or -1 if none are active.
*/
int8_t which_switch();

/*
* @brief Check the status of the dial and send a CAN message with the current dial setting.
* @param can Pointer to the CAN interface structure.
*/
void check_dial_status(can_t *can);