---
description: "Learn more about: Including Bracketed Filenames"
title: "Including Bracketed Filenames"
ms.date: "11/04/2016"
ms.assetid: 6a4e5411-c35e-48b8-90ef-b37ac324ed94
---
# Including Bracketed Filenames

**ANSI 3.8.2** The method for locating includable source files

For file specifications enclosed in angle brackets, the preprocessor does not search directories of the parent files. A "parent" file is the file that has the [#include](../preprocessor/hash-include-directive-c-cpp.md) directive in it. Instead, it begins by searching for the file in the directories specified on the compiler command line following /I. If the /I option is not present or fails, the preprocessor uses the INCLUDE environment variable to find any include files within angle brackets. The INCLUDE environment variable can contain multiple paths separated by semicolons (**;**). If more than one directory appears as part of the /I option or within the INCLUDE environment variable, the preprocessor searches them in the order in which they appear.

## See also

[Preprocessing Directives](../c-language/preprocessing-directives.md)
