---
title: "pgosweep"
ms.date: "03/14/2018"
helpviewer_keywords: ["pgosweep program", "profile-guided optimizations, pgosweep"]
ms.assetid: f39dd3b7-1cd9-4c3b-8e8b-fb794744b757
---
# pgosweep

Used in profile-guided optimization to write all profile data from a running program to the .pgc file.

## Syntax

> **pgosweep** [*options*] *image* *pgcfile*

### Parameters

*options*<br/>
(Optional) The valid values for *options* are:

- **/?** or **/help** displays the help message.

- **/noreset** preserves the count in the runtime data structures.

*image*<br/>
The full path of an .exe or .dll file that was created by using the [/GENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md), [/FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md), or [/LTCG:PGINSTRUMENT](ltcg-link-time-code-generation.md) option.

*pgcfile*<br/>
The .pgc file where this command writes out the data counts.

## Remarks

The **pgosweep** command works on programs that were built by using the [/GENPROFILE or /FASTGENPROFILE](genprofile-fastgenprofile-generate-profiling-instrumented-build.md) option, or the deprecated [/LTCG:PGINSTRUMENT](ltcg-link-time-code-generation.md) option. It interrupts a running program and writes the profile data to a new .pgc file. By default, the command resets counts after each write operation. If you specify the **/noreset** option, the command will record the values, but not reset them in the running program. This option gives you duplicate data if you retrieve the profile data later.

An alternative use for **pgosweep** is to retrieve profile information just for the normal operation of the application. For example, you could run **pgosweep** shortly after you start the application and discard that file. This would remove profile data associated with startup costs. Then, you can run **pgosweep** before ending the application. Now the collected data has profile information only from the time the user could interact with the program.

When you name a .pgc file (by using the *pgcfile* parameter) you can use the standard format, which is *appname!n*.pgc. If you use this format, the compiler automatically finds this data in the **/LTCG /USEPROFILE** or **/LTCG:PGO** phase. If you do not use the standard format, you must use [pgomgr](pgomgr.md) to merge the .pgc files.

> [!NOTE]
> You can start this tool only from a Visual Studio developer command prompt. You cannot start it from a system command prompt or from File Explorer.

For information on how to capture the profile data from within your executable, see [PgoAutoSweep](pgoautosweep.md).

## Example

In this example command, **pgosweep** writes the current profile information for myapp.exe to myapp!1.pgc.

`pgosweep myapp.exe myapp!1.pgc`

## See also

- [Profile-Guided Optimizations](profile-guided-optimizations.md)
- [PgoAutoSweep](pgoautosweep.md)
