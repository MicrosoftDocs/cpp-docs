---
description: "Learn more about: _InterlockedCompareExchange intrinsic functions"
title: "_InterlockedCompareExchange intrinsic functions"
ms.date: "09/02/2019"
f1_keywords: ["_InterlockedCompareExchange_HLERelease", "_InterlockedCompareExchange8_nf", "_InterlockedCompareExchange16_acq_cpp", "_InterlockedCompareExchange_acq_cpp", "_InterlockedCompareExchange16_rel_cpp", "_InterlockedCompareExchange64_rel_cpp", "_InterlockedCompareExchange_cpp", "_InterlockedCompareExchange16_cpp", "_InterlockedCompareExchange64_acq_cpp", "_InterlockedCompareExchange_acq", "_InterlockedCompareExchange64_rel", "_InterlockedCompareExchange64_nf", "_InterlockedCompareExchange_rel_cpp", "_InterlockedCompareExchange16_nf", "_InterlockedCompareExchange8", "_InterlockedCompareExchange64_np", "_InterlockedCompareExchange16_rel", "_InterlockedCompareExchange64_acq", "_InterlockedCompareExchange8_rel", "_InterlockedCompareExchange_HLEAcquire", "_InterlockedCompareExchange64_HLERelease", "_InterlockedCompareExchange64_cpp", "_InterlockedCompareExchange_np", "_InterlockedCompareExchange8_acq", "_InterlockedCompareExchange16_acq", "_InterlockedCompareExchange_rel", "_InterlockedCompareExchange64_HLEAcquire", "_InterlockedCompareExchange64", "_InterlockedCompareExchange16", "_InterlockedCompareExchange"]
helpviewer_keywords: ["_InterlockedCompareExchange16 intrinsic", "_InterlockedCompareExchange_acq intrinsic", "InterlockedCompareExchange_acq intrinsic", "_InterlockedCompareExchange intrinsic", "InterlockedCompareExchange64 intrinsic", "_InterlockedCompareExchange64_acq intrinsic", "InterlockedCompareExchange16 intrinsic", "_InterlockedCompareExchange_rel intrinsic", "InterlockedCompareExchange intrinsic", "InterlockedCompareExchange64_acq intrinsic", "InterlockedCompareExchange_rel intrinsic", "_InterlockedCompareExchange64 intrinsic", "InterlockedCompareExchange64_rel intrinsic", "_InterlockedCompareExchange64_rel intrinsic"]
ms.assetid: c3ad79c0-a523-4930-a3a4-69a65d7d5c81
---
# _InterlockedCompareExchange intrinsic functions

**Microsoft Specific**

Does an interlocked compare and exchange.

## Syntax

```C
long _InterlockedCompareExchange(
   long volatile * Destination,
   long Exchange,
   long Comparand
);
long _InterlockedCompareExchange_acq(
   long volatile * Destination,
   long Exchange,
   long Comparand
);
long _InterlockedCompareExchange_HLEAcquire(
   long volatile * Destination,
   long Exchange,
   long Comparand
);
long _InterlockedCompareExchange_HLERelease(
   long volatile * Destination,
   long Exchange,
   long Comparand
);
long _InterlockedCompareExchange_np(
   long volatile * Destination,
   long Exchange,
   long Comparand
);
long _InterlockedCompareExchange_rel(
   long volatile * Destination,
   long Exchange,
   long Comparand
);
char _InterlockedCompareExchange8(
   char volatile * Destination,
   char Exchange,
   char Comparand
);
char _InterlockedCompareExchange8_acq(
   char volatile * Destination,
   char Exchange,
   char Comparand
);
char _InterlockedCompareExchange8_nf(
   char volatile * Destination,
   char Exchange,
   char Comparand
);
char _InterlockedCompareExchange8_rel(
   char volatile * Destination,
   char Exchange,
   char Comparand
);
short _InterlockedCompareExchange16(
   short volatile * Destination,
   short Exchange,
   short Comparand
);
short _InterlockedCompareExchange16_acq(
   short volatile * Destination,
   short Exchange,
   short Comparand
);
short _InterlockedCompareExchange16_nf(
   short volatile * Destination,
   short Exchange,
   short Comparand
);
short _InterlockedCompareExchange16_np(
   short volatile * Destination,
   short Exchange,
   short Comparand
);
short _InterlockedCompareExchange16_rel(
   short volatile * Destination,
   short Exchange,
   short Comparand
);
__int64 _InterlockedCompareExchange64(
   __int64 volatile * Destination,
   __int64 Exchange,
   __int64 Comparand
);
__int64 _InterlockedCompareExchange64_acq(
   __int64 volatile * Destination,
   __int64 Exchange,
   __int64 Comparand
);
__int64 _InterlockedCompareExchange64_HLEAcquire (
   __int64 volatile * Destination,
   __int64 Exchange,
   __int64 Comparand
);
__int64 _InterlockedCompareExchange64_HLERelease(
   __int64 volatile * Destination,
   __int64 Exchange,
   __int64 Comparand
);
__int64 _InterlockedCompareExchange64_nf(
   __int64 volatile * Destination,
   __int64 Exchange,
   __int64 Comparand
);
__int64 _InterlockedCompareExchange64_np(
   __int64 volatile * Destination,
   __int64 Exchange,
   __int64 Comparand
);
__int64 _InterlockedCompareExchange64_rel(
   __int64 volatile * Destination,
   __int64 Exchange,
   __int64 Comparand
);
```

