#include "main.h"
#include "can.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef enum {
	BUTTON_LEFT,
	BUTTON_RIGHT,
	BUTTON_ESC,
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_ENTER,
	SPARE_BUTTON,
	MAX_BUTTON_SIZE,
} steeringio_button_t;

/**
 * @brief Called when a button interrupt is triggered. Sends a CAN message with the button's id.
 */
void button_pressed(GPIO_TypeDef *port, uint16_t GPIO_Pin, uint8_t button_id,
		    can_t *can);

/* CAN ID */
#define BUTTON_CANID_IO 0x680

/* Debounce Config */
#define DEBOUNCE_BUTTON_TIME 8 // unit is ms
#define DEBOUNCE_BUTTON_ON   0 // 0 for off, 1 for on