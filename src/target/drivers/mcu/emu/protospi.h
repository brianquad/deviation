#ifndef _SPIPROTO_H_
#define _SPIPROTO_H_

u8 PROTOSPI_read3wire();
u8 PROTOSPI_xfer(u8 byte);
#define PROTOSPI_pin_set(io) do {} while (0)
#define PROTOSPI_pin_clear(io) do {} while (0)
#define PROTOSPI_pin_get(io) (0)
#define _NOP() if(0) {}

#pragma weak A7105_Reset
#pragma weak CC2500_Reset
#pragma weak CYRF_Reset
#endif // _SPIPROTO_H_
