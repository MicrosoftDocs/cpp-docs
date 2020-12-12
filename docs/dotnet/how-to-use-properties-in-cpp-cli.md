---
description: "Learn more about: How to: Use Properties in C++/CLI"
title: "How to: Use Properties in C++/CLI"
ms.date: "07/21/2017"
helpviewer_keywords: ["simple properties", "properties [C++], simple"]
ms.assetid: f5d82547-e214-4f05-9e1b-ddb6d0dc5e4c
---
# How to: Use Properties in C++/CLI

This article shows how to use properties in C++/CLI.

## Basic properties

For basic properties—those that merely assign and retrieve a private data member—you don't have to explicitly define the get and set accessor functions because the compiler automatically provides them when given just the data type of the property. This code demonstrates a basic property:

```cpp
// SimpleProperties.cpp
// compile with: /clr
using namespace System;

ref class C {
public:
   property int Size;
};

int main() {
   C^ c = gcnew C;
   c->Size = 111;
   Console::WriteLine("c->Size = {0}", c->Size);
}
```

```Output
c->Size = 111
```

## Static properties

This code sample shows how to declare and use a static property.  A static property can only access static members of its class.

```cpp
// mcppv2_property_3.cpp
// compile with: /clr
using namespace System;

ref class StaticProperties {
   static int MyInt;
   static int MyInt2;

public:
   static property int Static_Data_Member_Property;

   static property int Static_Block_Property {
      int get() {
         return MyInt;
      }

      void set(int value) {
         MyInt = value;
      }
   }
};

int main() {
   StaticProperties::Static_Data_Member_Property = 96;
   Console::WriteLine(StaticProperties::Static_Data_Member_Property);

   StaticProperties::Static_Block_Property = 47;
   Console::WriteLine(StaticProperties::Static_Block_Property);
}
```

```Output
96
47
```

## Indexed properties

An indexed property typically exposes a data structure that's accessed by using a subscript operator.

If you use a default indexed property, you can access the data structure just by referring to the class name, but if you use a user-defined indexed property, you must to specify the property name to access the data structure.

For information about how to consume an indexer that's written in C#, see [How to: Consume a C# Indexer (C++/CLI)](./interoperability-with-other-dotnet-languages-cpp-cli.md#consume_indexer).

This code sample shows how to use default and user-defined indexed properties:

```cpp
// mcppv2_property_2.cpp
// compile with: /clr
using namespace System;
public ref class C {
   array<int>^ MyArr;

public:
   C() {
      MyArr = gcnew array<int>(5);
   }

   // default indexer
   property int default[int] {
      int get(int index) {
         return MyArr[index];
      }
      void set(int index, int value) {
         MyArr[index] = value;
      }
   }

   // user-defined indexer
   property int indexer1[int] {
      int get(int index) {
         return MyArr[index];
      }
      void set(int index, int value) {
         MyArr[index] = value;
      }
   }
};

int main() {
   C ^ MyC = gcnew C();

   // use the default indexer
   Console::Write("[ ");
   for (int i = 0 ; i < 5 ; i++) {
      MyC[i] = i;
      Console::Write("{0} ", MyC[i]);
   }

   Console::WriteLine("]");

   // use the user-defined indexer
   Console::Write("[ ");
   for (int i = 0 ; i < 5 ; i++) {
      MyC->indexer1[i] = i * 2;
      Console::Write("{0} ", MyC->indexer1[i]);
   }

   Console::WriteLine("]");
}
```

```Output
[ 0 1 2 3 4 ]
[ 0 2 4 6 8 ]
```

The next sample shows how to call the default indexer by using the **`this`** pointer.

```cpp
// call_default_indexer_through_this_pointer.cpp
// compile with: /clr /c
value class Position {
public:
   Position(int x, int y) : position(gcnew array<int, 2>(100, 100)) {
      this->default[x, y] = 1;
   }

   property int default[int, int] {
      int get(int x, int y) {
         return position[x, y];
      }

      void set(int x, int y, int value) {}
   }

private:
   array<int, 2> ^ position;
};
```

This sample shows how to use <xref:System.Reflection.DefaultMemberAttribute> to specify the default indexer:

```cpp
// specify_default_indexer.cpp
// compile with: /LD /clr
using namespace System;
[Reflection::DefaultMember("XXX")]
public ref struct Squares {
   property Double XXX[Double] {
      Double get(Double data) {
         return data*data;
      }
   }
};
```

