---
title: "Compiler Error C3817"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "C3817"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3817"
ms.assetid: c6dbb57a-c65e-4040-8dd2-85bd9d4fd337
caps.latest.revision: 9
ms.author: "corob"
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
# Compiler Error C3817
'declaration' : property can only be applied to a function  
  
 The [property](../notintoc/__property.md) keyword can only be a applied to a function definition.  
  
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