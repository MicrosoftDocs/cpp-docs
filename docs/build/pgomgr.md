---
description: "Learn more about: pgomgr"
title: "pgomgr"
ms.date: "03/14/2018"
helpviewer_keywords: ["pgomgr program", "profile-guided optimizations, pgomgr"]
ms.assetid: 74589126-df18-42c9-8739-26d60e148d6a
---
# pgomgr

Adds profile data from one or more .pgc files to the .pgd file.

## Syntax

> **pgomgr** [*options*] *pgcfiles* *pgdfile*

### Parameters

*options*<br/>
The following options can be specified to **pgomgr**:

- **/help** or **/?** Displays available **pgomgr** options.

- **/clear** Causes the .pgd file to be cleared of all profile information. You cannot specify a .pgc file when **/clear** is specified.

- **/detail** Displays detailed statistics, including flow graph coverage information.

- **/summary** Displays per-function statistics.

- **/unique** When used with **/summary**, causes decorated function names to display. The default, when **/unique** is not used, is for undecorated function names to be displayed.

- **/merge**\[**:**<em>n</em>] Causes the data in the .pgc file or files to be added to the .pgd file. The optional parameter, *n*, lets you specify that the data should be added *n* times. For example, if a scenario would commonly be done six times to reflect how often it is done by customers, you can do it once in a test run and add it to the .pgd file six times with **pgomgr /merge:6**.

*pgcfiles*<br/>
One or more .pgc files whose profile data you want to merge into the .pgd file. You can specify a single .pgc file or multiple .pgc files. If you do not specify any .pgc files, **pgomgr** merges all .pgc files whose filenames are the same as the .pgd file.

*pgdfile*<br/>
The .pgd file into which you are merging data from the .pgc file or files.

## Remarks

> [!NOTE]
> You can start this tool only from a Visual Studio developer command prompt. You cannot start it from a system command prompt or from File Explorer.

## Example

This example command clears the myapp.pgd file of profile data:

`pgomgr /clear myapp.pgd`

This example command adds profile data in myapp1.pgc to the .pgd file three times:

`pgomgr /merge:3 myapp1.pgc myapp.pgd`

In this example, profile data from all myapp#.pgc files is added to the myapp.pgd file.

`pgomgr -merge myapp1.pgd`

## See also

[Profile-Guided Optimizations](profile-guided-optimizations.md)<br/>
[PgoAutoSweep](pgoautosweep.md)<br/>
[pgosweep](pgosweep.md)<br/>
