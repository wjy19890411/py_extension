# Makefile toys.

.PHONY: clean

clean:
	rm -rf ./build

cppdemo: cppdemo.cc
	python2 setup.py install

cppdemo_test: cppdemo.cc cppdemo_test.py
	python2 setup.py install
	python2 cppdemo_test.py

