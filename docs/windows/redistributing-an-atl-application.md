---
title: Redistribute an ATL Application
description: Learn more about how to redistribute an ATL application.
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL, redistributing", "redistributing ATL", "redistributing OLE DB templates", "OLE DB templates, redistributing"]
ms.assetid: 9a696b22-2345-43ec-826b-be7cb8cfd676
ms.topic: concept-article
---
# Redistribute an ATL application

Beginning with Visual Studio 2012, Active Template Library (ATL) is a header-only library. ATL projects don't have a dynamic link to an ATL option. No redistributable ATL library is required.

If you redistribute an ATL executable application, you must register the `.exe` file (and any controls inside it). Use the following command:

```
filename /regserver
```

Where `filename` is the name of the executable file.

In Visual Studio 2010, you can build an ATL project for a `MinDependency` or a `MinSize` configuration:

- To get a `MinDependency` configuration, on the **General** property page, set the **Use of ATL** property to **Static Link to ATL**. On the **Code Generation** property page (C/C++ folder), set the **Runtime Library** property to **Multi-threaded (/MT)**.
- To get a `MinSize` configuration, on the **General** property page, set the **Use of ATL** property to **Dynamic Link to ATL**. Or on the **Code Generation** property page (C/C++ folder), set the **Runtime Library** property to **Multi-threaded DLL (/MD)**.

`MinSize` makes the output file as small as possible but requires that `ATL100.dll` and `Msvcr100.dll` (if you selected the **Multi-threaded DLL (/MD)** option) are on the target computer. Register `ATL100.dll` on the target computer to ensure that all ATL functionality is present. `ATL100.dll` contains ANSI and Unicode exports.

If you build your ATL or OLE DB templates project for a `MinDependency` target, you don't need to install and register `ATL100.dll` on the target computer, although you might get a larger program image.

If you redistribute an ATL executable application, you must register the `.exe` file (and any controls inside it). Use the following command:

```
filename /regserver
```

Where `filename` is the name of the executable file.

## Related content

- [Redistribute Visual C++ files](redistributing-visual-cpp-files.md)
