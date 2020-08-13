for i in examples/*/*.c
do
    echo "$i:    "
    gcc -w $i             #compile with gcc
    ./a.out                 	#run it
    expected=$?             	#get exit code
    ./MiniDecaf $i > test/out/asm.S
    riscv64-unknown-elf-gcc test/out/asm.S -o test/out/run
    spike pk test/out/run
    # base="${i%.*}"
    # ./out                      #run the thing we assembled
    actual=$?                  #get exit code

    if [ "$expected" -ne "$actual" ]
    then
        echo "FAIL"
        echo $actual
        echo $expected
        exit 1
    else
        echo "OK"
    fi
    rm a.out
done

#tested in ubutnu 20.04 x86-64
