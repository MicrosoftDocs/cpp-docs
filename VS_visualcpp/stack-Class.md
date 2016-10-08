---
title: "stack Class"
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
ms.assetid: 02151c1e-eab0-41b8-be94-a839ead78ecf
caps.latest.revision: 16
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
# stack Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A template container adaptor class that provides a restriction of functionality limiting access to the element most recently added to some underlying container type. The stack class is used when it is important to be clear that only stack operations are being performed on the container.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax> <legacyBold>template &lt;</legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Type</parameterReference> <legacyBold>, </legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Container=</parameterReference> <legacyBold>deque</legacyBold> <parameterReference>&lt;Type&gt; </parameterReference> <legacyBold>&gt;</legacyBold> <legacyBold>class stack</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm>
                    <legacyItalic>Type</legacyItalic>
                </definedTerm>
                <definition>
                    <para>The element data type to be stored in the stack.</para>
                </definition>
                <definedTerm> <parameterReference>Container</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type of the underlying container used to implement the stack. The default value is the class <unmanagedCodeEntityReference>deque</unmanagedCodeEntityReference>
                        <legacyItalic>&lt;Type&gt;</legacyItalic>.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The elements of class <ui>Type</ui> stipulated in the first template parameter of a stack object are synonymous with <legacyLink xlink:href="#stack__value_type">value_type</legacyLink> and must match the type of element in the underlying container class <legacyBold>Container</legacyBold> stipulated by the second template parameter. The <ui>Type</ui> must be assignable, so that it is possible to copy objects of that type and to assign values to variables of that type.</para>
            <para>Suitable underlying container classes for stack include <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</legacyLink>, "list class", and "vector class", or any other sequence container that supports the operations of <legacyBold>back</legacyBold>, <unmanagedCodeEntityReference>push_back</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>pop_back</unmanagedCodeEntityReference>. The underlying container class is encapsulated within the container adaptor, which exposes only the limited set of the sequence container member functions as a public interface.</para>
            <para>The stack objects are equality comparable if and only if the elements of class <ui>Type</ui> are equality comparable and are less-than comparable if and only if the elements of class <ui>Type</ui> are less-than comparable.  </para>
            <list class="bullet">
                <listItem>
                    <para>The stack class supports a last-in, first-out (LIFO) data structure. A good analogue to keep in mind would be a stack of plates. Elements (plates) may be inserted, inspected, or removed only from the top of the stack, which is the last element at the end of the base container. The restriction to accessing only the top element is the reason for using the stack class.</para>
                </listItem>
                <listItem>
                    <para>The "queue class" supports a first-in, first-out (FIFO) data structure. A good analogue to keep in mind would be people lining up for a bank teller. Elements (people) may be added to the back of the line and are removed from the front of the line. Both the front and the back of a line may be inspected. The restriction to accessing only the front and back elements in this way is the reason fur using the queue class.</para>
                </listItem>
                <listItem>
                    <para>The <legacyLink xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">priority_queue class</legacyLink> orders its elements so that the largest element is always at the top position. It supports insertion of an element and the inspection and removal of the top element. A good analogue to keep in mind would be people lining up where they are arranged by age, height, or some other criterion.</para>
                </listItem>
            </list>
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
                                    <para> <legacyLink xlink:href="#stack__stack">stack</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference> that is empty or that is a copy of a base container object. </para>
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
                                    <para> <legacyLink xlink:href="#stack__container_type">container_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides the base container to be adapted by a <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#stack__size_type">size_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>An unsigned integer type that can represent the number of elements in a <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#stack__value_type">value_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the type of object stored as an element in a <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference>.</para>
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
                                    <para> <legacyLink xlink:href="#stack__empty">empty</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tests if the <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference> is empty.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#stack__pop">pop</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes the element from the top of the <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#stack__push">push</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the top of the <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#stack__size">size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of elements in the <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#stack__top">top</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to an element at the top of the <unmanagedCodeEntityReference>stack</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header:</legacyBold> &lt;stack&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="stack__container_type">
        <!--2b877bb6-d884-408c-b625-d2d6b6121332-->
        <title>stack::container_type</title>
        <content>
            <para>A type that provides the base container to be adapted.</para>
            <legacySyntax> <legacyBold>typedef Container</legacyBold> <legacyBold>container_type</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the template parameter <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference>. All three STL sequence container classes — the vector class, list class, and the default class deque — meet the requirements to be used as the base container for a stack object. User-defined types satisfying these requirements may also be used.</para>
                    <para>For more information on <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference>, see the Remarks section of the "stack Class" topic.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#stack__stack">stack::stack</legacyLink> for an example of how to declare and use <unmanagedCodeEntityReference>container_type</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__empty">
        <!--c6c79cba-4228-45e4-a88f-da478a987052-->
        <title>stack::empty</title>
        <content>
            <para>Tests if a stack is empty.</para>
            <legacySyntax> <legacyBold>bool empty( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the stack is empty; <legacyBold>false</legacyBold> if the stack is nonempty.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// stack_empty.cpp
// compile with: /EHsc
#include &lt;stack&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   // Declares stacks with default deque base container
   stack &lt;int&gt; s1, s2;

   s1.push( 1 );

   if ( s1.empty( ) )
      cout &lt;&lt; "The stack s1 is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The stack s1 is not empty." &lt;&lt; endl;

   if ( s2.empty( ) )
      cout &lt;&lt; "The stack s2 is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The stack s2 is not empty." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The stack s1 is not empty.
The stack s2 is empty.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__pop">
        <!--689ea260-392b-410e-8f84-b6fc83915ce0-->
        <title>stack::pop</title>
        <content>
            <para>Removes the element from the top of the stack.</para>
            <legacySyntax> <legacyBold>void pop( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The stack must be nonempty to apply the member function. The top of the stack is the position occupied by the most recently added element and is the last element at the end of the container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// stack_pop.cpp
// compile with: /EHsc
#include &lt;stack&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   stack &lt;int&gt; s1, s2;

   s1.push( 10 );
   s1.push( 20 );
   s1.push( 30 );

   stack &lt;int&gt;::size_type i;
   i = s1.size( );
   cout &lt;&lt; "The stack length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   i = s1.top( );
   cout &lt;&lt; "The element at the top of the stack is "
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   s1.pop( );

   i = s1.size( );
   cout &lt;&lt; "After a pop, the stack length is " 
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   i = s1.top( );
   cout &lt;&lt; "After a pop, the element at the top of the stack is "
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The stack length is 3.
The element at the top of the stack is 30.
After a pop, the stack length is 2.
After a pop, the element at the top of the stack is 20.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__push">
        <!--98cfb5f3-b016-4f99-b9e1-0932c9126195-->
        <title>stack::push</title>
        <content>
            <para>Adds an element to the top end of the stack.</para>
            <legacySyntax> <legacyBold>void push(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The element added to the top of the stack.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The top of the stack is the position occupied by the most recently added element and is the last element at the end of the container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// stack_push.cpp
// compile with: /EHsc
#include &lt;stack&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   stack &lt;int&gt; s1;

   s1.push( 10 );
   s1.push( 20 );
   s1.push( 30 );

   stack &lt;int&gt;::size_type i;
   i = s1.size( );
   cout &lt;&lt; "The stack length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   i = s1.top( );
   cout &lt;&lt; "The element at the top of the stack is "
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The stack length is 3.
The element at the top of the stack is 30.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__size">
        <!--46e271c4-7214-41b3-a72b-77687447e99c-->
        <title>stack::size</title>
        <content>
            <para>Returns the number of elements in the stack.</para>
            <legacySyntax> <legacyBold>size_type size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current length of the stack.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// stack_size.cpp
// compile with: /EHsc
#include &lt;stack&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   stack &lt;int&gt; s1, s2;
   stack &lt;int&gt;::size_type i;

   s1.push( 1 );
   i = s1.size( );
   cout &lt;&lt; "The stack length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   s1.push( 2 );
   i = s1.size( );
   cout &lt;&lt; "The stack length is now " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The stack length is 1.
The stack length is now 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__size_type">
        <!--792f0d52-c0d0-4651-b5b2-726a68043b82-->
        <title>stack::size_type</title>
        <content>
            <para>An unsigned integer type that can represent the number of elements in a stack.</para>
            <legacySyntax> <legacyBold>typedef typename Container::size_type</legacyBold> <legacyBold>size_type</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for <unmanagedCodeEntityReference>size_type</unmanagedCodeEntityReference> of the base container adapted by the stack.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#stack__size">size</legacyLink> for an example of how to declare and use <unmanagedCodeEntityReference>size_type</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__stack">
        <!--464567dd-7fbb-430a-b692-87dde40328d0-->
        <title>stack::stack</title>
        <content>
            <para>Constructs a stack that is empty or that is a copy of a base container class. </para>
            <legacySyntax> <legacyBold>stack( );</legacyBold> <legacyBold>explicit stack(</legacyBold> <legacyBold>   const container_type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>The container of which the constructed stack is to be a copy.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// stack_stack.cpp
// compile with: /EHsc
#include &lt;stack&gt;
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   // Declares stack with default deque base container
   stack &lt;char&gt; dsc1;

   //Explicitly declares a stack with deque base container
   stack &lt;char, deque&lt;char&gt; &gt; dsc2;

   // Declares a stack with vector base containers
   stack &lt;int, vector&lt;int&gt; &gt; vsi1;

   // Declares a stack with list base container
   stack &lt;int, list&lt;int&gt; &gt; lsi;
   
   // The second member function copies elements from a container
   vector&lt;int&gt; v1;
   v1.push_back( 1 );
   stack &lt;int, vector&lt;int&gt; &gt; vsi2( v1 );
   cout &lt;&lt; "The element at the top of stack vsi2 is "
        &lt;&lt; vsi2.top( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The element at the top of stack vsi2 is 1.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__top">
        <!--d5b36f82-7d9d-40f8-ad81-429507daa691-->
        <title>stack::top</title>
        <content>
            <para>Returns a reference to an element at the top of the stack.</para>
            <legacySyntax>reference top( );
const_reference top( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the last element in the container at the top of the stack.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The stack must be nonempty to apply the member function. The top of the stack is the position occupied by the most recently added element and is the last element at the end of the container.</para>
                    <para>If the return value of <legacyBold>top</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the stack object cannot be modified. If the return value of <legacyBold>top</legacyBold> is assigned to a <legacyBold>reference</legacyBold>, the stack object can be modified.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// stack_top.cpp
// compile with: /EHsc
#include &lt;stack&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   stack &lt;int&gt; s1;
   
   s1.push( 1 );
   s1.push( 2 );

   int&amp; i = s1.top( );
   const int&amp; ii = s1.top( );

   cout &lt;&lt; "The top integer of the stack s1 is "
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
   i--;
   cout &lt;&lt; "The next integer down is "&lt;&lt; ii &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The top integer of the stack s1 is 2.
The next integer down is 1.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="stack__value_type">
        <!--7d974141-e2eb-4b6c-8ba3-ecdedb581a32-->
        <title>stack::value_type</title>
        <content>
            <para>A type that represents the type of object stored as an element in a stack.</para>
            <legacySyntax>typedef typename Container::value_type value_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for <unmanagedCodeEntityReference>value_type</unmanagedCodeEntityReference> of the base container adapted by the stack.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// stack_value_type.cpp
// compile with: /EHsc
#include &lt;stack&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   // Declares stacks with default deque base container
   stack&lt;int&gt;::value_type AnInt;
   
   AnInt = 69;
   cout &lt;&lt; "The value_type is AnInt = " &lt;&lt; AnInt &lt;&lt; endl;

   stack&lt;int&gt; s1;
   s1.push( AnInt );
   cout &lt;&lt; "The element at the top of the stack is "
        &lt;&lt; s1.top( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The value_type is AnInt = 69
The element at the top of the stack is 69.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



