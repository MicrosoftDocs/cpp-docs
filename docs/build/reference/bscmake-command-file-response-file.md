---
description: "Learn more about: BSCMAKE Command File (Response File)"
title: "BSCMAKE Command File (Response File)"
ms.date: "11/04/2016"
helpviewer_keywords: ["BSCMAKE, response file", "BSCMAKE, command file", "response files, BSCMAKE", "command files, BSCMAKE", "response files", "command files"]
ms.assetid: abdffeea-35c7-4f2d-8c17-7d0d80bac314
---
# BSCMAKE Command File (Response File)

> [!WARNING]
> Although BSCMAKE is still installed with Visual Studio, it is no longer used by the IDE. Since Visual Studio 2008, browse and symbol information is stored automatically in a SQL Server .sdf file in the solution folder.

You can provide part or all of the command-line input in a command file. Specify the command file using the following syntax:

```
BSCMAKE @filename
```

Only one command file is allowed. You can specify a path with *filename*. Precede *filename* with an at sign (**\@**). BSCMAKE does not assume an extension. You can specify additional *sbrfiles* on the command line after *filename*. The command file is a text file that contains the input to BSCMAKE in the same order as you would specify it on the command line. Separate the command-line arguments with one or more spaces, tabs, or newline characters.

The following command calls BSCMAKE using a command file:

```
BSCMAKE @prog1.txt
```

The following is a sample command file:

```
/n /v /o main.bsc /El
/S (
toolbox.h
verdate.h c:\src\inc\screen.h
)
file1.sbr file2.sbr file3.sbr file4.sbr
```

## See also

[BSCMAKE Reference](bscmake-reference.md)
