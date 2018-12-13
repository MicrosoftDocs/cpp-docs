---
title: "DUMPBIN Command Line (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["dumpbin"]
helpviewer_keywords: ["DUMPBIN program, command line"]
ms.assetid: e6ad17d3-965d-41aa-9dfd-75bb073718d4
---
# DUMPBIN Command Line

To run DUMPBIN, use the following syntax:

```
DUMPBIN [options] files...
```

Specify one or more binary files, along with any options required to control the information. DUMPBIN displays the information to standard output. You can either redirect it to a file or use the /OUT option to specify a file name for the output.

When you run DUMPBIN on a file without specifying an option, DUMPBIN displays the /SUMMARY output.

When you type the command `dumpbin` without any other command-line input, DUMPBIN displays a usage statement that summarizes its options.

## See Also

[C/C++ Build Tools](c-cpp-build-tools.md)<br/>
[DUMPBIN Reference](dumpbin-reference.md)