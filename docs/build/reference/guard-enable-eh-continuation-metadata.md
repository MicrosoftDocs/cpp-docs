---
title: "/guard:ehcont (Enable EH Continuation Metadata)"
description: "Reference guide to the Microsoft C++ /guard:ehcont compiler option."
ms.date: "06/03/2020"
f1_keywords: ["/guard:ehcont", "VC.Project.VCCLCompilerTool.GuardEHContMetadata"]
helpviewer_keywords: ["/guard:ehcont", "/guard:ehcont compiler option"]
---
# `/guard:ehcont` (Enable EH Continuation Metadata)

Enables generation of EH Continuation (EHCONT) metadata by the compiler.

## Syntax

> **`/guard:ehcont`**[**`-`**]

## Remarks

The **`/guard:ehcont`** option causes the compiler to generate a sorted list of the relative virtual addresses (RVA) of all the valid exception handling continuation targets for a binary. It's used during runtime for `NtContinue` and `SetThreadContext` instruction pointer validation. By default, **`/guard:ehcont`** is off and must be explicitly enabled. To explicitly disable this option, use **`/guard:ehcont-`**.

The **`/guard:ehcont`** option is available in Visual Studio 2019 version 16.7 and later. The feature is supported for 64-bit processes on a 64-bit OS.

[Control-flow Enforcement Technology (CET)](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf) is a hardware-based security feature that protects against Return-Oriented Programming (ROP)-based attacks. It maintains a "shadow stack" for every call stack to enforce control-flow integrity.

When shadow stacks are available to prevent ROP attacks, attackers move on to use other exploit techniques. One technique they may use is to corrupt the instruction pointer value inside the [CONTEXT](/windows/win32/api/winnt/ns-winnt-context) structure. This structure gets passed into system calls that redirect the execution of a thread, such as `NtContinue`, [`RtlRestoreContext`](/windows/win32/api/winnt/nf-winnt-rtlrestorecontext), and [`SetThreadContext`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadcontext). The `CONTEXT` structure is stored in memory. Corrupting the instruction pointer it contains can cause the system calls to transfer execution to an attacker-controlled address. Currently, `NTContinue` can be called with any continuation point. That's why it's essential to validate the instruction pointer when shadow stacks are enabled.

`RtlRestoreContext` and `NtContinue` are used during Structured Exception Handling (SEH) exception unwinding to unwind to the target frame that contains the **`__except`** block. The instruction pointer of the **`__except`** block isn't expected to be on the shadow stack, because it would fail instruction pointer validation. The **`/guard:ehcont`** compiler switch generates an "EH Continuation Table". It contains a sorted list of the RVAs of all valid exception handling continuation targets in the binary. `NtContinue` first checks the shadow stack for the user-supplied instruction pointer, and if the instruction pointer isn't found there, it proceeds to check the EH Continuation Table from the binary that contains the instruction pointer. If the containing binary wasn't compiled with the table, then for compatibility with legacy binaries, `NtContinue` is allowed to continue. It's important to distinguish between legacy binaries that have no EHCONT data, and binaries containing EHCONT data but no table entries. The former allow all addresses inside the binary as valid continuation targets. The latter don't allow any address inside the binary as a valid continuation target.

The **`/guard:ehcont`** option must be passed to both the compiler and linker to generate EH continuation target RVAs for a binary. If your binary is built by using a single `cl` command, the compiler passes the option to the linker. The compiler also passes the [`/guard:cf`](guard-enable-control-flow-guard.md) option to the linker. If you compile and link separately, these options must be set on both the compiler and linker commands.

You can link code compiled by using **`/guard:ehcont`** to libraries and object files compiled without it. The linker returns a fatal error in any of these scenarios:

- A code section has "local unwind". For more information, see Abnormal termination in [try-finally Statement](../../cpp/try-finally-statement.md#abnormal-termination).

- An EH (xdata) section contains pointers to a code section, and they aren't for SEH.

- The pointers are for SEH, but the object file wasn't compiled using function-level linking ([/Gy](gy-enable-function-level-linking.md)) to produce COMDATs.

The linker returns a fatal error, because it can't generate metadata in these scenarios. That means throwing an exception is likely to cause a crash at runtime.

For SEH section info found in COMDATs, but not compiled using **`/guard:ehcont`**, the linker emits warning **LNK4291**. In this case, the linker generates correct but conservative metadata for the section. To ignore this warning, use [/IGNORE (Ignore Specific Warnings)](ignore-ignore-specific-warnings.md).

If the linker is unable to generate metadata, it emits one of the following errors:

- `LNK2046: module contains _local_unwind but was not compiled with /guard:ehcont`

- `LNK2047: module contains C++ EH or complex EH metadata but was not compiled with /guard:ehcont.`

To check if a binary contains EHCONT data, look for the following elements when dumping the binary's load config:

```cmd
e:\>link /dump /loadconfig CETTest.exe
...
            10417500 Guard Flags
...
                       EH Continuation table present      // EHCONT guard flag present
...
    0000000180018640 Guard EH continuation table
                  37 Guard EH continuation count          // May be 0 if no exception handling is used in the binary. Still counts has having EHCONT data.
...
    Guard EH Continuation Table                           // List of RVAs

          Address
          --------
           0000000180002CF5
           0000000180002F03
           0000000180002F0A
...
```

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Code Generation** property page.

1. Select the **Enable EH Continuation Metadata** property.

1. In the dropdown control, choose **Yes (/guard:ehcont)** to enable EH continuation metadata, or **No (/guard:ehcont-)** to disable it.

## See also

[/guard (Enable Control Flow Guard)](guard-enable-control-flow-guard.md)\
[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
