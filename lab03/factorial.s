.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)

    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    addi a2 a0 0    # for copying the vlaue of a0(aka n)
    addi a3 a3 1    # Making a stop condition
    
loop:
    addi a0 a0 -1   # making n-1 
    mul a2 a2 a0    # multiply the n * (n-1)
    bne a0 a3 loop  # loop until it is not equal to 1
    addi a0 a2 0    # save the value of a2 to a0 for returning
    jr ra           # jump back to main.