---
description: "Learn more about: Generic Classes (C++/CLI)"
title: "Generic Classes (C++/CLI)"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["classes [C++], generic", "generic classes [C++], about generic classes", "data types [C++], generic", "generic classes", "generics [C++], declaring generic classes"]
ms.assetid: 0beb99e1-1ec4-4fee-9836-ce9657d67a3a
---
# Generic Classes (C++/CLI)

A generic class is declared using the following form:

## Syntax

```cpp
[attributes]
generic <class-key type-parameter-identifier(s)>
[constraint-clauses]
[accessibility-modifiers] ref class identifier  [modifiers]
[: base-list]
{
class-body
} [declarators] [;]
```

## Remarks

In the above syntax, the following terms are used:

*attributes*<br/>
(Optional) Additional declarative information. For more information on attributes and attribute classes, see Attributes.

*class-key*<br/>
Either **`class`** or **`typename`**

*type-parameter-identifier(s)*,
Comma-separated list of identifiers specifying the names of the type parameters.

*constraint-clauses*<br/>
A list (not comma-separated) of **where** clauses specifying the constraints for the type parameters. Takes the form:

> **where** *type-parameter-identifier* **:** *constraint-list*  **...**

*constraint-list*<br/>
*class-or-interface*[`,` *...*]

*accessibility-modifiers*<br/>
Accessibility modifiers for the generic class. For the Windows Runtime, the only allowed modifier is **`private`**. For the common language runtime, the allowed modifiers are **`private`** and **`public`**.

*identifier*<br/>
The name of the generic class, any valid C++ identifier.

*modifiers*<br/>
(Optional) Allowed modifiers include **sealed** and **abstract**.

*base-list*<br/>
A list that contains the one base class and any implemented interfaces, all separated by commas.

*class-body*<br/>
The body of the class, containing fields, member functions, etc.

*declarators*<br/>
Declarations of any variables of this type. For example: `^`*identifier*[`,` ...]

You can declare generic classes such as these (note that the keyword **`class`** may be used instead of **`typename`**). In this example, `ItemType`, `KeyType` and `ValueType` are unknown types that are specified at the point where the type. `HashTable<int, int>` is a constructed type of the generic type `HashTable<KeyType, ValueType>`. A number of different constructed types can be constructed from a single generic type. Constructed types constructed from generic classes are treated like any other ref class type.

```cpp
// generic_classes_1.cpp
// compile with: /clr
using namespace System;
generic <typename ItemType>
ref struct Stack {
   // ItemType may be used as a type here
   void Add(ItemType item) {}
};

generic <typename KeyType, typename ValueType>
ref class HashTable {};

// The keyword class may be used instead of typename:
generic <class ListItem>
ref class List {};

int main() {
   HashTable<int, Decimal>^ g1 = gcnew HashTable<int, Decimal>();
}
```

Both value types (either built-in types such as **`int`** or **`double`**, or user-defined value types) and reference types may be used as a generic type argument. The syntax within the generic definition is the same regardless. Syntactically, the unknown type is treated as if it were a reference type. However, the runtime is able to determine that if the type actually used is a value type and substitute the appropriate generated code for direct access to members. Value types used as generic type arguments are not boxed and so do not suffer the performance penalty associated with boxing. The syntax used within the body of the generic should be `T^` and `->` instead of `.`. Any use of [ref new, gcnew](ref-new-gcnew-cpp-component-extensions.md) for the type parameter will be appropriately interpreted by the runtime as the simple creation of a value type if the type argument is a value type.

