---
title: "queue Class"
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
ms.assetid: 28c20ab0-3a72-4185-9e0f-5a44eea0e204
caps.latest.revision: 15
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
# queue Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A template container adaptor class that provides a restriction of functionality for some underlying container type, limiting access to the front and back elements. Elements can be added at the back or removed from the front, and elements can be inspected at either end of the queue.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax> <legacyBold>template &lt;</legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Type</parameterReference> <legacyBold>, </legacyBold> <legacyBold>   class </legacyBold> <parameterReference>Container = </parameterReference> <legacyBold>deque</legacyBold> <parameterReference>&lt;Type&gt; </parameterReference> <legacyBold>&gt;</legacyBold> <legacyBold>class queue</legacyBold>
        </legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm>
                    <legacyItalic>Type</legacyItalic>
                </definedTerm>
                <definition>
                    <para>The element data type to be stored in the queue</para>
                </definition>
                <definedTerm> <parameterReference>Container</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type of the underlying container used to implement the queue.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The elements of class <ui>Type</ui> stipulated in the first template parameter of a queue object are synonymous with <legacyLink xlink:href="#queue__value_type">value_type</legacyLink> and must match the type of element in the underlying container class <legacyBold>Container</legacyBold> stipulated by the second template parameter. The <ui>Type</ui> must be assignable, so that it is possible to copy objects of that type and to assign values to variables of that type.</para>
            <para>Suitable underlying container classes for queue include <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque</legacyLink> and list, or any other sequence container that supports the operations of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference>, <legacyBold>back</legacyBold>, <unmanagedCodeEntityReference>push_back</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>pop_front</unmanagedCodeEntityReference>. The underlying container class is encapsulated within the container adaptor, which exposes only the limited set of the sequence container member functions as a public interface.</para>
            <para>The queue objects are equality comparable if and only if the elements of class <ui>Type</ui> are equality comparable, and are less-than comparable if and only if the elements of class <ui>Type</ui> are less-than comparable.</para>
            <para>There are three types of container adaptors defined by the STL: stack, queue, and priority_queue. Each restricts the functionality of some underlying container class to provide a precisely controlled interface to a standard data structure.   </para>
            <list class="bullet">
                <listItem>
                    <para>The stack class supports a last-in, first-out (LIFO) data structure. A good analogue to keep in mind would be a stack of plates. Elements (plates) may be inserted, inspected, or removed only from the top of the stack, which is the last element at the end of the base container. The restriction to accessing only the top element is the reason for using the stack class.</para>
                </listItem>
                <listItem>
                    <para>The queue class supports a first-in, first-out (FIFO) data structure. A good analogue to keep in mind would be people lining up for a bank teller. Elements (people) may be added to the back of the line and are removed from the front of the line. Both the front and the back of a line may be inspected. The restriction to accessing only the front and back elements in this way is the reason for using the queue class.</para>
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
                                    <para> <legacyLink xlink:href="#queue__queue">queue</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference> that is empty or that is a copy of a base container object. </para>
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
                                    <para> <legacyLink xlink:href="#queue__container_type">container_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides the base container to be adapted by the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#queue__size_type">size_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>An unsigned integer type that can represent the number of elements in a <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#queue__value_type">value_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the type of object stored as an element in a <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
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
                                    <para> <legacyLink xlink:href="#queue__back">back</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the last and most recently added element at the back of the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#queue__empty">empty</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Tests if the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference> is empty.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#queue__front">front</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the first element at the front of the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#queue__pop">pop</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes an element from the front of the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#queue__push">push</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds an element to the back of the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#queue__size">size</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of elements in the <unmanagedCodeEntityReference>queue</unmanagedCodeEntityReference>.</para>
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
            <para> <legacyBold>Header:</legacyBold> &lt;queue&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="queue__back">
        <!--da5af563-e8e3-44ff-8d4a-1ee1535203cd-->
        <title>queue::back</title>
        <content>
            <para>Returns a reference to the last and most recently added element at the back of the queue.</para>
            <legacySyntax>reference back( );
