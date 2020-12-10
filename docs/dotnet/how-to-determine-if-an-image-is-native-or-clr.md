---
description: "Learn more about: How to: Determine if an Image is Native or CLR"
title: "How to: Determine if an Image is Native or CLR"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["common language runtime, image testing", "images [C++], CLR verification", "/clr compiler option [C++], detecting use in compilation", "common language runtime, /clr compiler option"]
ms.assetid: 5a854822-6172-4b22-b236-320165412568
---
# How to: Determine if an Image is Native or CLR

One way to determine whether an image was built for the common language runtime is to use **dumpbin**[/CLRHEADER](../build/reference/clrheader.md).

You can also programmatically check whether an image was built for the common language runtime. For more information, see [How to: Detect /clr Compilation](../dotnet/how-to-detect-clr-compilation.md).

## Example

The following sample determines whether an image was built to run on the common language runtime.

```cpp
// detect_image_type.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;

enum class CompilationMode {Invalid, Native, CLR };

static CompilationMode IsManaged(String^ filename) {
   try {
      array<Byte>^ data = gcnew array<Byte>(4096);
      FileInfo^ file = gcnew FileInfo(filename);
      Stream^ fin = file->Open(FileMode::Open, FileAccess::Read);
      Int32 iRead = fin->Read(data, 0, 4096);
      fin->Close();

      // Verify this is a executable/dll
      if ((data[1] << 8 | data[0]) != 0x5a4d)
         return CompilationMode::Invalid;

      // This will get the address for the WinNT header
      Int32 iWinNTHdr = data[63]<<24 | data[62]<<16 | data[61] << 8 | data[60];

      // Verify this is an NT address
      if ((data[iWinNTHdr+3] << 24 | data[iWinNTHdr+2] << 16 | data[iWinNTHdr+1] << 8 | data[iWinNTHdr]) != 0x00004550)
         return CompilationMode::Invalid;

      Int32 iLightningAddr = iWinNTHdr + 24 + 208;
      Int32 iSum = 0;
      Int32 iTop = iLightningAddr + 8;

      for (int i = iLightningAddr; i < iTop; ++i)
         iSum |= data[i];

      if (iSum == 0)
         return CompilationMode::Native;
      else
         return CompilationMode::CLR;
   }
   catch(Exception ^e) {
      throw(e);
   }
}

int main() {
   array<String^>^ args = Environment::GetCommandLineArgs();

   if (args->Length < 2) {
      Console::WriteLine("USAGE : detect_clr <assembly_name>\n");
      return -1;
   }

   Console::WriteLine("{0} is compiled {1}", args[1], IsManaged(args[1]));
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
