---
description: "Learn more about: Batch-Mode Rules"
title: "Batch-Mode Rules"
ms.date: "11/04/2016"
helpviewer_keywords: ["inference rules in NMAKE", "NMAKE program, inference rules", "batch-mode inference rules in NMAKE"]
ms.assetid: 0650b547-ef19-4455-9bba-fa567dcf88f2
---
# Batch-Mode Rules

```
{frompath}.fromext{topath}.toext::
   commands
```

Batch-mode inference rules provide only one invocation of the inference rule when N commands go through this inference rule. Without batch-mode inference rules, it would require N commands to be invoked. N is the number of dependents that trigger the inference rule.

Makefiles that contain batch-mode inference rules must use NMAKE version 1.62 or higher. To check the NMAKE version, run the _NMAKE_VER macro available with NMAKE version 1.62 or higher. This macro returns a string representing the Visual C++ product version.

The only syntactical difference from the standard inference rule is that the batch-mode inference rule is terminated with a double colon (::).

> [!NOTE]
> The tool being invoked must be able to handle multiple files. The batch-mode inference rule must use `$<` as the macro to access dependent files.

The batch-mode inference rules can speed up the build process. It is faster to supply files to the compiler in batch, because the compiler driver is invoked only once. For example, the C and C++ compiler performs better when handling a set of files because it can remain memory resident during the process.

The following example shows how to use batch-mode inference rules:

```
#
# sample makefile to illustrate batch-mode inference rules
#
O = .
S = .
Objs = $O/foo1.obj $O/foo2.obj $O/foo2.obj $O/foo3.obj $O/foo4.obj
CFLAGS = -nologo

all : $(Objs)

!ifdef NOBatch
{$S}.cpp{$O}.obj:
!else
{$S}.cpp{$O}.obj::
!endif
   $(CC) $(CFLAGS) -Fd$O\ -c $<

$(Objs) :

#end of makefile
```

NMAKE produces the following output without batch-mode inference rules:

```
E:\tmp> nmake -f test.mak -a NOBatch=1

Microsoft (R) Program Maintenance Utility   Version 7.00.0000
Copyright (C) Microsoft Corp 1988-2001. All rights reserved.
        cl -nologo -Fd.\ -c .\foo1.cpp
foo1.cpp
        cl -nologo -Fd.\ -c .\foo2.cpp
foo2.cpp
        cl -nologo -Fd.\ -c .\foo3.cpp
foo3.cpp
        cl -nologo -Fd.\ -c .\foo4.cpp
foo4.cpp
```

NMAKE produces the following result with the batch-mode inference rules:

```
E:\tmp> nmake -f test.mak -a

Microsoft (R) Program Maintenance Utility   Version 7.00.0000
Copyright (C) Microsoft Corp 1988-2001. All rights reserved.

        cl -nologo -Fd.\ -c .\foo1.cpp .\foo2.cpp .\foo3.cpp .\foo4.cpp
foo1.cpp
foo2.cpp
foo3.cpp
foo4.cpp
Generating Code...
```

## See also

[Inference Rules](inference-rules.md)
