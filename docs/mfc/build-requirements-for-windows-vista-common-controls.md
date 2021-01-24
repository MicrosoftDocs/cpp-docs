---
description: "Learn more about: Build Requirements for Windows Common Controls"
title: "Build Requirements for Windows Common Controls"
ms.date: "08/19/2019"
helpviewer_keywords: ["Common Controls (MFC), build requirements", "Common Controls (MFC)"]
ms.assetid: 025f7d55-55a2-4dcd-8f62-02424e3dcc04
---
# Build Requirements for Windows Common Controls

The Microsoft Foundation Class (MFC) library supports [Windows Common Controls](/windows/win32/controls/common-controls-intro). The Common Controls are included in Windows and the library is included in Visual Studio. The MFC library provides new methods that enhance existing classes, and additional classes and methods that support Windows Common Controls. When you build your application, you should follow the compilation and migration requirements that are described in the following sections.

## Compilation Requirements

### Supported Versions

MFC supports all versions of the Common Controls. For information about Windows Common Controls versions, see [Common Control Versions](/windows/win32/controls/common-control-versions).

### Supported Character Sets

The Windows Common Controls support only the Unicode character set, and not the ANSI character set. If you build your application on the command line, use both of the following define (/D) compiler options to specify Unicode as the underlying character set:

```
/D_UNICODE /DUNICODE
```

If you build your application in the Visual Studio integrated development environment (IDE), specify the **Unicode Character Set** option of the **Character Set** property in the **General** node of the project properties.

## Migration Requirements

If you use the Visual Studio IDE to build a new MFC application that uses Windows Common Controls, the IDE automatically declares an appropriate manifest. However, if you migrate an existing MFC application from Visual Studio 2005 or earlier and you want to use the Common Controls, the IDE does not automatically provide manifest information to upgrade your application. Instead, you must manually insert the following source code in your precompiled header file:

```
#ifdef UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif
```

## See also

[General MFC Topics](general-mfc-topics.md)<br/>
[Hierarchy Chart](hierarchy-chart.md)<br/>
[Deprecated ANSI APIs](deprecated-ansi-apis.md)
