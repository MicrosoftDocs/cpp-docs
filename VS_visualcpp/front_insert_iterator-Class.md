---
title: "front_insert_iterator Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: a9a9c075-136a-4419-928b-c4871afa033c
caps.latest.revision: 13
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
# front_insert_iterator Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Describes an iterator adaptor that satisfies the requirements of an output iterator. It inserts, rather than overwrites, elements into the front of a sequence and thus provides semantics that are different from the overwrite semantics provided by the iterators of the C++ sequence containers. The <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference> class is templatized on the type of container.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>template &lt;class <parameterReference>Container</parameterReference>&gt; class front_insert_iterator;</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>Container</parameterReference>
                </definedTerm>
                <definition>
                    <para>The type of container into the front of which elements are to be inserted by a <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference>.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
    <languageReferenceRemarks>
        <content>
            <para>The container must satisfy the requirements for a front insertion sequence where is it possible to insert elements at the beginning of the sequence in amortized constant time. The Standard Template Library sequence containers defined by the <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque Class</legacyLink> and <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list Class</legacyLink> provide the needed <unmanagedCodeEntityReference>push_front</unmanagedCodeEntityReference> member function and satisfy these requirements. By contrast, sequence containers defined by the <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink> do not satisfy these requirements and cannot be adapted to use with <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference>s. A <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference> must always be initialized with its container.</para>
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
                                    <para> <legacyLink xlink:href="#front_insert_iterator__front_insert_iterator">front_insert_iterator</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates an iterator that can insert elements at the front of a specified container object.</para>
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
                                    <para> <legacyLink xlink:href="#front_insert_iterator__container_type">container_type</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that represents the container into which a front insertion is to be made.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#front_insert_iterator__reference">reference</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A type that provides a reference to an element in a sequence controlled by the associated container.</para>
                                </TD>
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
                                    <para> <legacyLink xlink:href="#front_insert_iterator__operator_star">operator*</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Dereferencing operator used to implement the output iterator expression * <parameterReference>i</parameterReference> = <parameterReference>x</parameterReference> for a front insertion.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#front_insert_iterator__operator_add_add">operator++</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Increments the <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference> to the next location into which a value may be stored.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyLink xlink:href="#front_insert_iterator__operator_eq">operator=</legacyLink>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Assignment operator used to implement the output iterator expression * <parameterReference>i</parameterReference> = <parameterReference>x</parameterReference> for a front insertion.</para>
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
            <para> <legacyBold>Header</legacyBold>: &lt;iterator&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <section address="front_insert_iterator__container_type">
        <!--4769a767-746c-44be-a457-20893f2bd4b0-->
        <title>front_insert_iterator::container_type</title>
        <content>
            <para>A type that represents the container into which a front insertion is to be made.</para>
            <legacySyntax> <legacyBold>typedef Container container_type;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The type is a synonym for the template parameter <legacyBold>Container</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// front_insert_iterator_container_type.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   list&lt;int&gt; L1;
   front_insert_iterator&lt;list&lt;int&gt; &gt;::container_type L2 = L1;
   front_inserter ( L2 ) = 20;
   front_inserter ( L2 ) = 10;
   front_inserter ( L2 ) = 40;

   list &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The list L2 is: ( ";
   for ( vIter = L2.begin ( ) ; vIter != L2.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The list L2 is: ( 40 10 20 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="front_insert_iterator__front_insert_iterator">
        <!--cfb00c1f-0080-4d1c-b248-9076f299d11b-->
        <title>front_insert_iterator::front_insert_iterator</title>
        <content>
            <para>Creates an iterator that can insert elements at the front of a specified container object.</para>
            <legacySyntax> <legacyBold>explicit front_insert_iterator(</legacyBold> <legacyBold>   Container&amp; </legacyBold> <parameterReference>_Cont</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The container object into which the <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference> is to insert elements.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference> for the parameter container object.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// front_insert_iterator_front_insert_iterator.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;
   list &lt;int&gt;::iterator L_Iter;

   list&lt;int&gt; L;
   for (i = -1 ; i &lt; 9 ; ++i )  
   {
      L.push_back ( 2 * i );
   }

   cout &lt;&lt; "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Using the member function to insert an element
   front_inserter ( L ) = 20;

   // Alternatively, one may use the template function
   front_insert_iterator&lt; list &lt; int&gt; &gt; Iter(L);
   *Iter = 30;

   cout &lt;&lt; "After the front insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The list L is:
 ( -2 0 2 4 6 8 10 12 14 16 ).
After the front insertions, the list L is:
 ( 30 20 -2 0 2 4 6 8 10 12 14 16 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="front_insert_iterator__operator_star">
        <!--da73393a-9e1d-4b62-938c-ab3fd6a2146c-->
        <title>front_insert_iterator::operator*</title>
        <content>
            <para>Dereferences the insert iterator returning the element it addresses.</para>
            <legacySyntax>front_insert_iterator&lt;Container&gt;&amp; operator*( );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The member function returns the value of the element addressed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Used to implement the output iterator expression <legacyBold>*Iter</legacyBold> = <legacyBold>value</legacyBold>. If <legacyBold>Iter</legacyBold> is an iterator that addresses an element in a sequence, then <legacyBold>*Iter</legacyBold> = <legacyBold>value</legacyBold> replaces that element with value and does not change the total number of elements in the sequence.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// front_insert_iterator_deref.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;
   list &lt;int&gt;::iterator L_Iter;

   list&lt;int&gt; L;
   for ( i = -1 ; i &lt; 9 ; ++i ) 
   {
      L.push_back ( 2 * i );
   }

   cout &lt;&lt; "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   front_insert_iterator&lt; list &lt; int&gt; &gt; Iter(L);
   *Iter = 20;

   // Alternatively, you may use
   front_inserter ( L ) = 30;

   cout &lt;&lt; "After the front insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The list L is:
 ( -2 0 2 4 6 8 10 12 14 16 ).
After the front insertions, the list L is:
 ( 30 20 -2 0 2 4 6 8 10 12 14 16 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="front_insert_iterator__operator_add_add">
        <!--c1af4789-39c8-4834-84c3-7775b19acc9a-->
        <title>front_insert_iterator::operator++</title>
        <content>
            <para>Increments the <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> to the next location into which a value may be stored.</para>
            <legacySyntax>front_insert_iterator&lt;Container&gt;&amp; operator++( );
front_insert_iterator&lt;Container&gt; operator++( int );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference> addressing the next location into which a value may be stored.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Both preincrementation and postincrementation operators return the same result.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// front_insert_iterator_op_incre.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   list&lt;int&gt; L1;
   front_insert_iterator&lt;list&lt;int&gt; &gt; iter ( L1 );
   *iter = 10;
   iter++;
   *iter = 20;
   iter++;
   *iter = 30;
   iter++;

   list &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The list L1 is: ( ";
   for ( vIter = L1.begin ( ) ; vIter != L1.end ( ); vIter++ )
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The list L1 is: ( 30 20 10 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="front_insert_iterator__operator_eq">
        <!--6a45e8ec-be95-4cd3-badf-bccc52b441f8-->
        <title>front_insert_iterator::operator=</title>
        <content>
            <para>Appends (pushes) a value onto the front of the container.</para>
            <legacySyntax>front_insert_iterator&lt;Container&gt;&amp; operator=(
   typename Container::const_reference <parameterReference>_Val</parameterReference>
);
front_insert_iterator&lt;Container&gt;&amp; operator=(
   typename Container::value_type&amp;&amp; _Val
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be assigned to the container.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the last element inserted at the front of the container.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first member operator evaluates <codeInline>container.push_front(_Val)</codeInline>, then returns <codeInline>*this</codeInline>.</para>
                    <para>The second member operator evaluates </para>
                    <para> <codeInline>container-&gt;push_front((typename Container::value_type&amp;&amp;)_Val)</codeInline>, </para>
                    <para>then returns <codeInline>*this</codeInline>. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// front_insert_iterator_op_assign.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   list&lt;int&gt; L1;
   front_insert_iterator&lt;list&lt;int&gt; &gt; iter ( L1 );
   *iter = 10;
   iter++;
   *iter = 20;
   iter++;
   *iter = 30;
   iter++;

   list &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The list L1 is: ( ";
   for ( vIter = L1.begin ( ) ; vIter != L1.end ( ); vIter++ )
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}
\* Output: 
The list L1 is: ( 30 20 10 ).
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="front_insert_iterator__reference">
        <!--056a9c0b-5df6-41b7-9516-b14784946b35-->
        <title>front_insert_iterator::reference</title>
        <content>
            <para>A type that provides a reference to an element in a sequence controlled by the associated container.</para>
            <legacySyntax> <legacyBold>typedef typename Container::reference reference;</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <code>// front_insert_iterator_reference.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;

   list&lt;int&gt; L;
   front_insert_iterator&lt;list&lt;int&gt; &gt; fiivIter( L );
   *fiivIter = 10;
   *fiivIter = 20;
   *fiivIter = 30;
   
   list&lt;int&gt;::iterator LIter;
   cout &lt;&lt; "The list L is: ( ";
   for ( LIter = L.begin ( ) ; LIter != L.end ( ); LIter++)
      cout &lt;&lt; *LIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   front_insert_iterator&lt;list&lt;int&gt; &gt;::reference 
        RefFirst = *(L.begin ( ));
   cout &lt;&lt; "The first element in the list L is: " 
        &lt;&lt; RefFirst &lt;&lt; "." &lt;&lt; endl;
}
\* Output: 
The list L is: ( 30 20 10 ).
The first element in the list L is: 30.
*\</code><!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="c61a3962-f3ed-411a-b5a3-e8b3c2b500bd">&lt;iterator&gt;</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



