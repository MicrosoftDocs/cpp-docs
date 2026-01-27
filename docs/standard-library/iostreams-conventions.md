---
title: "iostreams Conventions"
description: "Learn more about: iostreams Conventions"
ms.date: 11/04/2016
helpviewer_keywords: ["iostream header", "C++ Standard Library, iostreams"]
---
# iostreams Conventions

The iostreams headers support conversions between text and encoded forms, and input and output to external files:

[`<fstream>`](fstream.md)\
[`<iomanip>`](iomanip.md)\
[`<ios>`](ios.md)\
[`<iosfwd>`](iosfwd.md)\
[`<iostream>`](iostream.md)\
[`<istream>`](istream.md)\
[`<ostream>`](ostream.md)\
[`<sstream>`](sstream.md)\
[`<streambuf>`](streambuf.md)\
[`<strstream>`](strstream.md)

The simplest use of iostreams requires only that you include the header [`<iostream>`](iostream.md). You can then extract values from [`cin`](iostream.md#cin) or [`wcin`](iostream.md#wcin) to read the standard input. The rules for doing so are outlined in the description of the [`basic_istream` class](basic-istream-class.md). You can also insert values to [`cout`](iostream.md#cout) or [`wcout`](iostream.md#wcout) to write the standard output. The rules for doing so are outlined in the description of the [`basic_ostream` class](basic-ostream-class.md). Format control common to both extractors and insertors is managed by the [`basic_ios` class](basic-ios-class.md). Manipulating this format information in the guise of extracting and inserting objects is the province of several manipulators.

You can perform the same iostreams operations on files that you open by name, using the classes declared in [`<fstream>`](fstream.md). To convert between iostreams and objects of [`basic_string` class](basic-string-class.md), use the classes declared in [`<sstream>`](sstream.md). To do the same with C strings, use the classes declared in [`<strstream>`](strstream.md).

The remaining headers provide support services, typically of direct interest to only the most advanced users of the iostreams classes.

## See also

[C++ Standard Library Overview](cpp-standard-library-overview.md)\
[`iostream` Programming](iostream-programming.md)\
[Thread Safety in the C++ Standard Library](thread-safety-in-the-cpp-standard-library.md)
