---
description: "Learn more about: Converting projects from mixed mode to pure intermediate language"
title: "Converting projects from mixed mode to pure intermediate language"
ms.date: 04/15/2021
helpviewer_keywords: ["intermediate language, mixed-mode applications", "mixed-mode applications", "mixed-mode applications, intermediate language", "projects [C++], converting to intermediate language"]
---
# Converting projects from mixed mode to pure intermediate language

All Visual C++ CLR projects link to the C run-time libraries by default. As a result, these projects are classified as *mixed-mode* applications, because they combine native code with code that targets the common language runtime (managed code). When they're compiled, they get compiled into intermediate language (IL), also known as Microsoft intermediate language (MSIL).

> [!IMPORTANT]
> Visual Studio 2015 deprecated and Visual Studio 2017 no longer supports the creation of **`/clr:pure`** or **`/clr:safe`** code for CLR applications. If you require pure or safe assemblies, we recommend you translate your application to C#.

If you're using an earlier version of the Microsoft C++ compiler toolset that supports **`/clr:pure`** or **`/clr:safe`**, you can use this procedure to convert your code to pure MSIL:

### To convert your mixed-mode application into pure intermediate language

1. Remove links to the [C runtime libraries](../c-runtime-library/crt-library-features.md) (CRT):

   1. In the .cpp file defining the entry point of your application, change the entry point to `Main()`. Using `Main()` indicates that your project doesn't link to the CRT.

   1. In Solution Explorer, right-click your project and select **Properties** on the shortcut menu to open the property pages for your application.

   1. In the **Advanced** project property page for the **Linker**, select the **Entry Point** and then enter **Main** in this field.

   1. For console applications, in the **System** project property page for the **Linker**, select the **SubSystem** field and change it to **`Console (/SUBSYSTEM:CONSOLE)`**.

      > [!NOTE]
      > You don't have to set this property for Windows Forms applications because the **SubSystem** field is set to **`Windows (/SUBSYSTEM:WINDOWS)`** by default.

   1. In *`stdafx.h`*, comment out all the `#include` statements. For example, in console applications:

      ```cpp
      // #include <iostream>
      // #include <tchar.h>
      ```

       -or-

       For example, in Windows Forms applications:

      ```cpp
      // #include <stdlib.h>
      // #include <malloc.h>
      // #include <memory.h>
      // #include <tchar.h>
      ```

   1. For Windows Forms applications, in *`Form1.cpp`*, comment out the `#include` statement that references *`windows.h`*. For example:

      ```cpp
      // #include <windows.h>
      ```

1. Add the following code to *`stdafx.h`*:

   ```cpp
   #ifndef __FLTUSED__
   #define __FLTUSED__
      extern "C" __declspec(selectany) int _fltused=1;
   #endif
   ```

1. Remove all unmanaged types:

   Wherever appropriate, replace unmanaged types with references to structures from the [`System`](/dotnet/api/system) namespace. Common managed types are listed in the following table:

   |Structure|Description|
   |---------------|-----------------|
   |[`Boolean`](/dotnet/api/system.boolean)|Represents a Boolean value.|
   |[`Byte`](/dotnet/api/system.byte)|Represents an 8-bit unsigned integer.|
   |[`Char`](/dotnet/api/system.char)|Represents a Unicode character.|
   |[`DateTime`](/dotnet/api/system.datetime)|Represents an instant in time, typically expressed as a date and time of day.|
   |[`Decimal`](/dotnet/api/system.decimal)|Represents a decimal number.|
   |[`Double`](/dotnet/api/system.double)|Represents a double-precision floating-point number.|
   |[`Guid`](/dotnet/api/system.guid)|Represents a globally unique identifier (GUID).|
   |[`Int16`](/dotnet/api/system.int16)|Represents a 16-bit signed integer.|
   |[`Int32`](/dotnet/api/system.int32)|Represents a 32-bit signed integer.|
   |[`Int64`](/dotnet/api/system.int64)|Represents a 64-bit signed integer.|
   |[`IntPtr`](/dotnet/api/system.intptr)|A platform-specific type that is used to represent a pointer or a handle.|
   |[`SByte`](/dotnet/api/system.byte)|Represents an 8-bit signed integer.|
   |[`Single`](/dotnet/api/system.single)|Represents a single-precision floating-point number.|
   |[`TimeSpan`](/dotnet/api/system.timespan)|Represents a time interval.|
   |[`UInt16`](/dotnet/api/system.uint16)|Represents a 16-bit unsigned integer.|
   |[`UInt32`](/dotnet/api/system.uint32)|Represents a 32-bit unsigned integer.|
   |[`UInt64`](/dotnet/api/system.uint64)|Represents a 64-bit unsigned integer.|
   |[`UIntPtr`](/dotnet/api/system.uintptr)|A platform-specific type that is used to represent a pointer or a handle.|
   |[`Void`](/dotnet/api/system.void)|Indicates a method that doesn't return a value; that is, the method has the `void` return type.|
