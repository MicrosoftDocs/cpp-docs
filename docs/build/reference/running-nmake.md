---
title: "Running NMAKE"
description: "Learn about running NMAKE."
ms.date: 09/30/2021
helpviewer_keywords: ["targets, building", "response files, NMAKE", "targets", "command files", "NMAKE program, targets", "NMAKE program, running", "command files, NMAKE"]
---
# Running NMAKE

## Syntax

> **`NMAKE`** [*option* ...] [*macros* ...] [*targets* ...] [**`@`**_command-file_ ...]

## Remarks

NMAKE builds only specified *targets* or, when none is specified, the first target in the makefile. The first makefile target can be a [pseudotarget](description-blocks.md#pseudotargets) that builds other targets. NMAKE uses makefiles specified with **`/F`**, or if **`/F`** isn't specified, the Makefile file in the current directory. If no makefile is specified, it uses inference rules to build command-line *targets*.

The *command-file* text file (or response file) contains command-line input. Other input can precede or follow \@*command-file*. A path is permitted. In *command-file*, line breaks are treated as spaces. Enclose macro definitions in quotation marks if they contain spaces.

## NMAKE options

NMAKE options are described in the following table. Options are preceded by either a slash (`/`) or a dash (`-`), and aren't case-sensitive. Use [`!CMDSWITCHES`](makefile-preprocessing.md#makefile-preprocessing-directives) to change option settings in a makefile or in *`Tools.ini`*.

| Option | Purpose |
|--|--|
| **`/A`** | Forces build of all evaluated targets, even if not out-of-date compared to dependents. Doesn't force builds of unrelated targets. |
| **`/B`** | Forces build even if timestamps are equal. Recommended only for fast systems (resolution of two seconds or less). |
| **`/C`** | Suppresses default output, including nonfatal NMAKE errors or warnings, timestamps, and NMAKE copyright message. Suppresses warnings issued by **`/K`**. |
| **`/D`** | Displays timestamps of each evaluated target and dependent and a message when a target doesn't exist. Useful with **`/P`** for debugging a makefile. Use `!CMDSWITCHES` to set or clear **`/D`** for part of a makefile. |
| **`/E`** | Causes environment variables to override makefile macro definitions. |
| **`/ERRORREPORT`** [ **`NONE`** \| **`PROMPT`** \| **`QUEUE`** \| **`SEND`** ] | Deprecated. [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings control reporting. |
| **`/F`** *filename* | Specifies *filename* as a makefile. Spaces or tabs can precede *filename*. Specify **`/F`** once for each makefile. To supply a makefile from standard input, specify a dash (`-`) for *filename*, and end keyboard input with either **F6** or **CTRL+Z**. |
| **`/G`** | Displays the makefiles included with the `!INCLUDE` directive. For more information, see [Makefile preprocessing directives](makefile-preprocessing.md#makefile-preprocessing-directives). |
| **`/HELP`**, **`/?`** | Displays a brief summary of NMAKE command-line syntax. |
| **`/I`** | Ignores exit codes from all commands. To set or clear **`/I`** for part of a makefile, use `!CMDSWITCHES`. To ignore exit codes for part of a makefile, use a dash (`-`) command modifier or [`.IGNORE`](dot-directives.md). Overrides **`/K`** if both are specified. |
| **`/K`** | Continues building unrelated dependencies, if a command returns an error. Also issues a warning and returns an exit code of 1. By default, NMAKE halts if any command returns a nonzero exit code. Warnings from **`/K`** are suppressed by **`/C`**; **`/I`** overrides **`/K`** if both are specified. |
| **`/N`** | Displays but doesn't execute commands; preprocessing commands are executed. Doesn't display commands in recursive NMAKE calls. Useful for debugging makefiles and checking timestamps. To set or clear **`/N`** for part of a makefile, use `!CMDSWITCHES`. |
| **`/NOLOGO`** | Suppresses the NMAKE copyright message. |
| **`/P`** | Displays information (macro definitions, inference rules, targets, [`.SUFFIXES`](dot-directives.md) list) to standard output, and then runs the build. If no makefile or command-line target exists, it displays information only. Use with **`/D`** to debug a makefile. |
| **`/Q`** | Checks timestamps of targets; doesn't run the build. Returns a zero exit code if all targets are up to date, and a nonzero exit code if any target is out of date. Preprocessing commands are executed. Useful when running NMAKE from a batch file. |
| **`/R`** | Clears the `.SUFFIXES` list and ignores inference rules and macros that are defined in the *`Tools.ini`* file or that are predefined. |
| **`/S`** | Suppresses display of executed commands. To suppress display in part of a makefile, use the **`@`** command modifier or [`.SILENT`](dot-directives.md). To set or clear **`/S`** for part of a makefile, use `!CMDSWITCHES`. |
| **`/T`** | Updates timestamps of command-line targets (or first makefile target) and executes preprocessing commands but doesn't run the build. |
| **`/U`** | Must be used in conjunction with **`/N`**. Dumps inline NMAKE files so that the **`/N`** output can be used as a batch file. |
| **`/X`** *filename* | Sends NMAKE error output to *filename* instead of standard error. Spaces or tabs can precede *filename*. To send error output to standard output, specify a dash (`-`) for *filename*. Doesn't affect output from commands to standard error. |
| **`/Y`** | Disables batch-mode inference rules. When this option is selected, all batch-mode inference rules are treated as regular inference rules. |

## Tools.ini and NMAKE

NMAKE reads *`Tools.ini`* before it reads makefiles, unless **`/R`** is used. It looks for *`Tools.ini`* first in the current directory, and then in the directory specified by the INIT environment variable. The section for NMAKE settings in the initialization file begins with `[NMAKE]` and can contain any makefile information. Specify a comment on a separate line beginning with a number sign (**`#`**).

## Exit Codes from NMAKE

NMAKE returns the following exit codes:

| Code | Meaning |
|--|--|
| 0 | No error (possibly a warning) |
| 1 | Incomplete build (issued only when **`/K`** is used) |
| 2 | Program error, possibly caused by one of these issues:<br /> - A syntax error in the makefile<br /> - An error or exit code from a command<br /> - An interruption by the user |
| 4 | System error — out of memory |
| 255 | Target isn't up to date (issued only when **`/Q`** is used) |

## See also

[NMAKE Reference](nmake-reference.md)
