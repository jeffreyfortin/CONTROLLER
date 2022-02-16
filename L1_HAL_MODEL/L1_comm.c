#include "L1_comm.h"

int rx_cnt=0;
int tx_cnt=0;

void comm_isr(void)
{
	unsigned int sts_reg;

	sts_reg = *COMM_STATUS_REG;
	if (sts_reg & TX_COMPLETE)
	{
		*COMM_COMMAND_REG = *COMM_COMMAND_REG | TX_ACK;
		led_ctrl(TX_LED, GREEN );
		tx_cnt++;
	}
	else if (sts_reg & TX_ERROR)
	{
		*COMM_COMMAND_REG = *COMM_COMMAND_REG | TX_ACK;
		led_ctrl(TX_LED, RED );
	}

	else if (sts_reg & RX_DATA_RDY)
	{
		post_msg(COMM_RX_BUFFER);
		*COMM_COMMAND_REG = *COMM_COMMAND_REG | RX_ACK;
		led_ctrl(RX_LED, GREEN );
		rx_cnt++;
	}
	else if (sts_reg & RX_ERROR)
	{
		*COMM_COMMAND_REG = *COMM_COMMAND_REG | RX_ACK;
		led_ctrl(RX_LED, RED );
	}

	else if (sts_reg & GENERAL_ERROR)
	{
		*COMM_COMMAND_REG = *COMM_COMMAND_REG | DEVICE_RESET;
		led_ctrl(RESET_LED, RED );
	}

	return;
}

int comm_fn_0000(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0001(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0002(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0003(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0004(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0005(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0006(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0007(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0008(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0009(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0010(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0011(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0012(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0013(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0014(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0015(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0016(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0017(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0018(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0019(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0020(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0021(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0022(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0023(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0024(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0025(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0026(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0027(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0028(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0029(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0030(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0031(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0032(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0033(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0034(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0035(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0036(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0037(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0038(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0039(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0040(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0041(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0042(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0043(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0044(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0045(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0046(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0047(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0048(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}

int comm_fn_0049(int int_param) {
	int int_local;

	int_local = int_param;

	if (int_local == 1)
        int_param++;
	
	if (int_local == 0)
		int_param--;
	
	return (int_param);
}
