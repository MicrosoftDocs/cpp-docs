# Shadow bytes

We summarize the runtime implementation of -fsanitize=address. For futher details we refer you to the [seminal paper](
https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf).

## Core concept

Every 8-bytes in your application's virtual address space can be described with one shadow byte.

The shadow-byte describes how many bytes in the 8-byte user address are currently accessible.

 - 0  means all 8 bytes
 - 1-7 means 1 to seven bytes
 - Negtive numbers encode context for the runtime to diagnose
 
Consider this legend:

![shadow-legend](.\MEDIA\ASan-ShadowByte-Legend.PNG)


## Mapping

Every 8-byte address that is 0 mod 8 aligned, can be mapped to the shadow byte that describes that slot in the virtual address space.  This mapping can be accomplished with a simple shift and add.

On x86:

            char shadow_byte_value = *((Your_Address >> 3) + 0x30000000)

On amd64:

            char shadow_byte_value = *((Your_Address >> 3) + _asan_runtime_assigned_offset)


## Code generation 

Once the shadow bytes have been written, either by the compiler generated code or the runtime. Then the following pseudo code shows how it would be simple to generate a check that would precede any load or store.

```cpp
        ShadowAddr = (Addr >> 3) + Offset;
        if (*ShadowAddr != 0) {
            ReportAndCrash(Addr);
        }
```
When instrumenting 1-, 2-, or 4- byte accesses, the instrumentation is slightly more complex: if the shadow value is positive (i.e., only the first k bytes in the 8-byte word are addressable) we need to compare the 3 last bits of the address with k.

```cpp
        ShadowAddr = (Addr >> 3) + Offset;
        k = *ShadowAddr;
        if (k != 0 && ((Addr & 7) + AccessSize > k)) {
            ReportAndCrash(Addr);
        }
```

The runtime and the compiler generated code, will write shadow bytes to allow or revoke access when scopes end or storage is freed. The shadow bytes describe 8-byte slots in the application space, at a certain time in the programs execution.


