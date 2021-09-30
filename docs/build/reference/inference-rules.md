---
description: "Learn more about: NMAKE inference rules"
title: "Inference rules"
ms.date: 09/30/2021
helpviewer_keywords: ["inference rules in NMAKE", "rules, inference", "NMAKE program, inference rules", "search paths in NMAKE inference rules", "defining inference rules", "batch-mode inference rules in NMAKE", "rules, predefined", "NMAKE program, predefined rules", "predefined rules in NMAKE", "rules, inferred", "inferred dependents in NMAKE", "inferred rules in NMAKE", "dependents, inferred", "precedence, inference rule"]
---
# Inference rules

Inference rules in NMAKE supply commands to update targets and to infer dependents for targets. Extensions in an inference rule match a single target and dependent that have the same base name. Inference rules are user-defined or predefined; predefined rules can be redefined.

If an out-of-date dependency has no commands, and if [`.SUFFIXES`](dot-directives.md) contains the dependent's extension, NMAKE uses a rule whose extensions match the target and an existing file in the current or specified directory. If more than one rule matches existing files, the **`.SUFFIXES`** list determines which to use; list priority descends from left to right. If a dependent file doesn't exist and isn't listed as a target in another description block, an inference rule can create the missing dependent from another file that has the same base name. If a description block's target has no dependents or commands, an inference rule can update the target. Inference rules can build a command-line target even if no description block exists. NMAKE may invoke a rule for an inferred dependent even if an explicit dependent is specified.

## <a name="defining-a-rule"> Defining a rule

The *from_ext* represents the extension of a dependent file, and *to_ext* represents the extension of a target file.

```makefile
.from_ext.to_ext:
   commands
```

Extensions aren't case-sensitive. Macros can be invoked to represent *from_ext* and *to_ext*; the macros are expanded during preprocessing. The period (**`.`**) that precedes *from_ext* must appear at the beginning of the line. The colon (**`:`**) is preceded by zero or more spaces or tabs. It can be followed only by spaces or tabs, a semicolon (**`;`**) to specify a command, a number sign (**`#`**) to specify a comment, or a newline character. No other spaces are allowed. Commands are specified as in description blocks.

## <a name="search-paths-in-rules"> Search paths in rules

```makefile
{from_path}.from_ext{to_path}.to_ext:
   commands
```

An inference rule applies to a dependency only if paths specified in the dependency exactly match the inference-rule paths. Specify the dependent's directory in *from_path* and the target's directory in *to_path*; no spaces are allowed. Specify only one path for each extension. A path on one extension requires a path on the other. To specify the current directory, use either a period (**`.`**) or empty braces (**`{ }`**). Macros can represent *from_path* and *to_path*; they are invoked during preprocessing.

### Example of search paths

```makefile
{dbi\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUDBI) $<

{ilstore\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{misc\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{misc\}.c{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{msf\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<

{bsc\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{mre\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{namesrvr\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $(YUPDB) $<

{src\cvr\}.cpp{$(ODIR)}.obj::
        $(CC) $(CFLAGS) $<
```

## <a name="batch-mode-rules"> Batch-mode rules

```makefile
{from_path}.from_ext{to_path}.to_ext::
   commands
```

Batch-mode inference rules provide only one invocation of the inference rule when N commands go through this inference rule. Without batch-mode inference rules, it would require N commands to be invoked. N is the number of dependents that trigger the inference rule.

The only syntactical difference from the standard inference rule is that a batch-mode inference rule ends with a double colon (**`::`**).

> [!NOTE]
> The tool being invoked must be able to handle multiple files. The batch-mode inference rule must use **`$<`** as the macro to access dependent files.

The batch-mode inference rules can speed up the build process. It's faster to supply files to the compiler in batch mode, because the compiler driver is invoked only once. For example, the C and C++ compiler runs faster when handling a set of files, because it can remain memory resident during the entire process.

The following example shows how to use batch-mode inference rules:

```makefile
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

```cmd
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

```cmd
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

## <a name="predefined-rules"> Predefined rules

Predefined inference rules use NMAKE-supplied command and options macros.

| Rule | Command | Default action | Batch rule | Platform |
|--|--|--|--|--|
| `.asm.exe` | `$(AS) $(AFLAGS) $<` | `ml $<` | no | x86 |
| `.asm.obj` | `$(AS) $(AFLAGS) /c $<` | `ml /c $<` | yes | x86 |
| `.asm.exe` | `$(AS) $(AFLAGS) $<` | `ml64 $<` | no | x64 |
| `.asm.obj` | `$(AS) $(AFLAGS) /c $<` | `ml64 /c $<` | yes | x64 |
| `.c.exe` | `$(CC) $(CFLAGS) $<` | `cl $<` | no | all |
| `.c.obj` | `$(CC) $(CFLAGS) /c $<` | `cl /c $<` | yes | all |
| `.cc.exe` | `$(CC) $(CFLAGS) $<` | `cl $<` | no | all |
| `.cc.obj` | `$(CC) $(CFLAGS) /c $<` | `cl /c $<` | yes | all |
| `.cpp.exe` | `$(CPP) $(CPPFLAGS) $<` | `cl $<` | no | all |
| `.cpp.obj` | `$(CPP) $(CPPFLAGS) /c $<` | `cl /c $<` | yes | all |
| `.cxx.exe` | `$(CXX) $(CXXFLAGS) $<` | `cl $<` | no | all |
| `.cxx.obj` | `$(CXX) $(CXXFLAGS) /c $<` | `cl /c $<` | yes | all |
| `.rc.res` | `$(RC) $(RFLAGS) /r $<` | `rc /r $<` | no | all |

## <a name="inferred-dependents-and-rules"> Inferred dependents and rules

NMAKE assumes an inferred dependent for a target if an applicable inference rule exists. A rule applies if:

- *to_ext* matches the target's extension.

- *from_ext* matches the extension of a file that has the target's base name and that exists in the current or specified directory.

- *from_ext* is in [`.SUFFIXES`](dot-directives.md); no other *from_ext* in a matching rule has a higher **`.SUFFIXES`** priority.

- No explicit dependent has a higher **`.SUFFIXES`** priority.

Inferred dependents can cause unexpected side effects. If the target's description block contains commands, NMAKE executes those commands instead of the commands in the rule.

## <a name="precedence-in-inference-rules"> Precedence in inference rules

If an inference rule is defined more than once, NMAKE uses the highest-precedence definition. The following list shows the order of precedence from highest to lowest:

1. An inference rule defined in a makefile; later definitions have precedence.

1. An inference rule defined in *`Tools.ini`*; later definitions have precedence.

1. A predefined inference rule.

## See also

[NMAKE reference](nmake-reference.md)
