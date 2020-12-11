---
description: "Learn more about: Single Inheritance"
title: "Single Inheritance"
ms.date: "11/19/2018"
helpviewer_keywords: ["single inheritance", "base classes [C++], indirect", "scope, scope resolution operator", "operators [C++], scope resolution", "scope resolution operator", "derived classes [C++], single base class", "inheritance, single"]
ms.assetid: 1cb946ed-8b1b-4cf1-bde0-d9cecbfdc622
---
# Single Inheritance

In "single inheritance," a common form of inheritance, classes have only one base class. Consider the relationship illustrated in the following figure.

![Basic single&#45;inheritance graph](../cpp/media/vc38xj1.gif "Basic single&#45;inheritance graph") <br/>
Simple Single-Inheritance Graph

Note the progression from general to specific in the figure. Another common attribute found in the design of most class hierarchies is that the derived class has a "kind of" relationship with the base class. In the figure, a `Book` is a kind of a `PrintedDocument`, and a `PaperbackBook` is a kind of a `book`.

One other item of note in the figure: `Book` is both a derived class (from `PrintedDocument`) and a base class (`PaperbackBook` is derived from `Book`). A skeletal declaration of such a class hierarchy is shown in the following example:

```cpp
// deriv_SingleInheritance.cpp
// compile with: /LD
class PrintedDocument {};

// Book is derived from PrintedDocument.
class Book : public PrintedDocument {};

// PaperbackBook is derived from Book.
class PaperbackBook : public Book {};
```

`PrintedDocument` is considered a "direct base" class to `Book`; it is an "indirect base" class to `PaperbackBook`. The difference is that a direct base class appears in the base list of a class declaration and an indirect base does not.

The base class from which each class is derived is declared before the declaration of the derived class. It is not sufficient to provide a forward-referencing declaration for a base class; it must be a complete declaration.

In the preceding example, the access specifier **`public`** is used. The meaning of public, protected, and private inheritance is described in [Member-Access Control.](../cpp/member-access-control-cpp.md)

A class can serve as the base class for many specific classes, as illustrated in the following figure.

![Directed acyclic graph](../cpp/media/vc38xj2.gif "Directed acyclic graph") <br/>
Sample of Directed Acyclic Graph

In the diagram shown above, called a "directed acyclic graph" (or "DAG"), some of the classes are base classes for more than one derived class. However, the reverse is not true: there is only one direct base class for any given derived class. The graph in the figure depicts a "single inheritance" structure.

> [!NOTE]
> Directed acyclic graphs are not unique to single inheritance. They are also used to depict multiple-inheritance graphs.

In inheritance, the derived class contains the members of the base class plus any new members you add. As a result, a derived class can refer to members of the base class (unless those members are redefined in the derived class). The scope-resolution operator (`::`) can be used to refer to members of direct or indirect base classes when those members have been redefined in the derived class. Consider this example:

```cpp
// deriv_SingleInheritance2.cpp
// compile with: /EHsc /c
#include <iostream>
using namespace std;
class Document {
public:
   char *Name;   // Document name.
   void PrintNameOf();   // Print name.
};

// Implementation of PrintNameOf function from class Document.
void Document::PrintNameOf() {
   cout << Name << endl;
}

class Book : public Document {
public:
   Book( char *name, long pagecount );
private:
   long  PageCount;
};

// Constructor from class Book.
Book::Book( char *name, long pagecount ) {
   Name = new char[ strlen( name ) + 1 ];
   strcpy_s( Name, strlen(Name), name );
   PageCount = pagecount;
};
```

Note that the constructor for `Book`, (`Book::Book`), has access to the data member, `Name`. In a program, an object of type `Book` can be created and used as follows:

```cpp
//  Create a new object of type Book. This invokes the
//   constructor Book::Book.
Book LibraryBook( "Programming Windows, 2nd Ed", 944 );

...

//  Use PrintNameOf function inherited from class Document.
LibraryBook.PrintNameOf();
```

As the preceding example demonstrates, class-member and inherited data and functions are used identically. If the implementation for class `Book` calls for a reimplementation of the `PrintNameOf` function, the function that belongs to the `Document` class can be called only by using the scope-resolution (`::`) operator:

```cpp
// deriv_SingleInheritance3.cpp
// compile with: /EHsc /LD
#include <iostream>
using namespace std;

class Document {
public:
   char *Name;          // Document name.
   void  PrintNameOf() {}  // Print name.
};

class Book : public Document {
   Book( char *name, long pagecount );
   void PrintNameOf();
   long  PageCount;
};

void Book::PrintNameOf() {
   cout << "Name of book: ";
   Document::PrintNameOf();
}
```

Pointers and references to derived classes can be implicitly converted to pointers and references to their base classes if there is an accessible, unambiguous base class. The following code demonstrates this concept using pointers (the same principle applies to references):

```cpp
// deriv_SingleInheritance4.cpp
// compile with: /W3
struct Document {
   char *Name;
   void PrintNameOf() {}
};

class PaperbackBook : public Document {};

int main() {
   Document * DocLib[10];   // Library of ten documents.
   for (int i = 0 ; i < 5 ; i++)
      DocLib[i] = new Document;
   for (int i = 5 ; i < 10 ; i++)
      DocLib[i] = new PaperbackBook;
}
```

In the preceding example, different types are created. However, because these types are all derived from the `Document` class, there is an implicit conversion to `Document *`. As a result, `DocLib` is a "heterogeneous list" (a list in which not all objects are of the same type) containing different kinds of objects.

Because the `Document` class has a `PrintNameOf` function, it can print the name of each book in the library, although it may omit some of the information specific to the type of document (page count for `Book`, number of bytes for `HelpFile`, and so on).

> [!NOTE]
> Forcing the base class to implement a function such as `PrintNameOf` is often not the best design. [Virtual Functions](../cpp/virtual-functions.md) offers other design alternatives.
