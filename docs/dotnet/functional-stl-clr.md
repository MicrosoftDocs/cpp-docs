---
description: "Learn more about: functional (STL/CLR)"
title: "functional (STL/CLR)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["<cliext/functional>", "cliext::binary_delegate", "cliext::binary_delegate_noreturn", "cliext::binary_negate", "cliext::bind1st", "cliext::bind2nd", "cliext::binder1st", "cliext::binder2nd", "cliext::divides", "cliext::equal_to", "cliext::greater", "cliext::greater_equal", "cliext::less", "cliext::less_equal", "cliext::logical_and", "cliext::logical_not", "cliext::logical_or", "cliext::minus", "cliext::modulus", "cliext::multiplies", "cliext::negate", "cliext::not_equal_to", "cliext::not1", "cliext::not2", "cliext::plus", "cliext::unary_delegate", "cliext::unary_delegate_noreturn", "cliext::unary_negate"]
helpviewer_keywords: ["<functional> header [STL/CLR]", "<cliext/functional> header [STL/CLR]", "functional functions [STL/CLR]", "binary_delegate function [STL/CLR]", "binary_delegate_noreturn function [STL/CLR]", "binary_negate function [STL/CLR]", "bind1st function [STL/CLR]", "bind2nd function [STL/CLR]", "binder1st function [STL/CLR]", "binder2nd function [STL/CLR]", "divides function [STL/CLR]", "equal_to function [STL/CLR]", "greater function [STL/CLR]", "greater_equal function [STL/CLR]", "less function [STL/CLR]", "less_equal function [STL/CLR]", "logical_and function [STL/CLR]", "logical_not function [STL/CLR]", "logical_or function [STL/CLR]", "minus function [STL/CLR]", "modulus function [STL/CLR]", "multiplies function [STL/CLR]", "negate function [STL/CLR]", "not_equal_to function [STL/CLR]", "not1 function [STL/CLR]", "not2 function [STL/CLR]", "plus function [STL/CLR]", "unary_delegate function [STL/CLR]", "unary_delegate_noreturn function [STL/CLR]", "unary_negate function [STL/CLR]"]
ms.assetid: 88738b8c-5d37-4375-970e-a4442bf5efde
---
# functional (STL/CLR)

Include the STL/CLR header `<cliext/functional>` to define the a number of template classes and related template delegates and functions.

## Syntax

```
#include <functional>
```

## Requirements

**Header:** \<cliext/functional>

**Namespace:** cliext

## Declarations

