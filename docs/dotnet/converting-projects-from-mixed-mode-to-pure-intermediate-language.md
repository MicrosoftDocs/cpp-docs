---
title: "Converting Projects from Mixed Mode to Pure Intermediate Language | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "intermediate language, mixed-mode applications"
  - "mixed-mode applications"
  - "mixed-mode applications, intermediate language"
  - "projects [C++], converting to intermediate language"
ms.assetid: 855f9e3c-4f09-4bfe-8eab-a45f68292be9
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Converting Projects from Mixed Mode to Pure Intermediate Language
All Visual C++ CLR projects link to the C run-time libraries by default. Consequently, these projects are classified as mixed-mode applications, because they combine native code with code that targets the common language runtime (managed code). When they are compiled, they are compiled into intermediate language (IL), also known as Microsoft intermediate language (MSIL).  
  
### To convert your mixed-mode application into pure intermediate language  
  
1.  Remove links to the [C run-time libraries](../c-runtime-library/crt-library-features.md) (CRT):  
  
    1.  In the .cpp file defining the entry point of your application, change the entry point to `Main()`. Using `Main()` indicates that your project does not link to the CRT.  
  
    2.  In Solution Explorer, right-click your project and select **Properties** on the shortcut menu to open the property pages for your application.  
  
    3.  In the **Advanced** project property page for the **Linker**, select the **Entry Point** and then enter **Main** in this field.  
  
    4.  For console applications, in the **System** project property page for the **Linker**, select the **SubSystem** field and change this to **Console (/SUBSYSTEM:CONSOLE)**.  
  
        > [!NOTE]
        >  You do not have to set this property for Windows Forms applications because the **SubSystem** field is set to **Windows (/SUBSYSTEM:WINDOWS)** by default.  
  
    5.  In stdafx.h, comment out all the `#include` statements. For example, in console applications:  
  
        ```  
        // #include <iostream>  
        // #include <tchar.h>  
        ```  
  
         -or-  
  
         For example, in Windows Forms applications:  
  
        ```  
        // #include <stdlib.h>  
        // #include <malloc.h>  
        // #include <memory.h>  
        // #include <tchar.h>  
        ```  
  
    6.  For Windows Forms applications, in Form1.cpp, comment out the `#include` statement that references windows.h. For example:  
  
        ```  
        // #include <windows.h>  
        ```  
  
2.  Add the following code to stdafx.h:  
  
    ```  
    #ifndef __FLTUSED__  
    #define __FLTUSED__  
       extern "C" __declspec(selectany) int _fltused=1;  
    #endif  
    ```  
  
3.  Remove all unmanaged types:  
  
    1.  Wherever appropriate, replace unmanaged types with references to structures from the [System](https://msdn.microsoft.com/en-us/library/system.appdomainmanager.appdomainmanager.aspx) namespace. Common managed types are listed in the following table:  
  
        |Structure|Description|  
        |---------------|-----------------|  
        |[Boolean](https://msdn.microsoft.com/en-us/library/system.boolean\(v=vs.140\).aspx)|Represents a Boolean value.|  
        |[Byte](https://msdn.microsoft.com/en-us/library/system.byte\(v=vs.140\).aspx)|Represents an 8-bit unsigned integer.|  
        |[Char](https://msdn.microsoft.com/en-us/library/system.char\(v=vs.140\).aspx)|Represents a Unicode character.|  
        |[DateTime](https://msdn.microsoft.com/en-us/library/system.datetime.datetime.aspx)|Represents an instant in time, typically expressed as a date and time of day.|  
        |[Decimal](https://msdn.microsoft.com/en-us/library/system.decimal\(v=vs.140\).aspx)|Represents a decimal number.|  
        |[Double](https://msdn.microsoft.com/en-us/library/system.double\(v=vs.140\).aspx)|Represents a double-precision floating-point number.|  
        |[Guid](https://msdn.microsoft.com/en-us/library/system.guid\(v=vs.140\).aspx)|Represents a globally unique identifier (GUID).|  
        |[Int16](https://msdn.microsoft.com/en-us/library/system.int16\(v=vs.140\).aspx)|Represents a 16-bit signed integer.|  
        |[Int32](https://msdn.microsoft.com/en-us/library/system.int32\(v=vs.140\).aspx)|Represents a 32-bit signed integer.|  
        |[Int64](https://msdn.microsoft.com/en-us/library/system.int64\(v=vs.140\).aspx)|Represents a 64-bit signed integer.|  
        |[IntPtr](https://msdn.microsoft.com/en-us/library/system.intptr\(v=vs.140\).aspx)|A platform-specific type that is used to represent a pointer or a handle.|  
        |[SByte](https://msdn.microsoft.com/en-us/library/system.byte.aspx)|Represents an 8-bit signed integer.|  
        |[Single](https://msdn.microsoft.com/en-us/library/system.single.aspx)|Represents a single-precision floating-point number.|  
        |[TimeSpan](https://msdn.microsoft.com/en-us/library/system.timespan\(v=vs.140\).aspx)|Represents a time interval.|  
        |[UInt16](https://msdn.microsoft.com/en-us/library/system.uint16\(v=vs.140\).aspx)|Represents a 16-bit unsigned integer.|  
        |[UInt32](https://msdn.microsoft.com/en-us/library/system.uint32\(v=vs.140\).aspx)|Represents a 32-bit unsigned integer.|  
        |[UInt64](https://msdn.microsoft.com/en-us/library/system.uint64\(v=vs.140\).aspx)|Represents a 64-bit unsigned integer.|  
        |[UIntPtr](https://msdn.microsoft.com/en-us/library/system.uintptr\(v=vs.140\).aspx)|A platform-specific type that is used to represent a pointer or a handle.|  
        |[Void](https://msdn.microsoft.com/en-us/library/system.void\(v=vs.140\).aspx)|Indicates a method that does not return a value; that is, the method has the void return type.|