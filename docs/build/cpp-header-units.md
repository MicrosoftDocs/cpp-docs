---
description: "Learn more about C++ header units"
title: "C++ header units"
ms.date: "3/11/2021"
f1_keywords: ["header unit"]
helpviewer_keywords: ["header unit"]
---

# C++ header units

This section is about C++ building and importing header units. If you want to learn about C++ 20 modules, see []().
See [Speed up your compilation with Standard Template Library (STL) header units]() to learn how to import STL libraries for faster compilation throughput.

## What is a header unit

A header unit is an interpretation of a header file as if it was a self-contained translation unit that exports all declarations contained therein. They are used to provide some “module-like” feel to header files even though they lack the level of isolation and one definition rule (ODR) guarantees provided by named modules.  Their essential use is to save on repeated processing of the same content of a header file in order to improve on compilation time.  That requires ability to refer to the saved work, for re-use.  Unfortunately, the semantics provided by a header file is really its content – not the filepath of the header file -- whereas a module is identified uniquely by its name.  This document specifies the MSVC compiler switches recommended for producing the IFC files for header units, and how to consume them. In the process, it addresses a few weaknesses in the current IFC production.  Consequently, the MSVC compiler needs to be modified to comply. 

### IFC files

Want to describe what these are briefly? Also from Header Units: production and consumption by Gabriel Reis

 An IFC file is a binary format that stores the definition of a named module interface file or a header unit. This is the thing the compiler brings in when an *import* statement is processed.

Brought in with /reference M=/path/to/some-file.ifc which establishes a mapping between the module name and where to find the corresponding IFC file.

/exportHeader requests the generation of the .IFC file.

Contrast with Shared PCH usage sample in Visual Studio (see https://devblogs.microsoft.com/cppblog/shared-pch-usage-sample-in-visual-studio/

See the following topics to help you with the way you'd like to use header units.



## In this section

[Compile faster with Standard Template Library (STL) header units](walkthrough-import-stl-header-units.md)
[Build and import header units](walkthrough-build-import-header-units.md)
[Strategies for reusing header units](header-unit-strategies.md)  maybe this folds into the article above JTW
[header-unit.json reference](header-unit-json-reference.md)

## See also

[Modules docs]()
[Precompiled header docs]()
[ISO papers?]()