obj -m += my_module.o

KDIR = /usr/src/linux-headers-3.0.0-16

all:
$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
rm -rf *.o *.ko *.mod *.symvers *.order
