---
title: "How to: Iterate Over a User-Defined Collection with for each | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collections, iterating over"
ms.assetid: 0efd9e3c-d7bb-4f6c-9938-e0e65d191433
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
# How to: Iterate Over a User-Defined Collection with for each
For a class to be a managed collection, it needs a non-private GetEnumerator function that returns a handle to an Enumerator class or an interface.  An enumerator class must contain the declaration for non-static MoveNext function and Current property.  
  
## Example  
 Simple user defined collection with reference types.  
  
```  
// for_each_user_defined_collections.cpp  
// compile with: /clr  
using namespace System;  
public interface struct IMyEnumerator {  
   bool MoveNext();  
   property Object^ Current {  
      Object^ get();  
   }  
   void Reset();  
};  
  
public ref struct MyArray {     
  
   MyArray( array<int>^ d ) {  
      data = d;  
   }  
  
   ref struct enumerator : IMyEnumerator {  
      enumerator( MyArray^ myArr ) {  
         colInst = myArr;  
         currentIndex = -1;  
      }  
  
      virtual bool MoveNext() {  
         if( currentIndex < colInst->data->Length - 1 ) {  
            currentIndex++;  
            return true;  
         }  
         return false;  
      }  
  
      property Object^ Current {  
         virtual Object^ get() {  
            return colInst->data[currentIndex];  
         }  
      };  
  
      virtual void Reset() {}  
      ~enumerator() {}  
  
      MyArray^ colInst;  
      int currentIndex;  
   };  
  
   array<int>^ data;  
  
   IMyEnumerator^ GetEnumerator() {  
      return gcnew enumerator(this);  
   }  
};  
  
int main() {  
   int retval = 0;  
  
   MyArray^ col = gcnew MyArray( gcnew array<int>{10, 20, 30 } );  
  
   for each ( Object^ c in col )  
      retval += (int)c;  
  
   retval -= 10 + 20 + 30;  
  
   for each ( int c in gcnew MyArray( gcnew array<int>{10, 20, 30 } ) )  
      retval += c;  
  
   retval -= 10 + 20 + 30;  
  
   Console::WriteLine("Return Code: {0}", retval );  
   return retval;  
}  
```  
  
```Output  
Return Code: 0  
```  
  
## See Also  
 [for each, in](../dotnet/for-each-in.md)