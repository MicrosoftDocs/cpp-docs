---
description: "Learn more about: &lt;regex&gt; operators"
title: "&lt;regex&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["regex/std::operator!=", "regex/std::operator>", "regex/std::operator>=", "regex/std::operator<", "regex/std::operator<=", "regex/std::operator==", "regex/std::operator<<"]
ms.assetid: ec623e65-c186-491f-aa18-6b12b47e1127
---
# &lt;regex&gt; operators

[operator!=](#op_neq)\
[operator&gt;](#op_gt)\
[operator&gt;=](#op_gt_eq)\
[operator&lt;](#op_lt)\
[operator&lt;&lt;](#op_lt_lt)\
[operator&lt;=](#op_lt_eq)\
[operator==](#op_eq_eq)

## <a name="op_neq"></a> operator!=

Not equal comparison for various objects.

```cpp
template <class BidIt>
bool operator!=(const sub_match<BidIt>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator!=(
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator!=(const sub_match<BidIt>& left,
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& right);

template <class BidIt>
bool operator!=(const typename iterator_traits<BidIt>::value_type *left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator!=(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type *right);

template <class BidIt>
bool operator!=(const typename iterator_traits<BidIt>::value_type& left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator!=(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type& right);

template <class BidIt, class Alloc>
bool operator!=(const match_results<BidIt, Alloc>& left,
    const match_results<BidIt, Alloc>& right);
```

### Parameters

*BidIt*\
The iterator type.

*IOtraits*\
The string traits class.

*Alloc*\
The allocator class.

*left*\
The left object to compare.

*right*\
The right object to compare.

### Remarks

Each template operator returns `!(left == right)`.

### Example

```cpp
// std__regex__operator_ne.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::cmatch::string_type Mystr;
int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[1];
    std::cout << "match == " << mr.str() << std::endl;
    std::cout << "sub == " << sub << std::endl;
    std::cout << std::endl;

    std::cout << "match != match == " << std::boolalpha
        << (mr != mr) << std::endl;
    std::cout << "sub != sub == " << std::boolalpha
        << (sub != sub) << std::endl;

    std::cout << "string(\"aab\") != sub == " << std::boolalpha
        << (Mystr("aab") != sub) << std::endl;
    std::cout << "sub != string(\"aab\") == " << std::boolalpha
        << (sub != Mystr("aab")) << std::endl;

    std::cout << "\"aab\" != sub == " << std::boolalpha
        << ("aab" != sub) << std::endl;
    std::cout << "sub != \"aab\" == " << std::boolalpha
        << (sub != "aab") << std::endl;

    std::cout << "'a' != sub == " << std::boolalpha
        << ('a' != sub) << std::endl;
    std::cout << "sub != 'a' == " << std::boolalpha
        << (sub != 'a') << std::endl;

    return (0);
    }
```

```Output
match == caaa
sub == aaa

match != match == false
sub != sub == false
string("aab") != sub == true
sub != string("aab") == true
"aab" != sub == true
sub != "aab" == true
'a' != sub == true
sub != 'a' == true
```

## <a name="op_lt"></a> operator&lt;

Less than comparison for various objects.

```cpp
template <class BidIt>
bool operator<(const sub_match<BidIt>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator<(
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator<(const sub_match<BidIt>& left,
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& right);

template <class BidIt>
bool operator<(const typename iterator_traits<BidIt>::value_type *left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator<(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type *right);

template <class BidIt>
bool operator<(const typename iterator_traits<BidIt>::value_type& left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator<(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type& right);
```

### Parameters

*BidIt*\
The iterator type.

*IOtraits*\
The string traits class.

*Alloc*\
The allocator class.

*left*\
The left object to compare.

*right*\
The right object to compare.

### Remarks

Each template operator converts its arguments to a string type and returns true only if the converted value of *left* compares less than the converted value of *right*.

### Example

```cpp
// std__regex__operator_lt.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::cmatch::string_type Mystr;
int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[1];
    std::cout << "sub == " << sub << std::endl;
    std::cout << std::endl;

    std::cout << "sub < sub == " << std::boolalpha
        << (sub < sub) << std::endl;

    std::cout << "string(\"aab\") < sub == " << std::boolalpha
        << (Mystr("aab") < sub) << std::endl;
    std::cout << "sub < string(\"aab\") == " << std::boolalpha
        << (sub < Mystr("aab")) << std::endl;

    std::cout << "\"aab\" < sub == " << std::boolalpha
        << ("aab" < sub) << std::endl;
    std::cout << "sub < \"aab\" == " << std::boolalpha
        << (sub < "aab") << std::endl;

    std::cout << "'a' < sub == " << std::boolalpha
        << ('a' < sub) << std::endl;
    std::cout << "sub < 'a' == " << std::boolalpha
        << (sub < 'a') << std::endl;

    return (0);
    }
```

```Output
sub == aaa

sub < sub == false
string("aab") < sub == false
sub < string("aab") == true
"aab" < sub == false
sub < "aab" == true
'a' < sub == true
sub < 'a' == false
```

## <a name="op_lt_lt"></a> operator&lt;&lt;

Inserts a sub_match in a stream.

```cpp
template <class Elem, class IOtraits, class Alloc, class BidIt>
basic_ostream<Elem, IOtraits>& operator<<(basic_ostream<Elem, IOtraits>& os,
    const sub_match<BidIt>& right);
```

### Parameters

*Elem*\
The element type.

*IOtraits*\
The string traits class.

*Alloc*\
The allocator class.

*BidIt*\
The iterator type.

*os*\
The output stream.

*right*\
The object to insert.

### Remarks

The template operator returns `os << right.str()`.

### Example

```cpp
// std__regex__operator_ins.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[0];
    std::cout << "whole match: " << sub << std::endl;

    return (0);
    }
```

```Output
whole match: caaa
```

## <a name="op_lt_eq"></a> operator&lt;=

Less than or equal comparison for various objects.

```cpp
template <class BidIt>
bool operator<=(const sub_match<BidIt>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator<=(
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator<=(const sub_match<BidIt>& left,
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& right);

template <class BidIt>
bool operator<=(const typename iterator_traits<BidIt>::value_type *left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator<=(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type *right);

template <class BidIt>
bool operator<=(const typename iterator_traits<BidIt>::value_type& left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator<=(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type& right);
```

### Parameters

*BidIt*\
The iterator type.

*IOtraits*\
The string traits class.

*Alloc*\
The allocator class.

*left*\
The left object to compare.

*right*\
The right object to compare.

### Remarks

Each template operator returns `!(right < left)`.

### Example

```cpp
// std__regex__operator_le.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::cmatch::string_type Mystr;
int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[1];
    std::cout << "sub == " << sub << std::endl;
    std::cout << std::endl;

    std::cout << "sub <= sub == " << std::boolalpha
        << (sub <= sub) << std::endl;

    std::cout << "string(\"aab\") <= sub == " << std::boolalpha
        << (Mystr("aab") <= sub) << std::endl;
    std::cout << "sub <= string(\"aab\") == " << std::boolalpha
        << (sub <= Mystr("aab")) << std::endl;

    std::cout << "\"aab\" <= sub == " << std::boolalpha
        << ("aab" <= sub) << std::endl;
    std::cout << "sub <= \"aab\" == " << std::boolalpha
        << (sub <= "aab") << std::endl;

    std::cout << "'a' <= sub == " << std::boolalpha
        << ('a' <= sub) << std::endl;
    std::cout << "sub <= 'a' == " << std::boolalpha
        << (sub <= 'a') << std::endl;

    return (0);
    }
```

```Output
sub == aaa

sub <= sub == true
string("aab") <= sub == false
sub <= string("aab") == true
"aab" <= sub == false
sub <= "aab" == true
'a' <= sub == true
sub <= 'a' == false
```

## <a name="op_eq_eq"></a> operator==

Equal comparison for various objects.

```cpp
template <class BidIt>
bool operator==(const sub_match<BidIt>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator==(
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator==(const sub_match<BidIt>& left,
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& right);

template <class BidIt>
bool operator==(const typename iterator_traits<BidIt>::value_type* left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator==(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type* right);

template <class BidIt>
bool operator==(const typename iterator_traits<BidIt>::value_type& left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator==(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type& right);

template <class BidIt, class Alloc>
bool operator==(const match_results<BidIt, Alloc>& left,
    const match_results<BidIt, Alloc>& right);
```

### Parameters

*BidIt*\
The iterator type.

*IOtraits*\
The string traits class.

*Alloc*\
The allocator class.

*left*\
The left object to compare.

*right*\
The right object to compare.

### Remarks

Each template operator converts each of its arguments to a string type and returns the result of comparing the converted objects for equality.

When a template operator converts its arguments to a string type it uses the first of the following transformations that applies:

arguments whose types are a specialization of class template `match_results` or `sub_match` are converted by calling the `str` member function;

arguments whose types are a specialization of the class template `basic_string` are unchanged;

all other argument types are converted by passing the argument value to the constructor for an appropriate specialization of the class template `basic_string`.

### Example

```cpp
// std__regex__operator_eq.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::cmatch::string_type Mystr;
int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[1];
    std::cout << "match == " << mr.str() << std::endl;
    std::cout << "sub == " << sub << std::endl;
    std::cout << std::endl;

    std::cout << "match == match == " << std::boolalpha
        << (mr == mr) << std::endl;
    std::cout << "sub == sub == " << std::boolalpha
        << (sub == sub) << std::endl;

    std::cout << "string(\"aab\") == sub == " << std::boolalpha
        << (Mystr("aab") == sub) << std::endl;
    std::cout << "sub == string(\"aab\") == " << std::boolalpha
        << (sub == Mystr("aab")) << std::endl;

    std::cout << "\"aab\" == sub == " << std::boolalpha
        << ("aab" == sub) << std::endl;
    std::cout << "sub == \"aab\" == " << std::boolalpha
        << (sub == "aab") << std::endl;

    std::cout << "'a' == sub == " << std::boolalpha
        << ('a' == sub) << std::endl;
    std::cout << "sub == 'a' == " << std::boolalpha
        << (sub == 'a') << std::endl;

    return (0);
    }
```

```Output
match == caaa
sub == aaa

match == match == true
sub == sub == true
string("aab") == sub == false
sub == string("aab") == false
"aab" == sub == false
sub == "aab" == false
'a' == sub == false
sub == 'a' == false
```

## <a name="op_gt"></a> operator&gt;

Greater than comparison for various objects.

```cpp
template <class BidIt>
bool operator>(const sub_match<BidIt>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator>(
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator>(const sub_match<BidIt>& left,
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& right);

template <class BidIt>
bool operator>(const typename iterator_traits<BidIt>::value_type *left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator>(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type *right);

template <class BidIt>
bool operator>(const typename iterator_traits<BidIt>::value_type& left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator>(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type& right);
```

### Parameters

*BidIt*\
The iterator type.

*IOtraits*\
The string traits class.

*Alloc*\
The allocator class.

*left*\
The left object to compare.

*right*\
The right object to compare.

### Remarks

Each template operator returns `right < left`.

### Example

```cpp
// std__regex__operator_gt.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::cmatch::string_type Mystr;
int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[1];
    std::cout << "sub == " << sub << std::endl;
    std::cout << std::endl;

    std::cout << "sub > sub == " << std::boolalpha
        << (sub > sub) << std::endl;

    std::cout << "string(\"aab\") > sub == " << std::boolalpha
        << (Mystr("aab") > sub) << std::endl;
    std::cout << "sub > string(\"aab\") == " << std::boolalpha
        << (sub > Mystr("aab")) << std::endl;

    std::cout << "\"aab\" > sub == " << std::boolalpha
        << ("aab" > sub) << std::endl;
    std::cout << "sub > \"aab\" == " << std::boolalpha
        << (sub > "aab") << std::endl;

    std::cout << "'a' > sub == " << std::boolalpha
        << ('a' > sub) << std::endl;
    std::cout << "sub > 'a' == " << std::boolalpha
        << (sub > 'a') << std::endl;

    return (0);
    }
```

```Output
sub == aaa

sub > sub == false
string("aab") > sub == true
sub > string("aab") == false
"aab" > sub == true
sub > "aab" == false
'a' > sub == false
sub > 'a' == true
```

## <a name="op_gt_eq"></a> operator&gt;=

Greater than or equal comparison for various objects.

```cpp
template <class BidIt>
bool operator>=(const sub_match<BidIt>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator>=(
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& left,
    const sub_match<BidIt>& right);

template <class BidIt, class IOtraits, class Alloc>
bool operator>=(const sub_match<BidIt>& left,
    const basic_string<typename iterator_traits<BidIt>::value_type, IOtraits, Alloc>& right);

template <class BidIt>
bool operator>=(const typename iterator_traits<BidIt>::value_type *left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator>=(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type *right);

template <class BidIt>
bool operator>=(const typename iterator_traits<BidIt>::value_type& left,
    const sub_match<BidIt>& right);

template <class BidIt>
bool operator>=(const sub_match<BidIt>& left,
    const typename iterator_traits<BidIt>::value_type& right);
```

### Parameters

*BidIt*\
The iterator type.

*IOtraits*\
The string traits class.

*Alloc*\
The allocator class.

*left*\
The left object to compare.

*right*\
The right object to compare.

### Remarks

Each template operator returns `!(left < right)`.

### Example

```cpp
// std__regex__operator_ge.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::cmatch::string_type Mystr;
int main()
    {
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::csub_match sub = mr[1];
    std::cout << "sub == " << sub << std::endl;
    std::cout << std::endl;

    std::cout << "sub >= sub == " << std::boolalpha
        << (sub >= sub) << std::endl;

    std::cout << "string(\"aab\") >= sub == " << std::boolalpha
        << (Mystr("aab") >= sub) << std::endl;
    std::cout << "sub >= string(\"aab\") == " << std::boolalpha
        << (sub >= Mystr("aab")) << std::endl;

    std::cout << "\"aab\" >= sub == " << std::boolalpha
        << ("aab" >= sub) << std::endl;
    std::cout << "sub >= \"aab\" == " << std::boolalpha
        << (sub >= "aab") << std::endl;

    std::cout << "'a' >= sub == " << std::boolalpha
        << ('a' >= sub) << std::endl;
    std::cout << "sub >= 'a' == " << std::boolalpha
        << (sub >= 'a') << std::endl;

    return (0);
    }
```

```Output
sub == aaa

sub >= sub == true
string("aab") >= sub == true
sub >= string("aab") == false
"aab" >= sub == true
sub >= "aab" == false
'a' >= sub == false
sub >= 'a' == true
```

## See also

[\<regex>](../standard-library/regex.md)\
[regex_constants Class](../standard-library/regex-constants-class.md)\
[regex_error Class](../standard-library/regex-error-class.md)\
[\<regex> functions](../standard-library/regex-functions.md)\
[regex_iterator Class](../standard-library/regex-iterator-class.md)\
[regex_token_iterator Class](../standard-library/regex-token-iterator-class.md)\
[regex_traits Class](../standard-library/regex-traits-class.md)\
[\<regex> typedefs](../standard-library/regex-typedefs.md)
