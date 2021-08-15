---
description: "Learn more about: Security Best Practices for C++"
title: "Security Best Practices for C++"
ms.date: "05/08/2018"
f1_keywords: ["securitybestpracticesVC"]
helpviewer_keywords: ["Visual C++, security", "security [C++]", "security [C++], best practices"]
ms.assetid: 86acaccf-cdb4-4517-bd58-553618e3ec42
---
# Security Best Practices for C++

This article contains information about security tools and practices. Using them does not make applications immune from attack, but it makes successful attacks less likely.

## Visual C++ Security Features

These security features are built into the Microsoft C++ compiler and linker:

[`/guard` (Enable Control Flow Guard)](../build/reference/guard-enable-control-flow-guard.md)<br/>
Causes the compiler to analyze control flow for indirect call targets at compile time, and then to insert code to verify the targets at runtime.

[`/GS` (Buffer Security Check)](../build/reference/gs-buffer-security-check.md)<br/>
Instructs the compiler to insert overrun detection code into functions that are at risk of being exploited. When an overrun is detected, execution is stopped. By default, this option is on.

[`/SAFESEH` (Image has Safe Exception Handlers)](../build/reference/safeseh-image-has-safe-exception-handlers.md)<br/>
Instructs the linker to include in the output image a table that contains the address of each exception handler. At run time, the operating system uses this table to make sure that only legitimate exception handlers are executed. This helps prevent the execution of exception handlers that are introduced by a malicious attack at run time. By default, this option is off.

[`/NXCOMPAT`](../build/reference/nxcompat.md), [`/NXCOMPAT` (Compatible with Data Execution Prevention)](../build/reference/nxcompat-compatible-with-data-execution-prevention.md)
These compiler and linker options enable Data Execution Prevention (DEP) compatibility. DEP guards the CPU against the execution of non-code pages.

[`/analyze` (Code Analysis)](../build/reference/analyze-code-analysis.md)<br/>
This compiler option activates code analysis that reports potential security issues such as buffer overrun, un-initialized memory, null pointer dereferencing, and memory leaks. By default, this option is off. For more information, see [Code Analysis for C/C++ Overview](../code-quality/code-analysis-for-c-cpp-overview.md).

[`/DYNAMICBASE` (Use address space layout randomization)](../build/reference/dynamicbase-use-address-space-layout-randomization.md)<br/>
This linker option enables the building of an executable image that can be loaded at different locations in memory at the beginning of execution. This option also makes the stack location in memory much less predictable.

## Security-Enhanced CRT

The C Runtime Library (CRT) has been augmented to include secure versions of functions that pose security risks—for example, the unchecked `strcpy` string copy function. Because the older, nonsecure versions of these functions are deprecated, they cause compile-time warnings. We encourage you to use the secure versions of these CRT functions instead of suppressing the compilation warnings. For more information, see [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md).

## SafeInt Library

[SafeInt Library](../safeint/safeint-library.md) helps prevent integer overflows and other exploitable errors that might occur when the application performs mathematical operations. The `SafeInt` library includes the [SafeInt Class](../safeint/safeint-class.md), the [SafeIntException Class](../safeint/safeintexception-class.md), and several [SafeInt Functions](../safeint/safeint-functions.md).

The `SafeInt` class protects against integer overflow and divide-by-zero exploits. You can use it to handle comparisons between values of different types. It provides two error handling policies. The default policy is for the `SafeInt` class to throw a `SafeIntException` class exception to report why a mathematical operation cannot be completed. The second policy is for the `SafeInt` class to stop program execution. You can also define a custom policy.

Each `SafeInt` function protects one mathematical operation from an exploitable error. You can use two different kinds of parameters without converting them to the same type. To protect multiple mathematical operations, use the `SafeInt` class.

## Checked Iterators

A checked iterator enforces container boundaries. By default, when a checked iterator is out of bounds, it generates an exception and ends program execution. A checked iterator provides other levels of response that depend on values that are assigned to preprocessor defines such as `_SECURE_SCL_THROWS` and `_ITERATOR_DEBUG_LEVEL`. For example, at `_ITERATOR_DEBUG_LEVEL=2`, a checked iterator provides comprehensive correctness checks in debug mode, which are made available by using asserts. For more information, see [Checked Iterators](../standard-library/checked-iterators.md) and [`_ITERATOR_DEBUG_LEVEL`](../standard-library/iterator-debug-level.md).

## Code Analysis for Managed Code

Code Analysis for Managed Code, also known as FxCop, checks assemblies for conformance to the.NET Framework design guidelines. FxCop analyzes the code and metadata in each assembly to check for defects in the following areas:

- Library design

- Localization

- Naming conventions

- Performance

- Security

## Windows Application Verifier

The [Application Verifier (AppVerifier)](/windows-hardware/drivers/debugger/enable-application-verifier) can help you identify potential application compatibility, stability, and security issues.

The AppVerifier monitors how an application uses the operating system. It watches the file system, registry, memory, and APIs while the application is running, and recommends source-code fixes for issues that it uncovers.

You can use the AppVerifier to:

- Test for potential application compatibility errors that are caused by common programming mistakes.

- Examine an application for memory-related issues.

- Identify potential security issues in an application.

## Windows User Accounts

Using Windows user accounts that belong to the Administrators group exposes developers and--by extension--customers to security risks. For more information, see [Running as a Member of the Users Group](running-as-a-member-of-the-users-group.md) and [How User Account Control (UAC) Affects Your Application](how-user-account-control-uac-affects-your-application.md).

## Guidance for Speculative Execution Side Channels

For information about how to indentify and mitigate against speculative execution side channel hardware vulnerabilities in C++ software, see [C++ Developer Guidance for Speculative Execution Side Channels](developer-guidance-speculative-execution.md).

## See also

<xref:System.Security> <br/>
[Security](/dotnet/standard/security/index)<br/>
[How User Account Control (UAC) Affects Your Application](how-user-account-control-uac-affects-your-application.md)
