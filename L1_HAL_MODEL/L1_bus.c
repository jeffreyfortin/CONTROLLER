#include "L1_bus.h"

int rx_cnt=0;
int tx_cnt=0;

void bus_isr(void)
{
	unsigned int sts_reg;

	sts_reg = *BUS_STATUS_REG;
	if (sts_reg & TX_COMPLETE)
	{
		*BUS_COMMAND_REG = *BUS_COMMAND_REG | TX_ACK;
		led_ctrl(TX_LED, GREEN );
		tx_cnt++;
	}
	else if (sts_reg & TX_ERROR)
	{
		*BUS_COMMAND_REG = *BUS_COMMAND_REG | TX_ACK;
		led_ctrl(TX_LED, RED );
	}

	else if (sts_reg & RX_DATA_RDY)
	{
		post_msg(BUS_RX_BUFFER);
		*BUS_COMMAND_REG = *BUS_COMMAND_REG | RX_ACK;
		led_ctrl(RX_LED, GREEN );
		rx_cnt++;
	}
	else if (sts_reg & RX_ERROR)
	{
		*BUS_COMMAND_REG = *BUS_COMMAND_REG | RX_ACK;
		led_ctrl(RX_LED, RED );
	}

	else if (sts_reg & GENERAL_ERROR)
	{
		*BUS_COMMAND_REG = *BUS_COMMAND_REG | DEVICE_RESET;
		led_ctrl(RESET_LED, RED );
	}

	return;
}
