---
description: "Learn more about: Compiler Error C2664"
title: "Compiler Error C2664"
ms.date: "11/04/2016"
f1_keywords: ["C2664"]
helpviewer_keywords: ["C2664"]
ms.assetid: 3595d66e-cf87-4fda-a896-c0cd81f95db4
---
# Compiler Error C2664

'function' : cannot convert argument n from 'type1' to 'type2'

This parameter conversion problem might happen if an instance of a class is created and an implicit conversion is attempted on a constructor marked with the **`explicit`** keyword. For more information about explicit conversions, see [User-Defined Type Conversions](../../cpp/user-defined-type-conversions-cpp.md).

If a temporary object is passed to a function that takes a reference to an object as a parameter, that reference must be a **`const`** reference.

If the function is passed a parameter that is not of the type that the function expects, a temporary object is created by using the appropriate constructor. This temporary object is then passed to the function. In this case, the temporary object is used to initialize the reference. In earlier versions of the language, all references could be initialized by temporary objects.

To fix C2664,

- Recheck the prototype for the given function and correct the argument noted in the error message.

- Supply an explicit conversion if necessary.

C2664 can also be generated if a class hides a member in one of its base classes.

For more information, see [How to: Convert System::String to wchar_t* or char\*](../../dotnet/how-to-convert-system-string-to-wchar-t-star-or-char-star.md).

## Examples

The following sample generates C2664 and shows how to fix it.

```cpp
// C2664.cpp
// C2664
struct A {
   void f(int i) {};
};

struct B : public A {
   // To fix, uncomment the following line.
   // using A::f;
   void f(A a) {};
};

int main() {
   B b;
   int i = 1;
   b.f(i);   // B::F hides A::f Uncomment the using declaration in B.
}
```

This sample also generates C2664 and shows how to fix it.

```cpp
// C2664b.cpp
// C2664 expected
struct A {
   // To fix, uncomment the following line.
   // A(int i){}
};

void func( int, A ) {}

int main() {
   func( 1, 1 );   // No conversion from int to A.
}
```

The next sample demonstrates C2664 by using a string literal to call `Test`, and shows how to fix it. Because the parameter is an `szString` reference, an object must be created by the appropriate constructor. The result is a temporary object that cannot be used to initialize the reference.

```cpp
// C2664c.cpp
// compile with: /EHsc
// C2664 expected
#include <iostream>
#include <string.h>
using namespace std;

class szString {
   int slen;
   char *str;

public:
   szString(const char *);
   int len() const {
      return slen;
   }
};

// Simple reference cannot bind to temp var.
void Test(szString &a) {}

// To fix, uncomment the following line.
// void Test(const szString &a) {}

szString::szString(const char * newstr) : slen(0), str(NULL) {
   slen=strlen(newstr);
   str = new char[slen + 1];
   if (str)
      strcpy_s(str, (slen + 1), newstr);
}

int main() {
   Test("hello");
}
```

The compiler enforces the C++ standard requirements for applying **`const`**. This sample generates C2664:

```cpp
// C2664d.cpp
// C2664 expected
#include <windows.h>

void func1(LPCSTR &s)
{

}

void func2(LPSTR &s)
{
   func1(s);
}

int main()
{
   return 0;
}
```

Here's a more complex situation where C2664 is generated, including directions on how to fix it:

```cpp
// C2664e.cpp
// compile with: /EHsc
// C2664 expected
#define _INTL
#include <locale>
#include <iostream>

using namespace std;
#define LEN 90

int main( ) {
   char* pszExt = "This is the string to be converted!";
   wchar_t pwszInt [LEN+1];
   memset(&pwszInt[0], 0, (sizeof(wchar_t))*(LEN+1));

   // To fix, delete the following line.
   char* pszNext;

   // To fix, uncomment the following line.
   // const char* pszNext;

   wchar_t* pwszNext;
   mbstate_t state;
   locale loc("C");
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >
      ( loc ).in( state,
      pszExt, &pszExt[strlen(pszExt)], pszNext,
      pwszInt, &pwszInt[strlen(pszExt)], pwszNext );
   // See earlier comment.
      pwszInt[strlen(pszExt)] = 0;
   wcout << ( (res!=codecvt_base::error) ?
                       L"It worked! " : L"It didn't work! " )
   << L"The converted string is:\n ["
   << &pwszInt[0]
   << L"]" << endl;

   exit(-1);
}
```

An enum variable is not converted to its underlying type such that a function call will be satisfied. For more information, see [enum class](../../extensions/enum-class-cpp-component-extensions.md). The following sample generates C2664 and shows how to fix it.

```cpp
// C2664f.cpp
// compile with: /clr
using namespace System;
public enum class A : Char {
   None = 0,
   NonSilent = 1,
};

void Test(Char c) {}

int main() {
   A aa = A::None;
   Test(aa);   // C2664
   Test(Char(aa));   // OK - fix by using a conversion cast
}
```

A bug in the midl compiler causes a wchar_t type to be emitted as an unsigned short in the type library. To resolve this error, either cast the type in your C++ source code or define the type as a string in the idl file.

```
// C2664g.idl
import "prsht.idl";

[ object, uuid(8402B8F1-BF7F-4B49-92D4-C2B9DF4543E9) ]

interface IMyObj1 : IUnknown {
   HRESULT  teststr([in, string] wchar_t *wstr);
   HRESULT  testarr([in, size_is(len)] wchar_t wstr[], [in] int len);
   HRESULT  testbstr([in] BSTR bstr);
};

[  uuid(44463307-CBFC-47A6-8B4F-13CD0A83B436) ]
library myproj1 {
   [  version(1.0), uuid(D8622C12-5448-42B8-8F0E-E3AD6B8470C1) ]
   coclass CMyObj1 { interface IMyObj1; };
}
```

C2664 is also raised by using **`wchar_t`** when porting code from Visual C++ 6.0 to later versions. In Visual C++ 6.0 and earlier, **`wchar_t`** was a **`typedef`** for **`unsigned short`** and was therefore implicitly convertible to that type. After Visual C++ 6.0, **`wchar_t`** is its own built-in type, as specified in the C++ standard, and is no longer implicitly convertible to **`unsigned short`**. See [/Zc:wchar_t (wchar_t Is Native Type)](../../build/reference/zc-wchar-t-wchar-t-is-native-type.md).

The following sample generates C2664 and shows how to fix it.

```cpp
// C2664h.cpp
#import "C2664g.tlb"
using namespace myproj1;

int main() {
   IMyObj1Ptr ptr;

   wchar_t * mybuff = 0;
   BSTR bstr = 0;
   int len;
   ptr->teststr(mybuff);
   ptr->testbstr(bstr);
   ptr->testarr(mybuff, len);   // C2664
   ptr->testarr((unsigned short *)mybuff, len);   // OK - Fix by using a cast
}
```

C2664 is also caused if the compiler cannot deduce template arguments.

```cpp
// C2664i.cpp
#include <stdio.h>
template <class T, int iType=0>
class CTypedImg {
public:
   CTypedImg() {}
   void run() {}

   operator CTypedImg<T>& () {
      return *((CTypedImg<T>*)this);
    }
};

template <class t1>
void test(CTypedImg<t1>& myarg) {
   myarg.run();
}

int main() {
   CTypedImg<float,2> img;

   test((CTypedImg<float>&)img);   // OK
   test<float>(img);   // OK
   test(img);   // C2664 - qualify as above to fix
}
```
