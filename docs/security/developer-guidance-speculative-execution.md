---
description: "Learn more about: C++ Developer Guidance for Speculative Execution Side Channels"
title: "C++ Developer Guidance for Speculative Execution Side Channels"
ms.date: "07/10/2018"
helpviewer_keywords: ["Visual C++, security", "security [C++]", "security [C++], best practices", "Spectre", "CVE-2017-5753", "Speculative Execution"]
---
# C++ Developer Guidance for Speculative Execution Side Channels

This article contains guidance for developers to assist with identifying and mitigating speculative execution side channel hardware vulnerabilities in C++ software. These vulnerabilities can disclose sensitive information across trust boundaries and can affect software that runs on processors that support speculative, out-of-order execution of instructions. This class of vulnerabilities was first described in January, 2018 and additional background and guidance can be found in [Microsoft's security advisory](https://portal.msrc.microsoft.com/security-guidance/advisory/ADV180002).

The guidance provided by this article is related to the classes of vulnerabilities represented by:

1. CVE-2017-5753, also known as Spectre variant 1. This hardware vulnerability class is related to side channels that can arise due to speculative execution that occurs as a result of a conditional branch misprediction. The Microsoft C++ compiler in Visual Studio 2017 (starting with version 15.5.5) includes support for the `/Qspectre` switch which provides a compile-time mitigation for a limited set of potentially vulnerable coding patterns related to CVE-2017-5753. The `/Qspectre` switch is also available in Visual Studio 2015 Update 3 through [KB 4338871](https://support.microsoft.com/help/4338871). The documentation for the [`/Qspectre`](../build/reference/qspectre.md) flag provides more information on its effects and usage.

2. CVE-2018-3639, also known as [Speculative Store Bypass (SSB)](https://aka.ms/sescsrdssb). This hardware vulnerability class is related to side channels that can arise due to speculative execution of a load ahead of a dependent store as a result of a memory access misprediction.

An accessible introduction to speculative execution side channel vulnerabilities can be found in the presentation titled [The Case of Spectre and Meltdown](https://www.youtube.com/watch?v=_4O0zMW-Zu4) by one of the research teams that discovered these issues.

## What are Speculative Execution Side Channel hardware vulnerabilities?

Modern CPUs provide higher degrees of performance by making use of speculative and out-of-order execution of instructions. For example, this is often accomplished by predicting the target of branches (conditional and indirect) which enables the CPU to begin speculatively executing instructions at the predicted branch target, thus avoiding a stall until the actual branch target is resolved. In the event that the CPU later discovers that a misprediction occurred, all of the machine state that was computed speculatively is discarded. This ensures that there are no architecturally visible effects of the mispredicted speculation.

While speculative execution does not affect the architecturally visible state, it can leave residual traces in non-architectural state, such as the various caches that are used by the CPU. It is these residual traces of speculative execution that can give rise to side channel vulnerabilities. To better understand this, consider the following code fragment which provides an example of CVE-2017-5753 (Bounds Check Bypass):

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

In this example, `ReadByte` is supplied a buffer, a buffer size, and an index into that buffer. The index parameter, as specified by `untrusted_index`, is supplied by a less privileged context, such as a non-administrative process. If `untrusted_index` is less than `buffer_size`, then the character at that index is read from `buffer` and used to index into a shared region of memory referred to by `shared_buffer`.

From an architectural perspective, this code sequence is perfectly safe as it is guaranteed that `untrusted_index` will always be less than `buffer_size`. However, in the presence of speculative execution, it is possible that the CPU will mispredict the conditional branch and execute the body of the if statement even when `untrusted_index` is greater than or equal to `buffer_size`. As a consequence of this, the CPU may speculatively read a byte from beyond the bounds of `buffer` (which could be a secret) and could then use that byte value to compute the address of a subsequent load through `shared_buffer`.

While the CPU will eventually detect this misprediction, residual side effects may be left in the CPU cache that reveal information about the byte value that was read out of bounds from `buffer`. These side effects can be detected by a less privileged context running on the system by probing how quickly each cache line in `shared_buffer` is accessed. The steps that can be taken to accomplish this are:

1. **Invoke `ReadByte` multiple times with `untrusted_index` being less than `buffer_size`**. The attacking context can cause the victim context to invoke `ReadByte` (e.g. via RPC) such that the branch predictor is trained to be not-taken as `untrusted_index` is less than `buffer_size`.

2. **Flush all cache lines in `shared_buffer`**. The attacking context must flush all of the cache lines in the shared region of memory referred to by `shared_buffer`. Since the memory region is shared, this is straightforward and can be accomplished using intrinsics such as `_mm_clflush`.

3. **Invoke `ReadByte` with `untrusted_index` being greater than `buffer_size`**. The attacking context causes the victim context to invoke `ReadByte` such that it incorrectly predicts that the branch will not be taken. This causes the processor to speculatively execute the body of the if block with `untrusted_index` being greater than `buffer_size`, thus leading to an out-of-bounds read of `buffer`. Consequently, `shared_buffer` is indexed using a potentially secret value that was read out-of-bounds, thus causing the respective cache line to be loaded by the CPU.

4. **Read each cache line in `shared_buffer` to see which is accessed most quickly**. The attacking context can read each cache line in `shared_buffer` and detect the cache line that loads significantly faster than the others. This is the cache line that is likely to have been brought in by step 3. Since there is a 1:1 relationship between byte value and cache line in this example, this allows the attacker to infer the actual value of the byte that was read out-of-bounds.

The above steps provide an example of using a technique known as FLUSH+RELOAD in conjunction with exploiting an instance of CVE-2017-5753.

## What software scenarios can be impacted?

Developing secure software using a process like the [Security Development Lifecycle](https://www.microsoft.com/sdl/) (SDL) typically requires developers to identify the trust boundaries that exist in their application. A trust boundary exists in places where an application may interact with data provided by a less-trusted context, such as another process on the system or a non-administrative user mode process in the case of a kernel-mode device driver. The new class of vulnerabilities involving speculative execution side channels is relevant to many of the trust boundaries in existing software security models that isolate code and data on a device.

The following table provides a summary of the software security models where developers may need to be concerned about these vulnerabilities occurring:

|Trust boundary|Description|
|----------------|----------------|
|Virtual machine boundary|Applications that isolate workloads in separate virtual machines that receive untrusted data from another virtual machine may be at risk.|
|Kernel boundary|A kernel-mode device driver that receives untrusted data from a non-administrative user mode process may be at risk.|
|Process boundary|An application that receives untrusted data from another process running on the local system, such as through a Remote Procedure Call (RPC), shared memory, or other Inter-Process Communication (IPC) mechanisms may be at risk.|
|Enclave boundary|An application that executes within a secure enclave (such as Intel SGX) that receives untrusted data from outside of the enclave may be at risk.|
|Language boundary|An application that interprets or Just-In-Time (JIT) compiles and executes untrusted code written in a higher-level language may be at risk.|

Applications that have attack surface exposed to any of the above trust boundaries should review code on the attack surface to identify and mitigate possible instances of speculative execution side channel vulnerabilities. It should be noted that trust boundaries exposed to remote attack surfaces, such as remote network protocols, have not been demonstrated to be at risk to speculative execution side channel vulnerabilities.

## Potentially vulnerable coding patterns

Speculative execution side channel vulnerabilities can arise as a consequence of multiple coding patterns. This section describes potentially vulnerable coding patterns and provides examples for each, but it should be recognized that variations on these themes may exist. As such, developers are advised to take these patterns as examples and not as an exhaustive list of all potentially vulnerable coding patterns. The same classes of memory safety vulnerabilities that can exist in software today may also exist along speculative and out-of-order paths of execution, including but not limited to buffer overruns, out-of-bounds array accesses, uninitialized memory use, type confusion, and so on. The same primitives that attackers can use to exploit memory safety vulnerabilities along architectural paths may also apply to speculative paths.

In general, speculative execution side channels related to conditional branch misprediction can arise when a conditional expression operates on data that can be controlled or influenced by a less-trusted context. For example, this can include conditional expressions used in **`if`**, **`for`**, **`while`**, **`switch`**, or ternary statements. For each of these statements, the compiler may generate a conditional branch that the CPU may then predict the branch target for at runtime.

For each example, a comment with the phrase "SPECULATION BARRIER" is inserted where a developer could introduce a barrier as a mitigation. This is discussed in more detail in the section on mitigations.

## Speculative out-of-bounds load

This category of coding patterns involves a conditional branch misprediction that leads to a speculative out-of-bounds memory access.

### Array out-of-bounds load feeding a load

This coding pattern is the originally described vulnerable coding pattern for CVE-2017-5753 (Bounds Check Bypass). The background section of this article explains this pattern in detail.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        // SPECULATION BARRIER
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

Similarly, an array out-of-bounds load may occur in conjunction with a loop that exceeds its terminating condition due to a misprediction. In this example, the conditional branch associated with the `x < buffer_size` expression may mispredict and speculatively execute the body of the **`for`** loop when `x` is greater than or equal to `buffer_size`, thus resulting in a speculative out-of-bounds load.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadBytes(unsigned char *buffer, unsigned int buffer_size) {
    for (unsigned int x = 0; x < buffer_size; x++) {
        // SPECULATION BARRIER
        unsigned char value = buffer[x];
        return shared_buffer[value * 4096];
    }
}
```

### Array out-of-bounds load feeding an indirect branch

This coding pattern involves the case where a conditional branch misprediction can lead to an out-of-bounds access to an array of function pointers which then leads to an indirect branch to the target address that was read out-of-bounds. The following snippet provides an example that demonstrates this.

In this example, an untrusted message identifier is provided to DispatchMessage through the `untrusted_message_id` parameter. If `untrusted_message_id` is less than `MAX_MESSAGE_ID`, then it is used to index into an array of function pointers and branch to the corresponding branch target. This code is safe architecturally, but if the CPU mispredicts the conditional branch, it could result in `DispatchTable` being indexed by `untrusted_message_id` when its value is greater than or equal to `MAX_MESSAGE_ID`, thus leading to an out-of-bounds access. This could result in speculative execution from a branch target address that is derived beyond the bounds of the array which could lead to information disclosure depending on the code that is executed speculatively.

```cpp
#define MAX_MESSAGE_ID 16

typedef void (*MESSAGE_ROUTINE)(unsigned char *buffer, unsigned int buffer_size);

const MESSAGE_ROUTINE DispatchTable[MAX_MESSAGE_ID];

void DispatchMessage(unsigned int untrusted_message_id, unsigned char *buffer, unsigned int buffer_size) {
    if (untrusted_message_id < MAX_MESSAGE_ID) {
        // SPECULATION BARRIER
        DispatchTable[untrusted_message_id](buffer, buffer_size);
    }
}
```

As with the case of an array out-of-bounds load feeding another load, this condition may also arise in conjunction with a loop that exceeds its terminating condition due to a misprediction.

### Array out-of-bounds store feeding an indirect branch

While the previous example showed how a speculative out-of-bounds load can influence an indirect branch target, it is also possible for an out-of-bounds store to modify an indirect branch target, such as a function pointer or a return address. This can potentially lead to speculative execution from an attacker-specified address.

In this example, an untrusted index is passed through the `untrusted_index` parameter. If `untrusted_index` is less than the element count of the `pointers` array (256 elements), then the provided pointer value in `ptr` is written to the `pointers` array. This code is safe architecturally, but if the CPU mispredicts the conditional branch, it could result in `ptr` being speculatively written beyond the bounds of the stack-allocated `pointers` array. This could lead to speculative corruption of the return address for `WriteSlot`. If an attacker can control the value of `ptr`, they may be able to cause speculative execution from an arbitrary address when `WriteSlot` returns along the speculative path.

```cpp
unsigned char WriteSlot(unsigned int untrusted_index, void *ptr) {
    void *pointers[256];
    if (untrusted_index < 256) {
        // SPECULATION BARRIER
        pointers[untrusted_index] = ptr;
    }
}
```

Similarly, if a function pointer local variable named `func` were allocated on the stack, then it may be possible to speculatively modify the address that `func` refers to when the conditional branch misprediction occurs. This could result in speculative execution from an arbitrary address when the function pointer is called through.

```cpp
unsigned char WriteSlot(unsigned int untrusted_index, void *ptr) {
    void *pointers[256];
    void (*func)() = &callback;
    if (untrusted_index < 256) {
        // SPECULATION BARRIER
        pointers[untrusted_index] = ptr;
    }
    func();
}
```

It should be noted that both of these examples involve speculative modification of stack-allocated indirect branch pointers. It is possible that speculative modification could also occur for global variables, heap-allocated memory, and even read-only memory on some CPUs. For stack-allocated memory, the Microsoft C++ compiler already takes steps to make it more difficult to speculatively modify stack-allocated indirect branch targets, such as by reordering local variables such that buffers are placed adjacent to a security cookie as part of the [`/GS`](../build/reference/gs-buffer-security-check.md) compiler security feature.

## Speculative type confusion

This category deals with coding patterns that can give rise to a speculative type confusion. This occurs when memory is accessed using an incorrect type along a non-architectural path during speculative execution. Both conditional branch misprediction and speculative store bypass can potentially lead to a speculative type confusion.

For speculative store bypass, this could occur in scenarios where a compiler reuses a stack location for variables of multiple types. This is because the architectural store of a variable of type `A` may be bypassed, thus allowing the load of type `A` to speculatively execute before the variable is assigned. If the previously stored variable is of a different type, then this can create the conditions for a speculative type confusion.

For conditional branch misprediction, the following code snippet will be used to describe different conditions that speculative type confusion can give rise to.

```cpp
enum TypeName {
    Type1,
    Type2
};

class CBaseType {
public:
    CBaseType(TypeName type) : type(type) {}
    TypeName type;
};

class CType1 : public CBaseType {
public:
    CType1() : CBaseType(Type1) {}
    char field1[256];
    unsigned char field2;
};

class CType2 : public CBaseType {
public:
    CType2() : CBaseType(Type2) {}
    void (*dispatch_routine)();
    unsigned char field2;
};

// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ProcessType(CBaseType *obj)
{
    if (obj->type == Type1) {
        // SPECULATION BARRIER
        CType1 *obj1 = static_cast<CType1 *>(obj);

        unsigned char value = obj1->field2;

        return shared_buffer[value * 4096];
    }
    else if (obj->type == Type2) {
        // SPECULATION BARRIER
        CType2 *obj2 = static_cast<CType2 *>(obj);

        obj2->dispatch_routine();

        return obj2->field2;
    }
}
```

### Speculative type confusion leading to an out-of-bounds load

This coding pattern involves the case where a speculative type confusion can result in an out-of-bounds or type-confused field access where the loaded value feeds a subsequent load address. This is similar to the array out-of-bounds coding pattern but it is manifested through an alternative coding sequence as shown above. In this example, an attacking context could cause the victim context to execute `ProcessType` multiple times with an object of type `CType1` (`type` field is equal to `Type1`). This will have the effect of training the conditional branch for the first **`if`** statement to predict not taken. The attacking context can then cause the victim context to execute `ProcessType` with an object of type `CType2`. This can result in a speculative type confusion if the conditional branch for the first **`if`** statement mispredicts and executes the body of the **`if`** statement, thus casting an object of type `CType2` to `CType1`. Since `CType2` is smaller than `CType1`, the memory access to `CType1::field2` will result in a speculative out-of-bounds load of data that may be secret. This value is then used in a load from `shared_buffer` which can create observable side effects, as with the array out-of-bounds example described previously.

### Speculative type confusion leading to an indirect branch

This coding pattern involves the case where a speculative type confusion can result in an unsafe indirect branch during speculative execution. In this example, an attacking context could cause the victim context to execute `ProcessType` multiple times with an object of type `CType2` (`type` field is equal to `Type2`). This will have the effect of training the conditional branch for the first **`if`** statement to be taken and the `else if` statement to be not taken. The attacking context can then cause the victim context to execute `ProcessType` with an object of type `CType1`. This can result in a speculative type confusion if the conditional branch for the first **`if`** statement predicts taken and the `else if` statement predicts not taken, thus executing the body of the `else if` and casting an object of type `CType1` to `CType2`. Since the `CType2::dispatch_routine` field overlaps with the **`char`** array `CType1::field1`, this could result in a speculative indirect branch to an unintended branch target. If the attacking context can control the byte values in the `CType1::field1` array, they may be able to control the branch target address.

## Speculative uninitialized use

This category of coding patterns involves scenarios where speculative execution may access uninitialized memory and use it to feed a subsequent load or indirect branch. For these coding patterns to be exploitable, an attacker needs to be able to control or meaningfully influence the contents of the memory that is used without being initialized by the context that it is being used in.

### Speculative uninitialized use leading to an out-of-bounds load

A speculative uninitialized use can potentially lead to an out-of-bounds load using an attacker controlled value. In the example below, the value of `index` is assigned `trusted_index` on all architectural paths and `trusted_index` is assumed to be less than or equal to `buffer_size`. However, depending on the code produced by the compiler, it is possible that a speculative store bypass may occur that allows the load from `buffer[index]` and dependent expressions to execute ahead of the assignment to `index`. If this occurs, an uninitialized value for `index` will be used as the offset into `buffer` which could enable an attacker to read sensitive information out-of-bounds and convey this through a side channel through the dependent load of `shared_buffer`.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

void InitializeIndex(unsigned int trusted_index, unsigned int *index) {
    *index = trusted_index;
}

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int trusted_index) {
    unsigned int index;

    InitializeIndex(trusted_index, &index); // not inlined

    // SPECULATION BARRIER
    unsigned char value = buffer[index];
    return shared_buffer[value * 4096];
}
```

### Speculative uninitialized use leading to an indirect branch

A speculative uninitialized use can potentially lead to an indirect branch where the branch target is controlled by an attacker. In the example below, `routine` is assigned to either `DefaultMessageRoutine1` or `DefaultMessageRoutine` depending on the value of `mode`. On the architectural path, this will result in `routine` always being initialized ahead of the indirect branch. However, depending on the code produced by the compiler, a speculative store bypass may occur that allows the indirect branch through `routine` to be speculatively executed ahead of the assignment to `routine`. If this occurs, an attacker may be able to speculatively execute from an arbitrary address, assuming the attacker can influence or control the uninitialized value of `routine`.

```cpp
#define MAX_MESSAGE_ID 16

typedef void (*MESSAGE_ROUTINE)(unsigned char *buffer, unsigned int buffer_size);

const MESSAGE_ROUTINE DispatchTable[MAX_MESSAGE_ID];
extern unsigned int mode;

void InitializeRoutine(MESSAGE_ROUTINE *routine) {
    if (mode == 1) {
        *routine = &DefaultMessageRoutine1;
    }
    else {
        *routine = &DefaultMessageRoutine;
    }
}

void DispatchMessage(unsigned int untrusted_message_id, unsigned char *buffer, unsigned int buffer_size) {
    MESSAGE_ROUTINE routine;

    InitializeRoutine(&routine); // not inlined

    // SPECULATION BARRIER
    routine(buffer, buffer_size);
}
```

## Mitigation options

Speculative execution side channel vulnerabilities can be mitigated by making changes to source code. These changes can involve mitigating specific instances of a vulnerability, such as by adding a *speculation barrier*, or by making changes to the design of an application to make sensitive information inaccessible to speculative execution.

### Speculation barrier via manual instrumentation

A *speculation barrier* can be manually inserted by a developer to prevent speculative execution from proceeding along a non-architectural path. For example, a developer can insert a speculation barrier before a dangerous coding pattern in the body of a conditional block, either at the beginning of the block (after the conditional branch) or before the first load that is of concern. This will prevent a conditional branch misprediction from executing the dangerous code on a non-architectural path by serializing execution. The speculation barrier sequence differs by hardware architecture as described by the following table:

|Architecture|Speculation barrier intrinsic for CVE-2017-5753|Speculation barrier intrinsic for CVE-2018-3639|
|----------------|----------------|----------------|
|x86/x64|_mm_lfence()|_mm_lfence()|
|ARM|not currently available|__dsb(0)|
|ARM64|not currently available|__dsb(0)|

For example, the following code pattern can be mitigated by using the `_mm_lfence` intrinsic as shown below.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        _mm_lfence();
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

### Speculation barrier via compiler-time instrumentation

The Microsoft C++ compiler in Visual Studio 2017 (starting with version 15.5.5) includes support for the `/Qspectre` switch which automatically inserts a speculation barrier for a limited set of potentially vulnerable coding patterns related to CVE-2017-5753. The documentation for the [`/Qspectre`](../build/reference/qspectre.md) flag provides more information on its effects and usage. It is important to note that this flag does not cover all of the potentially vulnerable coding patterns and as such developers should not rely on it as a comprehensive mitigation for this class of vulnerabilities.

### Masking array indices

In cases where a speculative out-of-bounds load may occur, the array index can be strongly bounded on both the architectural and non-architectural path by adding logic to explicitly bound the array index. For example, if an array can be allocated to a size that is aligned to a power of two, then a simple mask can be introduced. This is illustrated in the sample below where it is assumed that `buffer_size` is aligned to a power of two. This ensures that `untrusted_index` is always less than `buffer_size`, even if a conditional branch misprediction occurs and `untrusted_index` was passed in with a value greater than or equal to `buffer_size`.

It should be noted that the index masking performed here could be subject to speculative store bypass depending on the code that is generated by the compiler.

```cpp
// A pointer to a shared memory region of size 1MB (256 * 4096)
unsigned char *shared_buffer;

unsigned char ReadByte(unsigned char *buffer, unsigned int buffer_size, unsigned int untrusted_index) {
    if (untrusted_index < buffer_size) {
        untrusted_index &= (buffer_size - 1);
        unsigned char value = buffer[untrusted_index];
        return shared_buffer[value * 4096];
    }
}
```

### Removing sensitive information from memory

Another technique that can be used to mitigate speculative execution side channel vulnerabilities is to remove sensitive information from memory. Software developers can look for opportunities to refactor their application such that sensitive information is not accessible during speculative execution. This can be accomplished by refactoring the design of an application to isolate sensitive information into separate processes. For example, a web browser application can attempt to isolate the data associated with each web origin into separate processes, thus preventing one process from being able to access cross-origin data through speculative execution.

## See also

[Guidance to mitigate speculative execution side-channel vulnerabilities](https://portal.msrc.microsoft.com/security-guidance/advisory/ADV180002)<br/>
[Mitigating speculative execution side channel hardware vulnerabilities](https://blogs.technet.microsoft.com/srd/2018/03/15/mitigating-speculative-execution-side-channel-hardware-vulnerabilities/)
