---
title: "basic_string_view Class"
ms.date: "11/04/2016"
f1_keywords: ["xstring/std::basic_string_view", "xstring/std::basic_string_view::allocator_type", "xstring/std::basic_string_view::const_iterator", "xstring/std::basic_string_view::const_pointer", "xstring/std::basic_string_view::const_reference", "xstring/std::basic_string_view::const_reverse_iterator", "xstring/std::basic_string_view::difference_type", "xstring/std::basic_string_view::iterator", "xstring/std::basic_string_view::npos", "xstring/std::basic_string_view::pointer", "xstring/std::basic_string_view::reference", "xstring/std::basic_string_view::reverse_iterator", "xstring/std::basic_string_view::size_type", "xstring/std::basic_string_view::traits_type", "xstring/std::basic_string_view::value_type", "xstring/std::basic_string_view::append", "xstring/std::basic_string_view::assign", "xstring/std::basic_string_view::at", "xstring/std::basic_string_view::back", "xstring/std::basic_string_view::begin", "xstring/std::basic_string_view::c_str", "xstring/std::basic_string_view::capacity", "xstring/std::basic_string_view::cbegin", "xstring/std::basic_string_view::cend", "xstring/std::basic_string_view::clear", "xstring/std::basic_string_view::compare", "xstring/std::basic_string_view::copy", "xstring/std::basic_string_view::crbegin", "xstring/std::basic_string_view::crend", "xstring/std::basic_string_view::_Copy_s", "xstring/std::basic_string_view::data", "xstring/std::basic_string_view::empty", "xstring/std::basic_string_view::end", "xstring/std::basic_string_view::erase", "xstring/std::basic_string_view::find", "xstring/std::basic_string_view::find_first_not_of", "xstring/std::basic_string_view::find_first_of", "xstring/std::basic_string_view::find_last_not_of", "xstring/std::basic_string_view::find_last_of", "xstring/std::basic_string_view::front", "xstring/std::basic_string_view::get_allocator", "xstring/std::basic_string_view::insert", "xstring/std::basic_string_view::length", "xstring/std::basic_string_view::max_size", "xstring/std::basic_string_view::pop_back", "xstring/std::basic_string_view::push_back", "xstring/std::basic_string_view::rbegin", "xstring/std::basic_string_view::rend", "xstring/std::basic_string_view::replace", "xstring/std::basic_string_view::reserve", "xstring/std::basic_string_view::resize", "xstring/std::basic_string_view::rfind", "xstring/std::basic_string_view::shrink_to_fit", "xstring/std::basic_string_view::size", "xstring/std::basic_string_view::substr", "xstring/std::basic_string_view::swap"]
helpviewer_keywords: ["std::basic_string_view [C++]", "std::basic_string_view [C++], allocator_type", "std::basic_string_view [C++], const_iterator", "std::basic_string_view [C++], const_pointer", "std::basic_string_view [C++], const_reference", "std::basic_string_view [C++], const_reverse_iterator", "std::basic_string_view [C++], difference_type", "std::basic_string_view [C++], iterator", "std::basic_string_view [C++], npos", "std::basic_string_view [C++], pointer", "std::basic_string_view [C++], reference", "std::basic_string_view [C++], reverse_iterator", "std::basic_string_view [C++], size_type", "std::basic_string_view [C++], traits_type", "std::basic_string_view [C++], value_type", "std::basic_string_view [C++], append", "std::basic_string_view [C++], assign", "std::basic_string_view [C++], at", "std::basic_string_view [C++], back", "std::basic_string_view [C++], begin", "std::basic_string_view [C++], c_str", "std::basic_string_view [C++], capacity", "std::basic_string_view [C++], cbegin", "std::basic_string_view [C++], cend", "std::basic_string_view [C++], clear", "std::basic_string_view [C++], compare", "std::basic_string_view [C++], copy", "std::basic_string_view [C++], crbegin", "std::basic_string_view [C++], crend", "std::basic_string_view [C++], _Copy_s", "std::basic_string_view [C++], data", "std::basic_string_view [C++], empty", "std::basic_string_view [C++], end", "std::basic_string_view [C++], erase", "std::basic_string_view [C++], find", "std::basic_string_view [C++], find_first_not_of", "std::basic_string_view [C++], find_first_of", "std::basic_string_view [C++], find_last_not_of", "std::basic_string_view [C++], find_last_of", "std::basic_string_view [C++], front", "std::basic_string_view [C++], get_allocator", "std::basic_string_view [C++], insert", "std::basic_string_view [C++], length", "std::basic_string_view [C++], max_size", "std::basic_string_view [C++], pop_back", "std::basic_string_view [C++], push_back", "std::basic_string_view [C++], rbegin", "std::basic_string_view [C++], rend", "std::basic_string_view [C++], replace", "std::basic_string_view [C++], reserve", "std::basic_string_view [C++], resize", "std::basic_string_view [C++], rfind", "std::basic_string_view [C++], shrink_to_fit", "std::basic_string_view [C++], size", "std::basic_string_view [C++], substr", "std::basic_string_view [C++], swap"]
ms.assetid: a9c3e0a2-39bf-4c8a-b093-9abe30839591
---
# basic_string_view Class

 The `string_view` family of template specializations was added in C++17 to serve as an efficient way for a function to accept various unrelated string types without having to be templatized on those types. `string_view` describes the minimum common interface necessary to read string data. It provides read-only access to the original data; it does not copy it. It doesn’t require that the data be null-terminated, and doesn’t place any restrictions on the data’s lifetime. 
 
 A function accepting a `string_view` can be made to work with any string-like type, without making the function into a template, or constraining the function to a particular subset of string types. The only requirement is that an implicit conversion exists from the string type to `string_view`. All the standard string types are implicitly convertible to `string_view`.

 The following example shows a non-template function `f` that takes a parameter of type `string_view`. It can be called with arguments of type string, wstring, char*, and winrt::hstring.

```cpp
void f(wstring_view); // string_view that uses wchar_t’s

// pass a std::wstring:
std::wstring& s; f(s);

// pass a C-style null-terminated string (string_view is not null-terminated):
wchar_t* ns = "Hello"; f(ns);

// pass a C-style character array of len characters (excluding null terminator):
wchar_t* cs, size_t len; f({cs,len});

// pass a WinRT string
winrt::hstring hs; f(hs);
```
A `string_view` 

## Syntax

```cpp
template <class CharType, class Traits = char_traits<CharType>>
class basic_string_view;
```

### Parameters

