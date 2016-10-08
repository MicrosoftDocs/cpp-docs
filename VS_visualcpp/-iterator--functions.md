---
title: "&lt;iterator&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 4a57c9a3-7e36-411f-8655-e0be2eec88e7
caps.latest.revision: 9
---
# &lt;iterator&gt; functions
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para/>
    </introduction>
    <section>
        <content>
            <table>
                <tbody>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#advance">advance</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#back_inserter">back_inserter</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#begin">begin</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#cbegin">cbegin</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#cend">cend</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#distance">distance</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#end">end</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#front_inserter">front_inserter</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#inserter">inserter</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#make_checked_array_iterator">make_checked_array_iterator</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#make_move_iterator">make_move_iterator</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#make_unchecked_array_iterator">make_unchecked_array_iterator</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#next">next</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#prev">prev</link>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </section>
    <section address="advance">
        <!--c5ded633-fec5-4375-a8c7-7e732591e61e-->
        <title>advance</title>
        <content>
            <para>Increments an iterator by a specified number of positions.</para>
            <legacySyntax language="cpp">template&lt;class InputIterator, class Distance&gt;
    void advance(
        InputIterator&amp; <parameterReference>InIt</parameterReference>, 
        Distance <parameterReference>Off</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>InIt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The iterator that is to be incremented and that must satisfy the requirements for an input iterator.</para>
                        </definition>
                        <definedTerm> <parameterReference>Off</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An integral type that is convertible to the iterator's difference type and that specifies the number of increments the position of the iterator is to be advanced.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range advanced through must be nonsingular, where the iterators must be dereferenceable or past the end.</para>
                    <para>If the <legacyBold>InputIterator</legacyBold> satisfies the requirements for a bidirectional iterator type, then <parameterReference>Off</parameterReference> may be negative. If <legacyBold>InputIterator</legacyBold> is an input or forward iterator type, <parameterReference>Off</parameterReference> must be nonnegative.</para>
                    <para>The advance function has constant complexity when <legacyBold>InputIterator</legacyBold> satisfies the requirements for a random-access iterator; otherwise, it has linear complexity and so is potentially expensive.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// iterator_advance.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   list&lt;int&gt; L;
   for ( i = 1 ; i &lt; 9 ; ++i )  
   {
      L.push_back ( i );
   }
   list &lt;int&gt;::iterator L_Iter, LPOS = L.begin ( );

   cout &lt;&lt; "The list L is: ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   cout &lt;&lt; "The iterator LPOS initially points to the first element: "
        &lt;&lt; *LPOS &lt;&lt; "." &lt;&lt; endl;

   advance ( LPOS , 4 );
   cout &lt;&lt; "LPOS is advanced 4 steps forward to point"
        &lt;&lt; " to the fifth element: "
        &lt;&lt; *LPOS &lt;&lt; "." &lt;&lt; endl;

   advance ( LPOS , -3 );
   cout &lt;&lt; "LPOS is moved 3 steps back to point to the "
        &lt;&lt; "2nd element: " &lt;&lt; *LPOS &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The list L is: ( 1 2 3 4 5 6 7 8 ).
The iterator LPOS initially points to the first element: 1.
LPOS is advanced 4 steps forward to point to the fifth element: 5.
LPOS is moved 3 steps back to point to the 2nd element: 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="back_inserter">
        <!--e7744787-699f-4dd9-b776-f7ad22116e0d-->
        <title>back_inserter</title>
        <content>
            <para>Creates an iterator that can insert elements at the back of a specified container.</para>
            <legacySyntax> <legacyBold>template&lt;class Container&gt;</legacyBold> <legacyBold>   back_insert_iterator&lt;Container&gt; back_inserter(</legacyBold> <legacyBold>      Container&amp; </legacyBold> <parameterReference>_Cont</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>The container into which the back insertion is to be executed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>back_insert_iterator</unmanagedCodeEntityReference> associated with the container object <parameterReference>_Cont</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Within the Standard Template Library, the argument must refer to one of the three sequence containers that have the member function <unmanagedCodeEntityReference>push_back</unmanagedCodeEntityReference>: <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque Class</legacyLink>, <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list Class</legacyLink>, or <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector Class</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// iterator_back_inserter.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;vector&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   vector&lt;int&gt; vec;
   for ( i = 0 ; i &lt; 3 ; ++i )  
   {
      vec.push_back ( i );
   }
   
   vector &lt;int&gt;::iterator vIter;
   cout &lt;&lt; "The initial vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++)
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Insertions can be done with template function
   back_insert_iterator&lt;vector&lt;int&gt; &gt; backiter ( vec );
   *backiter = 30;
   backiter++;
   *backiter = 40;

   // Alternatively, insertions can be done with the
   // back_insert_iterator member function
   back_inserter ( vec ) = 500;
   back_inserter ( vec ) = 600;

   cout &lt;&lt; "After the insertions, the vector vec is: ( ";
   for ( vIter = vec.begin ( ) ; vIter != vec.end ( ); vIter++ )
      cout &lt;&lt; *vIter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The initial vector vec is: ( 0 1 2 ).
After the insertions, the vector vec is: ( 0 1 2 30 40 500 600 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="begin">
        <!--d49a71c1-13b5-495b-a469-c13a037acc71-->
        <title>begin</title>
        <content>
            <para>Retrieves an iterator to the first element in a specified container.</para>
            <legacySyntax>template&lt;class Container&gt;
    auto begin(Container&amp;                 <literal>cont</literal>)
        -&gt; decltype(cont.begin());
template&lt;class Container&gt;
    auto begin(const Container&amp;                 <literal>cont</literal>) 
        -&gt; decltype(cont.begin());
template&lt;class Ty, class Size&gt;
    Ty *begin(Ty (&amp;                <literal>array</literal>)[Size]);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A container.</para>
                        </definition>
                        <definedTerm> <parameterReference>array</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An array of objects of type <parameterReference>Ty</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The first two template functions return <codeInline>cont.begin()</codeInline>. The first function is non-constant; the second one is constant.</para>
                    <para>The third template function returns <codeInline>array</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>We recommend that you use this template function in place of container member <unmanagedCodeEntityReference>begin()</unmanagedCodeEntityReference> when more generic behavior is required.</para>
                        <!--EndSnipComment-->
                    <code language="cpp">// cl.exe /EHsc /nologo /W4 /MTd 
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;
#include &lt;iterator&gt;
#include &lt;vector&gt;

template &lt;typename C&gt; void reverse_sort(C&amp; c) {
    using std::begin;
    using std::end;

    std::sort(begin(c), end(c), std::greater&lt;&gt;());
}

template &lt;typename C&gt; void print(const C&amp; c) {
    for (const auto&amp; e : c) {
        std::cout &lt;&lt; e &lt;&lt; " ";
    }

    std::cout &lt;&lt; "\n";
}

int main() {
    std::vector&lt;int&gt; v = { 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1 };

    print(v);
    reverse_sort(v);
    print(v);

    std::cout &lt;&lt; "--\n";

    int arr[] = { 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1 };

    print(arr);
    reverse_sort(arr);
    print(arr);
}
</code>
                    <code>Output:
11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
52 40 34 26 20 17 16 13 11 10 8 5 4 2 1
--
23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1
160 106 80 70 53 40 35 23 20 16 10 8 5 4 2 1</code>
                    <!--SnipComment-->
                            <para>The function <codeInline>reverse_sort</codeInline> supports containers of any kind, in addition to regular arrays, because it calls the non-member version of <unmanagedCodeEntityReference>begin()</unmanagedCodeEntityReference>. If <codeInline>reverse_sort</codeInline> were coded to use the container member <unmanagedCodeEntityReference>begin()</unmanagedCodeEntityReference>:</para>
                            <code language="cpp">template &lt;typename C&gt; void reverse_sort(C&amp; c) {
    using std::begin;
    using std::end;

    std::sort(                                <codeFeaturedElement>c.begin()</codeFeaturedElement>,                                 <codeFeaturedElement>c.end()</codeFeaturedElement>, std::greater&lt;&gt;());
}</code>
                            <para>Then sending an array to it would cause this compiler error:</para>
                            <code>error C2228: left of '.begin' must have class/struct/union</code>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cbegin">
        <!--9ffd573c-6c7d-4798-9873-ea2f977dcf79-->
        <title>cbegin</title>
        <content>
            <para>Retrieves a const iterator to the first element in a specified container.</para>
            <legacySyntax language="cpp">template&lt;class Container&gt;
    auto cbegin(const Container&amp; <parameterReference>cont</parameterReference>) 
        -&gt; decltype(cont.begin());
</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A container or initializer_list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A constant <codeInline>cont.begin()</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function works with all STL containers and with <legacyLink xlink:href="1f2c0ff4-5636-4f79-b008-e75426e3d2ab">initializer_list</legacyLink>.</para>
                    <para>You can use this member function in place of the <unmanagedCodeEntityReference>begin()</unmanagedCodeEntityReference> template function to guarantee that the return value is <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>. Typically, it's used in conjunction with the <legacyLink xlink:href="e9d495d7-601c-4547-b897-998389a311f4">auto</legacyLink> type deduction keyword, as shown in the following example. In the example, consider <codeInline>Container</codeInline> to be a modifiable (non- <languageKeyword>const</languageKeyword>) container or <unmanagedCodeEntityReference>initializer_list</unmanagedCodeEntityReference> of any kind that supports <unmanagedCodeEntityReference>begin()</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>cbegin()</unmanagedCodeEntityReference>.</para>
                    <code language="cpp">
auto i1 = Container.begin();  // i1 is                         <codeFeaturedElement>Container&lt;T&gt;::iterator</codeFeaturedElement>
auto i2 = Container.cbegin(); // i2 is                         <codeFeaturedElement>Container&lt;T&gt;::const_iterator</codeFeaturedElement>
                    </code>
                </content>
            </section>
        </sections>
    </section>
    <section address="cend">
        <!--a60f3363-2869-4c07-b5c7-052ddc1e9556-->
        <title>cend</title>
        <content>
            <para>Retrieves a const iterator to the element that follows the last element in the specified container.</para>
            <legacySyntax language="cpp">template&lt;class Container&gt;
    auto cend(const Container&amp; <parameterReference>cont</parameterReference>) 
        -&gt; decltype(cont.end());
</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A container or initializer_list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A constant <codeInline>cont.end()</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function works with all STL containers and with <legacyLink xlink:href="1f2c0ff4-5636-4f79-b008-e75426e3d2ab">initializer_list</legacyLink>.</para>
                    <para>You can use this member function in place of the <legacyLink xlink:href="4a57c9a3-7e36-411f-8655-e0be2eec88e7#end">end()</legacyLink> template function to guarantee that the return value is <unmanagedCodeEntityReference>const_iterator</unmanagedCodeEntityReference>. Typically, it's used in conjunction with the <legacyLink xlink:href="e9d495d7-601c-4547-b897-998389a311f4">auto</legacyLink> type deduction keyword, as shown in the following example. In the example, consider <codeInline>Container</codeInline> to be a modifiable (non- <languageKeyword>const</languageKeyword>) container or <unmanagedCodeEntityReference>initializer_list</unmanagedCodeEntityReference> of any kind that supports <unmanagedCodeEntityReference>end()</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>cend()</unmanagedCodeEntityReference>.</para>
                    <code language="cpp">
auto i1 = Container.end();  // i1 is                         <codeFeaturedElement>Container&lt;T&gt;::iterator</codeFeaturedElement>
auto i2 = Container.cend(); // i2 is                         <codeFeaturedElement>Container&lt;T&gt;::const_iterator</codeFeaturedElement>
                    </code>
                </content>
            </section>
        </sections>
    </section>
    <section address="distance">
        <!--f863cae2-852b-4f9c-8006-84d24b4f5f8f-->
        <title>distance</title>
        <content>
            <para>Determines the number of increments between the positions addressed by two iterators.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator&gt;</legacyBold> <legacyBold>   typename iterator_traits&lt;InputIterator&gt;::difference_type</legacyBold> <legacyBold>      distance(</legacyBold> <legacyBold>         InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>         InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The first iterator whose distance from the second is to be determined.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The second iterator whose distance from the first is to be determined.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of times that <parameterReference>_First</parameterReference> must be incremented until it equal <parameterReference>_Last</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The distance function has constant complexity when <legacyBold>InputIterator</legacyBold> satisfies the requirements for a random-access iterator; otherwise, it has linear complexity and so is potentially expensive.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// iterator_distance.cpp
// compile with: /EHsc
#include &lt;iterator&gt;
#include &lt;list&gt;
#include &lt;iostream&gt;

int main( )
{
   using namespace std;
   int i;

   list&lt;int&gt; L;
   for ( i = -1 ; i &lt; 9 ; ++i ) 
   {
      L.push_back ( 2 * i );
   }
   list &lt;int&gt;::iterator L_Iter, LPOS = L.begin ( );

   cout &lt;&lt; "The list L is: ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   cout &lt;&lt; "The iterator LPOS initially points to the first element: "
        &lt;&lt; *LPOS &lt;&lt; "." &lt;&lt; endl;

   advance ( LPOS , 7 );
   cout &lt;&lt; "LPOS is advanced 7 steps forward to point "
        &lt;&lt; " to the eighth element: "
        &lt;&lt; *LPOS &lt;&lt; "." &lt;&lt; endl;

   list&lt;int&gt;::difference_type Ldiff ;
   Ldiff = distance ( L.begin ( ) , LPOS );
   cout &lt;&lt; "The distance from L.begin( ) to LPOS is: "
        &lt;&lt; Ldiff &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The list L is: ( -2 0 2 4 6 8 10 12 14 16 ).
The iterator LPOS initially points to the first element: -2.
LPOS is advanced 7 steps forward to point  to the eighth element: 12.
The distance from L.begin( ) to LPOS is: 7.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="end">
        <!--90e02cf5-1d69-42c8-a1e1-9875a4523f76-->
        <title>end</title>
        <content>
            <para>Retrieves an iterator to the element that follows the last element in the specified container.</para>
            <legacySyntax language="cpp">template&lt;class Container&gt;
    auto end(Container&amp; <parameterReference>cont</parameterReference>) 
        -&gt; decltype(cont.end());
template&lt;class Container&gt;
    auto end(const Container&amp; <parameterReference>cont</parameterReference>) 
        -&gt; decltype(cont.end());
template&lt;class Ty, class Size&gt;
    Ty *end(Ty (&amp; <parameterReference>array</parameterReference>)[Size]); 
</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A container.</para>
                        </definition>
                        <definedTerm> <parameterReference>array</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An array of objects of type <parameterReference>Ty</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The first two template functions return <codeInline>cont.end()</codeInline> (the first is non-constant and the second is constant).</para>
                    <para>The third template function returns <codeInline>array + Size</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For a code example, see <link xlink:href="4a57c9a3-7e36-411f-8655-e0be2eec88e7#begin">begin</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="front_inserter">
        <!--236f3f00-77aa-47ba-9eff-c1c91e784172-->
        <title>front_inserter</title>
        <content>
            <para>Creates an iterator that can insert elements at the front of a specified container.</para>
            <legacySyntax> <legacyBold>template&lt;class Container&gt;</legacyBold> <legacyBold>   front_insert_iterator&lt;Container&gt; front_inserter(</legacyBold> <legacyBold>      Container&amp; </legacyBold> <parameterReference>_Cont</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>The container object whose front is having an element inserted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>front_insert_iterator</unmanagedCodeEntityReference> associated with the container object <parameterReference>_Cont</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The member function <legacyLink xlink:href="a9a9c075-136a-4419-928b-c4871afa033c#front_insert_iterator__front_insert_iterator">front_insert_iterator</legacyLink> of the front_insert_iterator class may also be used.</para>
                    <para>Within the Standard Template Library, the argument must refer to one of the two sequence containers that have the member function <unmanagedCodeEntityReference>push_back</unmanagedCodeEntityReference>: <legacyLink xlink:href="64842ee5-057a-4063-8c16-4267a0332584">deque Class</legacyLink> or <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list Class</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// iterator_front_inserter.cpp
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
      L.push_back ( i );
   }

   cout &lt;&lt; "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Using the template function to insert an element
   front_insert_iterator&lt; list &lt; int&gt; &gt; Iter(L);
   *Iter = 100;

   // Alternatively, you may use the front_insert member function
   front_inserter ( L ) = 200;

   cout &lt;&lt; "After the front insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The list L is:
 ( -1 0 1 2 3 4 5 6 7 8 ).
After the front insertions, the list L is:
 ( 200 100 -1 0 1 2 3 4 5 6 7 8 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="inserter">
        <!--47e27c8a-89ac-4c26-a923-7623d86633ba-->
        <title>inserter</title>
        <content>
            <para>A helper template function that lets you use <codeInline>inserter(</codeInline> <parameterReference>_Cont</parameterReference> <codeInline>,</codeInline> <parameterReference>_Where</parameterReference> <codeInline>)</codeInline> instead of <codeInline>insert_iterator&lt;Container&gt;(</codeInline> <parameterReference>_Cont</parameterReference>, <parameterReference>_Where</parameterReference> <codeInline>)</codeInline>.</para>
            <legacySyntax>template&lt;class Container&gt;
    insert_iterator&lt;Container&gt; inserter(
        Container&amp; <parameterReference>_Cont</parameterReference>,
        typename Container::iterator <parameterReference>_Where</parameterReference>
    );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Cont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The container to which new elements are to be added.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Where</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An iterator locating the point of insertion.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns <link xlink:href="d5d86405-872e-4e3b-9e68-c69a2b7e8221#insert_iterator__insert_iterator">insert_iterator</link> <codeInline>&lt;Container&gt;(</codeInline> <parameterReference>_Cont</parameterReference> <codeInline>, </codeInline> <parameterReference>_Where</parameterReference> <codeInline>)</codeInline>. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// iterator_inserter.cpp
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
   for (i = 2 ; i &lt; 5 ; ++i )  
   {
      L.push_back ( 10 * i );
   }

   cout &lt;&lt; "The list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++ )
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Using the template version to insert an element
   insert_iterator&lt;list &lt;int&gt; &gt; Iter( L, L.begin ( ) );
   *Iter = 1;

   // Alternatively, using the member function to insert an element
   inserter ( L, L.end ( ) ) = 500;

   cout &lt;&lt; "After the insertions, the list L is:\n ( ";
   for ( L_Iter = L.begin( ) ; L_Iter != L.end( ); L_Iter++)
      cout &lt;&lt; *L_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The list L is:
 ( 20 30 40 ).
After the insertions, the list L is:
 ( 1 20 30 40 500 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="make_checked_array_iterator">
        <!--aa9e15b0-c090-49b0-b552-8afa434cf9d8-->
        <title>make_checked_array_iterator</title>
        <content>
            <para>Creates a <legacyLink xlink:href="7f07185e-d588-4ae3-9c4f-84ec4aa25a28">checked_array_iterator</legacyLink> that can be used by other algorithms.</para>
            <alert class="note">
                <para>This function is a Microsoft extension of the Standard C++ Library. Code implemented by using this function is not portable to C++ Standard build environments that do not support this Microsoft extension.</para>
            </alert>
            <legacySyntax>template &lt;class <parameterReference>Iter</parameterReference>&gt;
  checked_array_iterator&lt; <parameterReference>Iter</parameterReference>&gt; 
    make_checked_array_iterator(
      Iter <parameterReference>Ptr</parameterReference>,
      size_t <parameterReference>Size</parameterReference>,
      size_t <parameterReference>Index</parameterReference> = 0
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Ptr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the destination array.</para>
                        </definition>
                        <definedTerm> <parameterReference>Size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The size of the destination array.</para>
                        </definition>
                        <definedTerm> <parameterReference>Index</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Optional index into the array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An instance of <unmanagedCodeEntityReference>checked_array_iterator</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>make_checked_array_iterator</unmanagedCodeEntityReference> function is defined in the <unmanagedCodeEntityReference>stdext</unmanagedCodeEntityReference> namespace.</para>
                    <para>This function takes a raw pointer—which would ordinarily cause concern about bounds overrun—and wraps it in a <legacyLink xlink:href="7f07185e-d588-4ae3-9c4f-84ec4aa25a28">checked_array_iterator</legacyLink> class that does checking. Because that class is marked as checked, the STL doesn't warn about it. For more information and code examples, see <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>In the following example, a <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</legacyLink> is created and populated with 10 items. The contents of the vector are copied into an array by using the copy algorithm, and then <unmanagedCodeEntityReference>make_checked_array_iterator</unmanagedCodeEntityReference> is used to specify the destination. This is followed by an intentional violation of the bounds checking so that a debug assertion failure is triggered.</para>
                        <!--EndSnipComment-->
                    <code language="cpp">// make_checked_array_iterator.cpp
// compile with: /EHsc /W4 /MTd

#include &lt;algorithm&gt;
#include &lt;iterator&gt; // stdext::make_checked_array_iterator
#include &lt;memory&gt; // std::make_unique
#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;string&gt;

using namespace std;

template &lt;typename C&gt; void print(const string&amp; s, const C&amp; c) {
    cout &lt;&lt; s;

    for (const auto&amp; e : c) {
        cout &lt;&lt; e &lt;&lt; " ";
    }

    cout &lt;&lt; endl;
}

int main()
{
    const size_t dest_size = 10;
    // Old-school but not exception safe, favor make_unique&lt;int[]&gt;
    // int* dest = new int[dest_size];
    unique_ptr&lt;int[]&gt; updest = make_unique&lt;int[]&gt;(dest_size);
    int* dest = updest.get(); // get a raw pointer for the demo

    vector&lt;int&gt; v;

    for (int i = 0; i &lt; dest_size; ++i) {
        v.push_back(i);
    }
    print("vector v: ", v);

    copy(v.begin(), v.end(), stdext::make_checked_array_iterator(dest, dest_size));

    cout &lt;&lt; "int array dest: ";
    for (int i = 0; i &lt; dest_size; ++i) {
        cout &lt;&lt; dest[i] &lt;&lt; " ";
    }
    cout &lt;&lt; endl;

    // Add another element to the vector to force an overrun.
    v.push_back(10);
    // The next line causes a debug assertion when it executes.
    copy(v.begin(), v.end(), stdext::make_checked_array_iterator(dest, dest_size));
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="make_move_iterator">
        <!--b17d1c7a-1254-4c05-a160-beb0ba461d5e-->
        <title>make_move_iterator</title>
        <content>
            <para>Creates a <unmanagedCodeEntityReference>move iterator</unmanagedCodeEntityReference> that contains the provided iterator as the <unmanagedCodeEntityReference>stored</unmanagedCodeEntityReference> iterator.</para>
            <legacySyntax>template&lt;class Iterator&gt;
    move_iterator&lt;Iterator&gt; make_move_iterator(
        const Iterator&amp; <parameterReference>_It</parameterReference>
                <parameterReference/>);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_It</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The iterator stored in the new move iterator.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns <unmanagedCodeEntityReference>move_iterator</unmanagedCodeEntityReference> <codeInline>&lt;Iterator&gt;(</codeInline> <parameterReference>_It</parameterReference> <codeInline>)</codeInline>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="make_unchecked_array_iterator">
        <!--10422011-d246-466f-bb5d-1729497ec47e-->
        <title>make_unchecked_array_iterator</title>
        <content>
            <para>Creates an <legacyLink xlink:href="693b3b30-4e3a-465b-be06-409700bc50b1">unchecked_array_iterator</legacyLink> that can be used by other algorithms.</para>
            <alert class="note">
                <para>This function is a Microsoft extension of the Standard C++ Library. Code implemented by using this function is not portable to C++ Standard build environments that do not support this Microsoft extension.</para>
            </alert>
            <legacySyntax>template &lt;class <parameterReference>Iter</parameterReference>&gt;
  unchecked_array_iterator&lt; <parameterReference>Iter</parameterReference>&gt; 
    make_unchecked_array_iterator(
      Iter <parameterReference>Ptr</parameterReference>
);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>Ptr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the destination array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An instance of <unmanagedCodeEntityReference>unchecked_array_iterator</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>make_unchecked_array_iterator</unmanagedCodeEntityReference> function is defined in the <unmanagedCodeEntityReference>stdext</unmanagedCodeEntityReference> namespace.</para>
                    <para>This function takes a raw pointer and wraps it in a class that performs no checking and therefore optimizes away to nothing, but it also silences compiler warnings such as <legacyLink xlink:href="926c7cc2-921d-43ed-ae75-634f560dd317">C4996</legacyLink>. Therefore, this is a targeted way to deal with unchecked-pointer warnings without globally silencing them or incurring the cost of checking. For more information and code examples, see <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>In the following example, a <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</legacyLink> is created and populated with 10 items. The contents of the vector are copied into an array by using the copy algorithm, and then <unmanagedCodeEntityReference>make_unchecked_array_iterator</unmanagedCodeEntityReference> is used to specify the destination.</para>
                        <!--EndSnipComment-->
                    <code language="cpp">// make_unchecked_array_iterator.cpp
// compile with: /EHsc /W4 /MTd

#include &lt;algorithm&gt;
#include &lt;iterator&gt; // stdext::make_unchecked_array_iterator
#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;string&gt;

using namespace std;

template &lt;typename C&gt; void print(const string&amp; s, const C&amp; c) {
    cout &lt;&lt; s;

    for (const auto&amp; e : c) {
        cout &lt;&lt; e &lt;&lt; " ";
    }

    cout &lt;&lt; endl;
}

int main()
{
    const size_t dest_size = 10;
    int *dest = new int[dest_size];
    vector&lt;int&gt; v;

    for (int i = 0; i &lt; dest_size; ++i) {
        v.push_back(i);
    }
    print("vector v: ", v);

    // COMPILER WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode
    // (it performs no checking, so an overrun will trigger undefined behavior)
    copy(v.begin(), v.end(), stdext::make_unchecked_array_iterator(dest));

    cout &lt;&lt; "int array dest: ";
    for (int i = 0; i &lt; dest_size; ++i) {
        cout &lt;&lt; dest[i] &lt;&lt; " ";
    }
    cout &lt;&lt; endl;

    delete[] dest;
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="next">
        <!--c0dbc96c-38cf-4f67-9fe8-e0967e054329-->
        <title>next</title>
        <content>
            <para>Iterates a specified number of times and returns the new iterator position.</para>
            <legacySyntax>template&lt;class InputIterator&gt;
  InputIterator next(
    InputIterator <parameterReference> _First</parameterReference>,
    typename iterator_traits&lt;InputIterator&gt;::difference_type <parameterReference>_Off</parameterReference> = 1 
  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The current position.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Off</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of times to iterate.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the new iterator position after iterating <parameterReference>_Off</parameterReference> times.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns <codeInline>next</codeInline> incremented <parameterReference>_Off</parameterReference> times</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="prev">
        <!--96037942-82cd-4988-b39e-d03052384533-->
        <title>prev</title>
        <content>
            <para>Iterates in reverse a specified number of times and returns the new iterator position.</para>
            <legacySyntax>template&lt;class BidirectionalIterator&gt;
  BidirectionalIterator prev(
    BidirectionalIterator <parameterReference>_First</parameterReference>,
    typename iterator_traits&lt;BidirectionalIterator&gt;::difference_type <parameterReference>_Off</parameterReference> = 1
    );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The current position.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Off</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of times to iterate. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> The template function returns <codeInline>next</codeInline> decremented <codeInline>off</codeInline> times. </para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="c61a3962-f3ed-411a-b5a3-e8b3c2b500bd">&amp;lt;iterator&amp;gt;</link>
    </relatedTopics>
</developerConceptualDocument>



