---
title: "_InterlockedDecrement intrinsic functions"
description: "Microsoft C/C++ compiler intrinsic functions for interlocked decrement."
ms.date: 09/03/2020
f1_keywords: ["_InterlockedDecrement16_rel_cpp", "_InterlockedDecrement16_acq_cpp", "_InterlockedDecrement16_rel", "_InterlockedDecrement64_acq", "_InterlockedDecrement_nf", "_InterlockedDecrement16_nf", "_InterlockedDecrement64_rel_cpp", "_InterlockedDecrement_rel_cpp", "_InterlockedDecrement16_acq", "_InterlockedDecrement64_acq_cpp", "_InterlockedDecrement_rel", "_InterlockedDecrement64_nf", "_InterlockedDecrement16_cpp", "_InterlockedDecrement64", "_InterlockedDecrement_cpp", "_InterlockedDecrement64_rel", "_InterlockedDecrement16", "_InterlockedDecrement", "_InterlockedDecrement64_cpp", "_InterlockedDecrement_acq", "_InterlockedDecrement_acq_cpp"]
helpviewer_keywords: ["InterlockedDecrement64_rel intrinsic", "InterlockedDecrement64 intrinsic", "_InterlockedDecrement16 intrinsic", "_InterlockedDecrement16_acq intrinsic", "_InterlockedDecrement intrinsic", "_InterlockedDecrement_nf intrinsic", "_InterlockedDecrement_acq intrinsic", "_InterlockedDecrement64_rel intrinsic", "_InterlockedDecrement16_rel intrinsic", "InterlockedDecrement intrinsic", "InterlockedDecrement16 intrinsic", "_InterlockedDecrement16_nf intrinsic", "InterlockedDecrement64_acq intrinsic", "_InterlockedDecrement_rel intrinsic", "InterlockedDecrement_acq intrinsic", "_InterlockedDecrement64_acq intrinsic", "_InterlockedDecrement64 intrinsic", "_InterlockedDecrement64_nf intrinsic", "InterlockedDecrement_rel intrinsic"]
ms.assetid: 5268fce3-86b5-4b2b-b96c-2e531a3fb9b5
---
# `_InterlockedDecrement` intrinsic functions

Provides compiler intrinsic support for the Win32 Windows SDK [InterlockedDecrement](/windows/win32/api/winnt/nf-winnt-interlockeddecrement) function. The `_InterlockedDecrement` intrinsic functions are **Microsoft-specific**.

## Syntax

```C
long _InterlockedDecrement(
   long volatile * lpAddend
);
long _InterlockedDecrement_acq(
   long volatile * lpAddend
);
long _InterlockedDecrement_rel(
   long volatile * lpAddend
);
long _InterlockedDecrement_nf(
   long volatile * lpAddend
);
short _InterlockedDecrement16(
   short volatile * lpAddend
);
short _InterlockedDecrement16_acq(
   short volatile * lpAddend
);
short _InterlockedDecrement16_rel(
   short volatile * lpAddend
);
short _InterlockedDecrement16_nf(
   short volatile * lpAddend
);
__int64 _InterlockedDecrement64(
   __int64 volatile * lpAddend
);
__int64 _InterlockedDecrement64_acq(
   __int64 volatile * lpAddend
);
__int64 _InterlockedDecrement64_rel(
   __int64 volatile * lpAddend
);
__int64 _InterlockedDecrement64_nf(
   __int64 volatile * lpAddend
);
```

### Parameters

*lpAddend*\
[in, out] Volatile pointer to the variable to be decremented.

## Return value

The return value is the resulting decremented value.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_InterlockedDecrement`, `_InterlockedDecrement16`|x86, ARM, x64, ARM64|
|`_InterlockedDecrement64`|ARM, x64, ARM64|
|`_InterlockedDecrement_acq`, `_InterlockedDecrement_rel`, `_InterlockedDecrement_nf`, `_InterlockedDecrement16_acq`, `_InterlockedDecrement16_rel`, `_InterlockedDecrement16_nf`, `_InterlockedDecrement64_acq`, `_InterlockedDecrement64_rel`, `_InterlockedDecrement64_nf`,|ARM, ARM64|

**Header file** \<intrin.h>

## Remarks

There are several variations on `_InterlockedDecrement` that vary based on the data types they involve and whether processor-specific acquire or release semantics is used.

While the `_InterlockedDecrement` function operates on 32-bit integer values, `_InterlockedDecrement16` operates on 16-bit integer values and `_InterlockedDecrement64` operates on 64-bit integer values.

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes if you need acquire and release semantics, such as at the beginning and end of a critical section. The intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

The variable pointed to by the `lpAddend` parameter must be aligned on a 32-bit boundary; otherwise, this function fails on multiprocessor x86 systems and any non-x86 systems. For more information, see [align](../cpp/align-cpp.md).

These routines are only available as intrinsics.

## Example

```cpp
// compiler_intrinsics_interlocked.cpp
// compile with: /Oi
#define _CRT_RAND_S

#include <cstdlib>
#include <cstdio>
#include <process.h>
#include <windows.h>

// To declare an interlocked function for use as an intrinsic,
// include intrin.h and put the function in a #pragma intrinsic
// statement.
#include <intrin.h>

#pragma intrinsic (_InterlockedIncrement)

// Data to protect with the interlocked functions.
volatile LONG data = 1;

void __cdecl SimpleThread(void* pParam);

const int THREAD_COUNT = 6;

int main() {
   DWORD num;
   HANDLE threads[THREAD_COUNT];
   int args[THREAD_COUNT];
   int i;

   for (i = 0; i < THREAD_COUNT; i++) {
      args[i] = i + 1;
      threads[i] = reinterpret_cast<HANDLE>(_beginthread(SimpleThread, 0,
                           args + i));
      if (threads[i] == reinterpret_cast<HANDLE>(-1))
         // error creating threads
         break;
   }

   WaitForMultipleObjects(i, threads, true, INFINITE);
}

// Code for our simple thread
void __cdecl SimpleThread(void* pParam) {
   int threadNum = *((int*)pParam);
   int counter;
   unsigned int randomValue;
   unsigned int time;
   errno_t err = rand_s(&randomValue);

   if (err == 0) {
      time = (unsigned int) ((double) randomValue / (double) UINT_MAX * 500);
      while (data < 100) {
         if (data < 100) {
            _InterlockedIncrement(&data);
            printf_s("Thread %d: %d\n", threadNum, data);
         }

         Sleep(time);   // wait up to half of a second
      }
   }

   printf_s("Thread %d complete: %d\n", threadNum, data);
}
```

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
