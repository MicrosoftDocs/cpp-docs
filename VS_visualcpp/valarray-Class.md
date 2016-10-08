---
title: "valarray Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 19b862f9-5d09-4003-8844-6ddd02c1a3a7
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# valarray Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithoutSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The template class describes an object that controls a sequence of elements of type <ui>Type</ui> that are stored as an array, designed for performing high-speed mathematical operations, and optimized for computational performance.</para>
    </introduction>
    <languageReferenceRemarks>
        <content>
            <para>The class is a representation of the mathematical concept of an ordered set of values and the elements are numbered sequentially from zero. The class is described as a near container because it supports some, but not all, of the capabilities that first-class sequence containers, such as vector, support. It differs from template class vector in two important ways:  </para>
            <list class="bullet">
                <listItem>
                    <para>It defines numerous arithmetic operations between corresponding elements of <legacyBold>valarray&lt;Type&gt;</legacyBold> objects of the same type and length, such as                         <legacyItalic>xarr</legacyItalic> = cos(                        <legacyItalic>yarr</legacyItalic>) + sin(                        <legacyItalic>zarr</legacyItalic>).</para>
                </listItem>
                <listItem>
                    <para>It defines a variety of interesting ways to subscript a <legacyBold>valarray&lt;Type&gt;</legacyBold> object, by overloading <legacyLink xlink:href="#valarray__operator_at">operator[]</legacyLink>.</para>
                </listItem>
            </list>
            <para>An object of class <ui>Type</ui>:  </para>
            <list class="bullet">
                <listItem>
                    <para>Has a public default constructor, destructor, copy constructor, and assignment operator, with conventional behavior.</para>
                </listItem>
                <listItem>
                    <para>Defines the arithmetic operators and math functions, as needed, that are defined for the floating-point types, with conventional behavior.</para>
                </listItem>
            </list>
            <para>In particular, no subtle differences may exist between copy construction and default construction followed by assignment. None of the operations on objects of class <ui>Type</ui> may throw exceptions.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title/>
        <content/>
        <sections>
            <section>
                <title>Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__valarray">valarray</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> of a specific size or with elements of a specific value or as a copy of another <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or subset of another <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Typedefs</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__value_type">value_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the type of element stored in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Member Functions</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__apply">apply</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Applies a specified function to each element of a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__cshift">cshift</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Cyclically shifts all the elements in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> by a specified number of positions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__free">free</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Frees the memory used by the <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__max">max</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the largest element in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__min">min</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the smallest element in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__resize">resize</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the number of elements in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> to a specified number, adding or removing elements as required.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__shift">shift</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shifts all the elements in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> by a specified number of positions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__size">size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Finds the number of elements in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__sum">sum</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines the sum of all the elements in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> of nonzero length.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__swap">swap</legacyLink>
                                    </para>
                                </TD>
                                <TD/>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Operators</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_not">operator!</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A unary operator that obtains the logical <unmanagedCodeEntityReference>NOT</unmanagedCodeEntityReference> values of each element in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_mod_eq">operator%=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Obtains the remainder of dividing the elements of an array element-wise either by a specified <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or by a value of the element type.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_amp__eq">operator&amp;=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Obtains the bitwise <unmanagedCodeEntityReference>AND</unmanagedCodeEntityReference> of elements in an array either with the corresponding elements in a specified <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or with a value of the element type.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_gt__gt__eq">operator&gt;&gt;=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Right-shifts the bits for each element of a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> operand a specified number of positions or by an element-wise amount specified by a second <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_lt__lt__eq">operator&lt;&lt;=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Left-shifts the bits for each element of a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> operand a specified number of positions or by an element-wise amount specified by a second <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_star_eq">operator*=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Multiplies the elements of a specified <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or a value of the element type, element-wise, to an operand <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_add">operator+</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A unary operator that applies a plus to each element in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_add_eq">operator+=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds the elements of a specified <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or a value of the element type, element-wise, to an operand <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator-">operator-</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A unary operator that applies a minus to each element in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator-_eq">operator-=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Subtracts the elements of a specified <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or a value of the element type, element-wise, from an operand <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator__eq">operator/=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Divides an operand <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> element-wise by the elements of a specified <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or a value of the element type.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_eq">operator=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Assigns elements to a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> whose values are specified either directly or as part of some other <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or by a <unmanagedCodeEntityReference>slice_array</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>gslice_array</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>mask_array</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>indirect_array</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_at">operator[]</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to an element or its value at specified index or a specified subset.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_xor_eq">operator^=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Obtains the element-wise exclusive logical or operator ( <unmanagedCodeEntityReference>XOR</unmanagedCodeEntityReference>) of an array with either a specified valarray or a value of the element type.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_or_eq">operator|=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Obtains the bitwise <languageKeyword>OR</languageKeyword> of elements in an array either with the corresponding elements in a specified <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> or with a value of the element type.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#valarray__operator_dtor">operator~</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A unary operator that obtains the bitwise <unmanagedCodeEntityReference>NOT</unmanagedCodeEntityReference> values of each element in a <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <section>
        <title>Requirements</title>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> &lt;valarray&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </section>
    <section address="valarray__apply">
        <!--de0fa123-8cd7-4d7d-be1c-0fda959d25a3-->
        <title>valarray::apply</title>
        <content>
            <para>Applies a specified function to each element of a valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt; apply(</legacyBold> <legacyBold>   Type </legacyBold> <parameterReference>_Func(Type)</parameterReference> <legacyBold>) const;</legacyBold> <legacyBold>valarray&lt;Type&gt; apply(</legacyBold> <legacyBold>   Type </legacyBold> <parameterReference>_Func(const Type&amp;)</parameterReference> <legacyBold>) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>_Func(Type)</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The function object to be applied to each element of the operand valarray.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>_Func(const Type&amp;)</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The function object for const to be applied to each element of the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements have had <parameterReference>_Func</parameterReference> applied element-wise to the elements of the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member function returns an object of class <legacyLink xlink:href="19b862f9-5d09-4003-8844-6ddd02c1a3a7">valarray</legacyLink> <legacyBold>&lt;Type&gt;</legacyBold>, of length <legacyLink xlink:href="#valarray__size">size</legacyLink>, each of whose elements <parameterReference>I</parameterReference> is <legacyBold>func</legacyBold>(( <legacyBold>*this</legacyBold>)[ <parameterReference>I</parameterReference>]).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_apply.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

using namespace std;

int __cdecl MyApplyFunc( int n )
{
   return n*2;
}

