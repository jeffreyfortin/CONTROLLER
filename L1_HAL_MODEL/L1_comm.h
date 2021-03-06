#ifndef _RXTX_H
#define _RXTX_H

/*
 *  Memory Mapped Device Addresses
 */
#define COMM_DEVICE_MEMORY_BASE  ((unsigned int *)(0x8000000))
#define COMM_STATUS_REG          ((unsigned int *)(COMM_DEVICE_MEMORY_BASE + 0x100))
#define COMM_COMMAND_REG         ((unsigned int *)(COMM_DEVICE_MEMORY_BASE + 0x200))
#define COMM_TX_BUFFER           ((unsigned int *)(COMM_DEVICE_MEMORY_BASE + 0x400))
#define COMM_RX_BUFFER           ((unsigned int *)(COMM_DEVICE_MEMORY_BASE + 0x800))

/*
 * Status Register Bits.
 */
#define GENERAL_ERROR	0x00000001
#define TX_ERROR	0x00000002
#define RX_ERROR	0x00000004
#define TX_COMPLETE	0x00000008
#define RX_DATA_RDY	0x00000010

/*
 * Command Register Bits.
 */
#define DEVICE_RESET	0x00000001
#define TX_ACK  	0x00000002
#define RX_ACK  	0x00000004



enum e_led_color
{
  RED,
  GREEN,
  OFF
}
  ;
typedef enum e_led_color t_led_color;

#define RX_LED 1
#define TX_LED 2
#define RESET_LED 3

void led_ctrl(int led_num, t_led_color color);
int post_msg(void *msg_ptr);
void comm_isr(void);
int comm_fn_0000  (int int_param);
int comm_fn_0001  (int int_param);
int comm_fn_0002  (int int_param);
int comm_fn_0003  (int int_param);
int comm_fn_0004  (int int_param);
int comm_fn_0005  (int int_param);
int comm_fn_0006  (int int_param);
int comm_fn_0007  (int int_param);
int comm_fn_0008  (int int_param);
int comm_fn_0009  (int int_param);
int comm_fn_0010  (int int_param);
int comm_fn_0011  (int int_param);
int comm_fn_0012  (int int_param);
int comm_fn_0013  (int int_param);
int comm_fn_0014  (int int_param);
int comm_fn_0015  (int int_param);
int comm_fn_0016  (int int_param);
int comm_fn_0017  (int int_param);
int comm_fn_0018  (int int_param);
int comm_fn_0019  (int int_param);
int comm_fn_0020  (int int_param);
int comm_fn_0021  (int int_param);
int comm_fn_0022  (int int_param);
int comm_fn_0023  (int int_param);
int comm_fn_0024  (int int_param);
int comm_fn_0025  (int int_param);
int comm_fn_0026  (int int_param);
int comm_fn_0027  (int int_param);
int comm_fn_0028  (int int_param);
int comm_fn_0029  (int int_param);
int comm_fn_0030  (int int_param);
int comm_fn_0031  (int int_param);
int comm_fn_0032  (int int_param);
int comm_fn_0033  (int int_param);
int comm_fn_0034  (int int_param);
int comm_fn_0035  (int int_param);
int comm_fn_0036  (int int_param);
int comm_fn_0037  (int int_param);
int comm_fn_0038  (int int_param);
int comm_fn_0039  (int int_param);
int comm_fn_0040  (int int_param);
int comm_fn_0041  (int int_param);
int comm_fn_0042  (int int_param);
int comm_fn_0043  (int int_param);
int comm_fn_0044  (int int_param);
int comm_fn_0045  (int int_param);
int comm_fn_0046  (int int_param);
int comm_fn_0047  (int int_param);
int comm_fn_0048  (int int_param);
int comm_fn_0049  (int int_param);

#endif
