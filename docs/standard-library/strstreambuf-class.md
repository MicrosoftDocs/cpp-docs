---
description: "Learn more about: strstreambuf Class"
title: "strstreambuf Class"
ms.date: "11/04/2016"
f1_keywords: ["strstream/std::strstreambuf::freeze", "strstream/std::strstreambuf::overflow", "strstream/std::strstreambuf::pbackfail", "strstream/std::strstreambuf::pcount", "strstream/std::strstreambuf::seekoff", "strstream/std::strstreambuf::seekpos", "strstream/std::strstreambuf::str", "strstream/std::strstreambuf::underflow"]
helpviewer_keywords: ["std::strstreambuf [C++], freeze", "std::strstreambuf [C++], overflow", "std::strstreambuf [C++], pbackfail", "std::strstreambuf [C++], pcount", "std::strstreambuf [C++], seekoff", "std::strstreambuf [C++], seekpos", "std::strstreambuf [C++], str", "std::strstreambuf [C++], underflow"]
ms.assetid: b040b8ea-0669-4eba-8908-6a9cc159c54b
---
# strstreambuf Class

Describes a stream buffer that controls the transmission of elements to and from a sequence of elements stored in a **`char`** array object.

## Syntax

```cpp
class strstreambuf : public streambuf
```

## Remarks

Depending on how the object is constructed, it can be allocated, extended, and freed as necessary to accommodate changes in the sequence.

An object of class `strstreambuf` stores several bits of mode information as its `strstreambuf` mode. These bits indicate whether the controlled sequence:

- Has been allocated and needs to be freed eventually.

- Is modifiable.

- Is extendable by reallocating storage.

- Has been frozen and hence needs to be unfrozen before the object is destroyed, or freed (if allocated) by an agency other than the object.

A controlled sequence that is frozen cannot be modified or extended, regardless of the state of these separate mode bits.

The object also stores pointers to two functions that control `strstreambuf` allocation. If these are null pointers, the object devises its own method of allocating and freeing storage for the controlled sequence.

