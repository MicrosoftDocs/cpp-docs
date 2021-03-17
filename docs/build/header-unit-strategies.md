---
description: "Learn strategies for sharing C++ header units"
title: "Strategies for sharing C++ header units"
ms.date: "3/15/2021"
f1_keywords: ["header unit"]
helpviewer_keywords: ["header unit"]
---

# Strategies for sharing C++ header units

Header units that are built as a part of a static library project, are automatically available to all directly and indirectly referencing projects. 

To use modules and header units built as a part of a dll project, their symbols have to be exported from the dll as any other C/C++ symbols and “All Modules arePublic” property should be set to true.

If you build header units for the headers in your codebase, you might want to control which ones should be automatically available to all referencing projects and which ones should be “private” by specifying  “Public C++ Modules Directories”. 

You might also want to specify “Public Include Directories” for your public headers to be automatically added to Include Directories (/I) in the referencing projects.

[Picture of header unit property pages]( see Building and using header units in VC projects.docx under Reusing built header units between different projects)

Ensure that projects that share header units are built with compatible compilation options, just as you would with shared pre-compiled headers. The compiler will issue warnings if it detects different compilation options in how the module or header unit was produced and how it is used.

If you reference two or more projects that built two or more modules with the same name or two or more header unit for the same header file,  you can use C/C++ >  Additional Module dependencies & Additional Header Unit Dependencies to resolve those collisions by specifying which module or header unit should be used for this project. Otherwise the one that is chosen is undefined.




## See also

