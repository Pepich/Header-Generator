CC := gcc
CCFLAGS := -Wall

CEXE := mkfile
CSRC := $(CEXE).c
COBJ := $(patsubst %.c,%.o,$(CSRC))

all: $(CEXE)

.SUFFIXES:
.SECONDARY:

%: %.o $(COBJ)
	$(CC) $(COBJ) -o $@

%.o: %.c
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -f $(COBJ) $(CEXE)
