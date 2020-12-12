---
description: "Learn more about: Using Lambdas, Function Objects, and Restricted Functions"
title: "Using Lambdas, Function Objects, and Restricted Functions"
ms.date: "11/04/2016"
ms.assetid: 25346cc9-869d-4ada-aad3-e2228cad3d6c
---
# Using Lambdas, Function Objects, and Restricted Functions

The C++ AMP code that you want to run on the accelerator is specified as an argument in a call to the [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) method. You can provide either a lambda expression or a function object (functor) as that argument. Additionally, the lambda expression or function object can call a C++ AMP-restricted function. This topic uses an array addition algorithm to demonstrate lambdas, function objects, and restricted functions. The following example shows the algorithm without C++ AMP code. Two 1-dimensional arrays of equal length are created. The corresponding integer elements are added and stored in a third 1-dimensional array. C++ AMP is not used.

```cpp
void CpuMethod() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    for (int idx = 0; idx <5; idx++)
    {
        sumCPP[idx] = aCPP[idx] + bCPP[idx];
    }

    for (int idx = 0; idx <5; idx++)
    {
        std::cout <<sumCPP[idx] <<"\n";
    }
}
```

## Lambda Expression

Using a lambda expression is the most direct way to use C++ AMP to rewrite the code.

```cpp
void AddArraysWithLambda() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    array_view<const int, 1> a(5, aCPP);

    array_view<const int, 1> b(5, bCPP);

    array_view<int, 1> sum(5, sumCPP);

    sum.discard_data();

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp)
        {
             sum[idx] = a[idx] + b[idx];
        });

    for (int i = 0; i <5; i++) {
        std::cout <<sum[i] <<"\n";
    }
}
```

The lambda expression must include one indexing parameter and must include `restrict(amp)`. In the example, the [array_view](../../parallel/amp/reference/array-view-class.md)`sum` object has a rank of 1. Therefore, the parameter to the lambda statement is an [index](../../parallel/amp/reference/index-class.md) object that has rank 1. At runtime, the lambda expression is executed once for each element in the [array_view](../../parallel/amp/reference/array-view-class.md) object. For more information, see [Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md).

## Function Object

You can factor the accelerator code into a function object.

```cpp
class AdditionFunctionObject
{
public:
    AdditionFunctionObject(const array_view<int, 1>& a,
    const array_view<int, 1>& b,
    const array_view<int, 1>& sum)
    : a(a), b(b), sum(sum)
    {
    }

    void operator()(index<1> idx) restrict(amp)
    {
        sum[idx] = a[idx] + b[idx];
    }

private:
    array_view<int, 1> a;
    array_view<int, 1> b;
    array_view<int, 1> sum;
};

void AddArraysWithFunctionObject() {
    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    array_view<const int, 1> a(5, aCPP);

    array_view<const int, 1> b(5, bCPP);

    array_view<int, 1> sum(5, sumCPP);

    sum.discard_data();

    parallel_for_each(
        sum.extent,
        AdditionFunctionObject(a, b, sum));

    for (int i = 0; i <5; i++) {
        std::cout <<sum[i] <<"\n";
    }
}
```

The function object must include a constructor and must include an overload of the function call operator. The function call operator must include one indexing parameter. An instance of the function object is passed as the second argument to the [parallel_for_each](reference/concurrency-namespace-functions-amp.md#parallel_for_each) method. In this example, three [array_view](../../parallel/amp/reference/array-view-class.md) objects are passed to the function object constructor. The [array_view](../../parallel/amp/reference/array-view-class.md) object `sum` has a rank of 1. Therefore, the parameter to the function call operator is an [index](../../parallel/amp/reference/index-class.md) object that has rank 1. At runtime, the function is executed once for each element in the [array_view](../../parallel/amp/reference/array-view-class.md) object. For more information, see [Function Call](../../cpp/function-call-cpp.md) and [Function Objects in the C++ Standard Library](../../standard-library/function-objects-in-the-stl.md).

## C++ AMP-Restricted Function

You can further factor the accelerator code by creating a restricted function and calling it from a lambda expression or a function object. The following code example demonstrates how to call a restricted function from a lambda expression.

```cpp
void AddElementsWithRestrictedFunction(index<1> idx, array_view<int, 1> sum, array_view<int, 1> a, array_view<int, 1> b) restrict(amp)
{
    sum[idx] = a[idx] + b[idx];
}

void AddArraysWithFunction() {

    int aCPP[] = {1, 2, 3, 4, 5};
    int bCPP[] = {6, 7, 8, 9, 10};
    int sumCPP[5];

    array_view<int, 1> a(5, aCPP);

    array_view<int, 1> b(5, bCPP);

    array_view<int, 1> sum(5, sumCPP);

    sum.discard_data();

    parallel_for_each(
        sum.extent,
        [=](index<1> idx) restrict(amp)
        {
            AddElementsWithRestrictedFunction(idx, sum, a, b);
        });

    for (int i = 0; i <5; i++) {
        std::cout <<sum[i] <<"\n";
    }
}
```

The restricted function must include `restrict(amp)` and conform to the restrictions that are described in [restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md).

## See also

[C++ AMP (C++ Accelerated Massive Parallelism)](../../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
[Lambda Expression Syntax](../../cpp/lambda-expression-syntax.md)<br/>
[Function Call](../../cpp/function-call-cpp.md)<br/>
[Function Objects in the C++ Standard Library](../../standard-library/function-objects-in-the-stl.md)<br/>
[restrict (C++ AMP)](../../cpp/restrict-cpp-amp.md)
