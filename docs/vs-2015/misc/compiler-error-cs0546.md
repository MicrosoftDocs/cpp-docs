---
title: "Compiler Error CS0546 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0546"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0546"
ms.assetid: d259c86f-ee29-4e2d-b381-6ba7252af87e
caps.latest.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0546
'accessor' : cannot override because 'property' does not have an overridable set accessor  
  
 An attempt to override one of the accessor methods for a property failed because the accessor cannot be overridden. This error can occur if:  
  
-   the base class property is not declared as [virtual](http://msdn.microsoft.com/library/5da9abae-bc1e-434f-8bea-3601b8dcb3b2).  
  
-   the base class property does not declare the [get](http://msdn.microsoft.com/library/a52de048-fbe0-41b0-82ec-8e4ac04d3a71) or [set](http://msdn.microsoft.com/library/30d7e4e5-cc2e-4635-a597-14a724879619) accessor you are trying to override.  
  
 If you do not want to override the base class property, you can use the [new](http://msdn.microsoft.com/library/e4136516-f058-45a8-84e5-da00a5cf9b6a) keyword before the property in derived class.  
  
 For more information, see [Using Properties](http://msdn.microsoft.com/library/f7f67b05-0983-4cdb-96af-1855d24c967c).  
  
## Example  
 The following sample generates CS0546 because the base class does not declare a set accessor for the property.  
  
```  
// CS0546.cs  
// compile with: /target:library  
public class a  
{  
   public virtual int i  
   {  
      get  
      {  
         return 0;  
      }  
   }  
  
   public virtual int i2  
   {  
      get  
      {  
         return 0;  
      }  
  
      set {}  
   }  
}  
  
public class b : a  
{  
   public override int i  
   {  
      set {}   // CS0546 error no set  
   }  
  
   public override int i2  
   {  
      set {}   // OK  
   }  
}  
```  
  
## See Also  
 [Properties](http://msdn.microsoft.com/library/e295a8a2-b357-4ee7-a12e-385a44146fa8)