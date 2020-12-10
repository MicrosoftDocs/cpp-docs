---
description: "Learn more about: class (C++)"
title: "class (C++)"
ms.date: "11/04/2016"
f1_keywords: ["class_cpp"]
helpviewer_keywords: ["class types [C++], class statements", "class keyword [C++]"]
ms.assetid: dd23c09f-6598-4069-8bff-69c7f2518b9f
---
# class (C++)

The **`class`** keyword declares a class type or defines an object of a class type.

## Syntax

```
[template-spec]
class [ms-decl-spec] [tag [: base-list ]]
{
   member-list
} [declarators];
[ class ] tag declarators;
```

#### Parameters

*template-spec*<br/>
Optional template specifications. For more information, refer to [Templates](templates-cpp.md).

*class*<br/>
The **`class`** keyword.

*ms-decl-spec*<br/>
Optional storage-class specification. For more information, refer to the [__declspec](../cpp/declspec.md) keyword.

*tag*<br/>
The type name given to the class. The tag becomes a reserved word within the scope of the class. The tag is optional. If omitted, an anonymous class is defined. For more information, see [Anonymous Class Types](../cpp/anonymous-class-types.md).

*base-list*<br/>
Optional list of classes or structures this class will derive its members from. See [Base Classes](../cpp/base-classes.md) for more information. Each base class or structure name can be preceded by an access specifier ([public](../cpp/public-cpp.md), [private](../cpp/private-cpp.md), [protected](../cpp/protected-cpp.md)) and the [virtual](../cpp/virtual-cpp.md) keyword. See the member-access table in [Controlling Access to Class Members](member-access-control-cpp.md) for more information.

*member-list*<br/>
List of class members. Refer to [Class Member Overview](../cpp/class-member-overview.md) for more information.

*declarators*<br/>
Declarator list specifying the names of one or more instances of the class type. Declarators may include initializer lists if all data members of the class are **`public`**. This is more common in structures, whose data members are **`public`** by default, than in classes. See [Overview of Declarators](./declarations-and-definitions-cpp.md) for more information.

## Remarks

For more information on classes in general, refer to one of the following topics:

- [struct](../cpp/struct-cpp.md)

- [union](../cpp/unions.md)

- [__multiple_inheritance](../cpp/inheritance-keywords.md)

- [__single_inheritance](../cpp/inheritance-keywords.md)

- [__virtual_inheritance](../cpp/inheritance-keywords.md)

For information on managed classes and structs in C++/CLI and C++/CX, see [Classes and Structs](../extensions/classes-and-structs-cpp-component-extensions.md)

## Example

```cpp
// class.cpp
// compile with: /EHsc
// Example of the class keyword
// Exhibits polymorphism/virtual functions.

#include <iostream>
#include <string>
using namespace std;

class dog
{
public:
   dog()
   {
      _legs = 4;
      _bark = true;
   }

   void setDogSize(string dogSize)
   {
      _dogSize = dogSize;
   }
   virtual void setEars(string type)      // virtual function
   {
      _earType = type;
   }

private:
   string _dogSize, _earType;
   int _legs;
   bool _bark;

};

class breed : public dog
{
public:
   breed( string color, string size)
   {
      _color = color;
      setDogSize(size);
   }

   string getColor()
   {
      return _color;
   }

   // virtual function redefined
   void setEars(string length, string type)
   {
      _earLength = length;
      _earType = type;
   }

protected:
   string _color, _earLength, _earType;
};

int main()
{
   dog mongrel;
   breed labrador("yellow", "large");
   mongrel.setEars("pointy");
   labrador.setEars("long", "floppy");
   cout << "Cody is a " << labrador.getColor() << " labrador" << endl;
}
```

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Classes and Structs](../cpp/classes-and-structs-cpp.md)
