---
title: "Compiler Error C3817 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3817"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3817"
ms.assetid: c6dbb57a-c65e-4040-8dd2-85bd9d4fd337
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3817
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3817](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3817).  
  
  
declaration' : property can only be applied to a function  
  
 The [property](../../misc/property.md) keyword can only be a applied to a function definition.  
  
 C3817 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3817:  
  
```  
// C3817.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class G {  
      __property int x;   // C3817  
   };  
  
// the following class defines a property  
__gc class X {  
public:  
   __property int get_N( int i ) {  
      Console::WriteLine( L"int" );  
      return m_val[i];  
   }  
  
   __property void set_N( int i, int val ) {  
      m_val[i] = val;  
   }  
  
private:  
   int m_val[10];  
};  
  
int main() {  
}  
```