> [!NOTE]
> This class is deprecated. Consider using [stringbuf](../standard-library/sstream-typedefs.md#stringbuf) or [wstringbuf](../standard-library/sstream-typedefs.md#wstringbuf) instead.

### Constructors

|Constructor|Description|
|-|-|
|[strstreambuf](#strstreambuf)|Constructs an object of type `strstreambuf`.|

### Member functions

|Member function|Description|
|-|-|
|[freeze](#freeze)|Causes a stream buffer to be unavailable through stream buffer operations.|
|[overflow](#overflow)|A protected virtual function that can be called when a new character is inserted into a full buffer.|
|[pbackfail](#pbackfail)|A protected virtual member function that tries to put back an element into the input stream, and then make it the current element (pointed to by the next pointer).|
|[pcount](#pcount)|Returns a count of the number of elements written to the controlled sequence.|
|[seekoff](#seekoff)|A protected virtual member function that tries to alter the current positions for the controlled streams.|
|[seekpos](#seekpos)|A protected virtual member function that tries to alter the current positions for the controlled streams.|
|[str](#str)|Calls [freeze](#freeze), and then returns a pointer to the beginning of the controlled sequence.|
|[underflow](#underflow)|A protected virtual function to extract the current element from the input stream.|

## Requirements

**Header:** \<strstream>

**Namespace:** std

## <a name="freeze"></a> strstreambuf::freeze

Causes a stream buffer to be unavailable through stream buffer operations.

```cpp
void freeze(bool _Freezeit = true);
```

### Parameters

*_Freezeit*\
A **`bool`** indicating whether you want the stream to be frozen.

### Remarks

If *_Freezeit* is true, the function alters the stored `strstreambuf` mode to make the controlled sequence frozen. Otherwise, it makes the controlled sequence not frozen.

[str](#str) implies `freeze`.

> [!NOTE]
> A frozen buffer will not be freed during `strstreambuf` destruction. You must unfreeze the buffer before it is freed to avoid a memory leak.

### Example

```cpp
// strstreambuf_freeze.cpp
// compile with: /EHsc

#include <iostream>
#include <strstream>

using namespace std;

void report(strstream &x)
{
    if (!x.good())
        cout << "stream bad" << endl;
    else
        cout << "stream good" << endl;
}

int main()
{
    strstream x;

    x << "test1";
    cout << "before freeze: ";
    report(x);

    // Calling str freezes stream.
    cout.write(x.rdbuf()->str(), 5) << endl;
    cout << "after freeze: ";
    report(x);

    // Stream is bad now, wrote on frozen stream
    x << "test1.5";
    cout << "after write to frozen stream: ";
    report(x);

    // Unfreeze stream, but it is still bad
    x.rdbuf()->freeze(false);
    cout << "after unfreezing stream: ";
    report(x);

    // Clear stream
    x.clear();
    cout << "after clearing stream: ";
    report(x);

    x << "test3";
    cout.write(x.rdbuf()->str(), 10) << endl;

    // Clean up.  Failure to unfreeze stream will cause a
    // memory leak.
    x.rdbuf()->freeze(false);
}
```

```Output
before freeze: stream good
test1
after freeze: stream good
after write to frozen stream: stream bad
after unfreezing stream: stream bad
after clearing stream: stream good
test1test3
```

## <a name="overflow"></a> strstreambuf::overflow

A protected virtual function that can be called when a new character is inserted into a full buffer.

```cpp
virtual int overflow(int _Meta = EOF);
```

### Parameters

*_Meta*\
The character to insert into the buffer, or `EOF`.

### Return Value

If the function cannot succeed, it returns `EOF`. Otherwise, if *\_Meta* == `EOF`, it returns some value other than `EOF`. Otherwise, it returns *\_Meta*.

### Remarks

If *\_Meta* != `EOF`, the protected virtual member function tries to insert the element `(char)_Meta` into the output buffer. It can do so in various ways:

- If a write position is available, it can store the element into the write position and increment the next pointer for the output buffer.

- If the stored strstreambuf mode says the controlled sequence is modifiable, extendable, and not frozen, the function can make a write position available by allocating new for the output buffer. Extending the output buffer this way also extends any associated input buffer.

## <a name="pbackfail"></a> strstreambuf::pbackfail

A protected virtual member function that tries to put back an element into the input stream, and then makes it the current element (pointed to by the next pointer).

```cpp
virtual int pbackfail(int _Meta = EOF);
```

### Parameters

*_Meta*\
The character to insert into the buffer, or `EOF`.

### Return Value

If the function cannot succeed, it returns `EOF`. Otherwise, if *\_Meta* == `EOF`, it returns some value other than `EOF`. Otherwise, it returns *\_Meta*.

### Remarks

The protected virtual member function tries to put back an element into the input buffer, and then make it the current element (pointed to by the next pointer).

If *\_Meta* == `EOF`, the element to push back is effectively the one already in the stream before the current element. Otherwise, that element is replaced by `ch = (char)_Meta`. The function can put back an element in various ways:

- If a putback position is available, and the element stored there compares equal to `ch`, it can decrement the next pointer for the input buffer.

- If a putback position is available, and if the strstreambuf mode says the controlled sequence is modifiable, the function can store `ch` into the putback position and decrement the next pointer for the input buffer.

## <a name="pcount"></a> strstreambuf::pcount

Returns a count of the number of elements written to the controlled sequence.

```cpp
streamsize pcount() const;
```

### Return Value

A count of the number of elements written to the controlled sequence.

### Remarks

Specifically, if [pptr](../standard-library/basic-streambuf-class.md#pptr) is a null pointer, the function returns zero. Otherwise, it returns `pptr` - [pbase](../standard-library/basic-streambuf-class.md#pbase).

### Example

```cpp
// strstreambuf_pcount.cpp
// compile with: /EHsc
#include <iostream>
#include <strstream>
using namespace std;

int main( )
{
   strstream x;
   x << "test1";
   cout << x.rdbuf( )->pcount( ) << endl;
   x << "test2";
   cout << x.rdbuf( )->pcount( ) << endl;
}
```

## <a name="seekoff"></a> strstreambuf::seekoff

A protected virtual member function that tries to alter the current positions for the controlled streams.

```cpp
virtual streampos seekoff(streamoff _Off,
    ios_base::seekdir _Way,
    ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### Parameters

*_Off*\
The position to seek for relative to *_Way*.

*_Way*\
The starting point for offset operations. See [seekdir](../standard-library/ios-base-class.md#seekdir) for possible values.

*_Which*\
Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.

### Return Value

If the function succeeds in altering either or both stream positions, it returns the resultant stream position. Otherwise, it fails and returns an invalid stream position.

### Remarks

The protected virtual member function endeavors to alter the current positions for the controlled streams. For an object of class strstreambuf, a stream position consists purely of a stream offset. Offset zero designates the first element of the controlled sequence.

The new position is determined as follows:

- If `_Way == ios_base::beg`, the new position is the beginning of the stream plus *_Off*.

- If `_Way == ios_base::cur`, the new position is the current stream position plus *_Off*.

- If `_Way == ios_base::end`, the new position is the end of the stream plus *_Off*.

If `_Which & ios_base::in` is nonzero and the input buffer exist, the function alters the next position to read in the input buffer. If `_Which & ios_base::out` is also nonzero, `_Way != ios_base::cur`, and the output buffer exists, the function also sets the next position to write to match the next position to read.

Otherwise, if `_Which & ios_base::out` is nonzero and the output buffer exists, the function alters the next position to write in the output buffer. Otherwise, the positioning operation fails. For a positioning operation to succeed, the resulting stream position must lie within the controlled sequence.

## <a name="seekpos"></a> strstreambuf::seekpos

A protected virtual member function that tries to alter the current positions for the controlled streams.

```cpp
virtual streampos seekpos(streampos _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### Parameters

*_Sp*\
The position to seek for.

*_Which*\
Specifies the mode for the pointer position. The default is to allow you to modify the read and write positions.

### Return Value

If the function succeeds in altering either or both stream positions, it returns the resultant stream position. Otherwise, it fails and returns an invalid stream position. To determine if the stream position is invalid, compare the return value with `pos_type(off_type(-1))`.

### Remarks

The protected virtual member function endeavors to alter the current positions for the controlled streams. For an object of class strstreambuf, a stream position consists purely of a stream offset. Offset zero designates the first element of the controlled sequence. The new position is determined by *_Sp*.

If `_Which` & **ios_base::in** is nonzero and the input buffer exists, the function alters the next position to read in the input buffer. If `_Which` & `ios_base::out` is nonzero and the output buffer exists, the function also sets the next position to write to match the next position to read. Otherwise, if `_Which` & `ios_base::out` is nonzero and the output buffer exists, the function alters the next position to write in the output buffer. Otherwise, the positioning operation fails. For a positioning operation to succeed, the resulting stream position must lie within the controlled sequence.

## <a name="str"></a> strstreambuf::str

Calls [freeze](#freeze), and then returns a pointer to the beginning of the controlled sequence.

```cpp
char *str();
```

### Return Value

A pointer to the beginning of the controlled sequence.

### Remarks

No terminating null element exists, unless you explicitly insert one.

### Example

See [strstreambuf::freeze](#freeze) for a sample that uses **str**.

## <a name="strstreambuf"></a> strstreambuf::strstreambuf

Constructs an object of type `strstreambuf`.

```cpp
explicit strstreambuf(streamsize count = 0);

strstreambuf(void (* alloc_func)(size_t),
    void (* free_func)(void*));

strstreambuf(char* getptr,
    streamsize count,
    char* putptr = 0);

strstreambuf(signed char* getptr,
    streamsize count,
    signed char* putptr = 0);

strstreambuf(unsigned char* getptr,
    streamsize count,
    unsigned char* putptr = 0);

strstreambuf(const char* getptr,
    streamsize count);

strstreambuf(const signed char* getptr,
    streamsize count);

strstreambuf(const unsigned char* getptr,
    streamsize count);
```

### Parameters

*alloc_func*\
The function used to allocate buffer memory.

*count*\
Determines the length of the buffer pointed to by *getptr*. If *getptr* is not an argument (first constructor form), a suggested allocation size for the buffers.

*_Freefunc*\
The function used to free buffer memory.

*getptr*\
A buffer used for input.

*putptr*\
A buffer used for output.

### Remarks

The first constructor stores a null pointer in all the pointers controlling the input buffer, the output buffer, and strstreambuf allocation. It sets the stored strstreambuf mode to make the controlled sequence modifiable and extendable. It also accepts *count* as a suggested initial allocation size.

The second constructor behaves like the first, except that it stores *alloc_func* as the pointer to the function to call to allocate storage and *free_func* as the pointer to the function to call to free that storage.

The three constructors:

```cpp
strstreambuf(char *getptr,
    streamsize count,
    char *putptr = 0);

strstreambuf(signed char *getptr,
    streamsize count,
    signed char *putptr = 0);

strstreambuf(unsigned char *getptr,
    streamsize count,
    unsigned char *putptr = 0);
```

also behave like the first, except that *getptr* designates the array object used to hold the controlled sequence. (Hence, it must not be a null pointer.) The number of elements *N* in the array is determined as follows:

- If (*count* > 0), then *N* is *count*.

- If (*count* == 0), then *N* is `strlen((const char *) getptr )`.

- If (*count* < 0), then *N* is **INT_MAX**.

If *putptr* is a null pointer, the function establishes just an input buffer by executing:

```cpp
setg(getptr,
    getptr,
    getptr + N);
```

Otherwise, it establishes both input and output buffers by executing:

```cpp
setg(getptr,
    getptr,
    putptr);

setp(putptr,
    getptr + N);
```

In this case, *putptr* must be in the interval [ *getptr*, *getptr* + *N*].

Finally, the three constructors:

```cpp
strstreambuf(const char *getptr,
    streamsize count);

strstreambuf(const signed char *getptr,
    streamsize count);

strstreambuf(const unsigned char *getptr,
    streamsize count);
```

all behave the same as:

```cpp
streambuf((char *)getptr, count);
```

except that the stored mode makes the controlled sequence neither modifiable nor extendable.

## <a name="underflow"></a> strstreambuf::underflow

A protected virtual function to extract the current element from the input stream.

```cpp
virtual int underflow();
```

### Return Value

If the function cannot succeed, it returns `EOF`. Otherwise, it returns the current element in the input stream, converted as described above.

### Remarks

The protected virtual member function endeavors to extract the current element `ch` from the input buffer, then advance the current stream position, and return the element as `(int)(unsigned char)ch`. It can do so in only one way: if a read position is available, it takes `ch` as the element stored in the read position and advances the next pointer for the input buffer.

## See also

[streambuf](../standard-library/streambuf-typedefs.md#streambuf)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
