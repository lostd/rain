PREFIX = /usr/local
LDLIBS = -lcurses
BIN = rain
MAN = rain.6

all: $(BIN)

rain: rain.c strtonum.c
	$(CC) -o $(@) $(LDLIBS) rain.c strtonum.c

install: $(BIN) $(MAN)
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f $(BIN) $(DESTDIR)$(PREFIX)/bin/
	mkdir -p $(DESTDIR)$(PREFIX)/man/man6
	cp -f $(MAN) $(DESTDIR)$(PREFIX)/man/man6/

clean:
	rm -f $(BIN)

.PHONY: all clean install
