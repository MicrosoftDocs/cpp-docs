
## STUFF TO KEEP -- remove later!!!!!

## Viewing Address Saniziter Errors ##

There are three ways your code can generate error reports:

- [Command line](#Command-line)
- [IDE](#IDE)
- [Snapshot files](#Snapshot-file)

These types of reports can be generated for many types of [errors found at runtime](#Error-types). 

### Example 

!!! Jim, I think we need a simpler example here. !!!
The following source code is **safe by coincidence**. It will **not** fail at runtime. The Windows 10, 16.9 version of the C runtime, will pad the 13 bytes requested, in order to facilitate alignment for subsequent calls to alloca. 

```cpp
    int x = 13;

    void main()
    {
        int *cc; 
        int i;
        int k = 17;

         __try{

            cc = (int*)_alloca(x);  // Cast pointer to 1-byte to pointer to 4-bytes
            if (((int)cc) & 0x3)
                fail = 1;

            cc[0] = 1;
            cc[1] = 1;
            cc[2] = 2;
            cc[3] = 3;  //Boom! Only caught with -fsanitize=address
```

Padding and alignment is platform dependent. It's a function of the CRT used on a particular operating system and whether the target is 32-bits, or 64-bits. The above example, or a slightly modified version, could produce different runtime results on Linux macOS or Android.

### Command line ###

If you run from the command line then your binary will emit formatted text reports to the screen. Consider the over layed, red boxes which high light four (4) key pieces of information from the error in the _alloca example.

![Command line: alloca](media\CommandLine-alloca.png)

From top to bottom

1.) A write of 4 bytes (32-bits) went beyond the stack allocation the program explicitly requested.

2.) That store was produced from line 47 in the function "main"

3.) The type of error was a dynamic stack buffer overflow for the 13 bytes explicitly requested.

4.) The [**shadow bytes**](.\asan-shadowbytes.md) that correspond to the address used in the overflowing store, indicate 13 bytes (8 + 5) were explicitly allocated for the alloca.

**Note:**  The call stack is converted to function names through the [LLVM symbolizer](https://llvm.org/docs/CommandGuide/llvm-symbolizer.html). The Address Sanitizer creates the rest of of the report based on its context, the shadow bytes, and meta-data the compiler produces.

### IDE

By simply recompiling with -fsanitze=address and invoking Visual Studio from the command line, the IDE will automatically map a pop up to the line and column causing the error.

                                     devenv /debugexe MyApp.exe arg1 arg2 ... argn

Consider the following error found in our cached version of spec2k6\povray where the program allocates 24-bytes but only frees 8-bytes. The details for where the allocation and free took place are in the **output pane** of the Visual Studio screen shot immediately below:

![IDE: povray](media\povray.png)


### VCASan library

The flag -fsanitize=address automatically links a new static library to your .EXE or .DLL. This static library will automatically produce:

- In memory meta-data for directly interfacing with the VS IDE, [while debugging](#Error-types).
- An optional [snap shot file](#Snapshot-files) with the same IDE meta-data.