You can also declare a generic class with [Constraints on Generic Type Parameters (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md) on the types that can be used for the type parameter. In the following example any type used for `ItemType` must implement the `IItem` interface. Attempting to use **`int`**, for example, which does not implement `IItem`, would produce a compile-time error because the type argument does not satisfy the constraint.

```cpp
// generic_classes_2.cpp
// compile with: /clr /c
interface class IItem {};
generic <class ItemType>
where ItemType : IItem
ref class Stack {};
```

Generic classes in the same namespace cannot be overloaded by only changing the number or the types of type parameters. However, if each class lives in a different namespace, they can be overloaded. For example, consider the following two classes, `MyClass` and `MyClass<ItemType>`, in the namespaces `A` and `B`. The two classes can then be overloaded in a third namespace C:

```cpp
// generic_classes_3.cpp
// compile with: /clr /c
namespace A {
   ref class MyClass {};
}

namespace B {
   generic <typename ItemType>
   ref class MyClass2 { };
}

namespace C {
   using namespace A;
   using namespace B;

   ref class Test {
      static void F() {
         MyClass^ m1 = gcnew MyClass();   // OK
         MyClass2<int>^ m2 = gcnew MyClass2<int>();   // OK
      }
   };
}
```

The base class and base interfaces cannot be type parameters. However, the base class can involve the type parameter as an argument, as in the following case:

```cpp
// generic_classes_4.cpp
// compile with: /clr /c
generic <typename ItemType>
interface class IInterface {};

generic <typename ItemType>
ref class MyClass : IInterface<ItemType> {};
```

Constructors and destructors are executed once for each object instance (as usual); static constructors are executed once for each constructed type.

## Fields in Generic Classes

This section demonstrates the use of instance and static fields in generic classes.

### Instance Variables

Instance variables of a generic class can have types and variable initializers that include any type parameters from the enclosing class.

## Example: Different generic classes

In the following example, three different instances of the generic class, MyClass\<ItemType>, are created by using the appropriate type arguments (**`int`**, **`double`**, and **string**).

```cpp
// generics_instance_fields1.cpp
// compile with: /clr
// Instance fields on generic classes
using namespace System;

generic <typename ItemType>
ref class MyClass {
// Field of the type ItemType:
public :
   ItemType field1;
   // Constructor using a parameter of the type ItemType:
   MyClass(ItemType p) {
   field1 = p;
   }
};

int main() {
   // Instantiate an instance with an integer field:
   MyClass<int>^ myObj1 = gcnew MyClass<int>(123);
   Console::WriteLine("Integer field = {0}", myObj1->field1);

   // Instantiate an instance with a double field:
   MyClass<double>^ myObj2 = gcnew MyClass<double>(1.23);
   Console::WriteLine("Double field = {0}", myObj2->field1);

   // Instantiate an instance with a String field:
   MyClass<String^>^ myObj3 = gcnew MyClass<String^>("ABC");
   Console::WriteLine("String field = {0}", myObj3->field1);
   }
```

```Output
Integer field = 123
Double field = 1.23
String field = ABC
```

## Static Variables

On the creation of a new generic type, new instances of any static variables are created and any static constructor for that type is executed.

Static variables can use any type parameters from the enclosing class.

## Example: Use static variables

The following example demonstrates using static fields and a static constructor within a generic class.

```cpp
// generics_static2.cpp
// compile with: /clr
using namespace System;

interface class ILog {
   void Write(String^ s);
};

ref class DateTimeLog : ILog {
public:
   virtual void Write(String^ s) {
      Console::WriteLine( "{0}\t{1}", DateTime::Now, s);
   }
};

ref class PlainLog : ILog {
public:
   virtual void Write(String^ s) { Console::WriteLine(s); }
};

generic <typename LogType>
where LogType : ILog
ref class G {
   static LogType s_log;

public:
   G(){}
   void SetLog(LogType log) { s_log = log; }
   void F() { s_log->Write("Test1"); }
   static G() { Console::WriteLine("Static constructor called."); }
};

int main() {
   G<PlainLog^>^ g1 = gcnew G<PlainLog^>();
   g1->SetLog(gcnew PlainLog());
   g1->F();

   G<DateTimeLog^>^ g2 = gcnew G<DateTimeLog^>();
   g2->SetLog(gcnew DateTimeLog());

   // prints date
   // g2->F();
}
```

```Output
Static constructor called.
Static constructor called.
Static constructor called.
Test1
```

## Methods in Generic Classes

Methods in generic classes can be generic themselves; non-generic methods will be implicitly parameterized by the class type parameter.

The following special rules apply to methods within generic classes:

- Methods in generic classes can use type parameters as parameters, return types, or local variables.

- Methods in generic classes can use open or closed constructed types as parameters, return types, or local variables.

### Non-Generic Methods in Generic Classes

Methods in generic classes that have no additional type parameters are usually referred to as non-generic although they are implicitly parameterized by the enclosing generic class.

The signature of a non-generic method can include one or more type parameters of the enclosing class, either directly or in an open constructed type. For example:

`void MyMethod(MyClass<ItemType> x) {}`

The body of such methods can also use these type parameters.

## Example: Declare non-generic method

The following example declares a non-generic method, `ProtectData`, inside a generic class, `MyClass<ItemType>`. The method uses the class type parameter `ItemType` in its signature in an open constructed type.

```cpp
// generics_non_generic_methods1.cpp
// compile with: /clr
// Non-generic methods within a generic class.
using namespace System;

generic <typename ItemType>
ref class MyClass {
public:
   String^ name;
   ItemType data;

   MyClass(ItemType x) {
      data = x;
   }

   // Non-generic method using the type parameter:
   virtual void ProtectData(MyClass<ItemType>^ x) {
      data = x->data;
   }
};

// ItemType defined as String^
ref class MyMainClass: MyClass<String^> {
public:
   // Passing "123.00" to the constructor:
   MyMainClass(): MyClass<String^>("123.00") {
      name = "Jeff Smith";
   }

   virtual void ProtectData(MyClass<String^>^ x) override {
      x->data = String::Format("${0}**", x->data);
   }

   static void Main() {
      MyMainClass^ x1 = gcnew MyMainClass();

      x1->ProtectData(x1);
      Console::WriteLine("Name: {0}", x1->name);
      Console::WriteLine("Amount: {0}", x1->data);
   }
};

int main() {
   MyMainClass::Main();
}
```

```Output
Name: Jeff Smith
Amount: $123.00**
```

## Generic Methods in Generic Classes

You can declare generic methods in both generic and non-generic classes. For example:

## Example: Declare generic and non-generic methods

```cpp
// generics_method2.cpp
// compile with: /clr /c
generic <typename Type1>
ref class G {
public:
   // Generic method having a type parameter
   // from the class, Type1, and its own type
   // parameter, Type2
   generic <typename Type2>
   void Method1(Type1 t1, Type2 t2) { F(t1, t2); }

   // Non-generic method:
   // Can use the class type param, Type1, but not Type2.
   void Method2(Type1 t1) { F(t1, t1); }

   void F(Object^ o1, Object^ o2) {}
};
```

The non-generic method is still generic in the sense that it is parameterized by the class's type parameter, but it has no additional type parameters.

All types of methods in generic classes can be generic, including static, instance, and virtual methods.

## Example: Declare and use generic methods

The following example demonstrates declaring and using generic methods within generic classes:

```cpp
// generics_generic_method2.cpp
// compile with: /clr
using namespace System;
generic <class ItemType>
ref class MyClass {
public:
   // Declare a generic method member.
   generic <class Type1>
   String^ MyMethod(ItemType item, Type1 t) {
      return String::Concat(item->ToString(), t->ToString());
   }
};

int main() {
   // Create instances using different types.
   MyClass<int>^ myObj1 = gcnew MyClass<int>();
   MyClass<String^>^ myObj2 = gcnew MyClass<String^>();
   MyClass<String^>^ myObj3 = gcnew MyClass<String^>();

   // Calling MyMethod using two integers.
   Console::WriteLine("MyMethod returned: {0}",
            myObj1->MyMethod<int>(1, 2));

   // Calling MyMethod using an integer and a string.
   Console::WriteLine("MyMethod returned: {0}",
            myObj2->MyMethod<int>("Hello #", 1));

   // Calling MyMethod using two strings.
   Console::WriteLine("MyMethod returned: {0}",
       myObj3->MyMethod<String^>("Hello ", "World!"));

   // generic methods can be called without specifying type arguments
   myObj1->MyMethod<int>(1, 2);
   myObj2->MyMethod<int>("Hello #", 1);
   myObj3->MyMethod<String^>("Hello ", "World!");
}
```

```Output
MyMethod returned: 12
MyMethod returned: Hello #1
MyMethod returned: Hello World!
```

## Using Nested Types in Generic Classes

Just as with ordinary classes, you can declare other types inside a generic class. The nested class declaration is implicitly parameterized by the type parameters of the outer class declaration. Thus, a distinct nested class is defined for each constructed outer type. For example, in the declaration,

```cpp
// generic_classes_5.cpp
// compile with: /clr /c
generic <typename ItemType>
ref struct Outer {
   ref class Inner {};
};
```

The type `Outer<int>::Inner` is not the same as the type `Outer<double>::Inner`.

As with generic methods in generic classes, additional type parameters can be defined for the nested type. If you use the same type parameter names in the inner and outer class, the inner type parameter will hide the outer type parameter.

```cpp
// generic_classes_6.cpp
// compile with: /clr /c
generic <typename ItemType>
ref class Outer {
   ItemType outer_item;   // refers to outer ItemType

   generic <typename ItemType>
   ref class Inner {
      ItemType inner_item;   // refers to Inner ItemType
   };
};
```

Since there is no way to refer to the outer type parameter, the compiler will produce a warning in this situation.

When constructed nested generic types are named, the type parameter for the outer type is not included in the type parameter list for the inner type, even though the inner type is implicitly parameterized by the outer type's type parameter. In the above case, a name of a constructed type would be `Outer<int>::Inner<string>`.

## Example: Build and read linked list

The following example demonstrates building and reading a linked list using nested types in generic classes.

```cpp
// generics_linked_list.cpp
// compile with: /clr
using namespace System;
generic <class ItemType>
ref class LinkedList {
// The node class:
public:
   ref class Node {
   // The link field:
   public:
      Node^ next;
      // The data field:
      ItemType item;
   } ^first, ^current;
};

ref class ListBuilder {
public:
   void BuildIt(LinkedList<double>^ list) {
      /* Build the list */
      double m[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
      Console::WriteLine("Building the list:");

      for (int n=0; n<=4; n++) {
         // Create a new node:
         list->current = gcnew LinkedList<double>::Node();

         // Assign a value to the data field:
         list->current->item = m[n];

         // Set the link field "next" to be the same as
         // the "first" field:
         list->current->next = list->first;

         // Redirect "first" to the new node:
         list->first = list->current;

         // Display node's data as it builds:
         Console::WriteLine(list->current->item);
      }
   }

   void ReadIt(LinkedList<double>^ list) {
      // Read the list
      // Make "first" the "current" link field:
      list->current = list->first;
      Console::WriteLine("Reading nodes:");

      // Read nodes until current == null:
      while (list->current != nullptr) {
         // Display the node's data field:
         Console::WriteLine(list->current->item);

         // Move to the next node:
         list->current = list->current->next;
      }
   }
};

int main() {
   // Create a list:
   LinkedList<double>^ aList = gcnew LinkedList<double>();

   // Initialize first node:
   aList->first = nullptr;

   // Instantiate the class, build, and read the list:
   ListBuilder^ myListBuilder = gcnew ListBuilder();
   myListBuilder->BuildIt(aList);
   myListBuilder->ReadIt(aList);
}
```

```Output
Building the list:
0.1
0.2
0.3
0.4
0.5
Reading nodes:
0.5
0.4
0.3
0.2
0.1
```

## Properties, Events, Indexers and Operators in Generic Classes

- Properties, events, indexers and operators can use the type parameters of the enclosing generic class as return values, parameters, or local variables, such as when `ItemType` is a type parameter of a class:

    ```cpp
    public ItemType MyProperty {}
    ```

- Properties, events, indexers and operators cannot themselves be parameterized.

## Example: Declare instance property

This example shows declarations of an instance property within a generic class.

```cpp
// generics_generic_properties1.cpp
// compile with: /clr
using namespace System;

generic <typename ItemType>
ref class MyClass {
private:
   property ItemType myField;

public:
   property ItemType MyProperty {
      ItemType get() {
         return myField;
      }
      void set(ItemType value) {
         myField = value;
      }
   }
};

int main() {
   MyClass<String^>^ c = gcnew MyClass<String^>();
   MyClass<int>^ c1 = gcnew MyClass<int>();

   c->MyProperty = "John";
   c1->MyProperty = 234;

   Console::Write("{0}, {1}", c->MyProperty, c1->MyProperty);
}
```

```Output
John, 234
```

## Example: Generic class with event

The next example shows a generic class with an event.

```cpp
// generics_generic_with_event.cpp
// compile with: /clr
// Declare a generic class with an event and
// invoke events.
using namespace System;

// declare delegates
generic <typename ItemType>
delegate void ClickEventHandler(ItemType);

// generic class that defines events
generic <typename ItemType>
ref class EventSource {
public:
   // declare the event OnClick
   event ClickEventHandler<ItemType>^ OnClick;
   void FireEvents(ItemType item) {
      // raises events
      OnClick(item);
   }
};

// generic class that defines methods that will called when
// event occurs
generic <typename ItemType>
ref class EventReceiver {
public:
   void OnMyClick(ItemType item) {
   Console::WriteLine("OnClick: {0}", item);
   }
};

int main() {
   EventSource<String^>^ MyEventSourceString =
                   gcnew EventSource<String^>();
   EventSource<int>^ MyEventSourceInt = gcnew EventSource<int>();
   EventReceiver<String^>^ MyEventReceiverString =
                   gcnew EventReceiver<String^>();
   EventReceiver<int>^ MyEventReceiverInt = gcnew EventReceiver<int>();

   // hook handler to event
   MyEventSourceString->OnClick += gcnew ClickEventHandler<String^>(
       MyEventReceiverString, &EventReceiver<String^>::OnMyClick);
   MyEventSourceInt->OnClick += gcnew ClickEventHandler<int>(
             MyEventReceiverInt, &EventReceiver<int>::OnMyClick);

   // invoke events
   MyEventSourceString->FireEvents("Hello");
   MyEventSourceInt->FireEvents(112);

   // unhook handler to event
   MyEventSourceString->OnClick -= gcnew ClickEventHandler<String^>(
        MyEventReceiverString, &EventReceiver<String^>::OnMyClick);
   MyEventSourceInt->OnClick -= gcnew ClickEventHandler<int>(
        MyEventReceiverInt, &EventReceiver<int>::OnMyClick);
}
```

## Generic Structs

The rules for declaring and using generic structs are the same as those for generic classes, except for the differences noted in the Visual C++ language reference.

## Example: Declare generic struct

The following example declares a generic struct, `MyGenStruct`, with one field, `myField`, and assigns values of different types (**`int`**, **`double`**, `String^`) to this field.

```cpp
// generics_generic_struct1.cpp
// compile with: /clr
using namespace System;

generic <typename ItemType>
ref struct MyGenStruct {
public:
   ItemType myField;

   ItemType AssignValue(ItemType item) {
      myField = item;
      return myField;
   }
};

int main() {
   int myInt = 123;
   MyGenStruct<int>^ myIntObj = gcnew MyGenStruct<int>();
   myIntObj->AssignValue(myInt);
   Console::WriteLine("The field is assigned the integer value: {0}",
            myIntObj->myField);

   double myDouble = 0.123;
   MyGenStruct<double>^ myDoubleObj = gcnew MyGenStruct<double>();
   myDoubleObj->AssignValue(myDouble);
   Console::WriteLine("The field is assigned the double value: {0}",
            myDoubleObj->myField);

   String^ myString = "Hello Generics!";
   MyGenStruct<String^>^ myStringObj = gcnew MyGenStruct<String^>();
   myStringObj->AssignValue(myString);
   Console::WriteLine("The field is assigned the string: {0}",
            myStringObj->myField);
}
```

```Output
The field is assigned the integer value: 123
The field is assigned the double value: 0.123
The field is assigned the string: Hello Generics!
```

## See also

[Generics](generics-cpp-component-extensions.md)
