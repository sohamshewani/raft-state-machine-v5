all:
	make build

build:
	make src
	make test

clean:
	rm -f src/*.o src/*.d obj/*.o obj/*.d src/raft-state-machine

clean_test:
	rm -f tests/test_runner

src:
	make -C src

test:
	make -C tests

check: test
	@echo "Unit tests passed."

integrate: test
	@echo "Integration tests passed."

run:
	./src/raft-state-machine
