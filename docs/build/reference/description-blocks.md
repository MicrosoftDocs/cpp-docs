---
title: "Description blocks"
description: "NMAKE uses description blocks to associate targets, dependencies, and commands in a makefile."
ms.date: 09/30/2021
helpviewer_keywords: ["description blocks", "NMAKE program, description blocks", "blocks, description"]
---
# Description blocks

Description blocks form the core of a makefile. They describe the *targets*, or files to create, and their *dependencies*, the files needed to create the targets. A description block may include *commands*, that describe how to create the targets from the dependencies. A description block is a dependency line, optionally followed by a commands block:

```makefile
targets... : dependents...
    commands...
```

## Dependency lines

A *dependency line* specifies one or more targets, and zero or more dependents. If a target doesn't exist, or has an earlier timestamp than a dependent, NMAKE executes the commands in the command block. NMAKE also executes the command block if the target is a [pseudotarget](#pseudotargets). Here's an example dependency line:

```makefile
hi_bye.exe : hello.obj goodbye.obj helper.lib
```

In this dependency line, `hi_bye.exe` is the target. Its dependencies are `hello.obj`, `goodbye.obj`, and `helper.lib`. The dependency line tells NMAKE to build the target whenever `hello.obj`, `goodbye.obj`, or `helper.lib` has changed more recently than `hi_bye.exe`.

A target must be at the start of the line. It can't be indented with any spaces or tabs. Use a colon (`:`) to separate targets from dependents. Spaces or tabs are allowed between targets, the colon separator (`:`), and dependents. To split the dependency line, use a backslash (`\`) after a target or dependent.

Before it executes command blocks, NMAKE scans all the dependencies and any applicable inference rules to build a *dependency tree*. A dependency tree specifies the steps required to fully update the target. NMAKE checks recursively whether a dependent is itself a target in another dependency list. After it builds the dependency tree, NMAKE checks time stamps. If any dependents in the tree are newer than the target, NMAKE builds the target.

## <a name="targets"></a> Targets

