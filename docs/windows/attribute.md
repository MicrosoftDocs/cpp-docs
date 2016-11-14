---
title: "attribute | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.attribute"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__typeof keyword"
  - "custom attributes, creating"
  - "attribute attribute"
  - "attributes [C++], custom"
ms.assetid: 8cb3489f-65c4-44ea-b0aa-3c3c6b15741d
caps.latest.revision: 18
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
# attribute
Allows you to create a custom attribute.  
  
## Syntax  
  
```  
  
      [ attribute(  
   AllowOn,  
   AllowMultiple=boolean,  
   Inherited=boolean  
) ]  
```  
  
#### Parameters  
 *AllowOn*  
 Specifies the language elements to which the custom attribute can be applied. Default is **System::AttributeTargets::All** (see [System::AttributeTargets](https://msdn.microsoft.com/en-us/library/system.attributetargets.aspx)).  
  
 `AllowMultiple`  
 Specifies whether the custom attribute can be applied repeatedly to a construct. Default is **FALSE**.  
  
 `Inherited`  
 Indicates if the attribute is to be inherited by subclasses. The compiler provides no special support for this functionality; it is the job of the attribute consumers (Reflection, for example) to respect this information. If `Inherited` is **TRUE**, the attribute is inherited. If `AllowMultiple` is **TRUE**, the attribute will accumulate on the derived member; if `AllowMultiple` is **FALSE**, the attribute will override (or replace) in inheritance. If `Inherited` is **FALSE**, the attribute will not be inherited. Default is **TRUE**.  
  
## Remarks  
  
> [!NOTE]
>  The `attribute` attribute is now deprecated.  Use the common language runtime attribute System.Attribute to directly to create user-defined attirbutes.  For more information, see [User-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md).  
  
 You define a [custom attribute](../windows/custom-attributes-cpp.md) by placing the `attribute` attribute on a managed class or struct definition. The name of the class is the custom attribute. For example:  
  
```  
[ attribute(Parameter) ]  
public ref class MyAttr {};  
```  
  
 defines an attribute called MyAttr that can be applied to function parameters. The class must be public if the attribute is going to be used in other assemblies.  
  
> [!NOTE]
>  To prevent namespace collisions, all attribute names implicitly end with "Attribute"; in this example, the name of the attribute and class is actually MyAttrAttribute, but MyAttr and MyAttrAttribute can be used interchangeably.  
  
 The class's public constructors define the attribute's unnamed parameters. Overloaded constructors allow multiple ways of specifying the attribute, so a custom attribute that is defined the following way:  
  
```  
// cpp_attr_ref_attribute.cpp  
// compile with: /c /clr  
using namespace System;  
[ attribute(AttributeTargets::Class) ]   // apply attribute to classes  
public ref class MyAttr {  
public:  
   MyAttr() {}   // Constructor with no parameters  
   MyAttr(int arg1) {}   // Constructor with one parameter  
};  
  
[MyAttr]  
ref class ClassA {};   // Attribute with no parameters  
  
[MyAttr(123)]  
ref class ClassB {};   // Attribute with one parameter  
```  
  
 The class's public data members and properties are the attribute's optional named parameters:  
  
```  
// cpp_attr_ref_attribute_2.cpp  
// compile with: /c /clr  
using namespace System;  
[ attribute(AttributeTargets::Class) ]  
ref class MyAttr {  
public:  
   // Property Priority becomes attribute's named parameter Priority  
    property int Priority {  
       void set(int value) {}  
       int get() { return 0;}  
   }  
   // Data member Version becomes attribute's named parameter Version  
   int Version;  
   MyAttr() {}   // constructor with no parameters  
   MyAttr(int arg1) {}   // constructor with one parameter  
};  
  
[MyAttr(123, Version=2)]   
ref class ClassC {};  
```  
  
 For a list of possible attribute parameter types, see [Custom Attributes](../windows/custom-attributes-cpp.md).  
  
 See [User-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md) for a discussion on attribute targets.  
  
 The `attribute` attribute has an `AllowMultiple` parameter that specifies whether the custom attribute is single use or multiuse (can appear more than once on the same entity).  
  
```  
// cpp_attr_ref_attribute_3.cpp  
// compile with: /c /clr  
using namespace System;  
[ attribute(AttributeTargets::Class, AllowMultiple = true) ]  
ref struct MyAttr {  
   MyAttr(){}  
};   // MyAttr is a multiuse attribute  
  
[MyAttr, MyAttr()]  
ref class ClassA {};  
```  
  
 Custom attribute classes are derived directly or indirectly from <xref:System.ComponentModel.AttributeCollection.%23ctor%2A>, which makes identifying attribute definitions in metadata fast and easy. The `attribute` attribute implies inheritance from System::Attribute, so explicit derivation is not necessary:  
  
```  
[ attribute(Class) ]  
ref class MyAttr  
```  
  
 is equivalent to  
  
```  
[ attribute(Class) ]  
ref class MyAttr : System::Attribute   // OK, but redundant.  
```  
  
 `attribute` is an alias for <xref:System.AttributeUsageAttribute?displayProperty=fullName> (not AttributeAttribute; this is an exception to the attribute naming rule).  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|`ref` **class**, **ref struct**|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## Example  
  
```  
// cpp_attr_ref_attribute_4.cpp  
// compile with: /c /clr  
using namespace System;  
[attribute(AttributeTargets::Class)]  
ref struct ABC {  
   ABC(Type ^) {}  
};  
  
[ABC(String::typeid)]   // typeid operator yields System::Type ^  
ref class MyClass {};  
```  
  
## Example  
 The `Inherited` named argument specifies whether a custom attribute applied on a base class will show up on reflection of a derived class.  
  
```  
// cpp_attr_ref_attribute_5.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::Reflection;  
  
[attribute( AttributeTargets::Method, Inherited=false )]  
ref class BaseOnlyAttribute { };  
  
[attribute( AttributeTargets::Method, Inherited=true )]  
ref class DerivedTooAttribute { };  
  
ref struct IBase {  
public:  
   [BaseOnly, DerivedToo]  
   virtual void meth() {}  
};  
  
// Reflection on Derived::meth will show DerivedTooAttribute   
// but not BaseOnlyAttribute.  
ref class Derived : public IBase {  
public:  
   virtual void meth() override {}  
};  
  
int main() {  
   IBase ^ pIB = gcnew Derived;  
  
   MemberInfo ^ pMI = pIB->GetType( )->GetMethod( "meth" );  
   array<Object ^> ^ pObjs = pMI->GetCustomAttributes( true );  
   Console::WriteLine( pObjs->Length ) ;  
}  
```  
  
```Output  
2  
```  
  
## See Also  
 [Attributes Alphabetical Reference](../windows/attributes-alphabetical-reference.md)   
 [Custom Attributes](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)