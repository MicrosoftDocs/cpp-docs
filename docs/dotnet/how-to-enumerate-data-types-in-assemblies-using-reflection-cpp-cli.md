---
title: "How to: Enumerate Data Types in Assemblies using Reflection (C++-CLI) | Microsoft Docs"
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
  - "assemblies [C++], enumerating data types in"
  - "public types [C++]"
  - "reflection [C++], external assemblies"
  - "assemblies [C++]"
  - "data types [C++], enumerating"
  - "public members [C++]"
ms.assetid: c3578e6d-bb99-4599-80e1-ab795305f878
caps.latest.revision: 15
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
# How to: Enumerate Data Types in Assemblies using Reflection (C++/CLI)
The following code demonstrates the enumeration of public types and members using <xref:System.Reflection>.  
  
 Given the name of an assembly, either in the local directory or in the GAC, the code below attempts to open the assembly and retrieve descriptions. If successful, each type is displayed with its public members.  
  
 Note that <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> requires that no file extension is used. Therefore, using "mscorlib.dll" as a command-line argument will fail, while using just "mscorlib" will result the display of the .NET Framework types. If no assembly name is provided, the code will detect and report the types within the current assembly (the EXE resulting from this code).  
  
## Example  
  
```  
// self_reflection.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Reflection;  
using namespace System::Collections;  
  
public ref class ExampleType {  
public:  
   ExampleType() {}  
   void Func() {}  
};  
  
int main() {  
   String^ delimStr = " ";  
   array<Char>^ delimiter = delimStr->ToCharArray( );  
   array<String^>^ args = Environment::CommandLine->Split( delimiter );  
  
// replace "self_reflection.exe" with an assembly from either the local  
// directory or the GAC  
   Assembly^ a = Assembly::LoadFrom("self_reflection.exe");  
   Console::WriteLine(a);  
  
   int count = 0;  
   array<Type^>^ types = a->GetTypes();  
   IEnumerator^ typeIter = types->GetEnumerator();  
  
   while ( typeIter->MoveNext() ) {  
      Type^ t = dynamic_cast<Type^>(typeIter->Current);  
      Console::WriteLine("   {0}", t->ToString());  
  
      array<MemberInfo^>^ members = t->GetMembers();  
      IEnumerator^ memberIter = members->GetEnumerator();  
      while ( memberIter->MoveNext() ) {  
         MemberInfo^ mi = dynamic_cast<MemberInfo^>(memberIter->Current);  
         Console::Write("      {0}", mi->ToString( ) );  
         if (mi->MemberType == MemberTypes::Constructor)  
            Console::Write("   (constructor)");  
  
         Console::WriteLine();  
      }  
      count++;  
   }  
   Console::WriteLine("{0} types found", count);  
}  
```  
  
## See Also  
 [Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)