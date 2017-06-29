

FILE_NAME=$1

rm ${FILE_NAME} ${FILE_NAME}.o ${FILE_NAME.s}

gcc -S -masm=intel ${FILE_NAME}.c
gcc -c ${FILE_NAME}.s -o ${FILE_NAME}.o
gcc ${FILE_NAME}.o -o ${FILE_NAME}

ls -lha .

