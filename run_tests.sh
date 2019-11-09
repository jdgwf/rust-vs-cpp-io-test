cd rust
cargo build --release
/usr/bin/time -v ./target/release/io_tests

cd ../cpp
make
/usr/bin/time -v ./io_test
/usr/bin/time -v ./io_test_static
