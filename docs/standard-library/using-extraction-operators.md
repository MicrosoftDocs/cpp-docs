---
description: "Learn more about: Using Extraction Operators"
title: "Using Extraction Operators"
ms.date: "11/04/2016"
helpviewer_keywords: ["extraction operators [C++]", "&gt;&gt; operator [C++], extraction operators", "operators [C++], extraction"]
ms.assetid: a961e1a9-4897-41de-b210-89d5b2d051ae
---
# Using Extraction Operators

The extraction operator (`>>`), which is preprogrammed for all standard C++ data types, is the easiest way to get bytes from an input stream object.

Formatted text input extraction operators depend on white space to separate incoming data values. This is inconvenient when a text field contains multiple words or when commas separate numbers. In such a case, one alternative is to use the unformatted input member function [istream::getline](../standard-library/basic-istream-class.md#getline) to read a block of text with white space included, then parse the block with special functions. Another method is to derive an input stream class with a member function such as `GetNextToken`, which can call istream members to extract and format character data.

## See also

[Input Streams](../standard-library/input-streams.md)
