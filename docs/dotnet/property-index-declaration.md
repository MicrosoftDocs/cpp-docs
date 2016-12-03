---
title: "Property Index Declaration | Microsoft Docs"
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
  - "indexers"
  - "default indexers"
  - "defaults, indexers"
  - "indexed properties, C++"
ms.assetid: d898fdbc-2106-4b6a-8c5c-9f511d80fc2f
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
# Property Index Declaration
The syntax for declaring an indexed property has changed from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)].  
  
 The two primary shortcoming of the Managed Extensions language support of indexed properties is the inability to provide class-level subscripting; that is, all indexed properties are required to be given a name, and thus there is no way, for example, to provide a managed subscript operator that can be directly applied to a `Vector` or `Matrix` class object. A second less significant shortcoming is that it is visually difficult to distinguish a property from an indexed property – the number of parameters is the only indication. Finally, indexed properties suffer from the same problems as those of non-indexed properties – the accessors are not treated as an atomic unit, but separated into individual methods.  For example:  
  
```  
public __gc class Vector;  
public __gc class Matrix {  
   float mat[,];  
  
public:   
   __property void set_Item( int r, int c, float value);  
   __property float get_Item( int r, int c );  
  
   __property void set_Row( int r, Vector* value );  
   __property Vector* get_Row( int r );  
};  
```  
  
 As you can see here, the indexers are distinguished only by the additional parameters to specify a two or single dimension index. In the new syntax, the indexers are distinguished by the bracket ([,]) following the name of the indexer and indicating the number and type of each index:  
  
```  
public ref class Vector {};  
public ref class Matrix {  
private:  
   array<float, 2>^ mat;  
  
public:  
   property float Item [int,int] {  
      float get( int r, int c );  
      void set( int r, int c, float value );  
   }  
  
   property Vector^ Row [int] {  
      Vector^ get( int r );  
      void set( int r, Vector^ value );  
   }  
};  
```  
  
 To indicate a class level indexer that can be applied directly to objects of the class in the new syntax, the `default` keyword is reused to substitute for an explicit name. For example:  
  
```  
public ref class Matrix {  
private:  
   array<float, 2>^ mat;  
  
public:  
   // ok: class level indexer now  
   //  
   //     Matrix mat …  
   //     mat[ 0, 0 ] = 1;   
   //  
   // invokes the set accessor of the default indexer …  
  
   property float default [int,int] {  
      float get( int r, int c );  
      void set( int r, int c, float value );  
   }  
  
   property Vector^ Row [int] {  
      Vector^ get( int r );  
      void set( int r, Vector^ value );  
   }  
};  
```  
  
 In the new syntax, when the default indexed property is specified, the two following names are reserved: `get_Item` and `set_Item`. This is because these are the underlying names generated for the default indexed property.  
  
 Note that there is no simple index syntax analogous to the simple property syntax.  
  
## See Also  
 [Member Declarations within a Class or Interface (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 