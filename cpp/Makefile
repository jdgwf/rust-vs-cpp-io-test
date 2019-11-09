default:
	g++ io_test.cpp -O3 -o io_test
	strip io_test
	g++ io_test.cpp -static -static-libgcc -O3 -o io_test_static
	strip io_test_static

zip:
	rm -f io_test.zip
	zip io_test.zip *
