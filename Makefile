ifneq ($(KERNELRELEASE),)
# kbuild part of makefile
obj-m   := main.o
ccflags-y += -g
else
# normal makefile
KDIR ?= /lib/modules/`uname -r`/build

default:
	$(MAKE) -C $(KDIR) M=$$PWD
	cp main.ko main.ko.unstripped
	$(CROSS_COMPILE)strip -dS main.o
clean:
	$(MAKE) -C $(KDIR) M=$$PWD clean
endif