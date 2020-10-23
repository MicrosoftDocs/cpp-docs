---
title: "pgosweep"
description: "Use the pgosweep command to write profile data to a PGC file for use in profile-guided optimization."
ms.date: 10/23/2020
helpviewer_keywords: ["pgosweep program", "profile-guided optimizations, pgosweep"]
---
# pgosweep

Used in profile-guided optimization to write all profile data from a running program to the PGC file.

## Syntax

> **`pgosweep`** [*options*] *image* *pgcfile*

### Parameters

*options*\
(Optional) The valid values for *options* are:

- **`/?`** or **`/help`** displays the help message.

- **`/reset`** resets counts to zero after sweep. This behavior is the default.

- **`/pid:n`** only sweeps the specified PID, where *n* is the PID number.

- **`/wait`** waits for the specified PID to terminate before collecting counts.

- **`/onlyzero`** doesn't save a PGC file, only zero counts.

- **`/pause`** pauses count collection on the system.

- **`/resume`** resumes count collection on the system.

- **`/noreset`** preserves the count in the runtime data structures.

*image*\
The full path of an EXE or DLL file that was created by using the [`/GENPROFILE`](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md), [`/FASTGENPROFILE`](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md), or [`/LTCG:PGINSTRUMENT`](reference/ltcg-link-time-code-generation.md) option.

*pgcfile*\
The PGC file where this command writes out the data counts.

## Remarks

The **`pgosweep`** command works on programs that were built by using the [`/GENPROFILE` or `/FASTGENPROFILE`](reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md) option, or the deprecated [`/LTCG:PGINSTRUMENT`](reference/ltcg-link-time-code-generation.md) option. It interrupts a running program and writes the profile data to a new PGC file. By default, the command resets counts after each write operation. If you specify the **`/noreset`** option, the command will record the values, but not reset them in the running program. This option gives you duplicate data if you retrieve the profile data later.

An alternative use for **`pgosweep`** is to retrieve profile information just for the normal operation of the application. For example, you could run **`pgosweep`** shortly after you start the application and discard that file. This command would remove profile data associated with startup costs. Then, you can run **`pgosweep`** before ending the application. Now the collected data has profile information only from the time the user could interact with the program.

When you name a PGC file (by using the *pgcfile* parameter) you can use the standard format, which is *`appname!n.pgc`*. The *n* represents an increasing numeric value for each file. If you use this format, the compiler automatically finds this data in the **`/LTCG /USEPROFILE`** or **`/LTCG:PGO`** phase. If you don't use the standard format, you must use [`pgomgr`](pgomgr.md) to merge the PGC files.

> [!NOTE]
> You can start this tool only from a Visual Studio developer command prompt. You can't start it from a system command prompt or from File Explorer.

For information on how to capture the profile data from within your executable, see [`PgoAutoSweep`](pgoautosweep.md).

## Example

In this example command, **`pgosweep`** writes the current profile information for *`myapp.exe`* to *`myapp!1.pgc`*.

`pgosweep myapp.exe myapp!1.pgc`

## See also

[Profile-Guided Optimizations](profile-guided-optimizations.md)\
[PgoAutoSweep](pgoautosweep.md)
