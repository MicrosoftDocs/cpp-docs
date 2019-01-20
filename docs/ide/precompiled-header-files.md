---
title: "Precompiled Header Files"
ms.date: "11/04/2016"
f1_keywords: ["stdafx.h"]
helpviewer_keywords: ["stdafx.h", "PCH files, file descriptions", ".pch files, file descriptions", "precompiled header files, file descriptions", "stdafx.cpp"]
ms.assetid: 8228d87a-5609-41f3-9697-b16094c000e5
---
# Precompiled Header Files

These files are used to build a precompiled header file *Projname*.pch and a precompiled types file Stdafx.obj.

These files are located in the *Projname* directory. In Solution Explorer, Stdafx.h is in the Header Files folder, and Stdafx.cpp is located in the Source Files folder.

|File name|Description|
|---------------|-----------------|
|Stdafx.h|An include file for standard system include files and for project-specific include files that are used frequently but are changed infrequently.<br /><br /> You should not define or undefine any of the _AFX_NO_XXX macros in stdafx.h.|
|Stdafx.cpp|Contains the preprocessor directive `#include "stdafx.h"` and adds include files for precompiled types. Precompiled files of any type, including header files, support faster compilation times by restricting compilation only to those files that require it. Once your project is built the first time, you will notice much faster build times on subsequent builds because of the presence of the precompiled header files.|

## See also

- [File Types Created for Visual C++ Projects](../ide/file-types-created-for-visual-cpp-projects.md)
- [Working with Project Properties](../ide/working-with-project-properties.md)
