---
title: "/guard:ehcont (Enable EH Continuation Metadata)"
ms.date: "03/30/2020"
f1_keywords: ["/guard:ehcont", "VC.Project.VCCLCompilerTool.GuardEHContMetadata"]
---
# /guard:ehcont (Enable EH Continuation metadata)

Enables generation of EH Continuation metadata by the compiler.

## Syntax

```
/guard:ehcont[-]
```

## Remarks

The **/guard:ehcont** option enables compiler to generate a sorted list of the relative virtual addresses(RVA) of all the valid exception handling continuation targets for a binary, used during runtime for NtContinue/SetThreadContext RIP validation. By default, **/guard:ehcont** is off and must be explicitly enabled. To explicitly disable this option, use **/guard:ehcont-**.

[Control-flow Enforcement Technology(CET)](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf) is a hardware-based security feature that eliminates Return-Oriented Programming(ROP) based attacks, by maintaining a "Shadow Stack" for every call stack to enforce control flow integrity.

Once shadow stacks are available to prevent ROP attacks, one of the next exploit techniques that attackers may use is corrupting the RIP value inside the CONTEXT structure passed into system calls that redirect the execution of a thread, such as NtContinue, RtlRestoreContext and SetThreadContext. The CONTEXT structure is stored in memory, and corrupting the RIP value in it can cause these syscalls to transfer execution to the attacker-controlled RIP. Currently, NTContinue can be called with any continuation point. Therefore, it's essential to  perform RIP validation when shadow stacks are enabled.

RtlRestoreContext/NtContinue is used during SEH exception unwinding to unwind to the target frame for executing the except block. Since the RIP of the except block is not expected to be on the shadow stack (which would result in the RIP validation failing), **/guard:ehcont** compiler switch will generate an "EH Continuation Table" that contains a sorted list of the RVAs of all valid exception handling continuation targets in the binary. NtContinue first checks the shadow stack for the user-supplied RIP, and if the RIP is not found there, it will proceed to check the EH Continuation Table from the RIP's containing binary. If the containing binary was not compiled with the table, then NtContinue will be allowed to proceed, for compatibility with legacy binaries. It is important to distinguish between a binary that does not contain EHCONT data (legacy binary), and a binary that contains EHCONT data but the table has zero entries. The former allows all addresses inside the binary as valid continuation targets, whereas the latter does not allow any address inside the binary as a valid continuation target.
Starting **Visual Studio 2019 version 16.7 and later**, this feature will be supported for 64-bit processes on a 64-bit OS.

The **/guard:ehcont** option must be passed to both the compiler and linker to generate EH coninuation target RVAs for a binary. If your binary is built by using a single `cl` command, the compiler passes the option to the linker. Compiler also passes [/guard:cf](guard-enable-control-flow-guard.md) option to the linker. If you compile and link separately, the option must be set on both the compiler and linker commands.

Code compiled by using **/guard:ehcont** can be linked to libraries and object files that are not compiled by using the option. When the library/object file is not compiled for /guard:ehcont, the linker will fatal if any of these scenarios are true:

1. A code section has "local unwind" ([try-finally Statement](../../cpp/try-finally-statement.md) under Abnormal Termination section)
1. An EH (xdata) section contains pointers to code section and they aren't for structured exception handling (SEH)
1. The pointers are for SEH but the object file was not compiled with comdats (/Gy)

The linker will fatal, because it cannot generate metadata in these scenarios, which means throwing an exception will likely crash at runtime.

For SEH section info that is in comdats but not compiled with /guard:ehcont, the linker will emit a warning, but will generate correct but conservative metadata for the section. To ignore warnings, open project's **property pages->Configuration Properties->Linker->Advanced-> Ignore Warning LNK4291(EHCont metadata)**


To check if a binary contains EHCONT data, look for the following when dumping the binary's load config:

```
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

1. Select **Configuration Properties**, **C/C++**, **Code Generation**.

1. Select the **Enable EH Continuation Metadata** property.

1. In the dropdown control, choose **Yes(/guard:ehcont)** to enable EH continuation metadata, or **No(/guard:ehcont-)** to disable it.

## See also

[/guard (Enable Control Flow Guard)](guard-enable-control-flow-guard.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