const_reference back( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The last element of the queue. If the queue is empty, the return value is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <legacyBold>back</legacyBold> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the queue object cannot be modified. If the return value of <legacyBold>back</legacyBold> is assigned to a <legacyBold>reference</legacyBold>, the queue object can be modified.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty queue.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_back.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   queue &lt;int&gt; q1;
   
   q1.push( 10 );
   q1.push( 11 );

   int&amp; i = q1.back( );
   const int&amp; ii = q1.front( );

   cout &lt;&lt; "The integer at the back of queue q1 is " &lt;&lt; i 
        &lt;&lt; "." &lt;&lt; endl;
   cout &lt;&lt; "The integer at the front of queue q1 is " &lt;&lt; ii 
        &lt;&lt; "." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__container_type">
        <!--3f1f1c34-a2d1-4406-9b6e-ba26db902f9e-->
        <title>queue::container_type</title>
        <content>
            <para>A type that provides the base container to be adapted.</para>
            <legacySyntax> <legacyBold>typedef Container</legacyBold> <legacyBold>container_type</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the template parameter <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference>. Two STL sequence container classes — the list class and the default deque class — meet the requirements to be used as the base container for a queue object. User-defined types satisfying the requirements may also be used.</para>
                    <para>For more information on <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference>, see the Remarks section of the queue Class topic.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#queue__queue">queue</legacyLink> for an example of how to declare and use <unmanagedCodeEntityReference>container_type</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__empty">
        <!--3625524d-6b82-4389-b8e8-f89010560db8-->
        <title>queue::empty</title>
        <content>
            <para>Tests if a queue is empty.</para>
            <legacySyntax> <legacyBold>bool empty( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the queue is empty; <legacyBold>false</legacyBold> if the queue is nonempty.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_empty.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
using namespace std;

   // Declares queues with default deque base container
   queue &lt;int&gt; q1, q2;

   q1.push( 1 );

   if ( q1.empty( ) )
      cout &lt;&lt; "The queue q1 is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The queue q1 is not empty." &lt;&lt; endl;

   if ( q2.empty( ) )
      cout &lt;&lt; "The queue q2 is empty." &lt;&lt; endl;
   else
      cout &lt;&lt; "The queue q2 is not empty." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The queue q1 is not empty.
The queue q2 is empty.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__front">
        <!--a3b00050-afc0-4768-8af8-f24550de13a5-->
        <title>queue::front</title>
        <content>
            <para>Returns a reference to the first element at the front of the queue.</para>
            <legacySyntax>reference front( );
const_reference front( ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The first element of the queue. If the queue is empty, the return value is undefined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <unmanagedCodeEntityReference>const_reference</unmanagedCodeEntityReference>, the queue object cannot be modified. If the return value of <unmanagedCodeEntityReference>front</unmanagedCodeEntityReference> is assigned to a <legacyBold>reference</legacyBold>, the queue object can be modified.</para>
                    <para>The member function returns a <legacyBold>reference</legacyBold> to the first element of the controlled sequence, which must be nonempty.</para>
                    <para>When compiling with _SECURE_SCL 1, a runtime error will occur if you attempt to access an element in an empty queue.  See <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link> for more information.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_front.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   queue &lt;int&gt; q1;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   queue &lt;int&gt;::size_type i;
   i = q1.size( );
   cout &lt;&lt; "The queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   int&amp; ii = q1.back( );
   int&amp; iii = q1.front( );

   cout &lt;&lt; "The integer at the back of queue q1 is " &lt;&lt; ii 
        &lt;&lt; "." &lt;&lt; endl;
   cout &lt;&lt; "The integer at the front of queue q1 is " &lt;&lt; iii 
        &lt;&lt; "." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__pop">
        <!--c1a14d36-1b0f-4342-807e-b2ca479e61ec-->
        <title>queue::pop</title>
        <content>
            <para>Removes an element from the front of the queue.</para>
            <legacySyntax> <legacyBold>void pop( );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The queue must be nonempty to apply the member function. The top of the queue is the position occupied by the most recently added element and is the last element at the end of the container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_pop.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   queue &lt;int&gt; q1, s2;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   queue &lt;int&gt;::size_type i;
   i = q1.size( );
   cout &lt;&lt; "The queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   i = q1.front( );
   cout &lt;&lt; "The element at the front of the queue is "
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   q1.pop( );

   i = q1.size( );
   cout &lt;&lt; "After a pop the queue length is " 
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   i = q1. front ( );
   cout &lt;&lt; "After a pop, the element at the front of the queue is "
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The queue length is 3.
The element at the front of the queue is 10.
After a pop the queue length is 2.
After a pop, the element at the front of the queue is 20.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__push">
        <!--b8860daf-cb56-42e9-bdbb-3add2843a7b3-->
        <title>queue::push</title>
        <content>
            <para>Adds an element to the back of the queue.</para>
            <legacySyntax> <legacyBold>void push(</legacyBold> <legacyBold>   const Type&amp; </legacyBold> <parameterReference>val</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The element added to the back of the queue.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The back of the queue is the position occupied by the most recently added element and is the last element at the end of the container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_push.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   queue &lt;int&gt; q1;

   q1.push( 10 );
   q1.push( 20 );
   q1.push( 30 );

   queue &lt;int&gt;::size_type i;
   i = q1.size( );
   cout &lt;&lt; "The queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   i = q1.front( );
   cout &lt;&lt; "The element at the front of the queue is "
        &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The queue length is 3.
The element at the front of the queue is 10.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__queue">
        <!--86e62476-c2ca-4460-abdc-f9fc5f61e83b-->
        <title>queue::queue</title>
        <content>
            <para>Constructs a queue that is empty or that is a copy of a base container object. </para>
            <legacySyntax> <legacyBold>queue( );</legacyBold> <legacyBold>explicit queue(</legacyBold> <legacyBold>   const container_type&amp; </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>The <legacyBold>const</legacyBold> container of which the constructed queue is to be a copy.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default base container for queue is deque. You can also specify list as a base container, but you cannot specify vector, because it lacks the required <unmanagedCodeEntityReference>pop_front</unmanagedCodeEntityReference> member function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_queue.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   // Declares queue with default deque base container
   queue &lt;char&gt; q1;

   // Explicitly declares a queue with deque base container
   queue &lt;char, deque&lt;char&gt; &gt; q2;

   // These lines don't cause an error, even though they
   // declares a queue with a vector base container
   queue &lt;int, vector&lt;int&gt; &gt; q3;
   q3.push( 10 );
   // but the following would cause an error because vector has 
   // no pop_front member function
   // q3.pop( );

   // Declares a queue with list base container
   queue &lt;int, list&lt;int&gt; &gt; q4;
   
   // The second member function copies elements from a container
   list&lt;int&gt; li1;
   li1.push_back( 1 );
   li1.push_back( 2 );
   queue &lt;int, list&lt;int&gt; &gt; q5( li1 );
   cout &lt;&lt; "The element at the front of queue q5 is "
        &lt;&lt; q5.front( ) &lt;&lt; "." &lt;&lt; endl;
   cout &lt;&lt; "The element at the back of queue q5 is "
        &lt;&lt; q5.back( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The element at the front of queue q5 is 1.
The element at the back of queue q5 is 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__size">
        <!--8a5d122f-8948-40c0-9127-37ba1714a374-->
        <title>queue::size</title>
        <content>
            <para>Returns the number of elements in the queue.</para>
            <legacySyntax> <legacyBold>size_type size( ) const;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current length of the queue.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_size.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   queue &lt;int&gt; q1, q2;
   queue &lt;int&gt;::size_type i;

   q1.push( 1 );
   i = q1.size( );
   cout &lt;&lt; "The queue length is " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;

   q1.push( 2 );
   i = q1.size( );
   cout &lt;&lt; "The queue length is now " &lt;&lt; i &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The queue length is 1.
The queue length is now 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__size_type">
        <!--294eb724-97e2-48a5-9a42-1089fe45f296-->
        <title>queue::size_type</title>
        <content>
            <para>An unsigned integer type that can represent the number of elements in a queue.</para>
            <legacySyntax> <legacyBold>typedef typename Container::size_type</legacyBold> <legacyBold>size_type</legacyBold>;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the <unmanagedCodeEntityReference>size_type</unmanagedCodeEntityReference> of the base container adapted by the queue.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#queue__front">queue::front</legacyLink> for an example of how to declare and use <unmanagedCodeEntityReference>size_type</unmanagedCodeEntityReference>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="queue__value_type">
        <!--661f51e1-12e1-495e-8355-dba384919cd9-->
        <title>queue::value_type</title>
        <content>
            <para>A type that represents the type of object stored as an element in a queue.</para>
            <legacySyntax>typedef typename Container::value_type value_type;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the <unmanagedCodeEntityReference>value_type</unmanagedCodeEntityReference> of the base container adapted by the queue.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// queue_value_type.cpp
// compile with: /EHsc
#include &lt;queue&gt;
#include &lt;iostream&gt;

int main( )
{
using namespace std;

   // Declares queues with default deque base container
   queue&lt;int&gt;::value_type AnInt;
   
   AnInt = 69;
   cout &lt;&lt; "The value_type is AnInt = " &lt;&lt; AnInt &lt;&lt; endl;

   queue&lt;int&gt; q1;
   q1.push(AnInt);
   cout &lt;&lt; "The element at the front of the queue is "
        &lt;&lt; q1.front( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The value_type is AnInt = 69
The element at the front of the queue is 69.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



