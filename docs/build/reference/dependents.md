---
title: "/DEPENDENTS"
ms.date: "11/04/2016"
f1_keywords: ["/dependents"]
helpviewer_keywords: ["-DEPENDENTS dumpbin option", "/DEPENDENTS dumpbin option", "DEPENDENTS dumpbin option"]
ms.assetid: 9b31da2a-75ac-4bbf-a3f1-adf8b0ecbbb4
---
# /DEPENDENTS

```
/DEPENDENTS
```

## Remarks

Dumps the names of the DLLs from which the image imports functions. Does not dump the names of the imported functions.

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option.


## Usage

Open a the Developer Command Prompt (Visual Studio Install), and type the following:

```
dumpbin /DEPENDENTS <%Fully Qualified Path Assembly Name%>

```
### Output

File Type: EXE/DLL
  
    Image has the following dependencies: (list of dependencies)
       *.dll


### Suggested Use

Use this tool to troubleshoot errors like the following:

- Could not load file or assembly '.dll' or one of its dependencies

## See also

[DUMPBIN Options](dumpbin-options.md)
