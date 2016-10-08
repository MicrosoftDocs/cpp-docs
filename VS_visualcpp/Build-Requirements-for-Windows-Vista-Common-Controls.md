---
title: "Build Requirements for Windows Vista Common Controls"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 025f7d55-55a2-4dcd-8f62-02424e3dcc04
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Build Requirements for Windows Vista Common Controls
The Microsoft Foundation Class (MFC) library supports Windows Common Controls version 6.1. The common controls are included in Windows Vista and the library is included in the Visual Studio SDK. The library provides new methods that enhance existing classes, and new classes and methods that support Windows Vista common controls. When you build your application, you should follow the compilation and migration requirements that are described in the following sections.  
  
## Compilation Requirements  
  
### Supported Versions  
 Some new classes and methods support only Windows Vista and later, while other methods also support earlier operating systems. A note in the `Requirements` section of each method topic specifies when the minimum required operating system is Windows Vista.  
  
 Even if your computer does not run Windows Vista, you can build an MFC application that will run on Windows Vista if you have the version 6.1 MFC header files on your computer. However, common controls that are designed specifically for Windows Vista operate only on that system, and are ignored by earlier operating systems.  
  
### Supported Character Sets  
 The new Windows common controls support only the Unicode character set, and not the ANSI character set. If you build your application on the command line, use both of the following define (/D) compiler options to specify Unicode as the underlying character set:  
  
```  
/D_UNICODE /DUNICODE  
```  
  
 If you build your application in the Visual Studio integrated development environment (IDE), specify the **Unicode Character Set** option of the **Character Set** property in the **General** node of the project properties.  
  
 The ANSI version of several MFC methods have been deprecated starting with Windows Common Controls version 6.1. For more information, see [Deprecated ANSI APIs](../VS_visualcpp/Deprecated-ANSI-APIs.md).  
  
## Migration Requirements  
 If you use the Visual Studio IDE to build a new MFC application that uses Windows Common Controls version 6.1, the IDE automatically declares an appropriate manifest. However, if you migrate an existing MFC application from an earlier version of Visual Studio and you want to use the new common controls, the IDE does not automatically provide manifest information to upgrade your application. Instead, you must manually insert the following source code in your stdafx.h file:  
  
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
  
## See Also  
 [General MFC Topics](../VS_visualcpp/General-MFC-Topics.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Deprecated ANSI APIs](../VS_visualcpp/Deprecated-ANSI-APIs.md)