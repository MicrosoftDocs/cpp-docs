---
title: "User-Defined Attributes  (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "metadata, extending"
  - "custom attributes, extending metadata"
ms.assetid: 98b29048-a3ea-4698-8441-f149cdaec9fb
caps.latest.revision: 27
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
# User-Defined Attributes  (C++ Component Extensions)
Custom attributes enable you to extend the metadata of an interface, class or structure, method, parameter, or enumeration.  
  
## All Runtimes  
 All Runtimes support custom attributes.  
  
## Windows Runtime  
 C++/CX attributes support only properties, but not attribute constructors or methods.  
  
### Remarks  
  
### Requirements  
 Compiler option: **/ZW**  
  
## Common Language Runtime  
 Custom attributes let you extend the metadata of a managed element. For more information, see [Attributes](http://msdn.microsoft.com/Library/30386922-1e00-4602-9ebf-526b271a8b87).  
  
### Remarks  
 The information and syntax presented in this topic is meant to supersede the information presented in [attribute](../windows/attribute.md).  
  
 You can define a custom attribute by defining a type and making <xref:System.Attribute> a base class for the type and optionally applying the <xref:System.AttributeUsageAttribute> attribute.  
  
 For example, in Microsoft Transaction Server (MTS) 1.0, behavior with respect to transactions, synchronization, load balancing, and so on was specified through custom GUIDs inserted into the type library by using the ODL custom attribute. Hence, a client of an MTS server could determine its characteristics by reading the type library. In the .NET Framework, the analog of the type library is metadata, and the analog of the ODL custom attribute is custom attributes. Also, reading the type library is analogous to using reflection on the types.  
  
 For more information, see,  
  
-   [Attribute Targets](../windows/attribute-targets-cpp-component-extensions.md)  
  
-   [Attribute Parameter Types](../windows/attribute-parameter-types-cpp-component-extensions.md)  
  
 For information on signing assemblies in Visual C++, see [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following sample shows how to define a custom attribute.  
  
```cpp  
// user_defined_attributes.cpp  
// compile with: /clr /c  
using namespace System;  
  
[AttributeUsage(AttributeTargets::All)]  
ref struct Attr : public Attribute {  
   Attr(bool i){}  
   Attr(){}  
};  
  
[Attr]  
ref class MyClass {};  
```  
  
 **Example**  
  
 The following example illustrates some important features of custom attributes. For example, this example shows a common usage of the custom attributes: instantiating a server that can fully describe itself to clients.  
  
```cpp  
// extending_metadata_b.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Reflection;  
  
public enum class Access { Read, Write, Execute };  
  
// Defining the Job attribute:  
[AttributeUsage(AttributeTargets::Class, AllowMultiple=true )]  
public ref class Job : Attribute {  
public:  
   property int Priority {  
      void set( int value ) { m_Priority = value; }  
      int get() { return m_Priority; }  
   }  
  
   // You can overload constructors to specify Job attribute in different ways  
   Job() { m_Access = Access::Read; }  
   Job( Access a ) { m_Access = a; }  
   Access m_Access;  
  
protected:  
   int m_Priority;  
};  
  
interface struct IService {  
   void Run();  
};  
  
   // Using the Job attribute:  
   // Here we specify that QueryService is to be read only with a priority of 2.  
   // To prevent namespace collisions, all custom attributes implicitly   
   // end with "Attribute".   
  
[Job( Access::Read, Priority=2 )]  
ref struct QueryService : public IService {  
   virtual void Run() {}  
};  
  
// Because we said AllowMultiple=true, we can add multiple attributes   
[Job(Access::Read, Priority=1)]  
[Job(Access::Write, Priority=3)]  
ref struct StatsGenerator : public IService {  
   virtual void Run( ) {}  
};  
  
int main() {  
   IService ^ pIS;  
   QueryService ^ pQS = gcnew QueryService;  
   StatsGenerator ^ pSG = gcnew StatsGenerator;  
  
   //  use QueryService  
   pIS = safe_cast<IService ^>( pQS );  
  
   // use StatsGenerator  
   pIS = safe_cast<IService ^>( pSG );  
  
   // Reflection  
   MemberInfo ^ pMI = pIS->GetType();  
   array <Object ^ > ^ pObjs = pMI->GetCustomAttributes(false);  
  
   // We can now quickly and easily view custom attributes for an   
   // Object through Reflection */  
   for( int i = 0; i < pObjs->Length; i++ ) {  
      Console::Write("Service Priority = ");  
      Console::WriteLine(static_cast<Job^>(pObjs[i])->Priority);  
      Console::Write("Service Access = ");  
      Console::WriteLine(static_cast<Job^>(pObjs[i])->m_Access);  
   }  
}  
```  
  
 **Output**  
  
```Output  
Service Priority = 0  
  
Service Access = Write  
  
Service Priority = 3  
  
Service Access = Write  
  
Service Priority = 1  
  
Service Access = Read  
```  
  
 **Example**  
  
 The Object^ type replaces the variant data type. The following example defines a custom attribute that takes an array of Object^ as parameters.  
  
 Attribute arguments must be compile-time constants; in most cases, they should be constant literals.  
  
 See [typeid](../windows/typeid-cpp-component-extensions.md) for information on how to return a value of System::Type from a custom attribute block.  
  
```cpp  
// extending_metadata_e.cpp  
// compile with: /clr /c  
using namespace System;  
[AttributeUsage(AttributeTargets::Class | AttributeTargets::Method)]  
public ref class AnotherAttr : public Attribute {  
public:  
   AnotherAttr(array<Object^>^) {}  
   array<Object^>^ var1;  
};  
  
// applying the attribute  
[ AnotherAttr( gcnew array<Object ^> { 3.14159, "pi" }, var1 = gcnew array<Object ^> { "a", "b" } ) ]  
public ref class SomeClass {};  
```  
  
 **Example**  
  
 The runtime requires that the public part of the custom attribute class must be serializable.  When authoring custom attributes, named arguments of your custom attribute are limited to compile-time constants.  (Think of it as a sequence of bits appended to your class layout in the metadata.)  
  
```cpp  
// extending_metadata_f.cpp  
// compile with: /clr /c  
using namespace System;  
ref struct abc {};  
  
[AttributeUsage( AttributeTargets::All )]  
ref struct A : Attribute {  
   A( Type^ ) {}  
   A( String ^ ) {}  
   A( int ) {}  
};  
  
[A( abc::typeid )]  
ref struct B {};  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)