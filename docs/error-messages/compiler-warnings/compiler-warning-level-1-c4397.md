---
description: "Learn more about: Compiler Warning (level 1) C4397"
title: "Compiler Warning (level 1) C4397"
ms.date: "11/04/2016"
f1_keywords: ["C4397"]
helpviewer_keywords: ["C4397"]
ms.assetid: 6346fdc2-dbbf-4fba-803a-32b0d0a707be
---
# Compiler Warning (level 1) C4397

DefaultCharSetAttribute is ignored

<xref:System.Runtime.InteropServices.DefaultCharSetAttribute> is ignored by the Microsoft C++ compiler. To specify a character set for the DLL, use the CharSet option of DllImport. For more information, see [Using C++ Interop (Implicit PInvoke)](../../dotnet/using-cpp-interop-implicit-pinvoke.md).

## Example

The following sample generates C4397.

```cpp
// C4397.cpp
// compile with: /W1 /c /clr
using namespace System;
using namespace System::Runtime::InteropServices;

[module:DefaultCharSetAttribute(CharSet::Unicode)];   // C4397

[DllImport("kernel32", EntryPoint="CloseHandle", CharSet=CharSet::Unicode)]   // OK
extern "C" bool ImportDefault(IntPtr hObject);

public ref class MySettingVC {
public:
   void method() {
      ImportDefault(IntPtr::Zero);
   }
};

[StructLayout(LayoutKind::Explicit)]
public ref struct StructDefault1{};

public ref class ClassDefault1{};
```