int main( int argc, char* argv[] )
{
   valarray&lt;int&gt; vaR(10), vaApplied(10);
   int i;

   for ( i = 0; i &lt; 10; i += 3 )
      vaR[i] = i;

   for ( i = 1; i &lt; 10; i += 3 )
      vaR[i] = 0;

   for ( i = 2; i &lt; 10; i += 3 )
      vaR[i] = -i;

   cout &lt;&lt; "The initial Right valarray is: (";
   for   ( i=0; i &lt; 10; ++i )
      cout &lt;&lt; " " &lt;&lt; vaR[i];
   cout &lt;&lt; " )" &lt;&lt; endl;

   vaApplied = vaR.apply( MyApplyFunc );

   cout &lt;&lt; "The element-by-element result of "
       &lt;&lt; "applying MyApplyFunc to vaR is the\nvalarray: ( ";
   for ( i = 0; i &lt; 10; ++i )
      cout &lt;&lt; " " &lt;&lt; vaApplied[i];
   cout &lt;&lt; " )" &lt;&lt; endl;
}
\* Output: 
The initial Right valarray is: ( 0 0 -2 3 0 -5 6 0 -8 9 )
The element-by-element result of applying MyApplyFunc to vaR is the
valarray: (  0 0 -4 6 0 -10 12 0 -16 18 )
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__cshift">
        <!--9e26038d-66ff-4c5b-bac0-d70747c7572f-->
        <title>valarray::cshift</title>
        <content>
            <para>Cyclically shifts all the elements in a valarray by a specified number of positions.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt; cshift(</legacyBold> <legacyBold>   int </legacyBold> <parameterReference>_Count</parameterReference> <legacyBold>) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of places the elements are to be shifted forward.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A new valarray in which all the elements have been moved <parameterReference>_Count</parameterReference> positions cyclically toward the front of the valarray, left with respect to their positions in the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A positive value of <parameterReference>_Count</parameterReference> shifts the elements cyclically left <parameterReference>_Count</parameterReference> places.</para>
                    <para>A negative value of <parameterReference>_Count</parameterReference> shifts the elements cyclically right <parameterReference>_Count</parameterReference> places.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_cshift.cpp
// compile with: /EHsc

#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    int i;

    valarray&lt;int&gt; va1(10), va2(10);
    for (i = 0; i &lt; 10; i+=1)
        va1[i] = i;
    for (i = 0; i &lt; 10; i+=1)
        va2[i] = 10 - i;

    cout &lt;&lt; "The operand valarray va1 is: (";
    for (i = 0; i &lt; 10; i++)
        cout &lt;&lt; " " &lt;&lt; va1[i];
    cout &lt;&lt; ")" &lt;&lt; endl;

    // A positive parameter shifts elements right
    va1 = va1.cshift(4);
    cout &lt;&lt; "The cyclically shifted valarray va1 is:\nva1.cshift (4) = (";
    for (i = 0; i &lt; 10; i++)
        cout &lt;&lt; " " &lt;&lt; va1[i];
    cout &lt;&lt; ")" &lt;&lt; endl;

    cout &lt;&lt; "The operand valarray va2 is: (";
    for (i = 0; i &lt; 10; i++)
        cout &lt;&lt; " " &lt;&lt; va2[i];
    cout &lt;&lt; ")" &lt;&lt; endl;

    // A negative parameter shifts elements left
    va2 = va2.cshift(-4);
    cout &lt;&lt; "The cyclically shifted valarray va2 is:\nva2.shift (-4) = (";
    for (i = 0; i &lt; 10; i++)
        cout &lt;&lt; " " &lt;&lt; va2[i];
    cout &lt;&lt; ")" &lt;&lt; endl;
}
\* Output: 
The operand valarray va1 is: ( 0 1 2 3 4 5 6 7 8 9)
The cyclically shifted valarray va1 is:
va1.cshift (4) = ( 4 5 6 7 8 9 0 1 2 3)
The operand valarray va2 is: ( 10 9 8 7 6 5 4 3 2 1)
The cyclically shifted valarray va2 is:
va2.shift (-4) = ( 4 3 2 1 10 9 8 7 6 5)
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__free">
        <!--6c7f0551-f952-4ff0-8a52-3a7ec2de842c-->
        <title>valarray::free</title>
        <content>
            <para>Frees the memory used by the valarray.</para>
            <legacySyntax>void free();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This nonstandard function is equivalent to assigning an empty valarray. For example:</para>
                    <code>valarray&lt;T&gt; v;
