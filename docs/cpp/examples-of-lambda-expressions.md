---
description: "Learn more about: Examples of Lambda Expressions"
title: "Examples of Lambda Expressions"
ms.date: "05/07/2019"
helpviewer_keywords: ["lambda expressions [C++], examples"]
ms.assetid: 52506b15-0771-4190-a966-2f302049ca86
---
# Examples of Lambda Expressions

This article shows how to use lambda expressions in your programs. For an overview of lambda expressions, see [Lambda Expressions](../cpp/lambda-expressions-in-cpp.md). For more information about the structure of a lambda expression, see [Lambda Expression Syntax](../cpp/lambda-expression-syntax.md).

## <a name="declaringLambdaExpressions"></a> Declaring Lambda Expressions

### Example 1

Because a lambda expression is typed, you can assign it to an **`auto`** variable or to a [`function`](../standard-library/function-class.md) object, as shown here:

### Code

```cpp
// declaring_lambda_expressions1.cpp
// compile with: /EHsc /W4
#include <functional>
#include <iostream>

int main()
{

    using namespace std;

    // Assign the lambda expression that adds two numbers to an auto variable.
    auto f1 = [](int x, int y) { return x + y; };

    cout << f1(2, 3) << endl;

    // Assign the same lambda expression to a function object.
    function<int(int, int)> f2 = [](int x, int y) { return x + y; };

    cout << f2(3, 4) << endl;
}
```

### Output

```Output
5
7
```

### Remarks

For more information, see [`auto`](../cpp/auto-cpp.md), [`function` Class](../standard-library/function-class.md), and [Function Call](../cpp/function-call-cpp.md).

Although lambda expressions are most often declared in the body of a function, you can declare them anywhere that you can initialize a variable.

### Example 2

The Microsoft C++ compiler binds a lambda expression to its captured variables when the expression is declared instead of when the expression is called. The following example shows a lambda expression that captures the local variable `i` by value and the local variable `j` by reference. Because the lambda expression captures `i` by value, the reassignment of `i` later in the program does not affect the result of the expression. However, because the lambda expression captures `j` by reference, the reassignment of `j` does affect the result of the expression.

### Code

```cpp
// declaring_lambda_expressions2.cpp
// compile with: /EHsc /W4
#include <functional>
#include <iostream>

int main()
{
   using namespace std;

   int i = 3;
   int j = 5;

   // The following lambda expression captures i by value and
   // j by reference.
   function<int (void)> f = [i, &j] { return i + j; };

   // Change the values of i and j.
   i = 22;
   j = 44;

   // Call f and print its result.
   cout << f() << endl;
}
```

### Output

```Output
47
```

