---
description: "Learn more about: Redistributing an ATL application"
title: "Redistributing an ATL application"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATL, redistributing", "redistributing ATL", "redistributing OLE DB templates", "OLE DB templates, redistributing"]
ms.assetid: 9a696b22-2345-43ec-826b-be7cb8cfd676
---
# Redistributing an ATL application

Starting in Visual Studio 2012, Active Template Library (ATL) is a header-only library. ATL projects do not have a Dynamic Link to ATL option. No redistributable ATL library is required.

If you redistribute an ATL executable application, you must register the .exe file (and any controls inside it) by issuing the following command:

```
filename /regserver
```

where `filename` is the name of the executable file.

In Visual Studio 2010, an ATL project can be built for a MinDependency or a MinSize configuration. A MinDependency configuration is what you get when you set the **Use of ATL** property to **Static Link to ATL** on the **General** property page and set the **Runtime Library** property to **Multi-threaded (/MT)** on the **Code Generation** property page (C/C++ folder).

A MinSize configuration is what you get when you set the **Use of ATL** property to **Dynamic Link to ATL** on the **General** property page, or set the **Runtime Library** property to **Multi-threaded DLL (/MD)** on the **Code Generation** property page (C/C++ folder).

MinSize makes the output file as small as possible but requires that ATL100.dll and Msvcr100.dll (if you selected the **Multi-threaded DLL (/MD)** option) are on the target computer. ATL100.dll should be registered on the target computer to ensure that all ATL functionality is present. ATL100.dll contains ANSI and Unicode exports.

If you build your ATL or OLE DB Templates project for a MinDependency target, you do not need to install and register ATL100.dll on the target computer, although you might get a larger program image.

If you redistribute an ATL executable application, you must register the .exe file (and any controls inside it) by issuing the following command:

```
filename /regserver
```

where `filename` is the name of the executable file.

## See also

[Redistributing Visual C++ Files](redistributing-visual-cpp-files.md)
