cd rust
cargo build --release
echo "---- timing rust release ./target/release/io_test ----"
/usr/bin/time -v ./target/release/io_tests

cd ../cpp
make
echo "---- timing c++ ./io_test ----"
/usr/bin/time -v ./io_test
echo "---- timing c++ ./io_test_static ----"
/usr/bin/time -v ./io_test_static