[[In This Article](#top)]

## <a name="callingLambdaExpressions"></a> Calling Lambda Expressions

You can call a lambda expression immediately, as shown in the next code snippet. The second snippet shows how to pass a lambda as an argument to C++ Standard Library algorithms such as `find_if`.

### Example 1

This example declares a lambda expression that returns the sum of two integers and calls the expression immediately with the arguments `5` and `4`:

### Code

```cpp
// calling_lambda_expressions1.cpp
// compile with: /EHsc
#include <iostream>

int main()
{
   using namespace std;
   int n = [] (int x, int y) { return x + y; }(5, 4);
   cout << n << endl;
}
```

### Output

```Output
9
```

### Example 2

This example passes a lambda expression as an argument to the `find_if` function. The lambda expression returns **`true`** if its parameter is an even number.

### Code

```cpp
// calling_lambda_expressions2.cpp
// compile with: /EHsc /W4
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;

    // Create a list of integers with a few initial elements.
    list<int> numbers;
    numbers.push_back(13);
    numbers.push_back(17);
    numbers.push_back(42);
    numbers.push_back(46);
    numbers.push_back(99);

    // Use the find_if function and a lambda expression to find the
    // first even number in the list.
    const list<int>::const_iterator result =
        find_if(numbers.begin(), numbers.end(),[](int n) { return (n % 2) == 0; });

    // Print the result.
    if (result != numbers.end()) {
        cout << "The first even number in the list is " << *result << "." << endl;
    } else {
        cout << "The list contains no even numbers." << endl;
    }
}
```

### Output

```Output
The first even number in the list is 42.
```

### Remarks

For more information about the `find_if` function, see [`find_if`](../standard-library/algorithm-functions.md#find_if). For more information about the C++ Standard Library functions that perform common algorithms, see [`<algorithm>`](../standard-library/algorithm.md).

[[In This Article](#top)]

## <a name="nestingLambdaExpressions"></a> Nesting Lambda Expressions

### Example

You can nest a lambda expression inside another one, as shown in this example. The inner lambda expression multiplies its argument by 2 and returns the result. The outer lambda expression calls the inner lambda expression with its argument and adds 3 to the result.

### Code

```cpp
// nesting_lambda_expressions.cpp
// compile with: /EHsc /W4
#include <iostream>

int main()
{
    using namespace std;

    // The following lambda expression contains a nested lambda
    // expression.
    int timestwoplusthree = [](int x) { return [](int y) { return y * 2; }(x) + 3; }(5);

    // Print the result.
    cout << timestwoplusthree << endl;
}
```

### Output

```Output
13
```

### Remarks

In this example, `[](int y) { return y * 2; }` is the nested lambda expression.

[[In This Article](#top)]

## <a name="higherOrderLambdaExpressions"></a> Higher-Order Lambda Functions

### Example

Many programming languages support the concept of a *higher-order function.* A higher-order function is a lambda expression that takes another lambda expression as its argument or returns a lambda expression. You can use the [`function`](../standard-library/function-class.md) class to enable a C++ lambda expression to behave like a higher-order function. The following example shows a lambda expression that returns a `function` object and a lambda expression that takes a `function` object as its argument.

### Code

```cpp
// higher_order_lambda_expression.cpp
// compile with: /EHsc /W4
#include <iostream>
#include <functional>

int main()
{
    using namespace std;

    // The following code declares a lambda expression that returns
    // another lambda expression that adds two numbers.
    // The returned lambda expression captures parameter x by value.
    auto addtwointegers = [](int x) -> function<int(int)> {
        return [=](int y) { return x + y; };
    };

    // The following code declares a lambda expression that takes another
    // lambda expression as its argument.
    // The lambda expression applies the argument z to the function f
    // and multiplies by 2.
    auto higherorder = [](const function<int(int)>& f, int z) {
        return f(z) * 2;
    };

    // Call the lambda expression that is bound to higherorder.
    auto answer = higherorder(addtwointegers(7), 8);

    // Print the result, which is (7+8)*2.
    cout << answer << endl;
}
```

### Output

```Output
30
```

[[In This Article](#top)]

## <a name="methodLambdaExpressions"></a> Using a Lambda Expression in a Function

### Example

You can use lambda expressions in the body of a function. The lambda expression can access any function or data member that the enclosing function can access. You can explicitly or implicitly capture the **`this`** pointer to provide access to functions and data members of the enclosing class.
**Visual Studio 2017 version 15.3 and later** (available with [`/std:c++17`](../build/reference/std-specify-language-standard-version.md)): Capture **`this`** by value (`[*this]`) when the lambda will be used in asynchronous or parallel operations where the code might execute after the original object goes out of scope.

You can use the **`this`** pointer explicitly in a function, as shown here:

```cpp
// capture "this" by reference
void ApplyScale(const vector<int>& v) const
{
   for_each(v.begin(), v.end(),
      [this](int n) { cout << n * _scale << endl; });
}

// capture "this" by value (Visual Studio 2017 version 15.3 and later)
void ApplyScale2(const vector<int>& v) const
{
   for_each(v.begin(), v.end(),
      [*this](int n) { cout << n * _scale << endl; });
}
```

You can also capture the **`this`** pointer implicitly:

```cpp
void ApplyScale(const vector<int>& v) const
{
   for_each(v.begin(), v.end(),
      [=](int n) { cout << n * _scale << endl; });
}
```

The following example shows the `Scale` class, which encapsulates a scale value.

```cpp
// function_lambda_expression.cpp
// compile with: /EHsc /W4
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Scale
{
public:
    // The constructor.
    explicit Scale(int scale) : _scale(scale) {}

    // Prints the product of each element in a vector object
    // and the scale value to the console.
    void ApplyScale(const vector<int>& v) const
    {
        for_each(v.begin(), v.end(), [=](int n) { cout << n * _scale << endl; });
    }

private:
    int _scale;
};

int main()
{
    vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);

    // Create a Scale object that scales elements by 3 and apply
    // it to the vector object. Does not modify the vector.
    Scale s(3);
    s.ApplyScale(values);
}
```

### Output

```Output
3
6
9
12
```

### Remarks

The `ApplyScale` function uses a lambda expression to print the product of the scale value and each element in a `vector` object. The lambda expression implicitly captures **`this`** so that it can access the `_scale` member.

[[In This Article](#top)]

## <a name="templateLambdaExpressions"></a> Using Lambda Expressions with Templates

### Example

Because lambda expressions are typed, you can use them with C++ templates. The following example shows the `negate_all` and `print_all` functions. The `negate_all` function applies the unary **`operator-`** to each element in the `vector` object. The `print_all` function prints each element in the `vector` object to the console.

### Code

```cpp
// template_lambda_expression.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// Negates each element in the vector object. Assumes signed data type.
template <typename T>
void negate_all(vector<T>& v)
{
    for_each(v.begin(), v.end(), [](T& n) { n = -n; });
}

// Prints to the console each element in the vector object.
template <typename T>
void print_all(const vector<T>& v)
{
    for_each(v.begin(), v.end(), [](const T& n) { cout << n << endl; });
}

int main()
{
    // Create a vector of signed integers with a few elements.
    vector<int> v;
    v.push_back(34);
    v.push_back(-43);
    v.push_back(56);

    print_all(v);
    negate_all(v);
    cout << "After negate_all():" << endl;
    print_all(v);
}
```

### Output

```Output
34
-43
56
After negate_all():
-34
43
-56
```

### Remarks

For more information about C++ templates, see [Templates](../cpp/templates-cpp.md).

[[In This Article](#top)]

## <a name="ehLambdaExpressions"></a> Handling Exceptions

### Example

The body of a lambda expression follows the rules for both structured exception handling (SEH) and C++ exception handling. You can handle a raised exception in the body of a lambda expression or defer exception handling to the enclosing scope. The following example uses the **`for_each`** function and a lambda expression to fill a `vector` object with the values of another one. It uses a **`try`**/**`catch`** block to handle invalid access to the first vector.

### Code

```cpp
// eh_lambda_expression.cpp
// compile with: /EHsc /W4
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    // Create a vector that contains 3 elements.
    vector<int> elements(3);

    // Create another vector that contains index values.
    vector<int> indices(3);
    indices[0] = 0;
    indices[1] = -1; // This is not a valid subscript. It will trigger an exception.
    indices[2] = 2;

    // Use the values from the vector of index values to
    // fill the elements vector. This example uses a
    // try/catch block to handle invalid access to the
    // elements vector.
    try
    {
        for_each(indices.begin(), indices.end(), [&](int index) {
            elements.at(index) = index;
        });
    }
    catch (const out_of_range& e)
    {
        cerr << "Caught '" << e.what() << "'." << endl;
    };
}
```

### Output

```Output
Caught 'invalid vector<T> subscript'.
```

### Remarks

For more information about exception handling, see [Exception Handling](../cpp/exception-handling-in-visual-cpp.md).

[[In This Article](#top)]

## <a name="managedLambdaExpressions"></a> Using Lambda Expressions with Managed Types (C++/CLI)

### Example

The capture clause of a lambda expression cannot contain a variable that has a managed type. However, you can pass an argument that has a managed type to the parameter list of a lambda expression. The following example contains a lambda expression that captures the local unmanaged variable `ch` by value and takes a <xref:System.String?displayProperty=fullName> object as its parameter.

### Code

```cpp
// managed_lambda_expression.cpp
// compile with: /clr
using namespace System;

int main()
{
    char ch = '!'; // a local unmanaged variable

    // The following lambda expression captures local variables
    // by value and takes a managed String object as its parameter.
    [=](String ^s) {
        Console::WriteLine(s + Convert::ToChar(ch));
    }("Hello");
}
```

### Output

```Output
Hello!
```

### Remarks

You can also use lambda expressions with the STL/CLR library. For more information, see [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md).

> [!IMPORTANT]
> Lambdas are not supported in these common language runtime (CLR) managed entities: **`ref class`**, **`ref struct`**, **`value class`**, and **`value struct`**.

[[In This Article](#top)]

## See also

[Lambda Expressions](../cpp/lambda-expressions-in-cpp.md)<br/>
[Lambda Expression Syntax](../cpp/lambda-expression-syntax.md)<br/>
[`auto`](../cpp/auto-cpp.md)<br/>
[`function` Class](../standard-library/function-class.md)<br/>
[`find_if`](../standard-library/algorithm-functions.md#find_if)<br/>
[`<algorithm>`](../standard-library/algorithm.md)<br/>
[Function Call](../cpp/function-call-cpp.md)<br/>
[Templates](../cpp/templates-cpp.md)<br/>
[Exception Handling](../cpp/exception-handling-in-visual-cpp.md)<br/>
[STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)
