#include "dial.h"
#include <stdlib.h>

bool dial_timer()
{
	static uint32_t last_time = 0;
	/* Check if the timer has expired */
	if (HAL_GetTick() - last_time >= DIAL_FREQUENCY) {
		last_time = HAL_GetTick(); // Update the last time
		return true; // Timer expired
	}
	return false; // Timer not expired
}

int8_t which_switch()
{
	/* Check which dial pin is currently active */
	if (HAL_GPIO_ReadPin(Switch_1_GPIO_Port, Switch_1_Pin))
		return 1; // Switch 1
	if (HAL_GPIO_ReadPin(Switch_2_GPIO_Port, Switch_2_Pin))
		return 2; // Switch 2
	if (HAL_GPIO_ReadPin(Switch_3_GPIO_Port, Switch_3_Pin))
		return 3; // Switch 3
	if (HAL_GPIO_ReadPin(Switch_4_GPIO_Port, Switch_4_Pin))
		return 4; // Switch 4
	if (HAL_GPIO_ReadPin(Switch_5_GPIO_Port, Switch_5_Pin))
		return 5; // Switch 5
	return -1; // None active?? should not be possible unless hardware wrong
}

void check_dial_status(can_t *can)
{
	int8_t current_switch =
		which_switch(); // Check which switch is active (i.e. which dial setting is selected)

	/* Send CAN Message */
	can_msg_t can_msg = { .len = sizeof(uint8_t), .id = DIAL_CANID_IO };
	memcpy(&can_msg.data, &current_switch, 1);
	can_send_msg(can, &can_msg);
	printf("CURRENT DIAL STATUS: %d\n", current_switch);
}