v = valarray&lt;T&gt;(); // equivalent to v.free()</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__max">
        <!--1be6ba74-99dc-4b91-80e3-aae663de2002-->
        <title>valarray::max</title>
        <content>
            <para>Finds the largest element in a valarray.</para>
            <legacySyntax> <legacyBold>Type max( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The maximum value of the elements in the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member function compares values by applying <legacyBold>operator&lt;</legacyBold> or <legacyBold>operator&gt;</legacyBold> between pairs of elements of class <ui>Type</ui>, for which operators must be provided for the element <ui>Type</ui>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_max.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i, MaxValue;

   valarray&lt;int&gt; vaR ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  2*i - 1;
   for ( i = 2 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  10 - i;

   cout &lt;&lt; "The operand valarray is: ( ";
      for (i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   MaxValue = vaR.max (  );
   cout &lt;&lt; "The largest element in the valarray is: "
        &lt;&lt; MaxValue  &lt;&lt; "." &lt;&lt; endl;
}
\* Output: 
The operand valarray is: ( 0 1 8 3 7 5 6 13 2 9 ).
The largest element in the valarray is: 13.
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__min">
        <!--7b634a4b-1257-4383-8cc2-3c2138f61f88-->
        <title>valarray::min</title>
        <content>
            <para>Finds the smallest element in a valarray.</para>
            <legacySyntax> <legacyBold>Type min( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The minimum value of the elements in the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member function compares values by applying <legacyBold>operator&lt;</legacyBold> or <legacyBold>operator&gt;</legacyBold> between pairs of elements of class <ui>Type</ui>, for which operators must be provided for the element <ui>Type</ui>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_min.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i, MinValue;

   valarray&lt;int&gt; vaR ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  -i;
   for ( i = 1 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  2*i;
   for ( i = 2 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  5 - i;

   cout &lt;&lt; "The operand valarray is: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   MinValue = vaR.min ( );
   cout &lt;&lt; "The smallest element in the valarray is: "
        &lt;&lt; MinValue  &lt;&lt; "." &lt;&lt; endl;
}
\* Output: 
The operand valarray is: ( 0 2 3 -3 8 0 -6 14 -3 -9 ).
The smallest element in the valarray is: -9.
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_not">
        <!--26d14a45-d2ac-4e38-9f7a-3b6e74d75430-->
        <title>valarray::operator!</title>
        <content>
            <para>A unary operator that obtains the logical <legacyBold>NOT</legacyBold> values of each element in a valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;bool&gt; operator!( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The valarray of Boolean values that are the negation of the element values of the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The logical operation <legacyBold>NOT</legacyBold> negates the elements because it converts all zeros into ones and regards all nonzero values as ones and converts them into zeros. The returned valarray of Boolean values is of the same size as the operand valarray.</para>
                    <para>There is also a bitwise <legacyBold>NOT</legacyBold> <legacyLink xlink:href="#valarray__operator_dtor">valarray::operator~</legacyLink> that negates on the level of individual bits within the binary representation of <languageKeyword>char</languageKeyword> and <languageKeyword>int</languageKeyword> elements of a valarray.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_lognot.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 10 );
   valarray&lt;bool&gt; vaNOT ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  i-1;
   
   cout &lt;&lt; "The initial valarray is:  ( ";
      for (i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaNOT = !vaL;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the logical NOT operator! is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaNOT [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The element-by-element result of the logical NOT operator! is the
 valarray: ( 1 1 1 0 1 0 1 0 1 0 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_mod_eq">
        <!--6d5b1f02-9d0f-4abb-8c98-8e6655cd152a-->
        <title>valarray::operator%=</title>
        <content>
            <para>Obtains the remainder of dividing the elements of an array element-wise either by a specified valarray or by a value of the element type.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator%=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator%=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to divide, element-wise, the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the remainder from the element-wise division of the operand valarray by <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_class_op_rem.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 6 ), vaR ( 6 );
   for ( i = 0 ; i &lt; 6 ; i += 2 )
      vaL [ i ] =  53;
   for ( i = 1 ; i &lt; 6 ; i += 2 )
      vaL [ i ] =  -67;
   for ( i = 0 ; i &lt; 6 ; i++ )
      vaR [ i ] =  3*i+1;
   
   cout &lt;&lt; "The initial valarray is: ( ";
      for ( i = 0 ; i &lt; 6 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The initial _Right valarray is: ( ";
      for ( i = 0 ; i &lt; 6 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL %= vaR;
   cout &lt;&lt; "The remainders from the element-by-element "
        &lt;&lt; "division is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 6 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is: ( 53 -67 53 -67 53 -67 ).
The initial _Right valarray is: ( 1 4 7 10 13 16 ).
The remainders from the element-by-element division is the
 valarray: ( 0 -3 4 -7 1 -3 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_amp__eq">
        <!--5abc5225-78d4-471c-8b97-80c11fd121a8-->
        <title>valarray::operator&amp;amp;=</title>
        <content>
            <para>Obtains the bitwise <legacyBold>AND</legacyBold> of elements in an array either with the corresponding elements in a specified valarray or with a value of the element type.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator&amp;=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator&amp;=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to be combined, element-wise, by the logical <legacyBold>AND</legacyBold> with the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the element-wise logical <legacyBold>AND</legacyBold> of the operand valarray by <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A bitwise operation can only be used to manipulate bits in <languageKeyword>char</languageKeyword> and <languageKeyword>int</languageKeyword> data types and variants and not on <legacyBold>float</legacyBold>, <legacyBold>double</legacyBold>, <legacyBold>long</legacyBold> <legacyBold>double</legacyBold>, <languageKeyword>void</languageKeyword>, <languageKeyword>bool</languageKeyword>, or other, more complex data types.</para>
                    <para>The bitwise AND has the same truth table as the logical <legacyBold>AND</legacyBold> but applies to the data type on the level of the individual bits. Given bits                         <legacyItalic>b</legacyItalic>1 and                         <legacyItalic>b</legacyItalic>2,                         <legacyItalic>b</legacyItalic>1 <legacyBold>AND</legacyBold>                         <legacyItalic>b</legacyItalic>2 is <legacyBold>true</legacyBold> if both bits are true; <legacyBold>false</legacyBold> if at least one is false.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_class_op_bitand.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 10 ), vaR ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  i-1;
   for ( i = 0 ; i &lt; 10 ; i++ )
      vaR [ i ] =  i;
   
   cout &lt;&lt; "The initial valarray is:  ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The initial Right valarray is: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL &amp;= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the logical AND operator&amp;= is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the logical AND operator&amp;= is the
 valarray: ( 0 0 0 2 0 4 0 6 0 8 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_gt__gt__eq">
        <!--c556e094-7fe9-4736-aeae-23b011fff201-->
        <title>valarray::operator&amp;gt;&amp;gt;=</title>
        <content>
            <para>Right-shifts the bits for each element of a valarray operand a specified number of positions or by an element-wise amount specified by a second valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator&gt;&gt;=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator&gt;&gt;=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value indicating the amount of right shift or valarray whose elements indicate the element-wise amount of right shift.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements have been shifted right the amount specified in <parameterReference>_Right</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Signed numbers have their signs preserved.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_class_op_rs.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  64;
   for ( i = 1 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  -64;
   for ( i = 0 ; i &lt; 8 ; i++ )
      vaR [ i ] =  i;
   
   cout &lt;&lt; "The initial operand valarray is: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The _Right valarray is: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL &gt;&gt;= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the right shift is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial operand valarray is: ( 64 -64 64 -64 64 -64 64 -64 ).
The _Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the right shift is the
 valarray: ( 64 -32 16 -8 4 -2 1 -1 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_lt__lt__eq">
        <!--65485dca-0e73-4a15-8936-33008614489f-->
        <title>valarray::operator&amp;lt;&amp;lt;=</title>
        <content>
            <para>Left-shifts the bits for each element of a valarray operand a specified number of positions or by an element-wise amount specified by a second valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator&lt;&lt;=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator&lt;&lt;=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value indicating the amount of left shift or valarray whose elements indicate the element-wise amount of left shift.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements have been shifted left the amount specified in <parameterReference>_Right</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Signed numbers have their signs preserved.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_class_op_ls.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i &lt; 8 ; i++ )
      vaR [ i ] =  i;
   
   cout &lt;&lt; "The initial operand valarray is: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The _Right valarray is: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL &lt;&lt;= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the left shift\n on the operand array is the valarray:\n ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial operand valarray is: ( 1 -1 1 -1 1 -1 1 -1 ).
The _Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the left shift
 on the operand array is the valarray:
 ( 1 -2 4 -8 16 -32 64 -128 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_star_eq">
        <!--92677161-1415-409e-9f90-a86a2d1fc0cc-->
        <title>valarray::operator*=</title>
        <content>
            <para>Multiplies the elements of a specified valarray or a value of the element type, element-wise, to an operand valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator*=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator*=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to multiply, element-wise, the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the element-wise product of the operand valarray and <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_emult.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  2;
   for ( i = 1 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i &lt; 8 ; i++ )
      vaR [ i ] =  i;
   
   cout &lt;&lt; "The initial valarray is: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The initial Right valarray is: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL *= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the multiplication is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the multiplication is the
 valarray: ( 0 -1 4 -3 8 -5 12 -7 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_add">
        <!--a04b72e6-bd2d-49fb-8b9a-09f2f35bbbbf-->
        <title>valarray::operator+</title>
        <content>
            <para>A unary operator that applies a plus to each element in a valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt; operator+( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are plus those of the operand array.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_eplus.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 10 );
   valarray&lt;int&gt; vaPLUS ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  i-1;
   
   cout &lt;&lt; "The initial valarray is:  ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaPLUS = +vaL;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the operator+ is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaPLUS [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is:  ( 0 0 -2 2 -4 4 -6 6 -8 8 ).
The element-by-element result of the operator+ is the
 valarray: ( 0 0 -2 2 -4 4 -6 6 -8 8 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_add_eq">
        <!--300a4bca-5e2f-4566-b5a3-41e48fc7703b-->
        <title>valarray::operator+=</title>
        <content>
            <para>Adds the elements of a specified valarray or a value of the element type, element-wise, to an operand valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator+=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator+=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to be added, element-wise, to the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the element-wise sum of the operand valarray and <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_eadd.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  2;
   for ( i = 1 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i &lt; 8 ; i++ )
      vaR [ i ] =  i;
   
   cout &lt;&lt; "The initial valarray is: ( ";
      for (i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The initial _Right valarray is: ( ";
      for (i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL += vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the sum is the\n valarray: ( ";
      for (i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial _Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the sum is the
 valarray: ( 2 0 4 2 6 4 8 6 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator-">
        <!--e61511ec-57d6-4e75-a3fd-b1e0dbe2501d-->
        <title>valarray::operator-</title>
        <content>
            <para>A unary operator that applies a minus to each element in a valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt; operator-( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are minus those of the operand array.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_eminus.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 10 );
   valarray&lt;int&gt; vaMINUS ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  i-1;
   
   cout &lt;&lt; "The initial valarray is:  ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaMINUS = -vaL;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the operator+ is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaMINUS [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is:  ( 0 0 -2 2 -4 4 -6 6 -8 8 ).
The element-by-element result of the operator+ is the
 valarray: ( 0 0 2 -2 4 -4 6 -6 8 -8 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator-_eq">
        <!--486bbe9b-f42e-4503-ba2d-6c7286c04433-->
        <title>valarray::operator-=</title>
        <content>
            <para>Subtracts the elements of a specified valarray or a value of the element type, element-wise, from an operand valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator-=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator-=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to be subtracted, element-wise, from the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the element-wise difference of the operand valarray and <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_esub.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  10;
   for ( i = 1 ; i &lt; 8 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i &lt; 8 ; i++ )
      vaR [ i ] =  i;
   
   cout &lt;&lt; "The initial valarray is: ( ";
      for (i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The initial _Right valarray is: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL -= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the difference is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 8 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is: ( 10 0 10 0 10 0 10 0 ).
The initial _Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the difference is the
 valarray: ( 10 -1 8 -3 6 -5 4 -7 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator__eq">
        <!--f801e000-1c86-4de6-9c24-493107b511a0-->
        <title>valarray::operator/=</title>
        <content>
            <para>Divides an operand valarray element-wise by the elements of a specified valarray or a value of the element type.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator/=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator/=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to be divided, element-wise, into the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the element-wise quotient of the operand valarray divided by <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_ediv.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;double&gt; vaL ( 6 ), vaR ( 6 );
   for ( i = 0 ; i &lt; 6 ; i += 2 )
      vaL [ i ] =  100;
   for ( i = 1 ; i &lt; 6 ; i += 2 )
      vaL [ i ] =  -100;
   for ( i = 0 ; i &lt; 6 ; i++ )
      vaR [ i ] =  2*i;
   
   cout &lt;&lt; "The initial valarray is: ( ";
      for (i = 0 ; i &lt; 6 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The initial Right valarray is: ( ";
      for (i = 0 ; i &lt; 6 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL /= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the quotient is the\n valarray: ( ";
      for (i = 0 ; i &lt; 6 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray is: ( 100 -100 100 -100 100 -100 ).
The initial Right valarray is: ( 0 2 4 6 8 10 ).
The element-by-element result of the quotient is the
 valarray: ( 1.#INF -50 25 -16.6667 12.5 -10 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_eq">
        <!--b29af906-f22d-4423-84a5-9374b4a31804-->
        <title>valarray::operator=</title>
        <content>
            <para>Assigns elements to a valarray whose values are specified either directly or as part of some other valarray or by a slice_array, gslice_array, mask_array, or indirect_array.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator=(</legacyBold> <legacyBold>   valarray&lt;Type&gt;&amp;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator=(</legacyBold> <legacyBold>   const slice</legacyBold> <parameterReference>_</parameterReference> <legacyBold>array&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Slicearray</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator=(</legacyBold> <legacyBold>   const gslice</legacyBold> <parameterReference>_</parameterReference> <legacyBold>array&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Gslicearray</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator=(</legacyBold> <legacyBold>   const mask</legacyBold> <parameterReference>_</parameterReference> <legacyBold>array&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Maskarray</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator=(</legacyBold> <legacyBold>   const indirect</legacyBold> <parameterReference>_</parameterReference> <legacyBold>array&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Indarray</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray to be copied into the operand valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be assigned to the elements of the operand valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Slicearray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The slice_array to be copied into the operand valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Gslicearray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The gslice_array to be copied into the operand valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Maskarray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The mask_array to be copied into the operand valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Indarray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The indirect_array to be copied into the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The first member operator replaces the controlled sequence with a copy of the sequence controlled by <parameterReference>_Right</parameterReference>.</para>
                    <para>The second member operator is the same as the first, but with an <link xlink:href="eab0ce3a-c5a3-4992-aa70-6a8ab1f7491d">rvalue reference</link>.</para>
                    <para>The third member operator replaces each element of the controlled sequence with a copy of <parameterReference>_Val</parameterReference>.</para>
                    <para>The remaining member operators replace those elements of the controlled sequence selected by their arguments, which are generated only by <legacyLink xlink:href="#valarray__operator_at">operator[]</legacyLink>. </para>
                    <para>If the value of a member in the replacement controlled sequence depends on a member in the initial controlled sequence, the result is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the length of the controlled sequence changes, the result is generally undefined. In this implementation, however, the effect is merely to invalidate any pointers or references to elements in the controlled sequence.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_assign.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; va ( 10 ), vaR ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 1 )
      va [ i ] = i;
   for ( i = 0 ; i &lt; 10 ; i+=1 )
      vaR [ i ] = 10 -  i;

   cout &lt;&lt; "The operand valarray va is:";
   for ( i = 0 ; i &lt; 10 ; i++ )
      cout &lt;&lt; " " &lt;&lt; va [ i ];
   cout &lt;&lt; endl;

   cout &lt;&lt; "The operand valarray vaR is:";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; " " &lt;&lt; vaR [ i ];
   cout &lt;&lt; endl;

   // Assigning vaR to va with the first member functon
   va = vaR;
   cout &lt;&lt; "The reassigned valarray va is:";
   for ( i = 0 ; i &lt; 10 ; i++ )
      cout &lt;&lt; " " &lt;&lt; va [ i ];
   cout &lt;&lt; endl;

   // Assigning elements of value 10 to va
   // with the second member functon
   va = 10;
   cout &lt;&lt; "The reassigned valarray va is:";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; " " &lt;&lt; va [ i ];
   cout &lt;&lt; endl;
}
\* Output: 
The operand valarray va is: 0 1 2 3 4 5 6 7 8 9
The operand valarray vaR is: 10 9 8 7 6 5 4 3 2 1
The reassigned valarray va is: 10 9 8 7 6 5 4 3 2 1
The reassigned valarray va is: 10 10 10 10 10 10 10 10 10 10
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_at">
        <!--c1750085-b0a7-474b-aed9-0f3b38b3a6a0-->
        <title>valarray::operator[]</title>
        <content>
            <para>Returns a reference to an element or its value at specified index or a specified subset.</para>
            <legacySyntax>Type&amp; operator[](size_t <parameterReference>_Off</parameterReference>);
slice_array&lt;Type&gt; operator[](slice <parameterReference>_Slicearray</parameterReference>);
gslice_array&lt;Type&gt; operator[](const gslice&amp; <parameterReference>_Gslicearray</parameterReference>);
mask_array&lt;Type&gt; operator[](const valarray&lt;bool&gt;&amp; <parameterReference>_Boolarray</parameterReference>);
indirect_array&lt;Type&gt; operator[](const valarray&lt;size_t&gt;&amp; <parameterReference>_Indarray</parameterReference>);
Type operator[](size_t <parameterReference>_Off</parameterReference>) const;
valarray&lt;Type&gt; operator[](slice <parameterReference>_Slice</parameterReference>) const;
valarray&lt;Type&gt; operator[](const gslice&amp; <parameterReference>_Gslicearray</parameterReference>) const;
valarray&lt;Type&gt; operator[](const valarray&lt;bool&gt;&amp; <parameterReference>_Boolarray</parameterReference>) const;
valarray&lt;Type&gt; operator[](const valarray&lt;size_t&gt;&amp; <parameterReference>_Indarray</parameterReference>) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Off</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of the element to be assigned a value.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Slicearray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A slice_array of a valarray that specifies a subset to be selected or returned to a new valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Gslicearray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A gslice_array of a valarray that specifies a subset to be selected or returned to a new valarray.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>_Boolarray</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A bool_array of a valarray that specifies a subset to be selected or returned to a new valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Indarray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An indirect_array of a valarray that specifies a subset to be selected or returned to a new valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to an element or its value at specified index or a specified subset.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member operator is overloaded to provide several ways to select sequences of elements from among those controlled by                         <legacyItalic>*</legacyItalic> <legacyBold>this</legacyBold>. The first group of five member operators work in conjunction with various overloads of <legacyLink xlink:href="#valarray__operator_eq">operator=</legacyLink> (and other assigning operators) to allow selective replacement (slicing) of the controlled sequence. The selected elements must exist.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element outside the bounds of the valarray.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the examples for <legacyLink xlink:href="00f0b03d-d657-4b81-ba53-5a9034bb2bf2#slice__slice">slice::slice</legacyLink> and <legacyLink xlink:href="f47cffd0-ea59-4b13-848b-7a5ce1d7e2a3#gslice__gslice">gslice::gslice</legacyLink> for an example of how to declare and use the operator.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_xor_eq">
        <!--0cefc10d-f6a0-4693-8b70-163cd53dd6f4-->
        <title>valarray::operator^=</title>
        <content>
            <para>Obtains the element-wise exclusive logical or operator ( <legacyBold>XOR</legacyBold>) of an array with either a specified valarray or a value of the element type.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator|=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator|=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to be combined, element-wise, by the exclusive logical <legacyBold>XOR</legacyBold> with the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the element-wise, exclusive logical <legacyBold>XOR</legacyBold> of the operand valarray and <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The exclusive logical or, referred to as <legacyBold>XOR</legacyBold>, has the following semantics: Given elements                         <legacyItalic>e</legacyItalic>1 and                         <legacyItalic>e</legacyItalic>2,                         <legacyItalic>e</legacyItalic>1 <legacyBold>XOR</legacyBold>                         <legacyItalic>e</legacyItalic>2 is <legacyBold>true</legacyBold> if exactly one of the elements is true; <legacyBold>false</legacyBold> if both elements are false or if both elements are true.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_exor.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 10 ), vaR ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  i-1;
   for ( i = 2 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  i-1;
   
   cout &lt;&lt; "The initial operand valarray is:  ( ";
      for (i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The _Right valarray is: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL ^= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the bitwise XOR operator^= is the\n valarray: ( ";
      for (i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial operand valarray is:  ( 1 0 1 0 1 0 1 0 1 0 ).
The _Right valarray is: ( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the bitwise XOR operator^= is the
 valarray: ( 1 0 0 3 2 4 7 6 6 9 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_or_eq">
        <!--01a9e549-ada8-44e2-b674-ed1e8b4e5913-->
        <title>valarray::operator|=</title>
        <content>
            <para>Obtains the bitwise <languageKeyword>OR</languageKeyword> of elements in an array either with the corresponding elements in a specified valarray or with a value of the element type.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt;&amp; operator|=(</legacyBold> <legacyBold>   const valarray&lt;Type&gt;&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold> <legacyBold>valarray&lt;Type&gt;&amp; operator|=(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The valarray or value of an element type identical to that of the operand valarray that is to be combined, element-wise, by the bitwise <languageKeyword>OR</languageKeyword> with the operand valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A valarray whose elements are the element-wise bitwise <languageKeyword>OR</languageKeyword> of the operand valarray by <parameterReference>_Right.</parameterReference>
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A bitwise operation can only be used to manipulate bits in <languageKeyword>char</languageKeyword> and <languageKeyword>int</languageKeyword> data types and variants and not on <legacyBold>float</legacyBold>, <legacyBold>double</legacyBold>, <legacyBold>long</legacyBold> <legacyBold>double</legacyBold>, <languageKeyword>void</languageKeyword>, <languageKeyword>bool</languageKeyword>, or other, more complex data types.</para>
                    <para>The bitwise <languageKeyword>OR</languageKeyword> has the same truth table as the logical <languageKeyword>OR</languageKeyword> but applies to the data type on the level of the individual bits. Given bits                         <legacyItalic>b</legacyItalic>1 and                         <legacyItalic>b</legacyItalic>2,                         <legacyItalic>b</legacyItalic>1 <languageKeyword>OR</languageKeyword>                         <legacyItalic>b</legacyItalic>2 is <legacyBold>true</legacyBold> if at least one of the bits is true; <legacyBold>false</legacyBold> if both bits are false.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_class_op_bitor.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; vaL ( 10 ), vaR ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  i-1;
   for ( i = 2 ; i &lt; 10 ; i += 3 )
      vaR [ i ] =  i-1;
   
   cout &lt;&lt; "The initial operand valarray is:\n ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The _Right valarray is:\n ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaR [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaL |= vaR;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the logical OR\n operator|= is the valarray:\n ( ";
      for (i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial operand valarray is:
 ( 1 0 1 0 1 0 1 0 1 0 ).
The _Right valarray is:
 ( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the logical OR
 operator|= is the valarray:
 ( 1 0 1 3 3 4 7 6 7 9 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__operator_dtor">
        <!--5f5fadcf-28ca-4bab-a7ab-cb6d09871dc5-->
        <title>valarray::operator~</title>
        <content>
            <para>A unary operator that obtains the bitwise <legacyBold>NOT</legacyBold> values of each element in a valarray.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt; operator~( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The valarray of Boolean values that are the bitwise <legacyBold>NOT</legacyBold> of the element values of the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A bitwise operation can only be used to manipulate bits in <languageKeyword>char</languageKeyword> and <languageKeyword>int</languageKeyword> data types and variants and not on <legacyBold>float</legacyBold>, <legacyBold>double</legacyBold>, <legacyBold>long</legacyBold> <legacyBold>double</legacyBold>, <languageKeyword>void</languageKeyword>, <languageKeyword>bool</languageKeyword> or other, more complex data types.</para>
                    <para>The bitwise <legacyBold>NOT</legacyBold> has the same truth table as the logical <legacyBold>NOT</legacyBold> but applies to the data type on the level of the individual bits. Given bit                         <legacyItalic>b</legacyItalic>, ~                        <legacyItalic>b</legacyItalic> is true if                         <legacyItalic>b</legacyItalic> is false and false if                         <legacyItalic>b</legacyItalic> is true. The logical <legacyBold>NOT</legacyBold> <legacyLink xlink:href="#valarray__operator_not">operator!</legacyLink> applies on an element level, counting all nonzero values as <legacyBold>true</legacyBold>, and the result is a valarray of Boolean values. The bitwise <legacyBold>NOT</legacyBold> <legacyBold>operator~</legacyBold>, by contrast, can result in a valarray of values other than 0 or 1, depending on outcome of the bitwise operation.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_op_bitnot.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;unsigned short int&gt; vaL1 ( 10 );
   valarray&lt;unsigned short int&gt; vaNOT1 ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL1 [ i ] =  i;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL1 [ i ] =  5*i;
   
   cout &lt;&lt; "The initial valarray &lt;unsigned short int&gt; is:  ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL1 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaNOT1 = ~vaL1;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the bitwise NOT operator~ is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaNOT1 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl &lt;&lt; endl;

   valarray&lt;int&gt; vaL2 ( 10 );
   valarray&lt;int&gt; vaNOT2 ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      vaL2 [ i ] =  i;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      vaL2 [ i ] =  -2 * i;
   
   cout &lt;&lt; "The initial valarray &lt;int&gt; is:  ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaL2 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   vaNOT2 = ~vaL2;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "the bitwise NOT operator~ is the\n valarray: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaNOT2 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // The negative numbers are represented using
   // the two's complement approach, so adding one
   // to the flipped bits returns the negative elements
   vaNOT2 = vaNOT2 + 1;
   cout &lt;&lt; "The element-by-element result of "
        &lt;&lt; "adding one\n is the negative of the "
        &lt;&lt; "original elements the\n valarray: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; vaNOT2 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial valarray &lt;unsigned short int&gt; is:  ( 0 5 2 15 4 25 6 35 8 45 ).
The element-by-element result of the bitwise NOT operator~ is the
 valarray: ( 65535 65530 65533 65520 65531 65510 65529 65500 65527 65490 ).

The initial valarray &lt;int&gt; is:  ( 0 -2 2 -6 4 -10 6 -14 8 -18 ).
The element-by-element result of the bitwise NOT operator~ is the
 valarray: ( -1 1 -3 5 -5 9 -7 13 -9 17 ).
The element-by-element result of adding one
 is the negative of the original elements the
 valarray: ( 0 2 -2 6 -4 10 -6 14 -8 18 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__resize">
        <!--33d9f421-43f0-4630-b08d-f56b0b76f70b-->
        <title>valarray::resize</title>
        <content>
            <para>Changes the number of elements in a valarray to a specified number.</para>
            <legacySyntax>void resize(
   size_t <parameterReference>_Newsize</parameterReference>
);
void resize(
   size_t <parameterReference>_Newsize</parameterReference>, 
   const Type <parameterReference>_Val</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Newsize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of elements in the resized valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be given to the elements of the resized valarray.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first member function initializes elements with their default constructor.</para>
                    <para>Any pointers or references to elements in the controlled sequence are invalidated.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>The following example demonstrates the use of the valarray::resize member function.</para>
                        <!--EndSnipComment-->
                    <code>// valarray_resize.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    int i;
    size_t size1, sizeNew;

    valarray&lt;int&gt; va1(10);
    for (i = 0; i &lt; 10; i+=1)
        va1[i] = i;

    cout &lt;&lt; "The valarray contains ( ";
        for (i = 0; i &lt; 10; i++)
            cout &lt;&lt; va1[i] &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    size1 = va1.size();
    cout &lt;&lt; "The number of elements in the valarray is: "
         &lt;&lt; size1  &lt;&lt; "." &lt;&lt;endl &lt;&lt; endl;

    va1.resize(15, 10);

    cout &lt;&lt; "The valarray contains ( ";
        for (i = 0; i &lt; 15; i++)
            cout &lt;&lt; va1[i] &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;
    sizeNew = va1.size();
    cout &lt;&lt; "The number of elements in the resized valarray is: "
         &lt;&lt; sizeNew  &lt;&lt; "." &lt;&lt;endl &lt;&lt; endl;
}
\* Output: 
The valarray contains ( 0 1 2 3 4 5 6 7 8 9 ).
The number of elements in the valarray is: 10.

The valarray contains ( 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 ).
The number of elements in the resized valarray is: 15.
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__shift">
        <!--50546b9c-b62b-474a-9069-63a9a1d7e939-->
        <title>valarray::shift</title>
        <content>
            <para>Shifts all the elements in a valarray by a specified number of places.</para>
            <legacySyntax> <legacyBold>valarray&lt;Type&gt; shift(</legacyBold> <legacyBold>   int </legacyBold> <parameterReference>_Count</parameterReference> <legacyBold>) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of places the elements are to be shifted forward.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A new valarray in which all the elements have been moved <parameterReference>_Count</parameterReference> positions toward the front of the valarray, left with respect to their positions in the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A positive value of <parameterReference>_Count</parameterReference> shifts the elements left <parameterReference>_Count</parameterReference> places, with zero fill.</para>
                    <para>A negative value of <parameterReference>_Count</parameterReference> shifts the elements right <parameterReference>_Count</parameterReference> places, with zero fill.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_shift.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   valarray&lt;int&gt; va1 ( 10 ), va2 ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 1 )
      va1 [ i ] =  i;
   for ( i = 0 ; i &lt; 10 ; i += 1 )
      va2 [ i ] = 10 -  i;

   cout &lt;&lt; "The operand valarray va1(10) is: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; va1 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // A positive parameter shifts elements left
   va1 = va1.shift ( 4 );
   cout &lt;&lt; "The shifted valarray va1 is: va1.shift (4) = ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; va1 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The operand valarray va2(10) is: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; va2 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // A negative parameter shifts elements right
   va2 = va2.shift ( - 4 );
   cout &lt;&lt; "The shifted valarray va2 is: va2.shift (-4) = ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; va2 [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The operand valarray va1(10) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The shifted valarray va1 is: va1.shift (4) = ( 4 5 6 7 8 9 0 0 0 0 ).
The operand valarray va2(10) is: ( 10 9 8 7 6 5 4 3 2 1 ).
The shifted valarray va2 is: va2.shift (-4) = ( 0 0 0 0 10 9 8 7 6 5 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__size">
        <!--53cf762f-2132-46e4-bd75-87d9576aa1ef-->
        <title>valarray::size</title>
        <content>
            <para>Finds the number of elements in a valarray.</para>
            <legacySyntax> <legacyBold>size</legacyBold> <parameterReference>_</parameterReference> <legacyBold>t size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of elements in the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>The following example demonstrates the use of the valarray::size member function.</para>
                        <!--EndSnipComment-->
                    <code>// valarray_size.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    int i;
    size_t size1, size2;

    valarray&lt;int&gt; va1(10), va2(12);
    for (i = 0; i &lt; 10; i += 1)
        va1[i] =  i;
    for (i = 0; i &lt; 10; i += 1)
        va2[i] =  i;

    cout &lt;&lt; "The operand valarray va1(10) is: ( ";
        for (i = 0; i &lt; 10; i++)
            cout &lt;&lt; va1[i] &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    size1 = va1.size();
    cout &lt;&lt; "The number of elements in the valarray va1 is: va1.size = "
         &lt;&lt; size1  &lt;&lt; "." &lt;&lt;endl &lt;&lt; endl;

    cout &lt;&lt; "The operand valarray va2(12) is: ( ";
        for (i = 0; i &lt; 10; i++)
            cout &lt;&lt; va2[i] &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    size2 = va2.size();
    cout &lt;&lt; "The number of elements in the valarray va2 is: va2.size = "
         &lt;&lt; size2  &lt;&lt; "." &lt;&lt; endl &lt;&lt; endl;

    // Initializing two more elements to va2
    va2[10] = 10;
    va2[11] = 11;
    cout &lt;&lt; "After initializing two more elements,\n "
         &lt;&lt; "the operand valarray va2(12) is now: ( ";
        for (i = 0; i &lt; 12; i++)
            cout &lt;&lt; va2[i] &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;
    cout &lt;&lt; "The number of elements in the valarray va2 is still: "
         &lt;&lt; size2  &lt;&lt; "." &lt;&lt; endl;
}
\* Output: 
The operand valarray va1(10) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The number of elements in the valarray va1 is: va1.size = 10.

The operand valarray va2(12) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The number of elements in the valarray va2 is: va2.size = 12.

After initializing two more elements,
 the operand valarray va2(12) is now: ( 0 1 2 3 4 5 6 7 8 9 10 11 ).
The number of elements in the valarray va2 is still: 12.
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__sum">
        <!--da32baf6-cee5-48c3-977a-7fdce195ba66-->
        <title>valarray::sum</title>
        <content>
            <para>Determines the sum of all the elements in a valarray of nonzero length.</para>
            <legacySyntax> <legacyBold>Type sum( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The sum of the elements of the operand valarray.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the length is greater than one, the member function adds values to the sum by applying <unmanagedCodeEntityReference>operator+=</unmanagedCodeEntityReference> between pairs of elements of class <ui>Type</ui>, which operator, consequently, needs be provided for elements of type <ui>Type</ui>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_sum.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;
   int sumva = 0;

   valarray&lt;int&gt; va ( 10 );
   for ( i = 0 ; i &lt; 10 ; i+=1 )
      va [ i ] =  i;

   cout &lt;&lt; "The operand valarray va (10) is: ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; va [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   sumva = va.sum ( );
   cout &lt;&lt; "The sum of elements in the valarray is: "
        &lt;&lt; sumva  &lt;&lt; "." &lt;&lt;endl;
}
\* Output: 
The operand valarray va (10) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The sum of elements in the valarray is: 45.
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__swap">
        <!--261a6b2d-96a9-4fa3-87ec-d6be7e131eed-->
        <title>valarray::swap</title>
        <content>
            <para>Exchanges the elements of two <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference>s.</para>
            <legacySyntax>void swap(valarray&amp; _Right);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <parameterReference>_Right</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A <unmanagedCodeEntityReference>valarray</unmanagedCodeEntityReference> providing the elements to be swapped.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member function swaps the controlled sequences between <codeInline>*this</codeInline> and <codeInline>_Right</codeInline>. It does so in constant time, it throws no exceptions, and it invalidates no references, pointers, or iterators that designate elements in the two controlled sequences.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__valarray">
        <!--02fe09e6-4e9c-4c19-a950-287f335392ca-->
        <title>valarray::valarray</title>
        <content>
            <para>Constructs a valarray of a specific size or with elements of a specific value or as a copy of another valarray or subset of another valarray.</para>
            <legacySyntax>valarray( );
explicit valarray(
   size_t <parameterReference>Count</parameterReference>
);
valarray(
   const Type&amp; <parameterReference>Val</parameterReference>, 
   size_t <parameterReference>Count</parameterReference>
);
valarray(
   const Type* <parameterReference>Ptr</parameterReference>, 
   size_t <parameterReference>Count</parameterReference>
);
valarray(
   const valarray&lt;Type&gt;&amp; <parameterReference>Right</parameterReference>
);
valarray(
   const slice_array&lt;Type&gt;&amp; <parameterReference>SliceArray</parameterReference>
);
valarray(
   const gslice_array&lt;Type&gt;&amp; <parameterReference>GsliceArray</parameterReference>
);
valarray(
   const mask_array&lt;Type&gt;&amp; <parameterReference>MaskArray</parameterReference>
);
valarray(
   const indirect_array&lt;Type&gt;&amp; <parameterReference>IndArray</parameterReference>
);
valarray(
   valarray&lt;Type&gt;&amp;&amp; <parameterReference>Right</parameterReference>
);
valarray(
    initializer_list&lt;Type&gt; <parameterReference>IList</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of elements to be in the valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be used in initializing the elements in the valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>Ptr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the values to be used to initialize the elements in the valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An existing valarray to initialize the new valarray.</para>
                        </definition>
                        <definedTerm> <parameterReference>SliceArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A slice_array whose element values are to be used in initializing the elements of the valarray being constructed.</para>
                        </definition>
                        <definedTerm> <parameterReference>GsliceArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A gslice_array whose element values are to be used in initializing the elements of the valarray being constructed.</para>
                        </definition>
                        <definedTerm> <parameterReference>MaskArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A mask_array whose element values are to be used in initializing the elements of the valarray being constructed.</para>
                        </definition>
                        <definedTerm> <parameterReference>IndArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A indirect_array whose element values are to be used in initializing the elements of the valarray being constructed.</para>
                        </definition>
                        <definedTerm> <parameterReference>IList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initializer_list containing the elements to copy.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first (default) constructor initializes the object to an empty array. The next three constructors each initialize the object to an array of <parameterReference>Count</parameterReference> elements as follows:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>For explicit <codeInline>valarray(size_t Count)</codeInline>, each element is initialized with the default constructor.</para>
                        </listItem>
                        <listItem>
                            <para>For <codeInline>valarray(const Type&amp; Val, Count)</codeInline>, each element is initialized with <parameterReference>Val</parameterReference>.</para>
                        </listItem>
                        <listItem>
                            <para>For <codeInline>valarray(const Type* Ptr, Count)</codeInline>, the element at position <parameterReference>I</parameterReference> is initialized with <parameterReference>Ptr</parameterReference>[ <parameterReference>I</parameterReference>].</para>
                        </listItem>
                    </list>
                    <para>Each remaining constructor initializes the object to a valarray&lt;Type&gt; object determined by the subset specified in the argument.</para>
                    <para>The last constructor is the same as the next to last, but with an <link xlink:href="eab0ce3a-c5a3-4992-aa70-6a8ab1f7491d">rvalue reference</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_ctor.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    int i;

    // The second member function
    valarray&lt;int&gt; va(10);
    for (auto i : va){
        va[i] = 2 * (i + 1);
    }

    cout &lt;&lt; "The operand valarray va is:\n(";
    for (auto i : va) {
        cout &lt;&lt; " " &lt;&lt; va[i];
    }
    cout &lt;&lt; " )" &lt;&lt; endl;

    slice Slice(2, 4, 3);

    // The fifth member function
    valarray&lt;int&gt; vaSlice = va[Slice];

    cout &lt;&lt; "The new valarray initialized from the slice is vaSlice ="
        &lt;&lt; "\nva[slice( 2, 4, 3)] = (";
    for (int i = 0; i &lt; 3; i++) {
        cout &lt;&lt; " " &lt;&lt; vaSlice[i];
    }
    cout &lt;&lt; " )" &lt;&lt; endl;

    valarray&lt;int&gt; va2{{ 1, 2, 3, 4 }};
    for (auto&amp; v : va2){
        cout &lt;&lt; v &lt;&lt; " ";
    }
    cout &lt;&lt; endl;
}
</code>
                    <!--SnipComment-->
                            <computerOutput>The operand valarray va is:( 0 2 2 2 2 2 2 2 2 2 )The new valarray initialized from the slice is vaSlice =va[slice( 2, 4, 3)] = ( 0 0 0 )1 2 3 4</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="valarray__value_type">
        <!--60436647-a39e-4172-9fb2-9a521e507ef1-->
        <title>valarray::value_type</title>
        <content>
            <para>A type that represents the type of element stored in a valarray.</para>
            <legacySyntax> <legacyBold>typedef Type value</legacyBold> <parameterReference>_</parameterReference> <legacyBold>type;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the template parameter <ui>Type</ui>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// valarray_value_type.cpp
// compile with: /EHsc
#include &lt;valarray&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;
   valarray&lt;int&gt; va ( 10 );
   for ( i = 0 ; i &lt; 10 ; i += 2 )
      va [ i ] =  i;
   for ( i = 1 ; i &lt; 10 ; i += 2 )
      va [ i ] =  -1;
   
   cout &lt;&lt; "The initial operand valarray is:  ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; va [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // value_type declaration and initialization:
   valarray&lt;int&gt;::value_type Right = 10;

   cout &lt;&lt; "The decalared value_type Right is: " 
           &lt;&lt; Right &lt;&lt; endl;
   va *= Right;
   cout &lt;&lt; "The resulting valarray is:  ( ";
      for ( i = 0 ; i &lt; 10 ; i++ )
         cout &lt;&lt; va [ i ] &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The initial operand valarray is:  ( 0 -1 2 -1 4 -1 6 -1 8 -1 ).
The decalared value_type Right is: 10
The resulting valarray is:  ( 0 -10 20 -10 40 -10 60 -10 80 -10 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link>
    </relatedTopics>
</developerReferenceWithoutSyntaxDocument>