The next sample consumes the metadata that's created in the previous example.

```cpp
// consume_default_indexer.cpp
// compile with: /clr
#using "specify_default_indexer.dll"
int main() {
   Squares ^ square = gcnew Squares();
   System::Console::WriteLine("{0}", square[3]);
}
```

```Output
9
```

## Virtual properties

This code sample shows how to declare and use virtual properties:

```cpp
// mcppv2_property_4.cpp
// compile with: /clr
using namespace System;
interface struct IEFace {
public:
   property int VirtualProperty1;
   property int VirtualProperty2 {
      int get();
      void set(int i);
   }
};

// implement virtual events
ref class PropImpl : public IEFace {
   int MyInt;
public:
   virtual property int VirtualProperty1;

   virtual property int VirtualProperty2 {
      int get() {
         return MyInt;
      }
      void set(int i) {
         MyInt = i;
      }
   }
};

int main() {
   PropImpl ^ MyPI = gcnew PropImpl();
   MyPI->VirtualProperty1 = 93;
   Console::WriteLine(MyPI->VirtualProperty1);

   MyPI->VirtualProperty2 = 43;
   Console::WriteLine(MyPI->VirtualProperty2);
}
```

```Output
93
43
```

## Abstract and sealed properties

Although the [abstract](../extensions/abstract-cpp-component-extensions.md) and [sealed](../extensions/sealed-cpp-component-extensions.md) keywords are specified as valid in the ECMA C++/CLI specification, for the Microsoft C++ compiler, you cannot specify them on trivial properties, nor on the property declaration of a non-trivial property.

To declare a sealed or abstract property, you must define a non-trivial property and then specify the **`abstract`** or **`sealed`** keyword on the get and set accessor functions.

```cpp
// properties_abstract_sealed.cpp
// compile with: /clr
ref struct A {
protected:
   int m_i;

public:
   A() { m_i = 87; }

   // define abstract property
   property int Prop_1 {
      virtual int get() abstract;
      virtual void set(int i) abstract;
   }
};

ref struct B : A {
private:
   int m_i;

public:
   B() { m_i = 86; }

   // implement abstract property
   property int Prop_1 {
      virtual int get() override { return m_i; }
      virtual void set(int i) override { m_i = i; }
   }
};

ref struct C {
private:
   int m_i;

public:
   C() { m_i = 87; }

   // define sealed property
   property int Prop_2 {
      virtual int get() sealed { return m_i; }
      virtual void set(int i) sealed { m_i = i; };
   }
};

int main() {
   B b1;
   // call implementation of abstract property
   System::Console::WriteLine(b1.Prop_1);

   C c1;
   // call sealed property
   System::Console::WriteLine(c1.Prop_2);
}
```

```Output
86
87
```

## Multidimensional properties

You can use multidimensional properties to define property accessor methods that take a non-standard number of parameters.

```cpp
// mcppv2_property_5.cpp
// compile with: /clr
ref class X {
   double d;
public:
   X() : d(0) {}
   property double MultiDimProp[int, int, int] {
      double get(int, int, int) {
         return d;
      }
      void set(int i, int j, int k, double l) {
         // do something with those ints
         d = l;
      }
   }

   property double MultiDimProp2[int] {
      double get(int) {
         return d;
      }
      void set(int i, double l) {
         // do something with those ints
         d = l;
      }
   }

};

int main() {
   X ^ MyX = gcnew X();
   MyX->MultiDimProp[0,0,0] = 1.1;
   System::Console::WriteLine(MyX->MultiDimProp[0, 0, 0]);
}
```

```Output
1.1
```

## Overloading property accessors

The following example shows how to overload indexed properties.

```cpp
// mcppv2_property_6.cpp
// compile with: /clr
ref class X {
   double d;
public:
   X() : d(0.0) {}
   property double MyProp[int] {
      double get(int i) {
         return d;
      }

      double get(System::String ^ i) {
         return 2*d;
      }

      void set(int i, double l) {
         d = i * l;
      }
   }   // end MyProp definition
};

int main() {
   X ^ MyX = gcnew X();
   MyX->MyProp[2] = 1.7;
   System::Console::WriteLine(MyX->MyProp[1]);
   System::Console::WriteLine(MyX->MyProp["test"]);
}
```

```Output
3.4
6.8
```

## See also

[property](../extensions/property-cpp-component-extensions.md)
