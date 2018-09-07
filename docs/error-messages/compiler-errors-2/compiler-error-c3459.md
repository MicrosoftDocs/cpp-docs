---
title: "Compiler Error C3459 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3459"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3459"]
ms.assetid: 3d290a20-d313-4c07-9bd8-c5c159cb169f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3459
'attribute': attribute allowed only on class indexer (default indexed property)  
  
An attribute that is designed to be applied to a class indexer property was used incorrectly.  
  
For more information, see [How to: Use Properties in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).  
  
## Example  
The following sample generates C3459.  
  
```  
// C3459.cpp  
// compile with: /clr /c  
public ref class MyString {  
public:  
   [System::Runtime::CompilerServices::IndexerName("Chars")]   // C3459  
   property int Prop;  
};  
  
// OK  
public ref class MyString2 {  
   array<int>^ MyArr;  
public:  
   MyString2() {  
      MyArr = gcnew array<int>(5);  
   }  
  
   [System::Runtime::CompilerServices::IndexerName("Chars")]   // OK  
   property int default[int] {  
      int get(int index) {  
         return MyArr[index];  
      }  
      void set(int index, int value) {  
         MyArr[index] = value;  
      }  
   }  
};  
```