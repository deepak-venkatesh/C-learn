## Compile with warnings

gcc -Wall -Wextra -g linkedlist.c -o linkedlist.exe

| Argument        | Purpose                                         |
|-----------------|-------------------------------------------------|
| `gcc`           | Invokes the GCC compiler                        |
| `-Wall`         | Enables commonly useful warnings                |
| `-Wextra`       | Enables additional warnings                     |
| `-g`            | Generates debugging information for LLDB or GDB |
| `linkedlist.c`  | Your C source file                              |
| `-o`            | Specifies the output filename                   |
| `linkedlist.exe`| The executable to be generated                  |

## Generate assembly code

gcc -S smallest.c -o smallest.s

## Check return code of program in terminal

.\smallest.exe
echo $LASTEXITCODE

## Generate preprocessed C code

gcc -E smallest.c -o smallest.i

## Generate object code without linking

gcc -c smallest.c -o smallest.o

## Link object code to generate an executable

gcc smallest.o -o smallest.exe

## Disassemble object code

objdump -d smallest.o

## Generate all intermediate files

gcc -save-temps smallest.c -o smallest.exe

## Display detailed compilation process

gcc -v smallest.c -o smallest.exe