*CharType*<br/>
The data type of a single character to be stored in the string_view. The C++ Standard Library provides specializations of this template class, with the type definitions [string_view](../standard-library/string-view-typedefs.md#string_view) for elements of type **char**, [wstring_view](../standard-library/string-view-typedefs.md#wstring_view), for **wchar_t**, [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) for `char16_t`, and [u32string_view](../standard-library/string-view-typedefs.md#u32string_view) for `char32_t`.

*Traits*<br/>
Various important properties of the `CharType` elements in a basic_string_view specialization are described by the class `Traits`. The default value is `char_traits`< `CharType`>.

### Constructors

|Constructor|Description|
|-|-|
|[basic_string_view](#basic_string_view)|Constructs a string_view that is empty or initialized by specific characters or that is a copy of all or part of some other string_view object or C-string.|

### Typedefs

|Type name|Description|
|-|-|
|[const_iterator](#const_iterator)|A type that provides a random-access iterator that can access and read a **const** element in the string_view.|
|[const_pointer](#const_pointer)|A type that provides a pointer to a **const** element in a string_view.|
|[const_reference](#const_reference)|A type that provides a reference to a **const** element stored in a string_view for reading and performing **const** operations.|
|[const_reverse_iterator](#const_reverse_iterator)|A type that provides a random-access iterator that can read any **const** element in the string_view.|
|[difference_type](#difference_type)|A type that provides the difference between two iterators that refer to elements within the same string_view.|
|[iterator](#iterator)|A type that provides a random-access iterator that can read or modify any element in a string_view.|
|[npos](#npos)|An unsigned integral value initialized to -1 that indicates either "not found" or "all remaining characters" when a search function fails.|
|[pointer](#pointer)|A type that provides a pointer to a character element in a string_view or character array.|
|[reference](#reference)|A type that provides a reference to an element stored in a string_view.|
|[reverse_iterator](#reverse_iterator)|A type that provides a random-access iterator that can read or modify an element in a reversed string_view.|
|[size_type](#size_type)|An unsigned integral type for the number of elements in a string_view.|
|[traits_type](#traits_type)|A type for the character traits of the elements stored in a string_view.|
|[value_type](#value_type)|A type that represents the type of characters stored in a string_view.|

### Member functions

|Member function|Description|
|-|-|
|[at](#at)|Returns a reference to the element at a specified location in the string_view.|
|[back](#back)||
|[begin](#begin)|Returns an iterator addressing the first element in the string_view.|
|[cbegin](#cbegin)|Returns a const iterator addressing the first element in the string_view.|
|[cend](#cend)|Returns a const iterator that addresses the location succeeding the last element in a string_view.|
|[copy](#copy)|Copies at most a specified number of characters from an indexed position in a source string_view to a target character array. Deprecated. Use basic_string_view::_Copy_s instead.|
|[compare](#compare)|Compares a string_view with a specified string_view to determine if the two string_views are equal or if one is lexicographically less than the other.|
|[crbegin](#crbegin)|Returns a const iterator that addresses the first element in a reversed string_view.|
|[crend](#crend)|Returns a const iterator that addresses the location succeeding the last element in a reversed string_view.|
|[_Copy_s](#copys)|Copies at most a specified number of characters from an indexed position in a source string_view to a target character array.|
|[data](#data)|Converts the contents of a string_view into an array of characters.|
|[empty](#empty)|Tests whether the string_view contains characters.|
|[end](#end)|Returns an iterator that addresses the location succeeding the last element in a string_view.|
|[find](#find)|Searches a string_view in a forward direction for the first occurrence of a substring_view that matches a specified sequence of characters.|
|[find_first_not_of](#find_first_not_of)|Searches through a string_view for the first character that is not any element of a specified string_view.|
|[find_first_of](#find_first_of)|Searches through a string_view for the first character that matches any element of a specified string_view.|
|[find_last_not_of](#find_last_not_of)|Searches through a string_view for the last character that is not any element of a specified string_view.|
|[find_last_of](#find_last_of)|Searches through a string_view for the last character that is an element of a specified string_view.|
|[front](#front)|Returns a reference to the first element in a string_view.|
|[length](#length)|Returns the current number of elements in a string_view.|
|[max_size](#max_size)|Returns the maximum number of characters a string_view could contain.|
|[rbegin](#rbegin)|Returns an iterator to the first element in a reversed string_view.|
|[rend](#rend)|Returns an iterator that points just beyond the last element in a reversed string_view.|
|[rfind](#rfind)|Searches a string_view in a backward direction for the first occurrence of a substring_view that matches a specified sequence of characters.|
|[size](#size)|Returns the current number of elements in a string_view.||[swap](#swap)|Exchange the contents of two string_views.|

## Remarks

If a function is asked to generate a sequence longer than [max_size](#max_size) elements, the function reports a length error by throwing an object of type [length_error](../standard-library/length-error-class.md).

References, pointers, and iterators that designate elements of the controlled sequence can become invalid after any call to a function that alters the controlled sequence, or after the first call to a non-**const** member function.

## Requirements

**Header:** \<string_view>

**Namespace:** std

## <a name="at"></a>  basic_string_view::at

Provides a reference to the character with a specified index in a string_view.

```cpp
constexpr const_reference at(size_type offset) const;
```

### Parameters

*offset*<br/>
The index of the position of the element to be referenced.

### Return Value

A reference to the character of the string_view at the position specified by the parameter index.

### Remarks

The first element of the string_view has an index of zero and the following elements are indexed consecutively by the positive integers, so that a string_view of length *n* has an *n*th element indexed by the number *n -* 1.

### Example

```cpp
// basic_string_view_at.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
	using namespace std;

	const string_view  str1("Hello world");
	cout << "The original string_view is: " << str1 << endl;

	// Element access to the const string_views
	basic_string_view <char>::const_reference refStr2 = str1.at(8);

	cout << "The character with index 8 in the const string_view cstr1 is: "
		<< refStr2 << "." << endl;
}
```

## <a name="back"></a>  basic_string_view::back

Returns a reference to the last element in the string_view.

```cpp
constexpr const_reference back() const;
```

### Return Value

A reference to the last element of the string_view, which must be non-empty.

## <a name="basic_string_view"></a>  basic_string_view::basic_string_view

Constructs a string_view that is empty, initialized by specific characters, or is a copy of all or part of another string_view object or C style (null-terminated) string_view.

```cpp
constexpr basic_string_view() noexcept;

constexpr basic_string_view(const basic_string_view&) noexcept = default;

constexpr basic_string_view(const charT* str);

constexpr basic_string_view(const charT* str, size_type len);
```

### Parameters

*str*<br/>
The pointer to the character values to be copied into the string_view being constructed.

*len*<br/>
The number of characters to be initialized.

### Return Value

A reference to the string_view object that is being constructed by the constructors.

### Example

```cpp
// basic_string_view_ctor.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
	using namespace std;

	const char* cstr1a = "Hello Out There.";

	// The first member function initializing with a C-string
	basic_string_view <char> str1a(cstr1a);
	cout << "The string_view initialized by C-string cstr1a is: "
		<< str1a << "." << endl;

	// The second member function initializing with a C-string and length
	basic_string_view <char> str2a(cstr1a, 5);
	cout << "The string_view initialized by C-string cstr1a is: "
		<< str2a << "." << endl;
}
```

## <a name="begin"></a>  basic_string_view::begin

Returns an iterator addressing the first element in the string_view.

```cpp
constexpr const_iterator begin() const noexcept;
```

### Return Value

A random-access iterator that addresses the first element of the sequence or just beyond the end of an empty sequence.

### Example

```cpp
// basic_string_view_begin.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main() {
	using namespace std;
	string_view str1("No way out."), str2;
	basic_string_view <char>::iterator str1_Iter;

	str1_Iter = str1.begin();
	cout << "The first character of the string_view str1 is: "
		<< *str1_Iter << endl;
	cout << "The full original string_view str1 is: " << str1 << endl;

	// For an empty string_view, begin is equivalent to end
	if (str2.begin() == str2.end())
		cout << "The string_view str2 is empty." << endl;
	else
		cout << "The string_view str2 is not empty." << endl;
}
```

## <a name="cbegin"></a>  basic_string_view::cbegin

Returns a **const** iterator that addresses the first element in the range.

```cpp
constexpr const_iterator cbegin() const noexcept;
```

### Return Value

A **const** random-access iterator that points at the first element of the range, or the location just beyond the end of an empty range (for an empty range, `cbegin() == cend()`).

### Remarks

With the return value of `cbegin`, the elements in the range cannot be modified.

You can use this member function in place of the `begin()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **const**) container of any kind that supports `begin()` and `cbegin()`.

```cpp
auto i1 = Container.begin();
// i1 is Container<T>::iterator
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator
```

## <a name="cend"></a>  basic_string_view::cend

Returns a **const** iterator that addresses the location just beyond the last element in a range.

```cpp
constexpr const_iterator cend() const noexcept;
```

### Return Value

A **const** random-access iterator that points just beyond the end of the range.

### Remarks

`cend` is used to test whether an iterator has passed the end of its range.

You can use this member function in place of the `end()` member function to guarantee that the return value is `const_iterator`. Typically, it's used in conjunction with the [auto](../cpp/auto-cpp.md) type deduction keyword, as shown in the following example. In the example, consider `Container` to be a modifiable (non- **const**) container of any kind that supports `end()` and `cend()`.

```cpp
auto i1 = Container.end();
// i1 is Container<T>::iterator
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator
```

The value returned by `cend` should not be dereferenced.

## <a name="compare"></a> basic_string_view::compare

Performs a case sensitive comparison with a specified string_view to determine if the two string_views are equal or if one is lexicographically less than the other.

```cpp
constexpr int compare(basic_string_view strv) const noexcept;

constexpr int compare(size_type pos, size_type num, basic_string_view strv) const;

constexpr int compare(size_type pos, size_type num, basic_string_view strv, size_type offset, size_type num2) const;

constexpr int compare(const charT* ptr) const;

constexpr int compare(size_type pos, size_type num, const charT* ptr) const;

constexpr int compare(size_type pos, size_type num, const charT* ptr, size_type num2) const;
```

### Parameters

*strv*<br/>
The string_view that is to be compared to the operand string_view.

*pos*<br/>
The index of the operand string_view at which the comparison begins.

*num*<br/>
The maximum number of characters from the operand string_view to be compared.

*num2*<br/>
The maximum number of characters from the parameter string_view to be compared.

*offset*<br/>
The index of the parameter string_view at which the comparison begins.

*ptr*<br/>
The C-string to be compared to the operand string_view.

### Return Value

A negative value if the operand string_view is less than the parameter string_view; zero if the two string_views are equal; or a positive value if the operand string_view is greater than the parameter string_view.

### Remarks

The `compare` member functions compare either all or part of the parameter and operand string_views depending on which in used.

The comparison performed is case sensitive.

### Example

```cpp
// basic_string_view_compare.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function compares
   // an operand string_view to a parameter string_view
   int comp1;
   string_view s1o( "CAB" );
   string_view s1p( "CAB" );
   cout << "The operand string_view is: " << s1o << endl;
   cout << "The parameter string_view is: " << s1p << endl;
   comp1 = s1o.compare( s1p );
   if ( comp1 < 0 )
      cout << "The operand string_view is less than "
           << "the parameter string_view." << endl;
   else if ( comp1 == 0 )
      cout << "The operand string_view is equal to "
           << "the parameter string_view." << endl;
   else
      cout << "The operand string_view is greater than "
           << "the parameter string_view." << endl;
   cout << endl;

   // The second member function compares part of
   // an operand string_view to a parameter string_view
   int comp2a, comp2b;
   string_view s2o( "AACAB" );
   string_view s2p( "CAB" );
   cout << "The operand string_view is: " << s2o << endl;
   cout << "The parameter string_view is: " << s2p << endl;
   comp2a = s2o.compare(  2 , 3 , s2p );
   if ( comp2a < 0 )
      cout << "The last three characters of "
           << "the operand string_view\n are less than "
           << "the parameter string_view." << endl;
   else if ( comp2a == 0 )
      cout << "The last three characters of "
           << "the operand string_view\n are equal to "
           << "the parameter string_view." << endl;
   else
      cout << "The last three characters of "
           << "the operand string_view\n is greater than "
           << "the parameter string_view." << endl;

   comp2b = s2o.compare(  0 , 3 , s2p );
   if ( comp2b < 0 )
      cout << "The first three characters of "
           << "the operand string_view\n are less than "
           << "the parameter string_view." << endl;
   else if ( comp2b == 0 )
      cout << "The first three characters of "
           << "the operand string_view\n are equal to "
           << "the parameter string_view." << endl;
   else
      cout << "The first three characters of "
           << "the operand string_view\n is greater than "
           << "the parameter string_view." << endl;
   cout << endl;

   // The third member function compares part of
   // an operand string_view to part of a parameter string_view
   int comp3a;
   string_view s3o( "AACAB" );
   string_view s3p( "DCABD" );
   cout << "The operand string_view is: " << s3o << endl;
   cout << "The parameter string_view is: " << s3p << endl;
   comp3a = s3o.compare(  2 , 3 , s3p , 1 , 3 );
   if ( comp3a < 0 )
      cout << "The three characters from position 2 of "
           << "the operand string_view are less than\n "
           << "the 3 characters parameter string_view "
           << "from position 1." << endl;
   else if ( comp3a == 0 )
      cout << "The three characters from position 2 of "
           << "the operand string_view are equal to\n "
           << "the 3 characters parameter string_view "
           << "from position 1." << endl;
   else
      cout << "The three characters from position 2 of "
           << "the operand string_view is greater than\n "
           << "the 3 characters parameter string_view "
           << "from position 1." << endl;
   cout << endl;

   // The fourth member function compares
   // an operand string_view to a parameter C-string
   int comp4a;
   string_view s4o( "ABC" );
   const char* cs4p = "DEF";
   cout << "The operand string_view is: " << s4o << endl;
   cout << "The parameter C-string is: " << cs4p << endl;
   comp4a = s4o.compare( cs4p );
   if ( comp4a < 0 )
      cout << "The operand string_view is less than "
           << "the parameter C-string." << endl;
   else if ( comp4a == 0 )
      cout << "The operand string_view is equal to "
           << "the parameter C-string." << endl;
   else
      cout << "The operand string_view is greater than "
           << "the parameter C-string." << endl;
   cout << endl;

   // The fifth member function compares part of
   // an operand string_view to a parameter C-string
   int comp5a;
   string_view s5o( "AACAB" );
   const char* cs5p = "CAB";
   cout << "The operand string_view is: " << s5o << endl;
   cout << "The parameter string_view is: " << cs5p << endl;
   comp5a = s5o.compare(  2 , 3 , s2p );
   if ( comp5a < 0 )
      cout << "The last three characters of "
           << "the operand string_view\n are less than "
           << "the parameter C-string." << endl;
   else if ( comp5a == 0 )
      cout << "The last three characters of "
           << "the operand string_view\n are equal to "
           << "the parameter C-string." << endl;
   else
      cout << "The last three characters of "
           << "the operand string_view\n is greater than "
           << "the parameter C-string." << endl;
   cout << endl;

   // The sixth member function compares part of
   // an operand string_view to part of an equal length of
   // a parameter C-string
   int comp6a;
   string_view s6o( "AACAB" );
   const char* cs6p = "ACAB";
   cout << "The operand string_view is: " << s6o << endl;
   cout << "The parameter C-string is: " << cs6p << endl;
   comp6a = s6o.compare(  1 , 3 , cs6p , 3 );
   if ( comp6a < 0 )
      cout << "The 3 characters from position 1 of "
           << "the operand string_view are less than\n "
           << "the first 3 characters of the parameter C-string."
           << endl;
   else if ( comp6a == 0 )
      cout << "The 3 characters from position 2 of "
           << "the operand string_view are equal to\n "
           << "the first 3 characters of the parameter C-string."
           <<  endl;
   else
      cout << "The 3 characters from position 2 of "
           << "the operand string_view is greater than\n "
           << "the first 3 characters of the parameter C-string."
           << endl;
   cout << endl;
}
```

```Output
The operand string_view is: CAB
The parameter string_view is: CAB
The operand string_view is equal to the parameter string_view.

The operand string_view is: AACAB
The parameter string_view is: CAB
The last three characters of the operand string_view
are equal to the parameter string_view.
The first three characters of the operand string_view
are less than the parameter string_view.

The operand string_view is: AACAB
The parameter string_view is: DCABD
The three characters from position 2 of the operand string_view are equal to
the 3 characters parameter string_view from position 1.

The operand string_view is: ABC
The parameter C-string is: DEF
The operand string_view is less than the parameter C-string.

The operand string_view is: AACAB
The parameter string_view is: CAB
The last three characters of the operand string_view
are equal to the parameter C-string.

The operand string_view is: AACAB
The parameter C-string is: ACAB
The 3 characters from position 2 of the operand string_view are equal to
the first 3 characters of the parameter C-string.
```

## <a name="const_iterator"></a>  basic_string_view::const_iterator

A type that provides a random-access iterator that can access and read a **const** element in the string_view.

```cpp
typedef implementation-defined const_iterator;
```

### Remarks

A type `const_iterator` cannot be used to modify the value of a character and is used to iterate through a string_view in a forward direction.

### Example

See the example for [begin](#begin) for an example of how to declare and use `const_iterator`.

## <a name="const_pointer"></a>  basic_string_view::const_pointer

A type that provides a pointer to a **const** element in a string_view.

```cpp
typedef typename allocator_type::const_pointer const_pointer;
```

### Remarks

The type is a synonym for `allocator_type::const_pointer`.

For type `string_view`, it is equivalent to `char*`.

Pointers that are declared const must be initialized when they are declared. Const pointers always point to the same memory location and may point to constant or non-constant data.

### Example

```cpp
// basic_string_view_const_ptr.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   basic_string_view<char>::const_pointer pstr1a = "In Here";
   const char *cstr1c = "Out There";

   cout << "The string_view pstr1a is: " << pstr1a <<  "." << endl;
   cout << "The C-string cstr1c is: " << cstr1c << "." << endl;
}
```

```Output
The string_view pstr1a is: In Here.
The C-string cstr1c is: Out There.
```

## <a name="const_reference"></a>  basic_string_view::const_reference

A type that provides a reference to a **const** element stored in a string_view for reading and performing **const** operations.

```cpp
typedef typename allocator_type::const_reference const_reference;
```

### Remarks

A type `const_reference` cannot be used to modify the value of an element.

The type is a synonym for `allocator_type::const_reference`. For string_view `type`, it is equivalent to const `char&`.

### Example

See the example for [at](#at) for an example of how to declare and use `const_reference`.

## <a name="const_reverse_iterator"></a>  basic_string_view::const_reverse_iterator

A type that provides a random-access iterator that can read any **const** element in the string_view.

```cpp
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
```

### Remarks

A type `const_reverse_iterator` cannot modify the value of a character and is used to iterate through a string_view in reverse.

### Example

See the example for [rbegin](#rbegin) for an example of how to declare and use `const_reverse_iterator`.

## <a name="copy"></a>  basic_string_view::copy

Copies at most a specified number of characters from an indexed position in a source string_view to a target character array.

This method is potentially unsafe, as it relies on the caller to check that the passed values are correct. Consider using [basic_string_view::_Copy_s](#copys) instead.

```cpp
size_type copy(charT* ptr, size_type count, size_type offset = 0) const;
```

### Parameters

*ptr*<br/>
The target character array to which the elements are to be copied.

*count*<br/>
The number of characters to be copied, at most, from the source string_view.

*offset*<br/>
The beginning position in the source string_view from which copies are to be made.

### Return Value

The number of characters actually copied.

### Remarks

A null character is not appended to the end of the copy.

### Example

```cpp
// basic_string_view_copy.cpp
// compile with: /EHsc /W3
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   string_view str1( "Hello World" );
   basic_string_view <char>::iterator str_Iter;
   char array1 [ 20 ] = { 0 };
   char array2 [ 10 ] = { 0 };
   basic_string_view <char>:: pointer array1Ptr = array1;
   basic_string_view <char>:: value_type *array2Ptr = array2;

   cout << "The original string_view str1 is: ";
   for ( str_Iter = str1.begin( ); str_Iter != str1.end( ); str_Iter++ )
      cout << *str_Iter;
   cout << endl;

   basic_string_view <char>:: size_type nArray1;
   // Note: string_view::copy is potentially unsafe, consider
   // using string_view::_Copy_s instead.
   nArray1 = str1.copy( array1Ptr , 12 );  // C4996
   cout << "The number of copied characters in array1 is: "
        << nArray1 << endl;
   cout << "The copied characters array1 is: " << array1 << endl;

   basic_string_view <char>:: size_type nArray2;
   // Note: string_view::copy is potentially unsafe, consider
   // using string_view::_Copy_s instead.
   nArray2 = str1.copy( array2Ptr , 5 , 6  );  // C4996
   cout << "The number of copied characters in array2 is: "
           << nArray2 << endl;
   cout << "The copied characters array2 is: " << array2Ptr << endl;
}
```

```Output
The original string_view str1 is: Hello World
The number of copied characters in array1 is: 11
The copied characters array1 is: Hello World
The number of copied characters in array2 is: 5
The copied characters array2 is: World
```

## <a name="crbegin"></a>  basic_string_view::crbegin

Returns a const iterator that addresses the first element in a reversed string_view.

```cpp
constexpr const_reverse_iterator crbegin() const noexcept;
```

### Return Value

A reverse iterator that points just beyond the end of the string_view. The position designates the beginning of the reverse string_view.

## <a name="crend"></a>  basic_string_view::crend

Returns a const iterator that addresses the location succeeding the last element in a reversed string_view.

```cpp
constexpr const_reverse_iterator crend() const noexcept;
```

### Return Value

A const reverse iterator that addresses the location succeeding the last element in a reversed string_view (the location that had preceded the first element in the unreversed string_view).

## <a name="copys"></a>  basic_string_view::_Copy_s

Copies at most a specified number of characters from an indexed position in a source string_view to a target character array.

```cpp
size_type _Copy_s(
    value_type* dest,
    size_type dest_size,
    size_type count,
    size_type offset = 0) const;
```

### Parameters

*dest*<br/>
The target character array to which the elements are to be copied.

*dest_size*<br/>
The size of *dest*.

*count*<br/>
The number of characters to be copied, at most, from the source string_view.

*offset*<br/>
The beginning position in the source string_view from which copies are to be made.

### Return Value

The number of characters actually copied.

### Remarks

A null character is not appended to the end of the copy.

### Example

```cpp
// basic_string_view__Copy_s.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
    using namespace std;
    string_view str1("Hello World");
    basic_string_view<char>::iterator str_Iter;
    const int array1_size = 20;
    char array1[array1_size] = { 0 };
    const int array2_size = 10;
    char array2[array2_size] = { 0 };
    basic_string_view<char>:: pointer array1Ptr = array1;
    basic_string_view<char>:: value_type *array2Ptr = array2;

    cout << "The original string_view str1 is: ";
    for (str_Iter = str1.begin(); str_Iter != str1.end(); str_Iter++)
        cout << *str_Iter;
    cout << endl;

    basic_string_view<char>::size_type nArray1;
    nArray1 = str1._Copy_s(array1Ptr, array1_size, 12);
    cout << "The number of copied characters in array1 is: "
         << nArray1 << endl;
    cout << "The copied characters array1 is: " << array1 << endl;

    basic_string_view<char>:: size_type nArray2;
    nArray2 = str1._Copy_s(array2Ptr, array2_size, 5, 6);
    cout << "The number of copied characters in array2 is: "
         << nArray2 << endl;
    cout << "The copied characters array2 is: " << array2Ptr << endl;
}
```

```Output
The original string_view str1 is: Hello World
The number of copied characters in array1 is: 11
The copied characters array1 is: Hello World
The number of copied characters in array2 is: 5
The copied characters array2 is: World
```

## <a name="data"></a>  basic_string_view::data

Converts the contents of a string_view into an array of characters.

```cpp
constexpr value_type *data() const noexcept;
```

### Return Value

A pointer to the first element of the array containing the contents of the string_view, or, for an empty array, a non-null pointer that cannot be dereferenced.

### Remarks

Objects of type string_view belonging to the C++ template class basic_string_view \<char> are not necessarily null terminated. The return type for `data` is not a valid C string, because no null character gets appended. The null character ' \0 ' is used as a special character in a C string to mark the end of the string_view, but has no special meaning in an object of type string_view and may be a part of the string_view object just like any other character.

There is an automatic conversion from **const char**<strong>\*</strong> into string_views, but the string_view class does not provide for automatic conversions from C-style string_views to objects of type **basic_string_view \<char>**.

The returned string_view should not be modified, because this could invalidate the pointer to the string_view, or deleted, because the string_view has a limited lifetime and is owned by the class string_view.

### Example

```cpp
// basic_string_view_data.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
	using namespace std;

	string_view str1("Hello world");
	cout << "The original string_view object str1 is: "
		<< str1 << endl;
	cout << "The length of the string_view object str1 = "
		<< str1.length() << endl << endl;

	// Converting a string_view to an array of characters
	const char* ptr1 = 0;
	ptr1 = str1.data();
	cout << "The modified string_view object ptr1 is: " << ptr1
		<< endl;
	cout << "The length of character array str1 = "
		<< strlen(ptr1) << endl << endl;
}
```

```Output
The original string_view object str1 is: Hello world
The length of the string_view object str1 = 11

The modified string_view object ptr1 is: Hello world
The length of character array str1 = 11
```

## <a name="difference_type"></a>  basic_string_view::difference_type

A type that provides the difference between two iterators that refer to elements within the same string_view.

```cpp
typedef typename difference_type = ptrdiff_t;
```

### Remarks

The signed integer type describes an object that can represent the difference between the addresses of any two elements in the controlled sequence.

### Example

```cpp
// basic_string_view_diff_type.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   string_view str1( "quintillion" );
   cout << "The original string_view str1 is: " << str1 << endl;
   basic_string_view <char>::size_type indexChFi, indexChLi;

   indexChFi = str1.find_first_of( "i" );
   indexChLi = str1.find_last_of( "i" );
   basic_string_view<char>::difference_type diffi = indexChLi - indexChFi;

   cout << "The first character i is at position: "
        << indexChFi << "." << endl;
   cout << "The last character i is at position: "
        << indexChLi << "." << endl;
   cout << "The difference is: " << diffi << "." << endl;
}
```

```Output
The original string_view str1 is: quintillion
The first character i is at position: 2.
The last character i is at position: 8.
The difference is: 6.
```

## <a name="empty"></a>  basic_string_view::empty

Tests whether the string_view contains characters or not.

```cpp
constexpr bool empty() const noexcept;
```

### Return Value

**true** if the string_view object contains no characters; **false** if it has at least one character.

### Remarks

The member function is equivalent to [size](#size) == 0.

### Example

```cpp
// basic_string_view_empty.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main() {
   using namespace std;

   bool b1, b2;

   string_view str1("Hello world");
   cout << "The original string_view object str1 is: " << str1 << endl;
   b1 = str1.empty();
   if (b1)
      cout << "The string_view object str1 is empty." << endl;
   else
      cout << "The string_view object str1 is not empty." << endl;
   cout << endl;

   // An example of an empty string_view object
   string_view str2;
   b2 = str2.empty();
   if (b2)
      cout << "The string_view object str2 is empty." << endl;
   else
      cout << "The string_view object str2 is not empty." << endl;
}
```

## <a name="end"></a>  basic_string_view::end

Returns an iterator that addresses the location succeeding the last element in a string_view.

```cpp
constexpr const_iterator end() const noexcept;
```

### Return Value

Returns a random-access iterator that addresses the location succeeding the last element in a string_view.

### Remarks

`end` is often used to test whether an iterator has reached the end of its string_view. The value returned by `end` should not be dereferenced.

If the return value of `end` is assigned to a `const_iterator`, the string_view object cannot be modified. If the return value of `end` is assigned to an `iterator`, the string_view object can be modified.

### Example

```cpp
// basic_string_view_end.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
	using namespace std;
	string_view str1("No way out."), str2;
	basic_string_view <char>::iterator str_Iter, str1_Iter, str2_Iter;
	basic_string_view <char>::const_iterator str1_cIter;

	str1_Iter = str1.end();
	str1_Iter--;
	str1_Iter--;
	cout << "The last character-letter of the string_view str1 is: " << *str1_Iter << endl;
	cout << "The full original string_view str1 is: " << str1 << endl;

	// end used to test when an iterator has reached the end of its string_view
	cout << "The string_view is now: ";
	for (str_Iter = str1.begin(); str_Iter != str1.end(); str_Iter++)
		cout << *str_Iter;
	cout << endl;

	// For an empty string_view, end is equivalent to begin
	if (str2.begin() == str2.end())
		cout << "The string_view str2 is empty." << endl;
	else
		cout << "The string_viewstr2  is not empty." << endl;
}
```

```Output
The last character-letter of the string_view str1 is: t
The full original string_view str1 is: No way out.
The string_view is now: No way out.
The string_view str2 is empty.
```

## <a name="find"></a>  basic_string_view::find

Searches a string_view in a forward direction for the first occurrence of a substring_view that matches a specified sequence of characters.

```cpp
constexpr size_type find(basic_string_view str, size_type offset = 0) const noexcept;

constexpr size_type find(charT chVal, size_type offset = 0) const noexcept;

constexpr size_type find(const charT* ptr, size_type offset, size_type count) const;

constexpr size_type find(const charT* ptr, size_type offset = 0) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

### Return Value

The index of the first character of the substring_view searched for when successful; otherwise `npos`.

### Example

```cpp
// basic_string_view_find.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string_view
   string_view str1( "Hello Everyone" );
   cout << "The original string_view str1 is: " << str1 << endl;
   basic_string_view <char>::size_type indexCh1a, indexCh1b;

   indexCh1a = str1.find( "e" , 3 );
   if (indexCh1a != string_view::npos )
      cout << "The index of the 1st 'e' found after the 3rd"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'e' was not found in str1 ." << endl;

   indexCh1b = str1.find( "x" );
   if (indexCh1b != string_view::npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The Character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str2( "Let me make this perfectly clear." );
   cout << "The original string_view str2 is: " << str2 << endl;
   basic_string_view <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "perfect";
   indexCh2a = str2.find( cstr2 , 5 );
   if ( indexCh2a != string_view::npos )
      cout << "The index of the 1st element of 'perfect' "
           << "after\n the 5th position in str2 is: "
           << indexCh2a << endl;
   else
      cout << "The substring_view 'perfect' was not found in str2 ."
           << endl;

   const char *cstr2b = "imperfectly";
   indexCh2b = str2.find( cstr2b , 0 );
   if (indexCh2b != string_view::npos )
      cout << "The index of the 1st element of 'imperfect' "
           << "after\n the 5th position in str3 is: "
           << indexCh2b << endl;
   else
      cout << "The substring_view 'imperfect' was not found in str2 ."
           << endl << endl;

   // The third member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str3( "This is a sample string_view for this program" );
   cout << "The original string_view str3 is: " << str3 << endl;
   basic_string_view <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "sample";
   indexCh3a = str3.find( cstr3a );
   if ( indexCh3a != string_view::npos )
      cout << "The index of the 1st element of sample "
           << "in str3 is: " << indexCh3a << endl;
   else
      cout << "The substring_view 'perfect' was not found in str3 ."
           << endl;

   const char *cstr3b = "for";
   indexCh3b = str3.find( cstr3b , indexCh3a + 1 , 2 );
   if (indexCh3b != string_view::npos )
      cout << "The index of the next occurrence of 'for' is in "
           << "str3 begins at: " << indexCh3b << endl << endl;
   else
      cout << "There is no next occurrence of 'for' in str3 ."
           << endl << endl;

   // The fourth member function searches a string_view
   // for a substring_view as specified by a string_view
   string_view str4( "clearly this perfectly unclear." );
   cout << "The original string_view str4 is: " << str4 << endl;
   basic_string_view <char>::size_type indexCh4a, indexCh4b;

   string_view str4a( "clear" );
   indexCh4a = str4.find( str4a , 5 );
   if ( indexCh4a != string_view::npos )
      cout << "The index of the 1st element of 'clear' "
           << "after\n the 5th position in str4 is: "
           << indexCh4a << endl;
   else
      cout << "The substring_view 'clear' was not found in str4 ."
           << endl;

   string_view str4b( "clear" );
   indexCh4b = str4.find( str4b );
   if (indexCh4b != string_view::npos )
      cout << "The index of the 1st element of 'clear' "
           << "in str4 is: "
           << indexCh4b << endl;
   else
      cout << "The substring_view 'clear' was not found in str4 ."
           << endl << endl;
}
```

```Output
The original string_view str1 is: Hello Everyone
The index of the 1st 'e' found after the 3rd position in str1 is: 8
The Character 'x' was not found in str1.

The original string_view str2 is: Let me make this perfectly clear.
The index of the 1st element of 'perfect' after
the 5th position in str2 is: 17
The substring_view 'imperfect' was not found in str2 .

The original string_view str3 is: This is a sample string_view for this program
The index of the 1st element of sample in str3 is: 10
The index of the next occurrence of 'for' is in str3 begins at: 24

The original string_view str4 is: clearly this perfectly unclear.
The index of the 1st element of 'clear' after
the 5th position in str4 is: 25
The index of the 1st element of 'clear' in str4 is: 0
```

## <a name="find_first_not_of"></a>  basic_string_view::find_first_not_of

Searches through a string_view for the first character that is not an element of a specified string_view.

```cpp
constexpr size_type find_first_not_of(basic_string_view str, size_type offset = 0) const noexcept;

constexpr size_type find_first_not_of(charT c, size_type offset = 0) const noexcept;

constexpr size_type find_first_not_of(const charT* ptr, size_type offset, size_type count) const;

constexpr size_type find_first_not_of(const charT* ptr, size_type offset = 0) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

### Return Value

The index of the first character of the substring_view searched for when successful; otherwise `npos`.

### Example

```cpp
// basic_string_view_find_first_not_of.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string_view
   string_view str1( "xddd-1234-abcd" );
   cout << "The original string_view str1 is: " << str1 << endl;
   basic_string_view <char>::size_type indexCh1a, indexCh1b;
   static const basic_string_view <char>::size_type npos = -1;

   indexCh1a = str1.find_first_not_of( "d" , 2 );
   if ( indexCh1a != npos )
      cout << "The index of the 1st 'd' found after the 3rd"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'd' was not found in str1 ." << endl;

   indexCh1b = str1.find_first_not_of( "x" );
   if (indexCh1b != npos )
      cout << "The index of the 'non x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'non x' was not found in str1."
           << endl << endl;

   // The second member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str2( "BBB-1111" );
   cout << "The original string_view str2 is: " << str2 << endl;
   basic_string_view <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_first_not_of( cstr2 , 6 );
   if ( indexCh2a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'B1' in str2 after\n the 6th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements of the substring_view 'B1' were not"
           << "\n found in str2 after the 6th position."
           << endl;

   const char *cstr2b = "B2";
   indexCh2b = str2.find_first_not_of( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the 1st element of 'B2' "
           << "after\n the 0th position in str2 is: "
           << indexCh2b << endl << endl;
   else
      cout << "The substring_view 'B2' was not found in str2 ."
           << endl << endl << endl;

   // The third member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str3( "444-555-GGG" );
   cout << "The original string_view str3 is: " << str3 << endl;
   basic_string_view <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "45G";
   indexCh3a = str3.find_first_not_of( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element in str3\n other than one of the "
           << "characters in '45G' is: " << indexCh3a
           << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string_view '45G'. "
           << endl;

   const char *cstr3b = "45G";
   indexCh3b = str3.find_first_not_of( cstr3b , indexCh3a + 1 , 2 );
   if ( indexCh3b != npos )
      cout << "The index of the second occurrence of an "
           << "element of '45G' in str3\n after the 0th "
           << "position is: " << indexCh3b << endl << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string_view  '45G'. "
           << endl  << endl;

   // The fourth member function searches a string_view
   // for a substring_view as specified by a string_view
   string_view str4( "12-ab-12-ab" );
   cout << "The original string_view str4 is: " << str4 << endl;
   basic_string_view <char>::size_type indexCh4a, indexCh4b;

   string_view str4a( "ba3" );
   indexCh4a = str4.find_first_not_of( str4a , 5 );
   if (indexCh4a != npos )
      cout << "The index of the 1st non occurrence of an "
           << "element of 'ba3' in str4 after\n the 5th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements other than those in the substring_view"
           << " 'ba3' were not found in the string_view str4."
           << endl;

   string_view str4b( "12" );
   indexCh4b = str4.find_first_not_of( str4b  );
   if (indexCh4b != npos )
      cout << "The index of the 1st non occurrence of an "
           << "element of '12' in str4 after\n the 0th "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements other than those in the substring_view"
           << " '12' were not found in the string_view str4."
           << endl;
}
```

```Output
The original string_view str1 is: xddd-1234-abcd
The index of the 1st 'd' found after the 3rd position in str1 is: 4
The index of the 'non x' found in str1 is: 1

The original string_view str2 is: BBB-1111
Elements of the substring_view 'B1' were not
found in str2 after the 6th position.
The index of the 1st element of 'B2' after
the 0th position in str2 is: 3

The original string_view str3 is: 444-555-GGG
The index of the 1st occurrence of an element in str3
other than one of the characters in '45G' is: 3
The index of the second occurrence of an element of '45G' in str3
after the 0th position is: 7

The original string_view str4 is: 12-ab-12-ab
The index of the 1st non occurrence of an element of 'ba3' in str4 after
the 5th position is: 5
The index of the 1st non occurrence of an element of '12' in str4 after
the 0th position is: 2
```

## <a name="find_first_of"></a>  basic_string_view::find_first_of

Searches through a string_view for the first character that matches any element of a specified string_view.

```cpp
constexpr size_type find_first_of(basic_string_view str, size_type offset = 0) const noexcept;

constexpr size_type find_first_of(charT c, size_type offset = 0) const noexcept;

constexpr size_type find_first_of(const charT* str, size_type offset, size_type count) const;

constexpr size_type find_first_of(const charT* str, size_type offset = 0) const;
```

### Parameters

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

*str*<br/>
The string_view for which the member function is to search.

### Return Value

The index of the first character of the substring_view searched for when successful; otherwise `npos`.

### Example

```cpp
// basic_string_view_find_first_of.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string_view
   string_view str1( "abcd-1234-abcd-1234" );
   cout << "The original string_view str1 is: " << str1 << endl;
   basic_string_view <char>::size_type indexCh1a, indexCh1b;
   static const basic_string_view <char>::size_type npos = -1;

   indexCh1a = str1.find_first_of( "d" , 5 );
   if ( indexCh1a != npos )
      cout << "The index of the 1st 'd' found after the 5th"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'd' was not found in str1 ." << endl;

   indexCh1b = str1.find_first_of( "x" );
   if ( indexCh1b != npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string_view
   // for any element of a substring_view as specified by a C-string
   string_view str2( "ABCD-1234-ABCD-1234" );
   cout << "The original string_view str2 is: " << str2 << endl;
   basic_string_view <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_first_of( cstr2 , 6 );
   if ( indexCh2a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'B1' in str2 after\n the 6th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements of the substring_view 'B1' were not "
           << "found in str2 after the 10th position."
           << endl;

   const char *cstr2b = "D2";
   indexCh2b = str2.find_first_of( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the 1st element of 'D2' "
           << "after\n the 0th position in str2 is: "
           << indexCh2b << endl << endl;
   else
      cout << "The substring_view 'D2' was not found in str2 ."
           << endl << endl << endl;

   // The third member function searches a string_view
   // for any element of a substring_view as specified by a C-string
   string_view str3( "123-abc-123-abc-456-EFG-456-EFG" );
   cout << "The original string_view str3 is: " << str3 << endl;
   basic_string_view <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "5G";
   indexCh3a = str3.find_first_of( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of '5G' in str3 after\n the 0th "
           << "position is: " << indexCh3a << endl;
   else
      cout << "Elements of the substring_view '5G' were not "
           << "found in str3\n after the 0th position."
           << endl;

   const char *cstr3b = "5GF";
   indexCh3b = str3.find_first_of( cstr3b , indexCh3a + 1 , 2 );
   if (indexCh3b != npos )
      cout << "The index of the second occurrence of an "
           << "element of '5G' in str3\n after the 0th "
           << "position is: " << indexCh3b << endl << endl;
   else
      cout << "Elements of the substring_view '5G' were not "
           << "found in str3\n after the first occurrrence."
           << endl << endl;

   // The fourth member function searches a string_view
   // for any element of a substring_view as specified by a string_view
   string_view str4( "12-ab-12-ab" );
   cout << "The original string_view str4 is: " << str4 << endl;
   basic_string_view <char>::size_type indexCh4a, indexCh4b;

   string_view str4a( "ba3" );
   indexCh4a = str4.find_first_of( str4a , 5 );
   if ( indexCh4a != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'ba3' in str4 after\n the 5th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements of the substring_view 'ba3' were not "
           << "found in str4\n after the 0th position."
           << endl;

   string_view str4b( "a2" );
   indexCh4b = str4.find_first_of( str4b );
   if ( indexCh4b != npos )
      cout << "The index of the 1st occurrence of an "
           << "element of 'a2' in str4 after\n the 0th "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements of the substring_view 'a2' were not "
           << "found in str4\n after the 0th position."
           << endl;
}
```

```Output
The original string_view str1 is: abcd-1234-abcd-1234
The index of the 1st 'd' found after the 5th position in str1 is: 13
The character 'x' was not found in str1.

The original string_view str2 is: ABCD-1234-ABCD-1234
The index of the 1st occurrence of an element of 'B1' in str2 after
the 6th position is: 11
The index of the 1st element of 'D2' after
the 0th position in str2 is: 3

The original string_view str3 is: 123-abc-123-abc-456-EFG-456-EFG
The index of the 1st occurrence of an element of '5G' in str3 after
the 0th position is: 17
The index of the second occurrence of an element of '5G' in str3
after the 0th position is: 22

The original string_view str4 is: 12-ab-12-ab
The index of the 1st occurrence of an element of 'ba3' in str4 after
the 5th position is: 9
The index of the 1st occurrence of an element of 'a2' in str4 after
the 0th position is: 1
```

## <a name="find_last_not_of"></a>  basic_string_view::find_last_not_of

Searches through a string_view for the last character that is not any element of a specified string_view.

```cpp
constexpr size_type find_last_not_of(basic_string_view str, size_type offset = npos) const noexcept;

constexpr size_type find_last_not_of(charT chVal, size_type offset = npos) const noexcept;

constexpr size_type find_last_not_of(const charT* ptr, size_type offset, size_type count) const;

constexpr size_type find_last_not_of(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to finish.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

### Return Value

The index of the first character of the substring_view searched for when successful; otherwise `npos`.

### Example

```cpp
// basic_string_view_find_last_not_of.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string_view
   string_view str1( "dddd-1dd4-abdd" );
   cout << "The original string_view str1 is: " << str1 << endl;
   basic_string_view <char>::size_type indexCh1a, indexCh1b;
   static const basic_string_view <char>::size_type npos = -1;

   indexCh1a = str1.find_last_not_of( "d" , 7 );
   if ( indexCh1a != npos )
      cout << "The index of the last non 'd'\n found before the "
           << "7th position in str1 is: " << indexCh1a << endl;
   else
      cout << "The non 'd' character was not found ." << endl;

   indexCh1b = str1.find_last_not_of( "d" );
   if ( indexCh1b != npos )
      cout << "The index of the non 'd' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The Character 'non x' was not found in str1."
           << endl << endl;

   // The second member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str2( "BBB-1111" );
   cout << "The original string_view str2 is: " << str2 << endl;
   basic_string_view <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_last_not_of( cstr2 , 6 );
   if ( indexCh2a != npos )
      cout << "The index of the last occurrence of a "
           << "element\n not of 'B1' in str2 before the 6th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements not of the substring_view 'B1' were not "
           << "\n found in str2 before the 6th position."
           << endl;

   const char *cstr2b = "B-1";
   indexCh2b = str2.find_last_not_of( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the last element not "
           << "in 'B-1'\n is: "
           << indexCh2b << endl << endl;
   else
      cout << "The elements of the substring_view 'B-1' were "
           << "not found in str2 ."
           << endl << endl;

   // The third member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str3( "444-555-GGG" );
   cout << "The original string_view str3 is: " << str3 << endl;
   basic_string_view <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "45G";
   indexCh3a = str3.find_last_not_of( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the last occurrence of an "
           << "element in str3\n other than one of the "
           << "characters in '45G' is: " << indexCh3a
           << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string_view  '45G'. "
           << endl;

   const char *cstr3b = "45G";
   indexCh3b = str3.find_last_not_of( cstr3b , 6 , indexCh3a - 1 );
   if (indexCh3b != npos )
      cout << "The index of the penultimate occurrence of an "
           << "element\n not in '45G' in str3 is: "
           << indexCh3b << endl << endl;
   else
      cout << "Elements in str3 contain only characters "
           << " in the string_view '45G'. "
           << endl  << endl;

   // The fourth member function searches a string_view
   // for a substring_view as specified by a string_view
   string_view str4( "12-ab-12-ab" );
   cout << "The original string_view str4 is: " << str4 << endl;
   basic_string_view <char>::size_type indexCh4a, indexCh4b;

   string_view str4a( "b-a" );
   indexCh4a = str4.find_last_not_of( str4a , 5 );
   if ( indexCh4a != npos )
      cout << "The index of the last occurrence of an "
           << "element not\n in 'b-a' in str4 before the 5th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements other than those in the substring_view"
           << " 'b-a' were not found in the string_view str4."
           << endl;

   string_view str4b( "12" );
   indexCh4b = str4.find_last_not_of( str4b  );
   if ( indexCh4b != npos )
      cout << "The index of the last occurrence of an "
           << "element not in '12'\n in str4 before the end "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements other than those in the substring_view"
           << " '12'\n were not found in the string_view str4."
           << endl;
}
```

```Output
The original string_view str1 is: dddd-1dd4-abdd
The index of the last non 'd'
found before the 7th position in str1 is: 5
The index of the non 'd' found in str1 is: 11

The original string_view str2 is: BBB-1111
The index of the last occurrence of a element
not of 'B1' in str2 before the 6th position is: 3
The elements of the substring_view 'B-1' were not found in str2 .

The original string_view str3 is: 444-555-GGG
The index of the last occurrence of an element in str3
other than one of the characters in '45G' is: 7
The index of the penultimate occurrence of an element
not in '45G' in str3 is: 3

The original string_view str4 is: 12-ab-12-ab
The index of the last occurrence of an element not
in 'b-a' in str4 before the 5th position is: 1
The index of the last occurrence of an element not in '12'
in str4 before the end position is: 10
```

## <a name="find_last_of"></a>  basic_string_view::find_last_of

Searches through a string_view for the last character that matches any element of a specified string_view.

```cpp
constexpr size_type find_last_of(basic_string_view str, size_type offset = npos) const noexcept;

constexpr size_type find_last_of(charT chVal, size_type offset = npos) const noexcept;

constexpr size_type find_last_of(const charT* ptr, size_type offset, size_type n) const;

constexpr size_type find_last_of(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*str*<br/>
The string_view for which the member function is to search.

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to finish.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

### Return Value

The index of the last character of the substring_view searched for when successful; otherwise `npos`.

### Example

```cpp
// basic_string_view_find_last_of.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string_view
   string_view str1( "abcd-1234-abcd-1234" );
   cout << "The original string_view str1 is: " << str1 << endl;
   basic_string_view <char>::size_type indexCh1a, indexCh1b;
   static const basic_string_view <char>::size_type npos = -1;

   indexCh1a = str1.find_last_of( "d" , 14 );
   if ( indexCh1a != npos )
      cout << "The index of the last 'd' found before the 14th"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'd' was not found in str1 ." << endl;

   indexCh1b = str1.find_first_of( "x" );
   if ( indexCh1b != npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str2( "ABCD-1234-ABCD-1234" );
   cout << "The original string_view str2 is: " << str2 << endl;
   basic_string_view <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "B1";
   indexCh2a = str2.find_last_of( cstr2 , 12 );
   if (indexCh2a != npos )
      cout << "The index of the last occurrence of an "
           << "element of 'B1' in str2 before\n the 12th "
           << "position is: " << indexCh2a << endl;
   else
      cout << "Elements of the substring_view 'B1' were not "
           << "found in str2 before the 12th position."
           << endl;

   const char *cstr2b = "D2";
   indexCh2b = str2.find_last_of( cstr2b );
   if ( indexCh2b != npos )
      cout << "The index of the last element of 'D2' "
           << "after\n the 0th position in str2 is: "
           << indexCh2b << endl << endl;
   else
      cout << "The substring_view 'D2' was not found in str2 ."
           << endl << endl << endl;

   // The third member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str3( "456-EFG-456-EFG" );
   cout << "The original string_view str3 is: " << str3 << endl;
   basic_string_view <char>::size_type indexCh3a;

   const char *cstr3a = "5E";
   indexCh3a = str3.find_last_of( cstr3a , 8 , 8 );
   if ( indexCh3a != npos )
      cout << "The index of the last occurrence of an "
           << "element of '5E' in str3 before\n the 8th "
           << "position is: " << indexCh3a << endl << endl;
   else
      cout << "Elements of the substring_view '5G' were not "
           << "found in str3\n before the 8th position."
           << endl << endl;

   // The fourth member function searches a string_view
   // for a substring_view as specified by a string_view
   string_view str4( "12-ab-12-ab" );
   cout << "The original string_view str4 is: " << str4 << endl;
   basic_string_view <char>::size_type indexCh4a, indexCh4b;

   string_view str4a( "ba3" );
   indexCh4a = str4.find_last_of( str4a , 8 );
   if ( indexCh4a != npos )
      cout << "The index of the last occurrence of an "
           << "element of 'ba3' in str4 before\n the 8th "
           << "position is: " << indexCh4a << endl;
   else
      cout << "Elements of the substring_view 'ba3' were not "
           << "found in str4\n after the 0th position."
           << endl;

   string_view str4b( "a2" );
   indexCh4b = str4.find_last_of( str4b  );
   if ( indexCh4b != npos )
      cout << "The index of the last occurrence of an "
           << "element of 'a2' in str4 before\n the 0th "
           << "position is: " << indexCh4b << endl;
   else
      cout << "Elements of the substring_view 'a2' were not "
           << "found in str4\n after the 0th position."
           << endl;
}
```

```Output
The original string_view str1 is: abcd-1234-abcd-1234
The index of the last 'd' found before the 14th position in str1 is: 13
The character 'x' was not found in str1.

The original string_view str2 is: ABCD-1234-ABCD-1234
The index of the last occurrence of an element of 'B1' in str2 before
the 12th position is: 11
The index of the last element of 'D2' after
the 0th position in str2 is: 16

The original string_view str3 is: 456-EFG-456-EFG
The index of the last occurrence of an element of '5E' in str3 before
the 8th position is: 4

The original string_view str4 is: 12-ab-12-ab
The index of the last occurrence of an element of 'ba3' in str4 before
the 8th position is: 4
The index of the last occurrence of an element of 'a2' in str4 before
the 0th position is: 9
```

## <a name="front"></a>  basic_string_view::front

Returns a reference to the first element in a string_view.

```cpp
constexpr const_reference front() const;
```

### Return Value

A reference to the first element of the string_view, which must be non-empty.

## <a name="iterator"></a> basic_string_view::iterator

A type that provides a random-access iterator that can access and read a **const** element in the string_view.

```cpp
typedef implementation-defined iterator;

using iterator = const_iterator;
```

### Remarks

A type `iterator` can be used to modify the value of a character and is used to iterate through a string_view in a forward direction.

### Example

See the example for [begin](#begin) for an example of how to declare and use `iterator`.

## <a name="length"></a> basic_string_view::length

Returns the current number of elements in a string_view.

```cpp
constexpr size_type length() const noexcept;
```

### Remarks

The member function is the same as [size](#size).

### Example

```cpp
// basic_string_view_length.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   string_view str1("Hello world");
   cout << "The original string_view str1 is: " << str1 << endl;

   // The size and length member functions differ in name only
   basic_string_view <char>::size_type sizeStr1, lenStr1;
   sizeStr1 = str1.size( );
   lenStr1 = str1.length( );

   basic_string_view <char>::size_type capStr1, max_sizeStr1;
   capStr1 = str1.capacity( );
   max_sizeStr1 = str1.max_size( );

   // Compare size, length, capacity & max_size of a string_view
   cout << "The current size of original string_view str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of original string_view str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of original string_view str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of original string_view str1 is: "
        << max_sizeStr1 << "." << endl << endl;

   str1.erase( 6, 5 );
   cout << "The modified string_view str1 is: " << str1 << endl;

   sizeStr1 = str1.size( );
   lenStr1 = str1.length( );
   capStr1 = str1.capacity( );
   max_sizeStr1 = str1.max_size( );

   // Compare size, length, capacity & max_size of a string_view
   // after erasing part of the original string_view
   cout << "The current size of modified string_view str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of modified string_view str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of modified string_view str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of modified string_view str1 is: "
        << max_sizeStr1 << "." << endl;
}
```

## <a name="max_size"></a>  basic_string_view::max_size

Returns the maximum number of characters a string_view could contain.

```cpp
size_type max_size() const;

...
constexpr size_type max_size() const noexcept;
```

### Return Value

The maximum number of characters a string_view could contain.

### Remarks

A exception of type [length_error](../standard-library/length-error-class.md) is thrown when an operation produces a string_view with a length greater than the maximum size.

### Example

```cpp
// basic_string_view_max_size.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   string_view str1("Hello world");
   cout << "The original string_view str1 is: " << str1 << endl;

   // The size and length member functions differ in name only
   basic_string_view <char>::size_type sizeStr1, lenStr1;
   sizeStr1 = str1.size( );
   lenStr1 = str1.length( );

   basic_string_view <char>::size_type capStr1, max_sizeStr1;
   capStr1 = str1.capacity( );
   max_sizeStr1 = str1.max_size( );

   // Compare size, length, capacity & max_size of a string_view
   cout << "The current size of original string_view str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of original string_view str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of original string_view str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of original string_view str1 is: "
        << max_sizeStr1 << "." << endl << endl;

   str1.erase( 6, 5 );
   cout << "The modified string_view str1 is: " << str1 << endl;

   sizeStr1 = str1.size( );
   lenStr1 = str1.length( );
   capStr1 = str1.capacity( );
   max_sizeStr1 = str1.max_size( );

   // Compare size, length, capacity & max_size of a string_view
   // after erasing part of the original string_view
   cout << "The current size of modified string_view str1 is: "
        << sizeStr1 << "." << endl;
   cout << "The current length of modified string_view str1 is: "
        << lenStr1 << "." << endl;
   cout << "The capacity of modified string_view str1 is: "
        << capStr1 << "." << endl;
   cout << "The max_size of modified string_view str1 is: "
        << max_sizeStr1 << "." << endl;
}
```

## <a name="npos"></a>  basic_string_view::npos

An unsigned integral value initialized to -1 that indicates either "not found" or "all remaining characters" when a search function fails.

```cpp
static constexpr size_type npos = size_type(-1);
```

### Remarks

When the return value is to be checked for the `npos` value, it might not work unless the return value is of type [size_type](#size_type) and not either **int** or **unsigned**.

### Example

See the example for [find](#find) for an example of how to declare and use `npos`.

## <a name="op_at"></a>  basic_string_view::operator[]

Provides a reference to the character with a specified index in a string_view.

```cpp
constexpr const_reference operator[](size_type offset) const;
```

### Parameters

*offset*<br/>
The index of the position of the element to be referenced.

### Return Value

A reference to the character of the string_view at the position specified by the parameter index.

### Remarks

The first element of the string_view has an index of zero, and the following elements are indexed consecutively by the positive integers, so that a string_view of length *n* has an *n*th element indexed by the number *n* - 1.

`operator[]` is faster than the member function [at](#at) for providing read and write access to the elements of a string_view.

`operator[]` does not check whether the index passed as a parameter is valid, but the member function `at` does and so should be used when the validity is not certain. An invalid index (an index less that zero or greater than or equal to the size of the string_view) passed to the member function `at` throws an [out_of_range](../standard-library/out-of-range-class.md) exception. An invalid index passed to `operator[]` results in undefined behavior, but the index equal to the length of the string_view is a valid index for const string_views and the operator returns the null character when passed this index.

The reference returned may be invalidated by string_view reallocations or modifications for the non- **const** string_views.

When compiling with [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md) set to 1 or 2, a runtime error will occur if you attempt to access an element outside the bounds of the string_view. For more information, see [Checked Iterators](../standard-library/checked-iterators.md).

### Example

```cpp
// basic_string_view_op_ref.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   string_view str1( "Hello world" ), str2( "Goodbye world" );
   const string_view cstr1( "Hello there" ), cstr2( "Goodbye now" );
   cout << "The original string_view str1 is: " << str1 << endl;
   cout << "The original string_view str2 is: " << str2 << endl;

   // Element access to the non-const string_views
   basic_string_view <char>::reference refStr1 = str1 [6];
   basic_string_view <char>::reference refStr2 = str2.atif( 3 );

   cout << "The character with an index of 6 in string_view str1 is: "
        << refStr1 << "." << endl;
   cout << "The character with an index of 3 in string_view str2 is: "
        << refStr2 << "." << endl;

   // Element access to the const string_views
   basic_string_view <char>::const_reference crefStr1 = cstr1[ cstr1.lengthif( ) ];
   basic_string_view <char>::const_reference crefStr2 = cstr2.atif( 8 );

   if ( crefStr1 == '\0' )
      cout << "The null character is returned as a valid reference."
           << endl;
   else
      cout << "The null character is not returned." << endl;
   cout << "The character with index of 8 in the const string_view cstr2 is: "
        << crefStr2 << "." << endl;
}
```

## <a name="rbegin"></a>  basic_string_view::rbegin

Returns an iterator to the first element in a reversed string_view.

```cpp
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();

...
constexpr const_reverse_iterator rbegin() const noexcept;
```

### Return Value

Returns a random-access iterator to the first element in a reversed string_view, addressing what would be the last element in the corresponding unreversed string_view.

### Remarks

`rbegin` is used with a reversed string_view just as [begin](#begin) is used with a string_view.

If the return value of `rbegin` is assigned to a `const_reverse_iterator`, the string_view object cannot be modified. If the return value of `rbegin` is assigned to a `reverse_iterator`, the string_view object can be modified.

`rbegin` can be used to initialize an iteration through a string_view backwards.

### Example

```cpp
// basic_string_view_rbegin.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   string_view str1( "Able was I ere I saw Elba" ), str2;
   basic_string_view <char>::reverse_iterator str_rIter, str1_rIter, str2_rIter;
   basic_string_view <char>::const_reverse_iterator str1_rcIter;

   str1_rIter = str1.rbeginif ( );
   // str1_rIter--;
   cout << "The first character-letter of the reversed string_view str1 is: "
        << *str1_rIter << endl;
   cout << "The full reversed string_view str1 is:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The dereferenced iterator can be used to modify a character
*str1_rIter = 'A';
   cout << "The first character-letter of the modified str1 is now: "
        << *str1_rIter << endl;
   cout << "The full modified reversed string_view str1 is now:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The following line would be an error because iterator is const
   // *str1_rcIter = 'A';

   // For an empty string_view, begin is equivalent to end
   if ( str2.rbegin( ) == str2.rendif ( ) )
      cout << "The string_view str2 is empty." << endl;
   else
      cout << "The string_viewstr2  is not empty." << endl;
}
```

```Output
The first character-letter of the reversed string_view str1 is: a
The full reversed string_view str1 is:
ablE was I ere I saw elbA
The first character-letter of the modified str1 is now: A
The full modified reversed string_view str1 is now:
AblE was I ere I saw elbA
The string_view str2 is empty.
```

## <a name="pointer"></a>  basic_string::pointer

A type that provides a pointer to a character element in a string or character array.

```cpp
typedef typename allocator_type::pointer pointer;

...
using const_pointer = const value_type*;
```

### Remarks

The type is a synonym for `allocator_type::pointer`.

For type `string`, it is equivalent to **char**<strong>\*</strong>.

### Example

```cpp
// basic_string_pointer.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   basic_string<char>::pointer pstr1a = "In Here";
   char *cstr1b = "Out There";
   cout << "The string pstr1a is: " << pstr1a <<  "." << endl;
   cout << "The C-string cstr1b is: " << cstr1b << "." << endl;
}
```

```Output
The string pstr1a is: In Here.
The C-string cstr1b is: Out There.
```

## <a name="reference"></a>  basic_string::reference

A type that provides a reference to an element stored in a string.

```cpp
typedef typename allocator_type::reference reference;

using reference = value_type&;
```

### Remarks

A type `reference` can be used to modify the value of an element.

The type is a synonym for `allocator_type::reference`.

For type `string`, it is equivalent to `chr&`.

### Example

See the example for [at](#at) for an example of how to declare and use `reference`.

## <a name="rend"></a>  basic_string_view::rend

Returns an iterator that addresses the location succeeding the last element in a reversed string_view.

```cpp
const_reverse_iterator rend() const;

reverse_iterator rend();
...
constexpr const_reverse_iterator rend() const noexcept;
```

### Return Value

A reverse random-access iterator that addresses the location succeeding the last element in a reversed string_view.

### Remarks

`rend` is used with a reversed string_view just as [end](#end) is used with a string_view.

If the return value of `rend` is assigned to a `const_reverse_iterator`, the string_view object cannot be modified. If the return value of `rend` is assigned to a `reverse_iterator`, the string_view object can be modified.

`rend` can be used to test whether a reverse iterator has reached the end of its string_view.

The value returned by `rend` should not be dereferenced.

### Example

```cpp
// basic_string_view_rend.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;
   string_view str1("Able was I ere I saw Elba"), str2;
   basic_string_view <char>::reverse_iterator str_rIter, str1_rIter, str2_rIter;
   basic_string_view <char>::const_reverse_iterator str1_rcIter;

   str1_rIter = str1.rendif ( );
   str1_rIter--;
   cout << "The last character-letter of the reversed string_view str1 is: "
        << *str1_rIter << endl;
   cout << "The full reversed string_view str1 is:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The dereferenced iterator can be used to modify a character
*str1_rIter = 'o';
   cout << "The last character-letter of the modified str1 is now: "
        << *str1_rIter << endl;
   cout << "The full modified reversed string_view str1 is now:\n ";
   for ( str_rIter = str1.rbegin( ); str_rIter != str1.rend( ); str_rIter++ )
      cout << *str_rIter;
   cout << endl;

   // The following line would be an error because iterator is const
   // *str1_rcIter = 'T';

   // For an empty string_view, end is equivalent to begin
   if ( str2.rbegin( ) == str2.rend( ) )
      cout << "The string_view str2 is empty." << endl;
   else
      cout << "The string_viewstr2  is not empty." << endl;
}
```

```Output
The last character-letter of the reversed string_view str1 is: A
The full reversed string_view str1 is:
ablE was I ere I saw elbA
The last character-letter of the modified str1 is now: o
The full modified reversed string_view str1 is now:
ablE was I ere I saw elbo
The string_view str2 is empty.
```

## <a name="reverse_iterator"></a>  basic_string_view::reverse_iterator

A type that provides a reference to an element stored in a string_view.

```cpp
typedef std::reverse_iterator<iterator> reverse_iterator;

...
using reverse_iterator = const_reverse_iterator;
```

### Remarks

A type `reverse_iterator` can be used to modify the value of a character and is used to iterate through a string_view in reverse.

### Example

See the example for [rbegin](#rbegin) for an example of how to declare and use `reverse_iterator`.

## <a name="rfind"></a>  basic_string_view::rfind

Searches a string_view in a backward direction for the first occurrence of a substring_view that matches a specified sequence of characters.

```cpp
constexpr size_type rfind(basic_string_view str, size_type offset = npos) const noexcept;

constexpr size_type rfind(charT chVal, size_type offset = npos) const noexcept;

constexpr size_type rfind(const charT* ptr, size_type offset, size_type n) const;

constexpr size_type rfind(const charT* ptr, size_type offset = npos) const;
```

### Parameters

*chVal*<br/>
The character value for which the member function is to search.

*offset*<br/>
Index of the position at which the search is to begin.

*ptr*<br/>
The C-string for which the member function is to search.

*count*<br/>
The number of characters, counting forward from the first character, in the C-string for which the member function is to search.

*str*<br/>
The string_view for which the member function is to search.

### Return Value

The index of the last occurrence, when searched backwards, of the first character of the substring_view when successful; otherwise `npos`.

### Example

```cpp
// basic_string_view_rfind.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function
   // searches for a single character in a string_view
   string_view str1( "Hello Everyone" );
   cout << "The original string_view str1 is: " << str1 << endl;
   basic_string_view <char>::size_type indexCh1a, indexCh1b;
   static const basic_string_view <char>::size_type npos = -1;

   indexCh1a = str1.rfind( "e" , 9 );
   if ( indexCh1a != npos )
      cout << "The index of the 1st 'e' found before the 9th"
           << " position in str1 is: " << indexCh1a << endl;
   else
      cout << "The character 'e' was not found in str1 ." << endl;

   indexCh1b = str1.rfind( "x" );
   if ( indexCh1b != npos )
      cout << "The index of the 'x' found in str1 is: "
           << indexCh1b << endl << endl;
   else
      cout << "The character 'x' was not found in str1."
           << endl << endl;

   // The second member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str2( "Let me make this perfectly clear." );
   cout << "The original string_view str2 is: " << str2 << endl;
   basic_string_view <char>::size_type indexCh2a, indexCh2b;

   const char *cstr2 = "perfect";
   indexCh2a = str2.rfind( cstr2 , 30 );
   if ( indexCh2a != npos )
      cout << "The index of the 1st element of 'perfect' "
           << "before\n the 30th position in str2 is: "
           << indexCh2a << endl;
   else
      cout << "The substring_view 'perfect' was not found in str2 ."
           << endl;

   const char *cstr2b = "imperfectly";
   indexCh2b = str2.rfind( cstr2b , 30 );
   if ( indexCh2b != npos )
      cout << "The index of the 1st element of 'imperfect' "
           << "before\n the 5th position in str3 is: "
           << indexCh2b << endl;
   else
      cout << "The substring_view 'imperfect' was not found in str2 ."
           << endl << endl;

   // The third member function searches a string_view
   // for a substring_view as specified by a C-string
   string_view str3( "It is a nice day. I am happy." );
   cout << "The original string_view str3 is: " << str3 << endl;
   basic_string_view <char>::size_type indexCh3a, indexCh3b;

   const char *cstr3a = "nice";
   indexCh3a = str3.rfind( cstr3a );
   if ( indexCh3a != npos )
      cout << "The index of the 1st element of 'nice' "
           << "in str3 is: " << indexCh3a << endl;
   else
      cout << "The substring_view 'nice' was not found in str3 ."
           << endl;

   const char *cstr3b = "am";
   indexCh3b = str3.rfind( cstr3b , indexCh3a + 25 , 2 );
   if ( indexCh3b != npos )
      cout << "The index of the next occurrance of 'am' in "
           << "str3 begins at: " << indexCh3b << endl << endl;
   else
      cout << "There is no next occurrence of 'am' in str3 ."
           << endl << endl;

   // The fourth member function searches a string_view
   // for a substring_view as specified by a string_view
   string_view str4( "This perfectly unclear." );
   cout << "The original string_view str4 is: " << str4 << endl;
   basic_string_view <char>::size_type indexCh4a, indexCh4b;

   string_view str4a( "clear" );
   indexCh4a = str4.rfind( str4a , 15 );
   if (indexCh4a != npos )
      cout << "The index of the 1st element of 'clear' "
           << "before\n the 15th position in str4 is: "
           << indexCh4a << endl;
   else
      cout << "The substring_view 'clear' was not found in str4 "
           << "before the 15th position." << endl;

   string_view str4b( "clear" );
   indexCh4b = str4.rfind( str4b );
   if ( indexCh4b != npos )
      cout << "The index of the 1st element of 'clear' "
           << "in str4 is: "
           << indexCh4b << endl;
   else
      cout << "The substring_view 'clear' was not found in str4 ."
           << endl << endl;
}
```

```Output
The original string_view str1 is: Hello Everyone
The index of the 1st 'e' found before the 9th position in str1 is: 8
The character 'x' was not found in str1.

The original string_view str2 is: Let me make this perfectly clear.
The index of the 1st element of 'perfect' before
the 30th position in str2 is: 17
The substring_view 'imperfect' was not found in str2 .

The original string_view str3 is: It is a nice day. I am happy.
The index of the 1st element of 'nice' in str3 is: 8
The index of the next occurrance of 'am' in str3 begins at: 20

The original string_view str4 is: This perfectly unclear.
The substring_view 'clear' was not found in str4 before the 15th position.
The index of the 1st element of 'clear' in str4 is: 17
```

## <a name="size"></a>  basic_string_view::size

Returns the current number of elements in a string_view.

```cpp
constexpr size_type size() const noexcept;
```

### Return Value

The length of the string_view.

### Example

```cpp
// basic_string_view_size.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
	using namespace std;
	string_view str1("Hello world");
	cout << "The original string_view str1 is: " << str1 << endl;

	// The size and length member functions differ in name only
	basic_string_view <char>::size_type sizeStr1, lenStr1;
	sizeStr1 = str1.size();
	lenStr1 = str1.length();

	basic_string_view <char>::size_type max_sizeStr1;
	max_sizeStr1 = str1.max_size();

	// Compare size, length, capacity & max_size of a string_view
	cout << "The current size of original string_view str1 is: "
		<< sizeStr1 << "." << endl;
	cout << "The current length of original string_view str1 is: "
		<< lenStr1 << "." << endl;
	cout << "The max_size of original string_view str1 is: "
		<< max_sizeStr1 << "." << endl << endl;
}
```

## <a name="size_type"></a>  basic_string_view::size_type

An unsigned integer type that can represent the number of elements and indices in a string_view.

```cpp
typedef typename allocator_type::size_type size_type;
```

### Remarks

It is equivalent to `allocator_type::size_type`.

For type `string_view`, it is equivalent to `size_t`.

### Example

```cpp
// basic_string_view_size_type.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main()
{
	using namespace std;
	string_view str1("Hello world");

	basic_string_view <char>::size_type sizeStr1, capStr1;
	sizeStr1 = str1.size();

	cout << "The current size of string_view str1 is: "
		<< sizeStr1 << "." << endl;
}
```

```Output
The current size of string_view str1 is: 11.
The capacity of string_view str1 is: 15.
```

## <a name="substr"></a>  basic_string_view::substr

Copies a substring_view of at most some number of characters from a string_view beginning from a specified position.

```cpp
constexpr basic_string_view substr(size_type offset = 0, size_type count = npos) const;
```

### Parameters

*offset*<br/>
An index locating the element at the position from which the copy of the string_view is made, with a default value of 0.

*count*<br/>
The number of characters that are to be copied if they are present.

### Return Value

A string_view object that is a copy of elements of the string_view operand beginning at the position specified by the first argument.

### Example

```cpp
// basic_string_view_substr.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   string_view  str1("Heterological paradoxes are persistent.");
   cout << "The original string_view str1 is: \n " << str1
        << endl << endl;

   basic_string_view <char> str2 = str1.substr( 6 , 7 );
   cout << "The substring_view str1 copied is: " << str2
        << endl << endl;

   basic_string_view <char> str3 = str1.substr(  );
   cout << "The default substring_view str3 is: \n " << str3
        <<  "\n which is the entire original string_view." << endl;
}
```

```Output
The original string_view str1 is:
Heterological paradoxes are persistent.

The substring_view str1 copied is: logical

The default substring_view str3 is:
Heterological paradoxes are persistent.
which is the entire original string_view.
```

## <a name="swap"></a>  basic_string_view::swap

Exchange the contents of two string_views.

```cpp
constexpr void swap(basic_string_view& str) noexcept;
```

### Parameters

*str*<br/>
The source string_view whose elements are to be exchanged with those in the destination string_view.

### Remarks

If the string_views being swapped have the same allocator object, the `swap` member function:

- Occurs in constant time.

- Throws no exceptions.

- Invalidates no references, pointers, or iterators that designate elements in the two string_views.

Otherwise, it performs a number of element assignments and constructor calls proportional to the number of elements in the two controlled sequences.

### Example

```cpp
// basic_string_view_swap.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string_view<char>
   string_view s1( "Tweedledee" );
   string_view s2( "Tweedledum" );
   cout << "Before swapping string_view s1 and s2:" << endl;
   cout << " The basic_string_view s1 = " << s1 << "." << endl;
   cout << " The basic_string_view s2 = " << s2 << "." << endl;

   s1.swap( s2 );
   cout << "After swapping string_view s1 and s2:" << endl;
   cout << " The basic_string_view s1 = " << s1 << "." << endl;
   cout << " The basic_string_view s2 = " << s2 << "." << endl;
}
```

```Output
Before swapping string_view s1 and s2:
The basic_string_view s1 = Tweedledee.
The basic_string_view s2 = Tweedledum.
After swapping string_view s1 and s2:
The basic_string_view s1 = Tweedledum.
The basic_string_view s2 = Tweedledee.
```

## <a name="traits_type"></a>  basic_string_view::traits_type

A type for the character traits of the elements stored in a string_view.

```cpp
using traits_type = traits;
```

### Remarks

The type is a synonym for the second template parameter `Traits`.

For type `string_view`, it is equivalent to **char_traits\<char>**.

### Example

See the example for [copy](../standard-library/char-traits-struct.md#copy) for an example of how to declare and use `traits_type`.

## <a name="value_type"></a>  basic_string_view::value_type

A type that represents the type of characters stored in a string_view.

```cpp
typedef typename allocator_type::value_type value_type;
```

### Remarks

It is equivalent to `traits_type::char_type` and is equivalent to **char** for objects of type `string_view`.

### Example

```cpp
// basic_string_view_value_type.cpp
// compile with: /EHsc
#include <string_view>
#include <iostream>

int main( )
{
   using namespace std;

   basic_string_view<char>::value_type ch1 = 'G';

   char ch2 = 'H';

   cout << "The character ch1 is: " << ch1 << "." << endl;
   cout << "The character ch2 is: " << ch2 << "." << endl;
}
```

```Output
The character ch1 is: G.
The character ch2 is: H.
```

## See also

[\<string_view>](../standard-library/string-view.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