|Delegate|Description|
|--------------|-----------------|
|[binary_delegate (STL/CLR)](#binary_delegate)|Two-argument delegate.|
|[binary_delegate_noreturn (STL/CLR)](#binary_delegate_noreturn)|Two-argument delegate returning **`void`**.|
|[unary_delegate (STL/CLR)](#unary_delegate)|One-argument delegate.|
|[unary_delegate_noreturn (STL/CLR)](#unary_delegate_noreturn)|One-argument delegate returning **`void`**.|

|Class|Description|
|-----------|-----------------|
|[binary_negate (STL/CLR)](#binary_negate)|Functor to negate a two-argument functor.|
|[binder1st (STL/CLR)](#binder1st)|Functor to bind first argument to a two-argument functor.|
|[binder2nd (STL/CLR)](#binder2nd)|Functor to bind second argument to a two-argument functor.|
|[divides (STL/CLR)](#divides)|Divide functor.|
|[equal_to (STL/CLR)](#equal_to)|Equal comparison functor.|
|[greater (STL/CLR)](#greater)|Greater comparison functor.|
|[greater_equal (STL/CLR)](#greater_equal)|Greater or equal comparison functor.|
|[less (STL/CLR)](#less)|Less comparison functor.|
|[less_equal (STL/CLR)](#less_equal)|Less or equal comparison functor.|
|[logical_and (STL/CLR)](#logical_and)|Logical AND functor.|
|[logical_not (STL/CLR)](#logical_not)|Logical NOT functor.|
|[logical_or (STL/CLR)](#logical_or)|Logical OR functor.|
|[minus (STL/CLR)](#minus)|Subtract functor.|
|[modulus (STL/CLR)](#modulus)|Modulus functor.|
|[multiplies (STL/CLR)](#multiplies)|Multiply functor.|
|[negate (STL/CLR)](#negate)|Functor to return its argument negated.|
|[not_equal_to (STL/CLR)](#not_equal_to)|Not equal comparison functor.|
|[plus (STL/CLR)](#plus)|Add functor.|
|[unary_negate (STL/CLR)](#unary_negate)|Functor to negate a one-argument functor.|

|Function|Description|
|--------------|-----------------|
|[bind1st (STL/CLR)](#bind1st)|Generates a binder1st for an argument and functor.|
|[bind2nd (STL/CLR)](#bind2nd)|Generates a binder2nd for an argument and functor.|
|[not1 (STL/CLR)](#not1)|Generates a unary_negate for a functor.|
|[not2 (STL/CLR)](#not2)|Generates a binary_negate for a functor.|

## Members

## <a name="binary_delegate"></a> binary_delegate (STL/CLR)

The genereic class describes a two-argument delegate. You use it specify a delegate in terms of its argument and return types.

### Syntax

```cpp
generic<typename Arg1,
    typename Arg2,
    typename Result>
    delegate Result binary_delegate(Arg1, Arg2);
```

#### Parameters

*Arg1*<br/>
The type of the first argument.

*Arg2*<br/>
The type of the second argument.

*Result*<br/>
The return type.

### Remarks

The genereic delegate describes a two-argument function.

Note that for:

`binary_delegate<int, int, int> Fun1;`

`binary_delegate<int, int, int> Fun2;`

the types `Fun1` and `Fun2` are synonyms, while for:

`delegate int Fun1(int, int);`

`delegate int Fun2(int, int);`

they are not the same type.

### Example

```cpp
// cliext_binary_delegate.cpp
// compile with: /clr
#include <cliext/functional>

bool key_compare(wchar_t left, wchar_t right)
    {
    return (left < right);
    }

typedef cliext::binary_delegate<wchar_t, wchar_t, bool> Mydelegate;
int main()
    {
    Mydelegate^ kcomp = gcnew Mydelegate(&key_compare);

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False
```

## <a name="binary_delegate_noreturn"></a> binary_delegate_noreturn (STL/CLR)

The genereic class describes a two-argument delegate that returns **`void`**. You use it specify a delegate in terms of its argument.

### Syntax

```cpp
generic<typename Arg1,
    typename Arg2>
    delegate void binary_delegate(Arg1, Arg2);
```

#### Parameters

*Arg1*<br/>
The type of the first argument.

*Arg2*<br/>
The type of the second argument.

### Remarks

The genereic delegate describes a two-argument function that returns **`void`**.

Note that for:

`binary_delegate_noreturn<int, int> Fun1;`

`binary_delegate_noreturn<int, int> Fun2;`

the types `Fun1` and `Fun2` are synonyms, while for:

`delegate void Fun1(int, int);`

`delegate void Fun2(int, int);`

they are not the same type.

### Example

```cpp
// cliext_binary_delegate_noreturn.cpp
// compile with: /clr
#include <cliext/functional>

void key_compare(wchar_t left, wchar_t right)
    {
    System::Console::WriteLine("compare({0}, {1}) = {2}",
        left, right, left < right);
    }

typedef cliext::binary_delegate_noreturn<wchar_t, wchar_t> Mydelegate;
int main()
    {
    Mydelegate^ kcomp = gcnew Mydelegate(&key_compare);

    kcomp(L'a', L'a');
    kcomp(L'a', L'b');
    kcomp(L'b', L'a');
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(a, a) = False
compare(a, b) = True
compare(b, a) = False
```

## <a name="binary_negate"></a> binary_negate (STL/CLR)

The template class describes a functor that, when called, returns the logical NOT of its stored two-argument functor. You use it specify a function object in terms of its stored functor.

### Syntax

```cpp
template<typename Fun>
    ref class binary_negate
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::first_argument_type first_argument_type;
    typedef typename Fun::second_argument_type second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    explicit binary_negate(Fun% functor);
    binary_negate(binary_negate<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Fun*<br/>
The type of the stored functor.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|
|stored_function_type|The type of the functor.|

|Member|Description|
|------------|-----------------|
|binary_negate|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^()|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor that stores another two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns the logical NOT of the stored functor called with the two arguments.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_binary_negate.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::less<int> less_op;

    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(),
        cliext::binary_negate<cliext::less<int> >(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::not2(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
1 0
```

## <a name="bind1st"></a> bind1st (STL/CLR)

Generates a `binder1st` for an argument and functor.

### Syntax

```cpp
template<typename Fun,
    typename Arg>
    binder1st<Fun> bind1st(Fun% functor,
        Arg left);
```

#### Template Parameters

*Arg*<br/>
The type of the argument.

*Fun*<br/>
The type of the functor.

#### Function Parameters

*functor*<br/>
The functor to wrap.

*left*<br/>
The first argument to wrap.

### Remarks

The template function returns [binder1st (STL/CLR)](#binder1st)`<Fun>(functor, left)`. You use it as a convenient way to wrap a two-argument functor and its first argument in a one-argument functor that calls it with a second argument.

### Example

```cpp
// cliext_bind1st.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder1st<cliext::minus<int> > subfrom3(sub_op, 3);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        subfrom3);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind1st(sub_op, 3));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
-1 0
-1 0
```

## <a name="bind2nd"></a> bind2nd (STL/CLR)

Generates a `binder2nd` for an argument and functor.

### Syntax

```cpp
template<typename Fun,
    typename Arg>
    binder2nd<Fun> bind2nd(Fun% functor,
        Arg right);
```

#### Template Parameters

*Arg*<br/>
The type of the argument.

*Fun*<br/>
The type of the functor.

#### Function Parameters

*functor*<br/>
The functor to wrap.

*right*<br/>
The second argument to wrap.

### Remarks

The template function returns [binder2nd (STL/CLR)](#binder2nd)`<Fun>(functor, right)`. You use it as a convenient way to wrap a two-argument functor and its second argument in a one-argument functor that calls it with a first argument.

### Example

```cpp
// cliext_bind2nd.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder2nd<cliext::minus<int> > sub4(sub_op, 4);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        sub4);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind2nd(sub_op, 4));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
0 -1
0 -1
```

## <a name="binder1st"></a> binder1st (STL/CLR)

The template class describes a one-argument functor that, when called, returns its stored two-argument functor called with its stored first argument and the supplied second argument. You use it specify a function object in terms of its stored functor.

### Syntax

```cpp
template<typename Fun>
    ref class binder1st
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::first_argument_type first_argument_type;
    typedef typename Fun::second_argument_type second_argument_type;
    typedef typename Fun:result_type result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        second_argument_type, result_type>
        delegate_type;

    binder1st(Fun% functor, first_argument_type left);
    binder1st(binder1st<Arg>% right);

    result_type operator()(second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Fun*<br/>
The type of the stored functor.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|
|stored_function_type|The type of the functor.|

|Member|Description|
|------------|-----------------|
|binder1st|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^()|Casts the functor to a delegate.|

### Remarks

The template class describes a one-argument functor that stores a two-argument functor and a first argument. It defines the member operator `operator()` so that, when the object is called as a function, it returns the result of calling the stored functor with the stored first argument and the supplied second argument.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_binder1st.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder1st<cliext::minus<int> > subfrom3(sub_op, 3);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        subfrom3);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind1st(sub_op, 3));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
-1 0
-1 0
```

## <a name="binder2nd"></a> binder2nd (STL/CLR)

The template class describes a one-argument functor that, when called, returns its stored two-argument functor called with the supplied first argument and its stored second argument. You use it specify a function object in terms of its stored functor.

### Syntax

```cpp
template<typename Fun>
    ref class binder2nd
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::first_argument_type first_argument_type;
    typedef typename Fun::second_argument_type second_argument_type;
    typedef typename Fun:result_type result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        first_argument_type, result_type>
        delegate_type;

    binder2nd(Fun% functor, second_argument_type left);
    binder2nd(binder2nd<Arg>% right);

    result_type operator()(first_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Fun*<br/>
The type of the stored functor.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|
|stored_function_type|The type of the functor.|

|Member|Description|
|------------|-----------------|
|binder2nd|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^()|Casts the functor to a delegate.|

### Remarks

The template class describes a one-argument functor that stores a two-argument functor and a second argument. It defines the member operator `operator()` so that, when the object is called as a function, it returns the result of calling the stored functor with the supplied first argument and the stored second argument.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_binder2nd.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder2nd<cliext::minus<int> > sub4(sub_op, 4);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        sub4);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind2nd(sub_op, 4));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
0 -1
0 -1
```

## <a name="divides"></a> divides (STL/CLR)

The template class describes a functor that, when called, returns the first argument divided by the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class divides
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    divides();
    divides(divides<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments and return value.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|divides|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^()|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns the first argument divided by the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_divides.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::divides<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
2 3
```

## <a name="equal_to"></a> equal_to (STL/CLR)

The template class describes a functor that, when called, returns true only if the first argument is equal to the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class equal_to
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    equal_to();
    equal_to(equal_to<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|equal_to|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^()|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if the first argument is equal to the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_equal_to.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::equal_to<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
```

## <a name="greater"></a> greater (STL/CLR)

The template class describes a functor that, when called, returns true only if the first argument is greater than the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class greater
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    greater();
    greater(greater<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|greater|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if the first argument is greater than the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_greater.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 3 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::greater<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
3 3
1 0
```

## <a name="greater_equal"></a> greater_equal (STL/CLR)

The template class describes a functor that, when called, returns true only if the first argument is greater than or equal to the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class greater_equal
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    greater_equal();
    greater_equal(greater_equal<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|greater_equal|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if the first argument is greater than or equal to the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_greater_equal.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::greater_equal<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
```

## <a name="less"></a> less (STL/CLR)

The template class describes a functor that, when called, returns true only if the first argument is less than the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class less
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    less();
    less(less<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|less|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if the first argument is less than the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_less.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::less<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
0 1
```

## <a name="less_equal"></a> less_equal (STL/CLR)

The template class describes a functor that, when called, returns true only if the first argument is less than or equal to the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class less_equal
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    less_equal();
    less_equal(less_equal<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|less_equal|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if the first argument is less than or equal to the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_less_equal.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 3 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::less_equal<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
3 3
0 1
```

## <a name="logical_and"></a> logical_and (STL/CLR)

The template class describes a functor that, when called, returns true only if both the first argument and the second test as true. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class logical_and
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    logical_and();
    logical_and(logical_and<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|logical_and|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if both the first argument and the second test as true.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_logical_and.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(2);
    c1.push_back(0);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 1 0" and " 1 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::logical_and<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
2 0
3 0
1 0
```

## <a name="logical_not"></a> logical_not (STL/CLR)

The template class describes a functor that, when called, returns true only if either its argument tests as false. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class logical_not
    { // wrap operator()
public:
    typedef Arg argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        argument_type, result_type>
        delegate_type;

    logical_not();
    logical_not(logical_not<Arg> %right);

    result_type operator()(argument_type left);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|argument_type|The type of the functor argument.|
|delegate_type|The type of the generic delegate.|
|result_type|The type of the functor result.|

|Member|Description|
|------------|-----------------|
|logical_not|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a one-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if its argument tests as false.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_logical_not.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 4 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c3.begin(), cliext::logical_not<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 0
0 1
```

## <a name="logical_or"></a> logical_or (STL/CLR)

The template class describes a functor that, when called, returns true only if either the first argument or the second tests as true. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class logical_or
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    logical_or();
    logical_or(logical_or<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|logical_or|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if either the first argument or the second tests as true.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_logical_or.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(2);
    c1.push_back(0);
    Myvector c2;
    c2.push_back(0);
    c2.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 2 0" and " 0 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::logical_or<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
2 0
0 0
1 0
```

## <a name="minus"></a> minus (STL/CLR)

The template class describes a functor that, when called, returns the first argument minus the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class minus
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    minus();
    minus(minus<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments and return value.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|minus|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns the first argument minus the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_minus.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::minus<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
2 2
```

## <a name="modulus"></a> modulus (STL/CLR)

The template class describes a functor that, when called, returns the first argument modulo the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class modulus
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    modulus();
    modulus(modulus<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments and return value.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|modulus|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns the first argument modulo the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_modulus.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(2);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 2" and " 3 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::modulus<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 2
3 1
1 0
```

## <a name="multiplies"></a> multiplies (STL/CLR)

The template class describes a functor that, when called, returns the first argument times the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class multiplies
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    multiplies();
    multiplies(multiplies<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments and return value.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|multiplies|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns the first argument times the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_multiplies.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::multiplies<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
8 3
```

## <a name="negate"></a> negate (STL/CLR)

The template class describes a functor that, when called, returns its argument negated. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class negate
    { // wrap operator()
public:
    typedef Arg argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        argument_type, result_type>
        delegate_type;

    negate();
    negate(negate<Arg>% right);

    result_type operator()(argument_type left);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|argument_type|The type of the functor argument.|
|delegate_type|The type of the generic delegate.|
|result_type|The type of the functor result.|

|Member|Description|
|------------|-----------------|
|negate|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a one-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns its argument negated.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_negate.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(-3);
    Myvector c3(2, 0);

// display initial contents " 4 -3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c3.begin(), cliext::negate<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 -3
-4 3
```

## <a name="not_equal_to"></a> not_equal_to (STL/CLR)

The template class describes a functor that, when called, returns true only if the first argument is not equal to the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class not_equal_to
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    not_equal_to();
    not_equal_to(not_equal_to<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|not_equal_to|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns true only if the first argument is not equal to the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_not_equal_to.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::not_equal_to<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
0 1
```

## <a name="not1"></a> not1 (STL/CLR)

Generates a `unary_negate` for a functor.

### Syntax

```cpp
template<typename Fun>
    unary_negate<Fun> not1(Fun% functor);
```

#### Template Parameters

*Fun*<br/>
The type of the functor.

#### Function Parameters

*functor*<br/>
The functor to wrap.

### Remarks

The template function returns [unary_negate (STL/CLR)](#unary_negate)`<Fun>(functor)`. You use it as a convenient way to wrap a one-argument functor in a functor that delivers its logical NOT.

### Example

```cpp
// cliext_not1.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 4 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::logical_not<int> not_op;

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::unary_negate<cliext::logical_not<int> >(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::not1(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 0
1 0
1 0
```

## <a name="not2"></a> not2 (STL/CLR)

Generates a `binary_negate` for a functor.

### Syntax

```cpp
template<typename Fun>
    binary_negate<Fun> not2(Fun% functor);
```

#### Template Parameters

*Fun*<br/>
The type of the functor.

#### Function Parameters

*functor*<br/>
The functor to wrap.

### Remarks

The template function returns [binary_negate (STL/CLR)](#negate)`<Fun>(functor)`. You use it as a convenient way to wrap a two-argument functor in a functor that delivers its logical NOT.

### Example

```cpp
// cliext_not2.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::less<int> less_op;

    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(),
        cliext::binary_negate<cliext::less<int> >(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::not2(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
1 0
```

## <a name="plus"></a> plus (STL/CLR)

The template class describes a functor that, when called, returns the first argument plus the second. You use it specify a function object in terms of its argument type.

### Syntax

```cpp
template<typename Arg>
    ref class plus
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    plus();
    plus(plus<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### Parameters

*Arg*<br/>
The type of the arguments and return value.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|delegate_type|The type of the generic delegate.|
|first_argument_type|The type of the functor first argument.|
|result_type|The type of the functor result.|
|second_argument_type|The type of the functor second argument.|

|Member|Description|
|------------|-----------------|
|plus|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|operator delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a two-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns the first argument plus the second.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_plus.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::plus<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
6 4
```

## <a name="unary_delegate"></a> unary_delegate (STL/CLR)

The genereic class describes a one-argument delegate. You use it specify a delegate in terms of its argument and return types.

### Syntax

```cpp
generic<typename Arg,
    typename Result>
    delegate Result unary_delegate(Arg);
```

#### Parameters

*Arg*<br/>
The type of the argument.

*Result*<br/>
The return type.

### Remarks

The genereic delegate describes a one-argument function.

Note that for:

`unary_delegare<int, int> Fun1;`

`unary_delegare<int, int> Fun2;`

the types `Fun1` and `Fun2` are synonyms, while for:

`delegate int Fun1(int);`

`delegate int Fun2(int);`

they are not the same type.

### Example

```cpp
// cliext_unary_delegate.cpp
// compile with: /clr
#include <cliext/functional>

int hash_val(wchar_t val)
    {
    return ((val * 17 + 31) % 67);
    }

typedef cliext::unary_delegate<wchar_t, int> Mydelegate;
int main()
    {
    Mydelegate^ myhash = gcnew Mydelegate(&hash_val);

    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));
    return (0);
    }
```

```Output
hash(L'a') = 5
hash(L'b') = 22
```

## <a name="unary_delegate_noreturn"></a> unary_delegate_noreturn (STL/CLR)

The genereic class describes a one-argument delegate that returns **`void`**. You use it specify a delegate in terms of its argument type.

### Syntax

```cpp
generic<typename Arg>
    delegate void unary_delegate_noreturn(Arg);
```

#### Parameters

*Arg*<br/>
The type of the argument.

### Remarks

The genereic delegate describes a one-argument function that returns **`void`**.

Note that for:

`unary_delegare_noreturn<int> Fun1;`

`unary_delegare_noreturn<int> Fun2;`

the types `Fun1` and `Fun2` are synonyms, while for:

`delegate void Fun1(int);`

`delegate void Fun2(int);`

they are not the same type.

### Example

```cpp
// cliext_unary_delegate_noreturn.cpp
// compile with: /clr
#include <cliext/functional>

void hash_val(wchar_t val)
    {
    System::Console::WriteLine("hash({0}) = {1}",
       val, (val * 17 + 31) % 67);
    }

typedef cliext::unary_delegate_noreturn<wchar_t> Mydelegate;
int main()
    {
    Mydelegate^ myhash = gcnew Mydelegate(&hash_val);

    myhash(L'a');
    myhash(L'b');
    return (0);
    }
```

```Output
hash(a) = 5
hash(b) = 22
```

## <a name="unary_negate"></a> unary_negate (STL/CLR)

The template class describes a functor that, when called, returns the logical NOT of its stored one-argument functor. You use it specify a function object in terms of its stored functor.

### Syntax

```cpp
template<typename Fun>
    ref class unary_negate
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::argument_type argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        argument_type, result_type>
        delegate_type;

    unary_negate(Fun% functor);
    unary_negate(unary_negate<Fun>% right);

    result_type operator()(argument_type left);
    operator delegate_type^();
    };
```

#### Parameters

*Fun*<br/>
The type of the stored functor.

### Member Functions

|Type Definition|Description|
|---------------------|-----------------|
|argument_type|The type of the functor argument.|
|delegate_type|The type of the generic delegate.|
|result_type|The type of the functor result.|

|Member|Description|
|------------|-----------------|
|unary_negate|Constructs the functor.|

|Operator|Description|
|--------------|-----------------|
|operator()|Computes the desired function.|
|delegate_type^|Casts the functor to a delegate.|

### Remarks

The template class describes a one-argument functor that stores another one-argument functor. It defines the member operator `operator()` so that, when the object is called as a function, it returns the logical NOT of the stored functor called with the argument.

You can also pass the object as a function argument whose type is `delegate_type^` and it will be converted appropriately.

### Example

```cpp
// cliext_unary_negate.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 4 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::logical_not<int> not_op;

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::unary_negate<cliext::logical_not<int> >(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::not1(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 0
1 0
1 0
```
