#
# Makefile for MMC/SD card drivers
#

ifeq ($(CONFIG_MMC_DEBUG),y)
	EXTRA_CFLAGS		+= -DDEBUG
endif

obj-$(CONFIG_MMC_BLOCK)		+= mmc_block.o
mmc_block-objs			:= block.o queue.o sd_mcex.o

obj-$(CONFIG_SDIO_UART)		+= sdio_uart.o

