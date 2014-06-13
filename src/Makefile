NDPI_PATH2 := ${NDPI_PATH}/src
NDPI_SRC := ndpi_cpy
NDPI_PRO := ${NDPI_SRC}/lib/protocols
NDPI_THIRD_PARTY := ${NDPI_SRC}/lib/third_party
NDPI_THIRD_PARTY_SRC := ${NDPI_THIRD_PARTY}/src


ccflags-y += -I${src}/${NDPI_SRC}/include -I${src}/${NDPI_SRC}/lib -DOPENDPI_NETFILTER_MODULE -I${src}/${NDPI_THIRD_PARTY}/include

third_party := \
                ${NDPI_THIRD_PARTY_SRC}/ahocorasick.o \
                ${NDPI_THIRD_PARTY_SRC}/node.o \
                ${NDPI_THIRD_PARTY_SRC}/sort.o \

ndpi := \
                ${NDPI_SRC}/lib/ndpi_main.o \
                $(shell echo $(patsubst %.c,%.o, $(wildcard ${NDPI_PATH2}/lib/protocols/*.c)) | sed "s@${NDPI_PATH2}@${NDPI_SRC}@g")

obj-m := xt_ndpi.o
xt_ndpi-y := main.o  $(third_party) $(ndpi)

all:
	if test -d ${NDPI_SRC}; then \
		cp ${NDPI_PATH2}/* ${NDPI_SRC} -R; \
	else \
		mkdir ${NDPI_SRC}; \
		cp ${NDPI_PATH2}/* ${NDPI_SRC} -R; \
	fi
	make -C ${KERNEL_DIR} M=$$PWD;
	rm -r ${NDPI_SRC}
modules:
	make -C ${KERNEL_DIR} M=$$PWD $@;
modules_install:
	make -C ${KERNEL_DIR} M=$$PWD $@;
	depmod -a;
clean:
	make -C ${KERNEL_DIR} M=$$PWD $@;
	rm -rf modules.order ${NDPI_SRC}