### Parameters

*Destination*\
[in, out] Pointer to the destination value. The sign is ignored.

*Exchange*\
[in] Exchange value. The sign is ignored.

*Comparand*\
[in] Value to compare to destination. The sign is ignored.

## Return value

The return value is the initial value of the `Destination` pointer.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_InterlockedCompareExchange`, `_InterlockedCompareExchange8`, `_InterlockedCompareExchange16`, `_InterlockedCompareExchange64`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_InterlockedCompareExchange_acq`, `_InterlockedCompareExchange_rel`, `_InterlockedCompareExchange8_acq`, `_InterlockedCompareExchange8_nf`, `_InterlockedCompareExchange8_rel`,`_InterlockedCompareExchange16_acq`, `_InterlockedCompareExchange16_nf`, `_InterlockedCompareExchange16_rel`, `_InterlockedCompareExchange64_acq`, `_InterlockedCompareExchange64_nf`, `_InterlockedCompareExchange64_rel`,|ARM, ARM64|\<intrin.h>|
|`_InterlockedCompareExchange_np`, `_InterlockedCompareExchange16_np`, `_InterlockedCompareExchange64_np`|x64|\<intrin.h>|
|`_InterlockedCompareExchange_HLEAcquire`, `_InterlockedCompareExchange_HLERelease`, `_InterlockedCompareExchange64_HLEAcquire`, `_InterlockedCompareExchange64_HLERelease`|x86, x64|\<immintrin.h>|

## Remarks

`_InterlockedCompareExchange` does an atomic comparison of the `Destination` value with the `Comparand` value. If the `Destination` value is equal to the `Comparand` value, the `Exchange` value is stored in the address specified by `Destination`. Otherwise, does no operation.

`_InterlockedCompareExchange` provides compiler intrinsic support for the Win32 Windows SDK [InterlockedCompareExchange](/windows/win32/api/winnt/nf-winnt-interlockedcompareexchange) function.

There are several variations on `_InterlockedCompareExchange` that vary based on the data types they involve and whether processor-specific acquire or release semantics are used.

While the `_InterlockedCompareExchange` function operates on long integer values, `_InterlockedCompareExchange8` operates on 8-bit integer values, `_InterlockedCompareExchange16` operates on short integer values, and `_InterlockedCompareExchange64` operates on 64-bit integer values.

On ARM platforms, use the intrinsics with `_acq` and `_rel` suffixes for acquire and release semantics, such as at the beginning and end of a critical section. The ARM intrinsics with an `_nf` ("no fence") suffix don't act as a memory barrier.

The intrinsics with an `_np` ("no prefetch") suffix prevent a possible prefetch operation from being inserted by the compiler.

On Intel platforms that support Hardware Lock Elision (HLE) instructions, the intrinsics with `_HLEAcquire` and `_HLERelease` suffixes include a hint to the processor that can accelerate performance by eliminating a lock write step in hardware. If these intrinsics are called on platforms that don't support HLE, the hint is ignored.

These routines are only available as intrinsics.

## Example

In the following example, `_InterlockedCompareExchange` is used for simple low-level thread synchronization. The approach has its limitations as a basis for multithreaded programming; it's presented to illustrate the typical use of the interlocked intrinsics. For best results, use the Windows API. For more information about multithreaded programming, see [Writing a Multithreaded Win32 Program](../parallel/multithreading-with-c-and-win32.md#writing-a-multithreaded-win32-program).

