echo "If fails, make sure shell var CC is defined. CC=gcc"

mkdir build
$(CC) -s ../src/marty.cc -o ../build/marty
mv ../src/marty /usr/local/bin/marty

echo "Done"