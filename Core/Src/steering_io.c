#include "steering_io.h"
#include <stdlib.h>

extern volatile int switch_state;

void button_pressed(GPIO_TypeDef *port, uint16_t GPIO_Pin, uint8_t button_id,
		    can_t *can)
{
	/* Debounce Logic */
	if (DEBOUNCE_BUTTON_ON) {
		HAL_Delay(DEBOUNCE_BUTTON_TIME);
		if (HAL_GPIO_ReadPin(port, GPIO_Pin) == GPIO_PIN_RESET) {
			printf("Failed to read the pin for button %d when doing debounce check.\n",
			       button_id);
			return;
		}
	}

	/* Send CAN Message */
	can_msg_t can_msg = { .len = sizeof(uint8_t), .id = BUTTON_CANID_IO };
	memcpy(&can_msg.data, &button_id, 1);
	can_send_msg(can, &can_msg);
	printf("Button %d pressed\n", button_id + 1);
}

int which_pin()
{
	/* Check if the pin is pressed */
	if (HAL_GPIO_ReadPin(GPIOB, Switch_1_Pin)) return 1; // Switch 1
	if (HAL_GPIO_ReadPin(GPIOB, Switch_2_Pin)) return 2; // Switch 2
	if (HAL_GPIO_ReadPin(GPIOB, Switch_3_Pin)) return 3; // Switch 3
	if (HAL_GPIO_ReadPin(GPIOB, Switch_4_Pin)) return 4; // Switch 4
	if (HAL_GPIO_ReadPin(GPIOB, Switch_5_Pin)) return 5; // Switch 5
	return -1;
}

void dial_switched(GPIO_TypeDef *port, uint16_t GPIO_Pin, uint8_t switch_id,
		   can_t *can)
{
	/* Send CAN Message */
	//can_msg_t can_msg = { .len = sizeof(uint8_t), .id = DIAL_CANID_IO };
	//memcpy(&can_msg.data, &pin, 1);
	//can_send_msg(can, &can_msg);
	//printf("Dial switched to id %d\n", pin + 1);
}