```cpp
// intrinExample.cpp
// compile with: /EHsc /O2
// Simple example of using _Interlocked* intrinsics to
// do manual synchronization
//
// Add [-DSKIP_LOCKING] to the command line to disable
// the locking. This will cause the threads to execute out
// of sequence.

#define _CRT_RAND_S

#include "windows.h"

#include <iostream>
#include <queue>
#include <intrin.h>

using namespace std;

// --------------------------------------------------------------------

// if defined, will not do any locking on shared data
//#define SKIP_LOCKING

// A common way of locking using _InterlockedCompareExchange.
// Refer to other sources for a discussion of the many issues
// involved. For example, this particular locking scheme performs well
// when lock contention is low, as the while loop overhead is small and
// locks are acquired very quickly, but degrades as many callers want
// the lock and most threads are doing a lot of interlocked spinning.
// There are also no guarantees that a caller will ever acquire the
// lock.
namespace MyInterlockedIntrinsicLock
{
    typedef unsigned LOCK, *PLOCK;

#pragma intrinsic(_InterlockedCompareExchange, _InterlockedExchange)

    enum {LOCK_IS_FREE = 0, LOCK_IS_TAKEN = 1};

    void Lock(PLOCK pl)
    {
#if !defined(SKIP_LOCKING)
        // If *pl == LOCK_IS_FREE, it is set to LOCK_IS_TAKEN
        // atomically, so only 1 caller gets the lock.
        // If *pl == LOCK_IS_TAKEN,
        // the result is LOCK_IS_TAKEN, and the while loop keeps spinning.
        while (_InterlockedCompareExchange((long *)pl,
                                           LOCK_IS_TAKEN, // exchange
                                           LOCK_IS_FREE)  // comparand
               == LOCK_IS_TAKEN)
        {
            // spin!
        }
        // This will also work.
        //while (_InterlockedExchange(pl, LOCK_IS_TAKEN) ==
        //                             LOCK_IS_TAKEN)
        //{
        //    // spin!
        //}

        // At this point, the lock is acquired.
#endif
    }

    void Unlock(PLOCK pl) {
#if !defined(SKIP_LOCKING)
        _InterlockedExchange((long *)pl, LOCK_IS_FREE);
#endif
    }
}

// ------------------------------------------------------------------
// Data shared by threads

queue<int> SharedQueue;
MyInterlockedIntrinsicLock::LOCK SharedLock;
int TicketNumber;

// ------------------------------------------------------------------

DWORD WINAPI
ProducerThread(
    LPVOID unused
    )
{
    unsigned int randValue;
    while (1) {
        // Acquire shared data. Enter critical section.
        MyInterlockedIntrinsicLock::Lock(&SharedLock);

        //cout << ">" << TicketNumber << endl;
        SharedQueue.push(TicketNumber++);

        // Release shared data. Leave critical section.
        MyInterlockedIntrinsicLock::Unlock(&SharedLock);

        rand_s(&randValue);
        Sleep(randValue % 20);
    }

    return 0;
}

DWORD WINAPI
ConsumerThread(
    LPVOID unused
    )
{
    while (1) {
        // Acquire shared data. Enter critical section
        MyInterlockedIntrinsicLock::Lock(&SharedLock);

        if (!SharedQueue.empty()) {
            int x = SharedQueue.front();
            cout << "<" << x << endl;
            SharedQueue.pop();
        }

        // Release shared data. Leave critical section
        MyInterlockedIntrinsicLock::Unlock(&SharedLock);

        unsigned int randValue;
        rand_s(&randValue);
        Sleep(randValue % 20);
    }
    return 0;
}

int main(
    void
    )
{
    const int timeoutTime = 500;
    int unused1, unused2;
    HANDLE threads[4];

    // The program creates 4 threads:
    // two producer threads adding to the queue
    // and two consumers taking data out and printing it.
    threads[0] = CreateThread(NULL,
                              0,
                              ProducerThread,
                              &unused1,
                              0,
                              (LPDWORD)&unused2);

    threads[1] = CreateThread(NULL,
                              0,
                              ConsumerThread,
                              &unused1,
                              0,
                              (LPDWORD)&unused2);

    threads[2] = CreateThread(NULL,
                              0,
                              ProducerThread,
                              &unused1,
                              0,
                              (LPDWORD)&unused2);

    threads[3] = CreateThread(NULL,
                              0,
                              ConsumerThread,
                              &unused1,
                              0,
                              (LPDWORD)&unused2);

    WaitForMultipleObjects(4, threads, TRUE, timeoutTime);

    return 0;
}
```

```Output
<0
<1
<2
<3
<4
<5
<6
<7
<8
<9
<10
<11
<12
<13
<14
<15
<16
<17
<18
<19
<20
<21
<22
<23
<24
<25
<26
<27
<28
<29
```

**END Microsoft Specific**

## See also

[_InterlockedCompareExchange128](../intrinsics/interlockedcompareexchange128.md)\
[_InterlockedCompareExchangePointer intrinsic functions](../intrinsics/interlockedcompareexchangepointer-intrinsic-functions.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)\
[Conflicts with the x86 Compiler](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)
