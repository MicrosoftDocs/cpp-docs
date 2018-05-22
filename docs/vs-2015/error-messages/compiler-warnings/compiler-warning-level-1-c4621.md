---
title: "Compiler Warning (level 1) C4621 | Microsoft Docs"
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
  - "C4621"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4621"
ms.assetid: 40931bd9-cb89-497e-86f0-cec9f016c63c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4621
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4621](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4621).  
  
  
no postfix form of 'operator --' found for type 'type', using prefix form  
  
 There was no postfix decrement operator defined for the given type. The compiler used the overloaded prefix operator.  
  
 This warning can be avoided by defining a postfix `--` operator. Create a two-argument version of the `--` operator as shown below:  
  
```  
// C4621.cpp  
// compile with: /W1  
class A  
{  
public:  
   A(int nData) : m_nData(nData)  
   {  
   }  
  
   A operator--()  
   {  
      m_nData -= 1;  
      return *this;  
   }  
  
   // A operator--(int)  
   // {  
   //    A tmp = *this;  
   //    m_nData -= 1;  
   //    return tmp;  
   // }  
  
private:  
   int m_nData;  
};  
  
int main()  
{  
   A a(10);  
   --a;  
   a--;   // C4621  
}  
```