The targets section of a dependency line specifies one or more targets. A target can be any valid filename, directory name, or [pseudotarget](#pseudotargets). Separate multiple targets by using one or more spaces or tabs. Targets aren't case-sensitive. Paths are permitted with filenames. A target and its path can't exceed 256 characters. If the target preceding the colon is a single character, use a separating space. Otherwise, NMAKE interprets the letter-colon combination as a drive specifier.

### <a name="multiple-targets"></a> Multiple targets

NMAKE evaluates multiple targets in a single dependency as if each were specified in a separate description block.

For example, this rule:

```makefile
bounce.exe leap.exe : jump.obj
   echo Building...
```

is evaluated as:

```makefile
bounce.exe : jump.obj
   echo Building...

leap.exe : jump.obj
   echo Building...
```

### <a name="cumulative-dependencies"></a> Cumulative dependencies

Dependencies are cumulative in a description block, if a target is repeated.

For example, this set of rules,

```makefile
bounce.exe : jump.obj
bounce.exe : up.obj
   echo Building bounce.exe...
```

is evaluated as:

```makefile
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
```

When you have multiple targets in multiple dependency lines in a single description block, NMAKE evaluates them as if each were specified in a separate description block. However, only targets in the last dependency line use the commands block. NMAKE attempts to use an inference rule for the other targets.

For example, this set of rules,

```makefile
leap.exe bounce.exe : jump.obj
bounce.exe climb.exe : up.obj
   echo Building bounce.exe...
```

is evaluated as:

```makefile
leap.exe : jump.obj
# invokes an inference rule

bounce.exe : jump.obj up.obj
   echo Building bounce.exe...

climb.exe : up.obj
   echo Building bounce.exe...
```

### <a name="targets-in-multiple-description-blocks"></a> Targets in multiple description blocks

To update a target in more than one description block using different commands, specify two consecutive colons (::) between targets and dependents.

```makefile
target.lib :: one.asm two.asm three.asm
    ml one.asm two.asm three.asm
    lib target one.obj two.obj three.obj
target.lib :: four.c five.c
    cl /c four.c five.c
    lib target four.obj five.obj
```

### <a name="dependency-side-effects"></a> Dependency side effects

You might specify a target with a colon (:) in two dependency lines in different locations. If commands appear after only one of the lines, NMAKE interprets the dependencies as if the lines were adjacent or combined. It doesn't invoke an inference rule for the dependency that has no commands. Instead, NMAKE assumes the dependencies belong to one description block, and executes the commands specified with the other dependency. Consider this set of rules:

```makefile
bounce.exe : jump.obj
   echo Building bounce.exe...

bounce.exe : up.obj
```

is evaluated as:

```makefile
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
```

This effect doesn't occur if a double colon (`::`) is used. For example, this set of rules:

```makefile
bounce.exe :: jump.obj
   echo Building bounce.exe...

bounce.exe :: up.obj
```

is evaluated as:

```makefile
bounce.exe : jump.obj
   echo Building bounce.exe...

bounce.exe : up.obj
# invokes an inference rule
```

### <a name="pseudotargets"></a> Pseudotargets

A *pseudotarget* is a label used in place of a filename in a dependency line. It's interpreted as a file that doesn't exist, and so is out-of-date. NMAKE assumes a pseudotarget's timestamp is the same as the most recent of all its dependents. If it has no dependents, the current time is assumed. If a pseudotarget is used as a target, its commands are always executed. A pseudotarget used as a dependent must also appear as a target in another dependency. However, that dependency doesn't need to have a commands block.

Pseudotarget names follow the filename syntax rules for targets. However, if the name doesn't have an extension, it can exceed the 8-character limit for filenames, and can be up to 256 characters long.

Pseudotargets are useful when you want NMAKE to build more than one target automatically. NMAKE only builds targets specified on the command line. Or, if no command-line target is specified, it builds only the first target in the first dependency in the makefile. You can tell NMAKE to build multiple targets without listing them individually on the command line. Write a description block with a dependency containing a pseudotarget, and list the targets you want to build as its dependents. Then, place this description block first in the makefile, or specify the pseudotarget on the NMAKE command line.

In this example, UPDATE is a pseudotarget.

```makefile
UPDATE : *.*
!COPY $** c:\product\release
```

When UPDATE is evaluated, NMAKE copies all files in the current directory to the specified drive and directory.

In the following makefile, the pseudotarget `all` builds both `project1.exe` and `project2.exe` if either `all` or no target is specified on the command line. The pseudotarget `setenv` changes the LIB environment variable before the `.exe` files are updated:

```makefile
all : setenv project1.exe project2.exe

project1.exe : project1.obj
    LINK project1;

project2.exe : project2.obj
    LINK project2;

setenv :
    set LIB=\project\lib
```

## <a name="dependents"></a> Dependents

In a dependency line, specify zero or more dependents after the colon (`:`) or double colon (`::`), using any valid filename or [pseudotarget](#pseudotargets). Separate multiple dependents by using one or more spaces or tabs. Dependents aren't case-sensitive. Paths are permitted with filenames.

### <a name="inferred-dependents"></a> Inferred dependents

Along with dependents you explicitly list in the dependency line, NMAKE can assume an *inferred dependent*. An inferred dependent is derived from an inference rule, and is evaluated before explicit dependents. When an inferred dependent is out-of-date compared to its target, NMAKE invokes the command block for the dependency. If an inferred dependent doesn't exist, or is out-of-date compared to its own dependents, NMAKE first updates the inferred dependent. For more information about inferred dependents, see [Inference rules](inference-rules.md).

### <a name="search-paths-for-dependents"></a> Search paths for dependents

You can specify an optional search path for each dependent. Here's the syntax to specify a set of directories to search:

> **{**_directory_\[**;**_directory_...]**}**_dependent_

Enclose directory names in braces (`{ }`). Separate multiple directories with a semicolon (`;`). No spaces or tabs are allowed. NMAKE looks for the dependent first in the current directory, and then in the list of directories in the order specified. You can use a macro to specify part or all of a search path. Only the specified dependent uses this search path.

#### Directory search path example

This dependency line shows how to create a directory specification for a search:

```makefile
reverse.exe : {\src\omega;e:\repo\backwards}retro.obj
```

The target `reverse.exe` has one dependent, `retro.obj`. The brace-enclosed list specifies two directories. NMAKE searches for `retro.obj` in the current directory first. If it isn't there, NMAKE searches the `\src\omega` directory, then the `e:\repo\backwards` directory.

## See also

[NMAKE Reference](nmake-reference.md)
