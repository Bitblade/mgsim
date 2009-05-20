/*
 This test case caused an infinite loop in the pipeline
 where the Waiting register was picked up from a later
 state in the pipeline, despite that the register in the
 register file was full.
 
 The nop after the print is required to allow the memory
 stage to write to the register file (otherwise the pipeline
 would get continuous priority and the memory would simply
 wake up all suspended threads).
*/
    .file "inf_pipeline_wait_loop.s"
    
    .globl _start
    .align 64
_start:
    setempty %1
    allocate %2, 0, 0, 0, 0
    setlimit %2, 250
    cred foo, %2
    
    set X, %5
    ld  [%5], %1
    
    # Sync
    mov %2, %0
    end

    .align 64
foo:
    .registers 1 0 0 0 0 0
    print %g0, 0
    nop
    end

    .data
X:
    .int 42