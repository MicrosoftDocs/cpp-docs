---
title: "&lt;algorithm&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c10b0c65-410c-4c83-abf8-8b7f61bba8d0
caps.latest.revision: 9
---
# &lt;algorithm&gt; functions
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
                            <para> <link xlink:href="#alg_move">&amp;lt;alg&amp;gt; move</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#adjacent_find">adjacent_find</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#all_of">all_of</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#any_of">any_of</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#binary_search">binary_search</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#copy">copy</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#copy_backward">copy_backward</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#copy_if">copy_if</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#copy_n">copy_n</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#count">count</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#count_if">count_if</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#equal">equal</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#equal_range">equal_range</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#fill">fill</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#fill_n">fill_n</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#find">find</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#find_end">find_end</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#find_first_of">find_first_of</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#find_if">find_if</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#find_if_not">find_if_not</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#for_each">for_each</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#generate">generate</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#generate_n">generate_n</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#includes">includes</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#inplace_merge">inplace_merge</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#is_heap">is_heap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#is_heap_until">is_heap_until</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#is_partitioned">is_partitioned</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#is_permutation">is_permutation</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#is_sorted">is_sorted</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#is_sorted_until">is_sorted_until</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#iter_swap">iter_swap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#lexicographical_compare">lexicographical_compare</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#lower_bound">lower_bound</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#make_heap">make_heap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#max">max</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#max_element">max_element</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#merge">merge</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#min">min</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#min_element">min_element</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#minmax">minmax</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#minmax_element">minmax_element</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#mismatch">mismatch</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#move_backward">move_backward</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#next_permutation">next_permutation</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#none_of">none_of</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#nth_element">nth_element</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#partial_sort">partial_sort</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#partial_sort_copy">partial_sort_copy</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#partition">partition</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#partition_copy">partition_copy</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#partition_point">partition_point</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#pop_heap">pop_heap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#prev_permutation">prev_permutation</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#push_heap">push_heap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#random_shuffle">random_shuffle</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#remove">remove</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#remove_copy">remove_copy</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#remove_copy_if">remove_copy_if</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#remove_if">remove_if</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#replace">replace</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#replace_copy">replace_copy</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#replace_copy_if">replace_copy_if</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#replace_if">replace_if</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#reverse">reverse</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#reverse_copy">reverse_copy</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#rotate">rotate</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#rotate_copy">rotate_copy</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#search">search</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#search_n">search_n</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#set_difference">set_difference</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#set_intersection">set_intersection</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#set_symmetric_difference">set_symmetric_difference</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#set_union">set_union</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#sort">sort</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#sort_heap">sort_heap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#stable_partition">stable_partition</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#stable_sort">stable_sort</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#std__shuffle">std::shuffle</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#swap">swap</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#swap_ranges">swap_ranges</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#transform">transform</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#unique">unique</link>
                            </para>
                        </TD>
                        <TD>
                            <para> <link xlink:href="#unique_copy">unique_copy</link>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <link xlink:href="#upper_bound">upper_bound</link>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
        </content>
    </section>
    <section address="adjacent_find">
        <!--81efd39c-ff0e-476a-9a72-740ea788d966-->
        <title>adjacent_find</title>
        <content>
            <para>Searches for two adjacent elements that are either equal or satisfy a specified condition.</para>
            <legacySyntax>template&lt;class ForwardIterator&gt;
   ForwardIterator adjacent_find(
      ForwardIterator <parameterReference>_First</parameterReference>, 
      ForwardIterator <parameterReference>_Last</parameterReference>
   );
template&lt;class ForwardIterator , class BinaryPredicate&gt;
   ForwardIterator adjacent_find(
      ForwardIterator <parameterReference>_First</parameterReference>, 
      ForwardIterator <parameterReference>_Last</parameterReference>, 
      BinaryPredicate <parameterReference>_Comp</parameterReference>
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
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The binary predicate giving the condition to be satisfied by the values of the adjacent elements in the range being searched.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator to the first element of the adjacent pair that are either equal to each other (in the first version) or that satisfy the condition given by the binary predicate (in the second version), provided that such a pair of elements is found. Otherwise, an iterator pointing to <parameterReference>_Last</parameterReference> is returned.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>adjacent_find</unmanagedCodeEntityReference> algorithm is a nonmutating sequence algorithm. The range to be searched must be valid; all pointers must be dereferenceable and the last position is reachable from the first by incrementation. The time complexity of the algorithm is linear in the number of elements contained in the range.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the match between elements must impose an equivalence relation between its operands.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_adj_fnd.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

// Returns whether second element is twice the first
bool twice (int elem1, int elem2 )
{
   return elem1 * 2 == elem2;
}

int main( ) 
{
   using namespace std;
   list &lt;int&gt; L;
   list &lt;int&gt;::iterator Iter;
   list &lt;int&gt;::iterator result1, result2;
   
   L.push_back( 50 );
   L.push_back( 40 );
   L.push_back( 10 );
   L.push_back( 20 );
   L.push_back( 20 );

   cout &lt;&lt; "L = ( " ;
   for ( Iter = L.begin( ) ; Iter != L.end( ) ; Iter++ )
      cout &lt;&lt; *Iter &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
   
   result1 = adjacent_find( L.begin( ), L.end( ) );
   if ( result1 == L.end( ) )
      cout &lt;&lt; "There are not two adjacent elements that are equal."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There are two adjacent elements that are equal."
           &lt;&lt; "\n They have a value of "
           &lt;&lt;  *( result1 ) &lt;&lt; "." &lt;&lt; endl;

   result2 = adjacent_find( L.begin( ), L.end( ), twice );
   if ( result2 == L.end( ) )
      cout &lt;&lt; "There are not two adjacent elements where the "
           &lt;&lt; " second is twice the first." &lt;&lt; endl;
   else
      cout &lt;&lt; "There are two adjacent elements where "
           &lt;&lt; "the second is twice the first."
           &lt;&lt; "\n They have values of " &lt;&lt; *(result2++);
      cout &lt;&lt; " &amp; " &lt;&lt; *result2 &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>L = ( 50 40 10 20 20 )
There are two adjacent elements that are equal.
 They have a value of 20.
There are two adjacent elements where the second is twice the first.
 They have values of 10 &amp; 20.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="all_of">
        <!--11770601-c597-4b1a-9796-88490853c385-->
        <title>all_of</title>
        <content>
            <para>Returns <languageKeyword>true</languageKeyword> when a condition is present at each element in the given range.</para>
            <legacySyntax>template&lt;class InputIterator, class Predicate&gt;
    bool all_of(
        InputIterator _ <parameterReference>First</parameterReference>, 
        InputIterator _ <parameterReference>Last</parameterReference>, 
        BinaryPredicate _ <parameterReference>Comp</parameterReference>
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
                            <para>An input iterator that indicates where to start to check for a condition. The iterator marks where a range of elements starts.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates the end of the range of elements to check for a condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A condition to test for. This is a user-defined predicate function object that defines the condition to be satisfied by an element being checked. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>true</languageKeyword> if the condition is detected at each element in the indicated range, and <languageKeyword>false</languageKeyword> if the condition is not detected at least one time.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns <languageKeyword>true</languageKeyword> only if, for each <codeInline>N</codeInline> in the range <codeInline>[0, _Last - _First)</codeInline>, the predicate <codeInline>_Comp(*(_First + N))</codeInline> is <languageKeyword>true</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="any_of">
        <!--c0a685f6-8242-42c6-b1bc-3956d25ae535-->
        <title>any_of</title>
        <content>
            <para>Returns <languageKeyword>true</languageKeyword> when a condition is present at least once in the specified range of elements.</para>
            <legacySyntax>template&lt;class InputIterator, class UnaryPredicate&gt;
    bool any_of(
        InputIterator _ <parameterReference>First</parameterReference>, 
        InputIterator _ <parameterReference>Last</parameterReference>, 
        UnaryPredicate _ <parameterReference>Comp</parameterReference>
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
                            <para>An input iterator that indicates where to start checking a range of elements for a condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates the end of the range of elements to check for a condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A condition to test for. This is provided by a user-defined predicate function object. The predicate defines the condition to be satisfied by the element being tested. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>true</languageKeyword> if the condition is detected at least once in the indicated range, <languageKeyword>false</languageKeyword> if the condition is never detected.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> The template function returns <languageKeyword>true</languageKeyword> only if, for some <codeInline>N</codeInline> in the range </para>
                    <para> <codeInline>[0, </codeInline> <parameterReference>_Last</parameterReference> <codeInline> - </codeInline> <parameterReference>_First</parameterReference> <codeInline>)</codeInline>, the predicate <parameterReference>_Comp</parameterReference> <codeInline>(*(</codeInline> <parameterReference>_First</parameterReference> <codeInline> + N))</codeInline> is true. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="binary_search">
        <!--6dec2260-8aeb-4a66-9fb1-3afcf7a415f6-->
        <title>binary_search</title>
        <content>
            <para>Tests whether there is an element in a sorted range that is equal to a specified value or that is equivalent to it in a sense specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Type&gt;</legacyBold> <legacyBold>   bool binary_search(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>first</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>value</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class ForwardIterator, class Type, class BinaryPredicate&gt;</legacyBold> <legacyBold>   bool binary_search(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>first</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>value</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>value</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value required to be matched by the value of the element or that must satisfy the condition with the element value specified by the binary predicate.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <languageKeyword>true</languageKeyword> <legacyBold/>when satisfied and <languageKeyword>false</languageKeyword> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if an element is found in the range that is equal or equivalent to the specified value; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source range referenced must be valid; all pointers must be dereferenceable and, within the sequence, the last position must be reachable from the first by incrementation.</para>
                    <para>The sorted range must each be arranged as a precondition to the application of the <unmanagedCodeEntityReference>binary_search</unmanagedCodeEntityReference> algorithm in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges.</para>
                    <para>The source ranges are not modified by <unmanagedCodeEntityReference>binary_search</unmanagedCodeEntityReference>.</para>
                    <para>The value types of the forward iterators need to be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements</para>
                    <para>The complexity of the algorithm is logarithmic for random-access iterators and linear otherwise, with the number of steps proportional to ( <parameterReference>last</parameterReference> – <parameterReference>first</parameterReference>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// alg_bin_srch.cpp
// compile with: /EHsc
#include &lt;list&gt;
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser( int elem1, int elem2 )
{
    if (elem1 &lt; 0)
        elem1 = - elem1;
    if (elem2 &lt; 0)
        elem2 = - elem2;
    return elem1 &lt; elem2;
}

int main( )
{
    using namespace std;

    list &lt;int&gt; List1;

    List1.push_back( 50 );
    List1.push_back( 10 );
    List1.push_back( 30 );
    List1.push_back( 20 );
    List1.push_back( 25 );
    List1.push_back( 5 );

    List1.sort();

    cout &lt;&lt; "List1 = ( " ;
    for ( auto Iter : List1 )
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    // default binary search for 10
    if( binary_search(List1.begin(), List1.end(), 10) )
        cout &lt;&lt; "There is an element in list List1 with a value equal to 10."
        &lt;&lt; endl;
    else
        cout &lt;&lt; "There is no element in list List1 with a value equal to 10."
        &lt;&lt; endl;

    // a binary_search under the binary predicate greater
    List1.sort(greater&lt;int&gt;());
    if( binary_search(List1.begin(), List1.end(), 10, greater&lt;int&gt;()) )
        cout &lt;&lt; "There is an element in list List1 with a value greater than 10 "
        &lt;&lt; "under greater than." &lt;&lt; endl;
    else
        cout &lt;&lt; "No element in list List1 with a value greater than 10 "
        &lt;&lt; "under greater than." &lt;&lt; endl;

    // a binary_search under the user-defined binary predicate mod_lesser
    vector&lt;int&gt; v1;

    for( auto i = -2; i &lt;= 4; ++i )
    {
        v1.push_back(i);
    }

    sort(v1.begin(), v1.end(), mod_lesser);

    cout &lt;&lt; "Ordered using mod_lesser, vector v1 = ( " ;
    for( auto Iter : v1 )
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    if( binary_search(v1.begin(), v1.end(), -3, mod_lesser) )
        cout &lt;&lt; "There is an element with a value equivalent to -3 "
        &lt;&lt; "under mod_lesser." &lt;&lt; endl;
    else
        cout &lt;&lt; "There is not an element with a value equivalent to -3 "
        &lt;&lt; "under mod_lesser." &lt;&lt; endl;
}
</code>
                    <!--pass2snip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="copy">
        <!--f1fec7da-e01b-40f1-b5bd-6b81e304cae1-->
        <title>copy</title>
        <content>
            <para>Assigns the values of elements from a source range to a destination range, iterating through the source sequence of elements and assigning them new positions in a forward direction.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_DestBeg</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>An input iterator addressing the position of the first element in the source range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position that is one past the final element in the source range.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>_DestBeg</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position that is one past the final element in the destination range, that is, the iterator addresses <parameterReference>_Result</parameterReference> + ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference> ).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source range must be valid and there must be sufficient space at the destination to hold all the elements being copied.</para>
                    <para>Because the algorithm copies the source elements in order beginning with the first element, the destination range can overlap with the source range provided the <parameterReference>_Last</parameterReference> position of the source range is not contained in the destination range. <legacyBold>copy</legacyBold> can be used to shift elements to the left but not the right, unless there is no overlap between the source and destination ranges. To shift to the right any number of positions, use the <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#copy_backward">copy_backward</legacyLink> algorithm.</para>
                    <para>The <legacyBold>copy</legacyBold> algorithm only modifies values pointed to by the iterators, assigning new values to elements in the destination range. It cannot be used to create new elements and cannot insert elements into an empty container directly.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_copy.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
      v1.push_back( 10 * i );

   int ii;
   for ( ii = 0 ; ii &lt;= 10 ; ii++ )
      v2.push_back( 3 * ii );

   cout &lt;&lt; "v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To copy the first 3 elements of v1 into the middle of v2
   copy( v1.begin( ), v1.begin( ) + 3, v2.begin( ) + 4 );

   cout &lt;&lt; "v2 with v1 insert = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To shift the elements inserted into v2 two positions
   // to the left
   copy( v2.begin( )+4, v2.begin( ) + 7, v2.begin( ) + 2 );

   cout &lt;&lt; "v2 with shifted insert = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <para>For another sample showing how to use copy, see <link xlink:href="52a81dbc-3afd-4510-9d53-b6729f990356">accumulate, copy, and vector::push_back Sample</link>.</para>
                            <computerOutput>v1 = ( 0 10 20 30 40 50 )
v2 = ( 0 3 6 9 12 15 18 21 24 27 30 )
v2 with v1 insert = ( 0 3 6 9 0 10 20 21 24 27 30 )
v2 with shifted insert = ( 0 3 0 10 20 10 20 21 24 27 30 )</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="copy_backward">
        <!--ddfab855-25a3-44db-a3cd-2b05ae97ea20-->
        <title>copy_backward</title>
        <content>
            <para>Assigns the values of elements from a source range to a destination range, iterating through the source sequence of elements and assigning them new positions in a backward direction.</para>
            <legacySyntax> <legacyBold>template&lt;class BidirectionalIterator1, class BidirectionalIterator2&gt;</legacyBold> <legacyBold>   BidirectionalIterator2 copy_backward(</legacyBold> <legacyBold>      BidirectionalIterator1 </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BidirectionalIterator1 </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      BidirectionalIterator2 </legacyBold> <parameterReference>_DestEnd</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A bidirectional iterator addressing the position of the first element in the source range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position that is one past the final element in the source range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_DestEnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position of one past the final element in the destination range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position that is one past the final element in the destination range, that is, the iterator addresses <parameterReference>_DestEnd</parameterReference> – ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference> ).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source range must be valid and there must be sufficient space at the destination to hold all the elements being copied.</para>
                    <para>The <unmanagedCodeEntityReference>copy_backward</unmanagedCodeEntityReference> algorithm imposes more stringent requirements than that the copy algorithm. Both its input and output iterators must be bidirectional.</para>
                    <para>The <unmanagedCodeEntityReference>copy_backward</unmanagedCodeEntityReference> and <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#move_backward">move_backward</legacyLink> algorithms are the only Standard Template Library algorithms designating the output range with an iterator pointing to the end of the destination range.</para>
                    <para>Because the algorithm copies the source elements in order beginning with the last element, the destination range can overlap with the source range provided the <parameterReference>_First</parameterReference> position of the source range is not contained in the destination range. <unmanagedCodeEntityReference>copy_backward</unmanagedCodeEntityReference> can be used to shift elements to the right but not the left, unless there is no overlap between the source and destination ranges. To shift to the left any number of positions, use the <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#copy">copy</legacyLink> algorithm.</para>
                    <para>The <unmanagedCodeEntityReference>copy_backward</unmanagedCodeEntityReference> algorithm only modifies values pointed to by the iterators, assigning new values to elements in the destination range. It cannot be used to create new elements and cannot insert elements into an empty container directly.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// alg_copy_bkwd.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2;

   int i;
   for ( i = 0 ; i &lt;= 5 ; ++i )
      v1.push_back( 10 * i );

   int ii;
   for ( ii = 0 ; ii &lt;= 10 ; ++ii )
      v2.push_back( 3 * ii );

   cout &lt;&lt; "v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; ++Iter1 )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; ++Iter2 )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To copy_backward the first 3 elements of v1 into the middle of v2
   copy_backward( v1.begin( ), v1.begin( ) + 3, v2.begin( ) + 7 );

   cout &lt;&lt; "v2 with v1 insert = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; ++Iter2 )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To shift the elements inserted into v2 two positions
   // to the right
   copy_backward( v2.begin( )+4, v2.begin( ) + 7, v2.begin( ) + 9 );

   cout &lt;&lt; "v2 with shifted insert = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; ++Iter2 )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="copy_if">
        <!--56694c4a-6e99-414e-9748-6992a81c78a6-->
        <title>copy_if</title>
        <content>
            <para>In a range of elements, copies the elements that are <languageKeyword>true</languageKeyword> for the specified condition. </para>
            <legacySyntax>template&lt;class InputIterator, class OutputIterator, class BinaryPredicate&gt;
   OutputIterator copy_if(
      InputIterator <parameterReference>_First</parameterReference>, 
      InputIterator <parameterReference>_Last</parameterReference>,
      OutputIterator <parameterReference>_Dest</parameterReference>,
      Predicate <parameterReference>_Pred</parameterReference>
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
                            <para>An input iterator that indicates the start of a range to check for the condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates the end of the range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Dest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The output iterator that indicates the destination for the copied elements.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The condition against which every element in the range is tested. This condition is provided by a user-defined predicate function object. A predicate takes one argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator that equals <parameterReference>_Dest</parameterReference> incremented once for each element that fulfills the condition. In other words, the return value minus <parameterReference>_Dest</parameterReference> equals the number of copied elements.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function evaluates </para>
                    <para> <codeInline>if (</codeInline> <parameterReference>_Pred</parameterReference> <codeInline>(*</codeInline> <parameterReference>_First</parameterReference> <codeInline> + N))</codeInline>
                    </para>
                    <para> <codeInline>   *</codeInline> <parameterReference>_Dest</parameterReference> <codeInline>++ = *(</codeInline> <parameterReference>_First</parameterReference> <codeInline> + N))</codeInline>
                    </para>
                    <para>once for each <codeInline>N</codeInline> in the range <codeInline>[0, </codeInline> <parameterReference>_Last</parameterReference> <codeInline> - </codeInline> <parameterReference>_First</parameterReference> <codeInline>)</codeInline>, for strictly increasing values of <codeInline>N</codeInline> starting with the lowest value. If <parameterReference>_Dest</parameterReference> and <parameterReference>_First</parameterReference> designate regions of storage, <parameterReference>_Dest</parameterReference> must not be in the range <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>)</codeInline>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="copy_n">
        <!--22620efb-2fc0-477f-88ed-837e2f595539-->
        <title>copy_n</title>
        <content>
            <para>Copies a specified number of elements. </para>
            <legacySyntax>template&lt;class InputIterator, class Size, class OutputIterator&gt;
OutputIterator copy_n(InputIterator first, Size count, OutputIterator dest);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates where to copy elements from.</para>
                        </definition>
                        <definedTerm> <parameterReference>count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A signed or unsigned integer type specifying the number of elements to copy.</para>
                        </definition>
                        <definedTerm> <parameterReference>dest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator that indicates where to copy elements to.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns an output iterator where elements have been copied to. It is the same as the returned value of the third parameter, <parameterReference>dest</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> The template function evaluates <codeInline>*(dest + N) = *(first + N))</codeInline> once for each <codeInline>N</codeInline> in the range <codeInline>[0, </codeInline> <parameterReference>count</parameterReference> <codeInline>)</codeInline>, for strictly increasing values of <codeInline>N</codeInline> starting with the lowest value. It then returns <parameterReference>dest</parameterReference> <codeInline> + N</codeInline>. If <parameterReference>dest</parameterReference> and <parameterReference>first</parameterReference> designate regions of storage, <parameterReference>dest</parameterReference> must not be in the range <codeInline>[</codeInline> <parameterReference>first</parameterReference> <codeInline>, </codeInline> <parameterReference>Last</parameterReference> <codeInline>)</codeInline>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="count">
        <!--42d33762-e593-4719-ad85-6fb27a83bf41-->
        <title>count</title>
        <content>
            <para>Returns the number of elements in a range whose values match a specified value.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class Type&gt;</legacyBold> <legacyBold>   typename iterator_traits&lt;InputIterator&gt;::difference_type count(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>An input iterator addressing the position of the first element in the range to be traversed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range to be traversed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the elements to be counted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The difference type of the <legacyBold>InputIterator</legacyBold> that counts the number of elements in the range [ <parameterReference>_First</parameterReference>, <parameterReference>_Last</parameterReference> ) that have value <parameterReference>_Val</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the match between an element and the specified value must impose an equivalence relation between its operands.</para>
                    <para>This algorithm is generalized to count elements that satisfy any predicate with the template function <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#count_if">count_if</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_count.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main()
{
    using namespace std;
    vector&lt;int&gt; v1;
    vector&lt;int&gt;::iterator Iter;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);
    v1.push_back(10);

    cout &lt;&lt; "v1 = ( " ;
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout &lt;&lt; *Iter &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    vector&lt;int&gt;::iterator::difference_type result;
    result = count(v1.begin(), v1.end(), 10);
    cout &lt;&lt; "The number of 10s in v2 is: " &lt;&lt; result &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>v1 = ( 10 20 10 40 10 )
The number of 10s in v2 is: 3.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="count_if">
        <!--b785887c-83cd-4099-becc-3284dee05295-->
        <title>count_if</title>
        <content>
            <para>Returns the number of elements in a range whose values satisfy a specified condition.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class Predicate&gt;</legacyBold> <legacyBold>   typename iterator_traits&lt;InputIterator&gt;::difference_type count_if(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      Predicate </legacyBold> <parameterReference>_Pred</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>An input iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if an element is to be counted. A predicate takes single argument and returns <legacyBold>true </legacyBold>or <legacyBold>false</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of elements that satisfy the condition specified by the predicate.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This template function is a generalization of the algorithm <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#count">count</legacyLink>, replacing the predicate "equals a specific value" with any predicate.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_count_if.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

bool greater10(int value)
{
    return value &gt;10;
}

int main()
{
    using namespace std;
    vector&lt;int&gt; v1;
    vector&lt;int&gt;::iterator Iter;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);
    v1.push_back(10);

    cout &lt;&lt; "v1 = ( ";
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)
        cout &lt;&lt; *Iter &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    vector&lt;int&gt;::iterator::difference_type result1;
    result1 = count_if(v1.begin(), v1.end(), greater10);
    cout &lt;&lt; "The number of elements in v1 greater than 10 is: "
         &lt;&lt; result1 &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>v1 = ( 10 20 10 40 10 )
The number of elements in v1 greater than 10 is: 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="equal">
        <!--56533afd-b696-40a0-8fa9-d366539e49ae-->
        <title>equal</title>
        <content>
            <para>Compares two ranges element by element for equality or equivalence in a sense specified by a binary predicate. </para>
            <para>Use std::equal when comparing elements in different container types (for example vector and list) or when comparing different element types, or when you need to compare sub-ranges of containers. Otherwise, when comparing elements of the same type in the same container type, use the non-member operator== that is provided for each container.</para>
            <para>Use the dual-range overloads in C++14 code because the overloads that only take a single iterator for the second range will not detect differences if the second range is longer than the first range, and will result in undefined behavior if the second range is shorter than the first range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2&gt;</legacyBold> <legacyBold>   bool equal(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class BinaryPredicate&gt;</legacyBold> <legacyBold>   bool equal(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>Comp</parameterReference> <legacyBold>);</legacyBold> <legacyBold>// C++14</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2&gt;</legacyBold> <legacyBold>   bool equal(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>Last2</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class BinaryPredicate&gt;</legacyBold> <legacyBold>   bool equal(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>Last2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>Comp</parameterReference> <legacyBold>);</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the second range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of one past the last element in the second range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if and only if the ranges are identical or equivalent under the binary predicate when compared element by element; otherwise, <legacyBold>false</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range to be searched must be valid; all iterators must be dereferenceable and the last position is reachable from the first by incrementation.</para>
                    <para>If the two ranges are equal length, then the time complexity of the algorithm is linear in the number of elements contained in the range. Otherwise the function immediately returns <languageKeyword>false</languageKeyword>.</para>
                    <para>Neither the <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> nor the user-defined predicate is required to impose an equivalence relation that symmetric, reflexive and transitive between its operands.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;algorithm&gt;

using namespace std;

int main()
{
    vector&lt;int&gt; v1 { 0, 5, 10, 15, 20, 25 };
    vector&lt;int&gt; v2 { 0, 5, 10, 15, 20, 25 };
    vector&lt;int&gt; v3 { 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 };

    // Using range-and-a-half equal:
    bool b = equal(v1.begin(), v1.end(), v2.begin());
    cout &lt;&lt; "v1 and v2 are equal: "
       &lt;&lt; b &lt;&lt; endl; // true, as expected

    b = equal(v1.begin(), v1.end(), v3.begin());
    cout &lt;&lt; "v1 and v3 are equal: "
       &lt;&lt; b &lt;&lt; endl; // true, surprisingly

    // Using dual-range equal:
    b = equal(v1.begin(), v1.end(), v3.begin(), v3.end());
    cout &lt;&lt; "v1 and v3 are equal with dual-range overload: "
       &lt;&lt; b &lt;&lt; endl; // false

    return 0;
}

</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="equal_range">
        <!--f508fa87-41c6-4799-90dc-4ebf17d2126a-->
        <title>equal_range</title>
        <content>
            <para>Given an ordered range, finds the subrange in which all elements are equivalent to a given value.</para>
            <legacySyntax>template&lt;class ForwardIterator, class Type&gt;
   pair&lt;ForwardIterator, ForwardIterator&gt; equal_range(
      ForwardIterator <parameterReference>first</parameterReference>,
      ForwardIterator <parameterReference>last</parameterReference>, 
      const Type&amp; <parameterReference>val</parameterReference>
   );
template&lt;class ForwardIterator, class Type, class Predicate&gt;
   pair&lt;ForwardIterator, ForwardIterator&gt; equal_range(
      ForwardIterator <parameterReference>first</parameterReference>,
      ForwardIterator <parameterReference>last</parameterReference>, 
      const Type&amp; <parameterReference>val</parameterReference>, 
      Predicate <parameterReference>comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value being searched for in the ordered range.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is less than another. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pair of forward iterators that specify a subrange, contained within the range searched, in which all of the elements are equivalent to <parameterReference>val</parameterReference> in the sense defined by the binary predicate used (either <parameterReference>comp</parameterReference> or the default, less-than).</para>
                    <para>If no elements in the range are equivalent to <parameterReference>val</parameterReference>, the returned pair of forward iterators are equal and specify the point where <parameterReference>val</parameterReference> could be inserted without disturbing the order of the range.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first iterator of the pair returned by the algorithm is <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#lower_bound">lower_bound</legacyLink>, and the second iterator is <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#upper_bound">upper_bound</legacyLink>. </para>
                    <para>The range must be sorted according to the predicate provided to <unmanagedCodeEntityReference>equal_range</unmanagedCodeEntityReference>. For example, if you are going to use the greater-than predicate, the range must be sorted in descending order.</para>
                    <para>Elements in the possibly empty subrange defined by the pair of iterators returned by <unmanagedCodeEntityReference>equal_range</unmanagedCodeEntityReference> will be equivalent to <parameterReference>val</parameterReference> in the sense defined by the predicate used.</para>
                    <para>The complexity of the algorithm is logarithmic for random-access iterators and linear otherwise, with the number of steps proportional to ( <parameterReference>last</parameterReference> – <parameterReference>first</parameterReference>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// alg_equal_range.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // greater&lt;int&gt;()
#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;

template&lt;class T&gt; void dump_vector( const vector&lt;T&gt;&amp; v, pair&lt; typename vector&lt;T&gt;::iterator, typename vector&lt;T&gt;::iterator &gt; range )
{
    // prints vector v with range delimited by [ and ]

    for( typename vector&lt;T&gt;::const_iterator i = v.begin(); i != v.end(); ++i )
    {
        if( i == range.first )
        {
            cout &lt;&lt; "[ ";
        }
        if( i == range.second )
        {
            cout &lt;&lt; "] ";
        }

        cout &lt;&lt; *i &lt;&lt; " ";
    }
    cout &lt;&lt; endl;
}

template&lt;class T&gt; void equal_range_demo( const vector&lt;T&gt;&amp; original_vector, T val )
{
    vector&lt;T&gt; v(original_vector);

    sort( v.begin(), v.end() );
    cout &lt;&lt; "Vector sorted by the default binary predicate &lt;:" &lt;&lt; endl &lt;&lt; '\t';
    for( vector&lt;T&gt;::const_iterator i = v.begin(); i != v.end(); ++i )
    {
        cout &lt;&lt; *i &lt;&lt; " ";
    }
    cout &lt;&lt; endl &lt;&lt; endl;

    pair&lt; vector&lt;T&gt;::iterator, vector&lt;T&gt;::iterator &gt; result
        = equal_range( v.begin(), v.end(), val );

    cout &lt;&lt; "Result of equal_range with val = " &lt;&lt; val &lt;&lt; ":" &lt;&lt; endl &lt;&lt; '\t';
    dump_vector( v, result );
    cout &lt;&lt; endl;
}

template&lt;class T, class F&gt; void equal_range_demo( const vector&lt;T&gt;&amp; original_vector, T val, F pred, string predname )
{
    vector&lt;T&gt; v(original_vector);

    sort( v.begin(), v.end(), pred );
    cout &lt;&lt; "Vector sorted by the binary predicate " &lt;&lt; predname &lt;&lt; ":" &lt;&lt; endl &lt;&lt; '\t';
    for( typename vector&lt;T&gt;::const_iterator i = v.begin(); i != v.end(); ++i )
    {
        cout &lt;&lt; *i &lt;&lt; " ";
    }
    cout &lt;&lt; endl &lt;&lt; endl;

    pair&lt; typename vector&lt;T&gt;::iterator, typename vector&lt;T&gt;::iterator &gt; result
        = equal_range( v.begin(), v.end(), val, pred );

    cout &lt;&lt; "Result of equal_range with val = " &lt;&lt; val &lt;&lt; ":" &lt;&lt; endl &lt;&lt; '\t';
    dump_vector( v, result );
    cout &lt;&lt; endl;
}

// Return whether absolute value of elem1 is less than absolute value of elem2
bool abs_lesser( int elem1, int elem2 )
{
    return abs(elem1) &lt; abs(elem2);
}

// Return whether string l is shorter than string r
bool shorter_than(const string&amp; l, const string&amp; r)
{
    return l.size() &lt; r.size();
}

int main()
{
    vector&lt;int&gt; v1;

    // Constructing vector v1 with default less than ordering
    for( int i = -1; i &lt;= 4; ++i )
    {
        v1.push_back(i);
    }

    for( int i =-3; i &lt;= 0; ++i )
    {
        v1.push_back( i );
    }

    equal_range_demo( v1, 3 );
    equal_range_demo( v1, 3, greater&lt;int&gt;(), "greater" );
    equal_range_demo( v1, 3, abs_lesser, "abs_lesser" );

    vector&lt;string&gt; v2;

    v2.push_back("cute");
    v2.push_back("fluffy");
    v2.push_back("kittens");
    v2.push_back("fun");
    v2.push_back("meowmeowmeow");
    v2.push_back("blah");

    equal_range_demo&lt;string&gt;( v2, "fred" );
    equal_range_demo&lt;string&gt;( v2, "fred", shorter_than, "shorter_than" );
}
</code>
                    <!--pass2snip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="fill">
        <!--b1f09e99-a9d2-4e4c-97f8-aaccc20b4420-->
        <title>fill</title>
        <content>
            <para>Assigns the same new value to every element in a specified range.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Type&gt;</legacyBold> <legacyBold>   void fill(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator addressing the position of the first element in the range to be traversed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be traversed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be assigned to elements in the range [ <parameterReference>_First</parameterReference>, <parameterReference>_Last</parameterReference>).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The destination range must be valid; all pointers must be dereferenceable, and the last position is reachable from the first by incrementation. The complexity is linear with the size of the range.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_fill.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
   {
      v1.push_back( 5 * i );
   }
   
   cout &lt;&lt; "Vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // Fill the last 5 positions with a value of 2
   fill( v1.begin( ) + 5, v1.end( ), 2 );

   cout &lt;&lt; "Modified v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 = ( 0 5 10 15 20 25 30 35 40 45 )
Modified v1 = ( 0 5 10 15 20 2 2 2 2 2 )</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="fill_n">
        <!--ebcda70f-d82c-4f43-b4c8-c7e7cbbccb69-->
        <title>fill_n</title>
        <content>
            <para>Assigns a new value to a specified number of elements in a range beginning with a particular element.</para>
            <legacySyntax> <legacyBold>template&lt;class OutputIterator, class Size, class Type&gt;</legacyBold> <legacyBold>   OutputIterator fill_n(</legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      Size</legacyBold> <parameterReference> Count</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>Val</parameterReference> <legacyBold>   ); </legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the range to be assigned the value <parameterReference>Val</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A signed or unsigned integer type specifying the number of elements to be assigned the value.</para>
                        </definition>
                        <definedTerm> <parameterReference>Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be assigned to elements in the range [ <parameterReference>First</parameterReference>,                                 <legacyItalic>First + Count</legacyItalic>).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An iterator to the element that follows the last element filled if <parameterReference>Count</parameterReference> &gt; zero, otherwise the first element.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The destination range must be valid; all pointers must be dereferenceable, and the last position is reachable from the first by incrementation. The complexity is linear with the size of the range.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// alg_fill_n.cpp
// compile using /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main() 
{
    using namespace std;
    vector &lt;int&gt; v;

    for ( auto i = 0 ; i &lt; 9 ; ++i )
        v.push_back( 0 );

    cout &lt;&lt; "  vector v = ( " ;
    for ( const auto &amp;w : v )
        cout &lt;&lt; w &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    // Fill the first 3 positions with a value of 1, saving position.
    auto pos = fill_n( v.begin(), 3, 1 );

    cout &lt;&lt; "modified v = ( " ;
    for ( const auto &amp;w : v )
        cout &lt;&lt; w &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    // Fill the next 3 positions with a value of 2, using last position.
    fill_n( pos, 3, 2 );

    cout &lt;&lt; "modified v = ( " ;
    for ( const auto &amp;w : v )
        cout &lt;&lt; w &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    // Fill the last 3 positions with a value of 3, using relative math.
    fill_n( v.end()-3, 3, 3 );

    cout &lt;&lt; "modified v = ( " ;
    for ( const auto &amp;w : v )
        cout &lt;&lt; w &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="find">
        <!--021e9ef9-8817-409f-92ee-cd7104867361-->
        <title>find</title>
        <content>
            <para>Locates the position of the first occurrence of an element in a range that has a specified value.</para>
            <legacySyntax>template&lt;class InputIterator, class T&gt;
InputIterator find(InputIterator first, InputIterator last, 
      const T&amp; val);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the range to be searched for the specified value.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range to be searched for the specified value.</para>
                        </definition>
                        <definedTerm> <parameterReference>val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to be searched for.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An input iterator addressing the first occurrence of the specified value in the range being searched. If no element is found with an equivalent value, returns <parameterReference>last</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the match between an element and the specified value must impose an equivalence relation between its operands.</para>
                    <para>For a code example using <languageKeyword>find()</languageKeyword>, see <link xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#find_if">find_if()</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="find_end">
        <!--831c0501-75d0-4ed8-9519-9b8c1dfef98a-->
        <title>find_end</title>
        <content>
            <para>Looks in a range for the last subsequence that is identical to a specified sequence or that is equivalent in a sense specified by a binary predicate.</para>
            <legacySyntax>template&lt;class ForwardIterator1, class ForwardIterator2&gt;
   ForwardIterator1 find_end(
      ForwardIterator1 <parameterReference>First1</parameterReference>, 
      ForwardIterator1 <parameterReference>Last1</parameterReference>,
      ForwardIterator2 <parameterReference>First2</parameterReference>, 
      ForwardIterator2 <parameterReference>Last2</parameterReference>
   );
template&lt;class ForwardIterator1, class ForwardIterator2, class Pred&gt;
   ForwardIterator1 find_end(
      ForwardIterator1 <parameterReference>First1</parameterReference>, 
      ForwardIterator1 <parameterReference>Last1</parameterReference>,
      ForwardIterator2 <parameterReference>First2</parameterReference>, 
      ForwardIterator2 <parameterReference>Last2</parameterReference>,
      Pred <parameterReference>Comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the last element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to search for.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the last element in the range to search for.</para>
                        </definition>
                        <definedTerm> <parameterReference>Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the position of the first element of the last subsequence within [First1, Last1) that matches the specified sequence [First2, Last2).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the match between an element and the specified value must impose an equivalence relation between its operands.</para>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and, within each sequence, the last position is reachable from the first by incrementation.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_find_end.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

// Return whether second element is twice the first
bool twice ( int elem1, int elem2 )
{
   return 2 * elem1 == elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1, v2;
   list &lt;int&gt; L1;
   vector &lt;int&gt;::iterator Iter1, Iter2;
   list &lt;int&gt;::iterator L1_Iter, L1_inIter;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }

   int ii;
   for ( ii = 1 ; ii &lt;= 4 ; ii++ )
   {
      L1.push_back( 5 * ii );
   }

   int iii;
   for ( iii = 2 ; iii &lt;= 4 ; iii++ )
   {
      v2.push_back( 10 * iii );
   }

   cout &lt;&lt; "Vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "List L1 = ( " ;
   for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
      cout &lt;&lt; *L1_Iter &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
      cout &lt;&lt; ")" &lt;&lt; endl;

   // Searching v1 for a match to L1 under identity
   vector &lt;int&gt;::iterator result1;
   result1 = find_end ( v1.begin( ), v1.end( ), L1.begin( ), L1.end( ) );

   if ( result1 == v1.end( ) )
      cout &lt;&lt; "There is no match of L1 in v1."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There is a match of L1 in v1 that begins at "
           &lt;&lt; "position "&lt;&lt; result1 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;

   // Searching v1 for a match to L1 under the binary predicate twice
   vector &lt;int&gt;::iterator result2;
   result2 = find_end ( v1.begin( ), v1.end( ), v2.begin( ), v2.end( ), twice );

   if ( result2 == v1.end( ) )
      cout &lt;&lt; "There is no match of L1 in v1."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There is a sequence of elements in v1 that "
           &lt;&lt; "are equivalent to those\n in v2 under the binary "
           &lt;&lt; "predicate twice and that begins at position "
           &lt;&lt; result2 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 = ( 0 5 10 15 20 25 0 5 10 15 20 25 )
List L1 = ( 5 10 15 20 )
Vector v2 = ( 20 30 40 )
There is a match of L1 in v1 that begins at position 7.
There is a sequence of elements in v1 that are equivalent to those
 in v2 under the binary predicate twice and that begins at position 8.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="find_first_of">
        <!--e00a4ca9-6d56-446e-9174-14ffdbc87079-->
        <title>find_first_of</title>
        <content>
            <para>Searches for the first occurrence of any of several values within a target range or for the first occurrence of any of several elements that are equivalent in a sense specified by a binary predicate to a specified set of the elements.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator1, class ForwardIterator2&gt;</legacyBold> <legacyBold>   ForwardIterator1 find_first_of(</legacyBold> <legacyBold>      ForwardIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      ForwardIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class ForwardIterator1, class ForwardIterator2, class BinaryPredicate&gt;</legacyBold> <legacyBold>   ForwardIterator1 find_first_of(</legacyBold> <legacyBold>      ForwardIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      ForwardIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator2 </legacyBold> <parameterReference>_Last2,</parameterReference> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be matched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be matched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the position of the first element of the first subsequence that matches the specified sequence or that is equivalent in a sense specified by a binary predicate.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the match between an element and the specified value must impose an equivalence relation between its operands.</para>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and, within each sequence, the last position is reachable from the first by incrementation.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_find_first_of.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

// Return whether second element is twice the first
bool twice ( int elem1, int elem2 )
{
   return 2 * elem1 == elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1, v2;
   list &lt;int&gt; L1;
   vector &lt;int&gt;::iterator Iter1, Iter2;
   list &lt;int&gt;::iterator L1_Iter, L1_inIter;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }

   int ii;
   for ( ii = 3 ; ii &lt;= 4 ; ii++ )
   {
      L1.push_back( 5 * ii );
   }

   int iii;
   for ( iii = 2 ; iii &lt;= 4 ; iii++ )
   {
      v2.push_back( 10 * iii );
   }

   cout &lt;&lt; "Vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "List L1 = ( " ;
   for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
      cout &lt;&lt; *L1_Iter &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
      cout &lt;&lt; ")" &lt;&lt; endl;

   // Searching v1 for first match to L1 under identity
   vector &lt;int&gt;::iterator result1;
   result1 = find_first_of ( v1.begin( ), v1.end( ), L1.begin( ), L1.end( ) );

   if ( result1 == v1.end( ) )
      cout &lt;&lt; "There is no match of L1 in v1."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There is at least one match of L1 in v1"
           &lt;&lt; "\n and the first one begins at "
           &lt;&lt; "position "&lt;&lt; result1 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;

   // Searching v1 for a match to L1 under the binary predicate twice
   vector &lt;int&gt;::iterator result2;
   result2 = find_first_of ( v1.begin( ), v1.end( ), v2.begin( ), v2.end( ), twice );

   if ( result2 == v1.end( ) )
      cout &lt;&lt; "There is no match of L1 in v1."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There is a sequence of elements in v1 that "
           &lt;&lt; "are equivalent\n to those in v2 under the binary "
           &lt;&lt; "predicate twice\n and the first one begins at position "
           &lt;&lt; result2 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 = ( 0 5 10 15 20 25 0 5 10 15 20 25 )
List L1 = ( 15 20 )
Vector v2 = ( 20 30 40 )
There is at least one match of L1 in v1
 and the first one begins at position 3.
There is a sequence of elements in v1 that are equivalent
 to those in v2 under the binary predicate twice
 and the first one begins at position 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="find_if">
        <!--aa8ff698-e47e-4ff8-8c88-cbda4b102a4a-->
        <title>find_if</title>
        <content>
            <para>Locates the position of the first occurrence of an element in a range that satisfies a specified condition.</para>
            <legacySyntax>template&lt;class InputIterator, class Predicate&gt;
InputIterator find_if(InputIterator first, InputIterator last, 
      Predicate pred);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object or <legacyLink xlink:href="713c7638-92be-4ade-ab22-fa33417073bf">lambda expression</legacyLink> that defines the condition to be satisfied by the element being searched for. A predicate takes single argument and returns <languageKeyword>true</languageKeyword> (satisfied) or <languageKeyword>false</languageKeyword> (not satisfied). The signature of <parameterReference>pred</parameterReference> must effectively be <codeInline>bool pred(const T&amp; arg);</codeInline>, where <parameterReference>T</parameterReference> is a type to which <parameterReference>InputIterator</parameterReference> can be implicitly converted when dereferenced. The <codeInline>const</codeInline> keyword is shown only to illustrate that the function object or lambda should not modify the argument.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An input iterator that refers to the first element in the range that satisfies the condition specified by the predicate (the predicate results in <languageKeyword>true</languageKeyword>). If no element is found to satisfy the predicate, returns <parameterReference>last</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This template function is a generalization of the algorithm <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#find">find</legacyLink>, replacing the predicate "equals a specific value" with any predicate. For the logical opposite (find the first element that does not satisfy the predicate), see <link xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#find_if_not">find_if_not</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// cl.exe /W4 /nologo /EHsc /MTd
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;

using namespace std;

template &lt;typename S&gt; void print(const S&amp; s) {
    for (const auto&amp; p : s) {
        cout &lt;&lt; "(" &lt;&lt; p &lt;&lt; ") ";
    }
    cout &lt;&lt; endl;
}

// Test std::find()
template &lt;class InputIterator, class T&gt;
void find_print_result(InputIterator first, InputIterator last, const T&amp; value) {

    // call &lt;algorithm&gt; std::find()
    auto p = find(first, last, value);

    cout &lt;&lt; "value " &lt;&lt; value;
    if (p == last) {
        cout &lt;&lt; " not found." &lt;&lt; endl;
    } else {
        cout &lt;&lt; " found." &lt;&lt; endl;
    }
}

// Test std::find_if()
template &lt;class InputIterator, class Predicate&gt;
void find_if_print_result(InputIterator first, InputIterator last,
    Predicate Pred, const string&amp; Str) {

    // call &lt;algorithm&gt; std::find_if()
    auto p = find_if(first, last, Pred);

    if (p == last) {
        cout &lt;&lt; Str &lt;&lt; " not found." &lt;&lt; endl;
    } else {
        cout &lt;&lt; "first " &lt;&lt; Str &lt;&lt; " found: " &lt;&lt; *p &lt;&lt; endl;
    }
}

// Function to use as the UnaryPredicate argument to find_if() in this example
bool is_odd_int(int i) {
    return ((i % 2) != 0);
}

int main()
{
    // Test using a plain old array.
    const int x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout &lt;&lt; "array x[] contents: ";
    print(x);
    // Using non-member std::begin()/std::end() to get input iterators for the plain old array.
    cout &lt;&lt; "Test std::find() with array..." &lt;&lt; endl;
    find_print_result(begin(x), end(x), 10);
    find_print_result(begin(x), end(x), 42);
    cout &lt;&lt; "Test std::find_if() with array..." &lt;&lt; endl;
    find_if_print_result(begin(x), end(x), is_odd_int, "odd integer"); // function name
    find_if_print_result(begin(x), end(x), // lambda
        [](int i){ return ((i % 2) == 0); }, "even integer");

    // Test using a vector.
    vector&lt;int&gt; v;
    for (int i = 0; i &lt; 10; ++i) {
        v.push_back((i + 1) * 10);
    }
    cout &lt;&lt; endl &lt;&lt; "vector v contents: ";
    print(v);
    cout &lt;&lt; "Test std::find() with vector..." &lt;&lt; endl;
    find_print_result(v.begin(), v.end(), 20);
    find_print_result(v.begin(), v.end(), 12);
    cout &lt;&lt; "Test std::find_if() with vector..." &lt;&lt; endl;
    find_if_print_result(v.begin(), v.end(), is_odd_int, "odd integer");
    find_if_print_result(v.begin(), v.end(), // lambda
        [](int i){ return ((i % 2) == 0); }, "even integer");
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="find_if_not">
        <!--50d719ac-d395-4fad-a8cd-05beb844ee0f-->
        <title>find_if_not</title>
        <content>
            <para>Returns the first element in the indicated range that does not satisfy a condition.</para>
            <legacySyntax>template&lt;class InputIterator, class Predicate&gt;
InputIterator find_if_not(InputIterator first, InputIterator last, 
      Predicate pred);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object or <legacyLink xlink:href="713c7638-92be-4ade-ab22-fa33417073bf">lambda expression</legacyLink> that defines the condition to be not satisfied by the element being searched for. A predicate takes single argument and returns <languageKeyword>true</languageKeyword> (satisfied) or <languageKeyword>false</languageKeyword> (not satisfied). The signature of <parameterReference>pred</parameterReference> must effectively be <codeInline>bool pred(const T&amp; arg);</codeInline>, where <parameterReference>T</parameterReference> is a type to which <parameterReference>InputIterator</parameterReference> can be implicitly converted when dereferenced. The <codeInline>const</codeInline> keyword is shown only to illustrate that the function object or lambda should not modify the argument.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An input iterator that refers to the first element in the range that does not satisfy the condition specified by the predicate (the predicate results in <languageKeyword>false</languageKeyword>). If all elements satisfy the predicate (the predicate results in <languageKeyword>true</languageKeyword> for every element), returns <parameterReference>last</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This template function is a generalization of the algorithm <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#find">find</legacyLink>, replacing the predicate "equals a specific value" with any predicate. For the logical opposite (find the first element that does satisfy the predicate), see <link xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#find_if">find_if</link>.</para>
                    <para>For a code example readily adaptable to <languageKeyword>find_if_not()</languageKeyword>, see <link xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#find_if">find_if()</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="for_each">
        <!--8cb2ae72-bef6-488b-b011-0475c0787e33-->
        <title>for_each</title>
        <content>
            <para>Applies a specified function object to each element in a forward order within a range and returns the function object.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class Function&gt;</legacyBold> <legacyBold>   Function for_each(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      Function </legacyBold> <parameterReference>_Func</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>An input iterator addressing the position of the first element in the range to be operated on.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range operated on.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Func</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined function object that is applied to each element in the range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A copy of the function object after it has been applied to all of the elements in the range.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The algorithm <languageKeyword>for_each</languageKeyword> is very flexible, allowing the modification of each element within a range in different, user-specified ways. Templatized functions may be reused in a modified form by passing different parameters. User-defined functions may accumulate information within an internal state that the algorithm may return after processing all of the elements in the range.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and, within the sequence, the last position must be reachable from the first by incrementation.</para>
                    <para>The complexity is linear with at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_for_each.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

// The function object multiplies an element by a Factor
template &lt;class Type&gt;
class MultValue
{
private:
   Type Factor;   // The value to multiply by
public:
   // Constructor initializes the value to multiply by
   MultValue ( const Type&amp; _Val ) : Factor ( _Val ) {
   }

   // The function call for the element to be multiplied
   void operator ( ) ( Type&amp; elem ) const
   {
      elem *= Factor;
   }
};

// The function object to determine the average
class Average
{
private:
   long num;      // The number of elements
   long sum;      // The sum of the elements
public:
   // Constructor initializes the value to multiply by
   Average ( ) : num ( 0 ) , sum ( 0 )
   {
   }

   // The function call to process the next elment
   void operator ( ) ( int elem ) \
   {
      num++;      // Increment the element count
      sum += elem;   // Add the value to the partial sum
   }

   // return Average
   operator double ( )
   {
      return  static_cast &lt;double&gt; (sum) /
      static_cast &lt;double&gt; (num);
   }
};

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   // Constructing vector v1
   int i;
   for ( i = -4 ; i &lt;= 2 ; i++ )
   {
      v1.push_back(  i );
   }

   cout &lt;&lt; "Original vector  v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Using for_each to multiply each element by a Factor
   for_each ( v1.begin ( ) , v1.end ( ) , MultValue&lt;int&gt; ( -2 ) );

   cout &lt;&lt; "Multiplying the elements of the vector v1\n "
        &lt;&lt;  "by the factor -2 gives:\n v1mod1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // The function object is templatized and so can be
   // used again on the elements with a different Factor
   for_each (v1.begin ( ) , v1.end ( ) , MultValue&lt;int&gt; (5 ) );

   cout &lt;&lt; "Multiplying the elements of the vector v1mod\n "
        &lt;&lt;  "by the factor 5 gives:\n v1mod2 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // The local state of a function object can accumulate
   // information about a sequence of actions that the
   // return value can make available, here the Average
   double avemod2 = for_each ( v1.begin ( ) , v1.end ( ) ,
      Average ( ) );
   cout &lt;&lt; "The average of the elements of v1 is:\n Average ( v1mod2 ) = "
        &lt;&lt; avemod2 &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Original vector  v1 = ( -4 -3 -2 -1 0 1 2 ).
Multiplying the elements of the vector v1
 by the factor -2 gives:
 v1mod1 = ( 8 6 4 2 0 -2 -4 ).
Multiplying the elements of the vector v1mod
 by the factor 5 gives:
 v1mod2 = ( 40 30 20 10 0 -10 -20 ).
The average of the elements of v1 is:
 Average ( v1mod2 ) = 10.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="generate">
        <!--0353f358-9651-4e00-b0c9-5bca720539a3-->
        <title>generate</title>
        <content>
            <para>Assigns the values generated by a function object to each element in a range.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Generator&gt;</legacyBold> <legacyBold>   void generate(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      Generator </legacyBold> <parameterReference>_Gen</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator addressing the position of the first element in the range to which values are to be assigned.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to which values are to be assigned.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Gen</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A function object that is called with no arguments that is used to generate the values to be assigned to each of the elements in the range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function object is invoked for each element in the range and does not need to return the same value each time it is called. It may, for example, read from a file or refer to and modify a local state. The generator's result type must be convertible to the value type of the forward iterators for the range.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and, within the sequence, the last position must be reachable from the first by incrementation.</para>
                    <para>The complexity is linear, with exactly ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) calls to the generator being required.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_generate.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

int main( )
{
   using namespace std;

   // Assigning random values to vector integer elements
   vector &lt;int&gt; v1 ( 5 );
   vector &lt;int&gt;::iterator Iter1;
   deque &lt;int&gt; deq1 ( 5 );
   deque &lt;int&gt;::iterator d1_Iter;
   
   generate ( v1.begin ( ), v1.end ( ) , rand );
   
   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Assigning random values to deque integer elements
   generate ( deq1.begin ( ), deq1.end ( ) , rand );

   cout &lt;&lt; "Deque deq1 is ( " ;
   for ( d1_Iter = deq1.begin( ) ; d1_Iter != deq1.end( ) ; d1_Iter++ )
      cout &lt;&lt; *d1_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 is ( 41 18467 6334 26500 19169 ).
Deque deq1 is ( 15724 11478 29358 26962 24464 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="generate_n">
        <!--377e5b0f-1bb8-4b77-9449-fbebf57f6e5e-->
        <title>generate_n</title>
        <content>
            <para>Assigns the values generated by a function object to a specified number of elements in a range and returns to the position one past the last assigned value.</para>
            <legacySyntax>template&lt;class OutputIterator, class Diff, class Generator&gt;
void generate_n( OutputIterator First, Diff Count, Generator Gen);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of first element in the range to which values are to be assigned.</para>
                        </definition>
                        <definedTerm> <parameterReference>Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A signed or unsigned integer type specifying the number of elements to be assigned a value by the generator function.</para>
                        </definition>
                        <definedTerm> <parameterReference>Gen</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A function object that is called with no arguments that is used to generate the values to be assigned to each of the elements in the range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function object is invoked for each element in the range and does not need to return the same value each time it is called. It may, for example, read from a file or refer to and modify a local state. The generator's result type must be convertible to the value type of the forward iterators for the range.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and, within the sequence, the last position must be reachable from the first by incrementation.</para>
                    <para>The complexity is linear, with exactly <parameterReference>Count</parameterReference> calls to the generator being required.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// cl.exe /EHsc /nologo /W4 /MTd
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;algorithm&gt;
#include &lt;random&gt;

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
    const int elemcount = 5;
    vector&lt;int&gt; v(elemcount);
    deque&lt;int&gt; dq(elemcount);

    // Set up random number distribution
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution&lt;int&gt; dist(-9, 9);

    // Call generate_n, using a lambda for the third parameter
    generate_n(v.begin(), elemcount, [&amp;](){ return dist(engine); });
    print("vector v is: ", v);

    generate_n(dq.begin(), elemcount, [&amp;](){ return dist(engine); });
    print("deque dq is: ", dq);
}
</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="includes">
        <!--7038e179-3813-46f3-9b6f-85d8214e9768-->
        <title>includes</title>
        <content>
            <para>Tests whether one sorted range contains all the elements contained in a second sorted range, where the ordering or equivalence criterion between elements may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2&gt;</legacyBold> <legacyBold>   bool includes(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class BinaryPredicate&gt;</legacyBold> <legacyBold>   bool includes(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last1</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first of two sorted source ranges to be tested for whether all the elements of the second are contained in the first.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first of two sorted source ranges to be tested for whether all the elements of the second are contained in the first.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in second of two consecutive sorted source ranges to be tested for whether all the elements of the second are contained in the first.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in second of two consecutive sorted source ranges to be tested for whether all the elements of the second are contained in the first.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true</legacyBold> when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the first sorted range contains all the elements in the second sorted range; otherwise, <legacyBold>false</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Another way to think of this test is that it determined whether the second source range is a subset of the first source range.</para>
                    <para>The sorted source ranges referenced must be valid; all pointers must be dereferenceable and, within each sequence, the last position must be reachable from the first by incrementation.</para>
                    <para>The sorted source ranges must each be arranged as a precondition to the application of the algorithm includes in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges.</para>
                    <para>The source ranges are not modified by the algorithm <legacyBold>merge</legacyBold>.</para>
                    <para>The value types of the input iterators need be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. More precisely, the algorithm tests whether all the elements in the first sorted range under a specified binary predicate have equivalent ordering to those in the second sorted range.</para>
                    <para>The complexity of the algorithm is linear with at most 2 * ( (                        <legacyItalic>_Last1 – _First1</legacyItalic>) – (                        <legacyItalic>_Last2 – _First2</legacyItalic>) ) – 1 comparisons for nonempty source ranges.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_includes.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1a, v1b;
   vector &lt;int&gt;::iterator Iter1a,  Iter1b;

   // Constructing vectors v1a &amp; v1b with default less-than ordering
   int i;
   for ( i = -2 ; i &lt;= 4 ; i++ )
   {
      v1a.push_back(  i );
   }

   int ii;
   for ( ii =-2 ; ii &lt;= 3 ; ii++ )
   {
      v1b.push_back(  ii  );
   }

   cout &lt;&lt; "Original vector v1a with range sorted by the\n "
        &lt;&lt; "binary predicate less than is v1a = ( " ;
   for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
      cout &lt;&lt; *Iter1a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v1b with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is v1b = ( " ;
   for ( Iter1b = v1b.begin ( ) ; Iter1b != v1b.end ( ) ; Iter1b++ )
      cout &lt;&lt; *Iter1b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   // Constructing vectors v2a &amp; v2b with ranges sorted by greater
   vector &lt;int&gt; v2a ( v1a ) , v2b ( v1b );
   vector &lt;int&gt;::iterator Iter2a,  Iter2b;
   sort ( v2a.begin ( ) , v2a.end ( ) , greater&lt;int&gt; ( ) );
   sort ( v2b.begin ( ) , v2b.end ( ) , greater&lt;int&gt; ( ) );
   v2a.pop_back ( );

   cout &lt;&lt; "Original vector v2a with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is v2a = ( " ;
   for ( Iter2a = v2a.begin ( ) ; Iter2a != v2a.end ( ) ; Iter2a++ )
      cout &lt;&lt; *Iter2a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v2b with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is v2b = ( " ;
   for ( Iter2b = v2b.begin ( ) ; Iter2b != v2b.end ( ) ; Iter2b++ )
      cout &lt;&lt; *Iter2b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Constructing vectors v3a &amp; v3b with ranges sorted by mod_lesser
   vector &lt;int&gt; v3a ( v1a ), v3b ( v1b ) ;
   vector &lt;int&gt;::iterator Iter3a, Iter3b;
   reverse (v3a.begin( ), v3a.end( ) );
   v3a.pop_back ( );
   v3a.pop_back ( );
   sort ( v3a.begin ( ) , v3a.end ( ) , mod_lesser );
   sort ( v3b.begin ( ) , v3b.end ( ) , mod_lesser );

   cout &lt;&lt; "Original vector v3a with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is v3a = ( " ;
   for ( Iter3a = v3a.begin ( ) ; Iter3a != v3a.end ( ) ; Iter3a++ )
      cout &lt;&lt; *Iter3a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v3b with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is v3b = ( " ;
   for ( Iter3b = v3b.begin ( ) ; Iter3b != v3b.end ( ) ; Iter3b++ )
      cout &lt;&lt; *Iter3b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To test for inclusion under an asscending order
   // with the default binary predicate less &lt;int&gt; ( )
   bool Result1;
   Result1 = includes ( v1a.begin ( ) , v1a.end ( ) ,
      v1b.begin ( ) , v1b.end ( ) );
   if ( Result1 )
      cout &lt;&lt; "All the elements in vector v1b are "
           &lt;&lt; "contained in vector v1a." &lt;&lt; endl;
   else
      cout &lt;&lt; "At least one of the elements in vector v1b "
           &lt;&lt; "is not contained in vector v1a." &lt;&lt; endl;

   // To test for inclusion under descending
   // order specify binary predicate greater&lt;int&gt;( )
   bool Result2;
   Result2 = includes ( v2a.begin ( ) , v2a.end ( ) ,
      v2b.begin ( ) , v2b.end ( ) , greater &lt;int&gt; ( ) );
   if ( Result2 )
      cout &lt;&lt; "All the elements in vector v2b are "
           &lt;&lt; "contained in vector v2a." &lt;&lt; endl;
   else
      cout &lt;&lt; "At least one of the elements in vector v2b "
           &lt;&lt; "is not contained in vector v2a." &lt;&lt; endl;

   // To test for inclusion under a user
   // defined binary predicate mod_lesser
   bool Result3;
   Result3 = includes ( v3a.begin ( ) , v3a.end ( ) ,
      v3b.begin ( ) , v3b.end ( ) , mod_lesser );
   if ( Result3 )
      cout &lt;&lt; "All the elements in vector v3b are "
           &lt;&lt; "contained under mod_lesser in vector v3a."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "At least one of the elements in vector v3b is "
           &lt;&lt; " not contained under mod_lesser in vector v3a." 
           &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Original vector v1a with range sorted by the
 binary predicate less than is v1a = ( -2 -1 0 1 2 3 4 ).
Original vector v1b with range sorted by the
 binary predicate less than is v1b = ( -2 -1 0 1 2 3 ).
Original vector v2a with range sorted by the
 binary predicate greater is v2a = ( 4 3 2 1 0 -1 ).
Original vector v2b with range sorted by the
 binary predicate greater is v2b = ( 3 2 1 0 -1 -2 ).
Original vector v3a with range sorted by the
 binary predicate mod_lesser is v3a = ( 0 1 2 3 4 ).
Original vector v3b with range sorted by the
 binary predicate mod_lesser is v3b = ( 0 -1 1 -2 2 3 ).
All the elements in vector v1b are contained in vector v1a.
At least one of the elements in vector v2b is not contained in vector v2a.
At least one of the elements in vector v3b is  not contained under mod_lesser in vector v3a.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="inplace_merge">
        <!--a3a7d861-2b47-4b0c-a2ac-df805c813437-->
        <title>inplace_merge</title>
        <content>
            <para>Combines the elements from two consecutive sorted ranges into a single sorted range, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax>template&lt;class BidirectionalIterator&gt;
   void inplace_merge(
      BidirectionalIterator <parameterReference>_First</parameterReference>, 
      BidirectionalIterator <parameterReference>_Middle</parameterReference>,
      BidirectionalIterator <parameterReference>_Last</parameterReference>
   );
template&lt;class BidirectionalIterator, class Predicate&gt;
   void inplace_merge(
      BidirectionalIterator <parameterReference>_First</parameterReference>, 
      BidirectionalIterator <parameterReference>_Middle</parameterReference>,
      BidirectionalIterator <parameterReference>_Last</parameterReference>,
      Predicate <parameterReference>_Comp</parameterReference>
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
                            <para>A bidirectional iterator addressing the position of the first element in the first of two consecutive sorted ranges to be combined and sorted into a single range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Middle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position of the first element in the second of two consecutive sorted ranges to be combined and sorted into a single range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position one past the last element in the second of two consecutive sorted ranges to be combined and sorted into a single range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true </legacyBold>when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted consecutive ranges referenced must be valid; all pointers must be dereferenceable and, within each sequence, the last position must be reachable from the first by incrementation.</para>
                    <para>The sorted consecutive ranges must each be arranged as a precondition to the application of the <unmanagedCodeEntityReference>inplace_merge</unmanagedCodeEntityReference> algorithm in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges. The operation is stable as the relative order of elements within each range is preserved. When there are equivalent elements in both source ranges, the element is the first range precedes the element from the second in the combined range.</para>
                    <para>The complexity depends on the available memory as the algorithm allocates memory to a temporary buffer. If sufficient memory is available, the best case is linear with (                        <legacyItalic>_Last – _First</legacyItalic>) – 1 comparisons; if no auxiliary memory is available, the worst case is                         <legacyItalic>N </legacyItalic>log <legacyItalic>(N)</legacyItalic>, where                         <legacyItalic>N</legacyItalic> = (                        <legacyItalic>_Last – _First</legacyItalic>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_inplace_merge.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      //For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1, Iter2, Iter3;

   // Constructing vector v1 with default less-than ordering
   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( i );
   }

   int ii;
   for ( ii =-5 ; ii &lt;= 0 ; ii++ )
   {
      v1.push_back(  ii  );
   }

   cout &lt;&lt; "Original vector v1 with subranges sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
   
   // Constructing vector v2 with ranges sorted by greater
   vector &lt;int&gt; v2 ( v1 );
   vector &lt;int&gt;::iterator break2;
   break2 = find ( v2.begin ( ) , v2.end ( ) , -5 );
   sort ( v2.begin ( ) , break2 , greater&lt;int&gt; ( ) );
   sort ( break2 , v2.end ( ) , greater&lt;int&gt; ( ) );
   cout &lt;&lt; "Original vector v2 with subranges sorted by the\n "
        &lt;&lt; "binary predicate greater is v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // Constructing vector v3 with ranges sorted by mod_lesser
   vector &lt;int&gt; v3 ( v1 );
   vector &lt;int&gt;::iterator break3;
   break3 = find ( v3.begin ( ) , v3.end ( ) , -5 );
   sort ( v3.begin ( ) , break3 , mod_lesser );
   sort ( break3 , v3.end ( ) , mod_lesser );
   cout &lt;&lt; "Original vector v3 with subranges sorted by the\n "
        &lt;&lt; "binary predicate mod_lesser is v3 = ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   vector &lt;int&gt;::iterator break1;
   break1 = find (v1.begin ( ) , v1.end ( ) , -5 );
   inplace_merge ( v1.begin( ), break1, v1.end( ) );
   cout &lt;&lt; "Merged inplace with default order,\n vector v1mod = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To merge inplace in descending order, specify binary 
   // predicate greater&lt;int&gt;( )
   inplace_merge ( v2.begin( ), break2 , v2.end( ) , greater&lt;int&gt;( ) );
   cout &lt;&lt; "Merged inplace with binary predicate greater specified,\n "
        &lt;&lt; "vector v2mod = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // Applying a user defined (UD) binary predicate mod_lesser
   inplace_merge ( v3.begin( ), break3, v3.end( ), mod_lesser );
   cout &lt;&lt; "Merged inplace with binary predicate mod_lesser specified,\n "
        &lt;&lt; "vector v3mod = ( " ; ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Original vector v1 with subranges sorted by the
 binary predicate less than is  v1 = ( 0 1 2 3 4 5 -5 -4 -3 -2 -1 0 )
Original vector v2 with subranges sorted by the
 binary predicate greater is v2 = ( 5 4 3 2 1 0 0 -1 -2 -3 -4 -5 )
Original vector v3 with subranges sorted by the
 binary predicate mod_lesser is v3 = ( 0 1 2 3 4 5 0 -1 -2 -3 -4 -5 )
Merged inplace with default order,
 vector v1mod = ( -5 -4 -3 -2 -1 0 0 1 2 3 4 5 )
Merged inplace with binary predicate greater specified,
 vector v2mod = ( 5 4 3 2 1 0 0 -1 -2 -3 -4 -5 )
Merged inplace with binary predicate mod_lesser specified,
 vector v3mod = ( 0 0 1 -1 2 -2 3 -3 4 -4 5 -5 )</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="is_heap">
        <!--47779f4a-8063-403e-a3d2-067062f34fb2-->
        <title>is_heap</title>
        <content>
            <para>Returns <languageKeyword>true</languageKeyword> if the elements in the specified range form a heap.</para>
            <legacySyntax>template&lt;class RandomAccessIterator&gt;
    bool is_heap(
        RandomAccessIterator <parameterReference>_First</parameterReference>,
        RandomAccessIterator <parameterReference>_Last</parameterReference>
    );
template&lt;class RandomAccessIterator, class BinaryPredicate&gt;
    bool is_heap(
        RandomAccessIterator <parameterReference>_First</parameterReference>,
        RandomAccessIterator <parameterReference>_Last</parameterReference>,
        BinaryPredicate <parameterReference>_Comp</parameterReference>
    ); </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random access iterator that indicates the start of a range to check for a heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random access iterator that indicates the end of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A condition to test to order elements. A binary predicate takes a single argument and returns <languageKeyword>true</languageKeyword> <legacyBold/>or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>true</languageKeyword> if the elements in the specified range form a heap, <languageKeyword>false</languageKeyword> if they do not.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first template function returns <link xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#is_heap_until">is_heap_until</link> <codeInline>(</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>) == </codeInline> <parameterReference>_Last</parameterReference>. </para>
                    <para>The second template function returns </para>
                    <para> <unmanagedCodeEntityReference>is_heap_until</unmanagedCodeEntityReference> <codeInline>(</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>, </codeInline> <parameterReference>_Comp</parameterReference> <codeInline>) == </codeInline> <parameterReference>_Last</parameterReference>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="is_heap_until">
        <!--0600f029-57c6-440f-ad43-e28f30392040-->
        <title>is_heap_until</title>
        <content>
            <para>Returns an iterator positioned at the first element in the range [ <parameterReference>begin</parameterReference>, <parameterReference>end</parameterReference>) that does not satisfy the heap ordering condition, or <parameterReference>end</parameterReference> if the range forms a heap.</para>
            <legacySyntax>template&lt;class RandomAccessIterator&gt;
    RandomAccessIterator is_heap_until(
        RandomAccessIterator <parameterReference>begin</parameterReference>, 
        RandomAccessIterator <parameterReference>end</parameterReference>
    );
template&lt;class RandomAccessIterator, class BinaryPredicate&gt; 
    RandomAccessIterator is_heap_until(
        RandomAccessIterator <parameterReference>begin</parameterReference>, 
        RandomAccessIterator <parameterReference>end</parameterReference>, 
        BinaryPredicate <parameterReference>compare</parameterReference>
    );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>begin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random access iterator that specifies the first element of a range to check for a heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>end</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random access iterator that specifies the end of the range to check for a heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>compare</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A binary predicate that specifies the strict weak ordering condition that defines a heap. The default predicate when <parameterReference>compare</parameterReference> is not specified is <languageKeyword>std::less&lt;&gt;</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <parameterReference>end</parameterReference> if the specified range forms a heap or contains one or fewer elements. Otherwise, returns an iterator for the first element found that does not satisfy the heap condition.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first template function returns the last iterator <codeInline>next</codeInline> in <codeInline>[</codeInline> <parameterReference>begin</parameterReference> <codeInline>, </codeInline> <parameterReference>end</parameterReference> <codeInline>]</codeInline> where <codeInline>[</codeInline> <parameterReference>begin</parameterReference> <codeInline>, next)</codeInline> is a heap ordered by the function object <languageKeyword>std::less&lt;&gt;</languageKeyword>. If the distance <parameterReference>end</parameterReference> <codeInline> - </codeInline> <parameterReference>begin</parameterReference> <codeInline> &lt; 2</codeInline>, the function returns <parameterReference>end</parameterReference>.</para>
                    <para>The second template function behaves the same as the first, except that it uses the predicate <parameterReference>compare</parameterReference> instead of <languageKeyword>std::less&lt;&gt;</languageKeyword> as the heap ordering condition.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="is_partitioned">
        <!--a5f91d88-6f31-44e5-afe4-3fdedb18f4b2-->
        <title>is_partitioned</title>
        <content>
            <para>Returns <languageKeyword>true</languageKeyword> if all the elements in the given range that test <languageKeyword>true</languageKeyword> for a condition come before any elements that test <languageKeyword>false</languageKeyword>.</para>
            <legacySyntax>template&lt;class InputIterator, class BinaryPredicate&gt;
    bool is_partitioned(
        InputIterator <parameterReference>_First</parameterReference>, 
        InputIterator <parameterReference>_Last</parameterReference>,
        BinaryPredicate <parameterReference>_Comp</parameterReference>
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
                            <para>An input iterator that indicates where a range starts to check for a condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates the end of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The condition to test for. This is provided by a user-defined predicate function object that defines the condition to be satisfied by the element being searched for. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> <legacyBold/>or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns true when all of the elements in the given range that test <languageKeyword>true</languageKeyword> for a condition come before any elements that test <languageKeyword>false</languageKeyword>, and otherwise returns <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns <languageKeyword>true</languageKeyword> only if all elements in <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>)</codeInline> are partitioned by <parameterReference>_Comp</parameterReference>; that is, all elements <codeInline>X</codeInline> in <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>)</codeInline> for which <parameterReference>_Comp</parameterReference> <codeInline>(X)</codeInline> is true occur before all elements <codeInline>Y</codeInline> for which <parameterReference>_Comp</parameterReference> <codeInline>(Y)</codeInline> is <languageKeyword>false</languageKeyword>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="is_permutation">
        <!--3384e786-e210-4648-b2bc-3896b5e14f1f-->
        <title>is_permutation</title>
        <content>
            <para>Returns true if both ranges contain the same elements, whether or not the elements are in the same order. Use the dual-range overloads in C++14 code because the overloads that only take a single iterator for the second range will not detect differences if the second range is longer than the first range, and will result in undefined behavior if the second range is shorter than the first range.</para>
            <legacySyntax language="cpp">template&lt;class FwdIt1, class FwdIt2&gt;
    bool is_permutation(FwdIt <parameterReference>First1</parameterReference>, FwdIt <parameterReference>Last1</parameterReference>,
        FwdIt <parameterReference>First2</parameterReference>); 
template&lt;class FwdIt1, class FwdIt2, class Pr&gt;
    bool is_permutation(FwdIt <parameterReference>First1</parameterReference>, FwdIt <parameterReference>Last1</parameterReference>,
        FwdIt <parameterReference>First2</parameterReference>, Pr <parameterReference>Pred</parameterReference>);
// C++14
template&lt;class FwdIt1, class FwdIt2&gt;
    bool is_permutation(FwdIt <parameterReference>First1</parameterReference>, FwdIt <parameterReference>Last1</parameterReference>,
        FwdIt <parameterReference>First2</parameterReference>, FwdIt <parameterReference>Last2</parameterReference>); 
template&lt;class FwdIt1, class FwdIt2, class Pr&gt;
    bool is_permutation(FwdIt <parameterReference>First1</parameterReference>, FwdIt <parameterReference>Last1</parameterReference>,
        FwdIt <parameterReference>First2</parameterReference>, FwdIt <parameterReference>Last2</parameterReference>, Pr <parameterReference>Pred</parameterReference>);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that refers to the first element of the range.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that refers one past the last element of the range.</para>
                        </definition>
                        <definedTerm> <parameterReference>First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that refers to the first element of a second range, used for comparison.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that refers to one past the last element of a second range, used for comparison.</para>
                        </definition>
                        <definedTerm> <parameterReference>Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A predicate that tests for equivalence and returns a <languageKeyword>bool</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> when the ranges can be rearranged so as to be identical according to the comparator predicate; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <languageKeyword>is_permutation</languageKeyword> has quadratic complexity in the worst case.</para>
                    <para>The first template function assumes that there are as many elements in the range beginning at <parameterReference>First2</parameterReference> as there are in the range designated by [ <parameterReference>First1</parameterReference>, <parameterReference>Last1</parameterReference>). If there are more elements in the second range, they are ignored; if there are less, undefined behavior will occur. The third template function (C++14 and later) does not make this assumption.  Both return <languageKeyword>true</languageKeyword> only if, for each element X in the range designated by [ <parameterReference>First1</parameterReference>, <parameterReference>Last1</parameterReference>) there are as many elements Y in the same range for which X == Y as there are in the range beginning at <parameterReference>First2</parameterReference> or [ <parameterReference>First2, Last2).</parameterReference> Here, <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> must perform a pairwise comparison between its operands.</para>
                    <para>The second and fourth template functions behave the same, except that they replace <codeInline>operator==(X, Y)</codeInline> with <codeInline>Pred(X, Y)</codeInline>. To behave correctly, the predicate must be symmetric, reflexive and transitive.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>The following example shows how to use <languageKeyword>is_permutation</languageKeyword>:</para>
                        <!--EndSnipComment-->
                    <code>
#include &lt;vector&gt;
#include &lt;iostream&gt;
#include &lt;algorithm&gt;
#include &lt;string&gt;

using namespace std;


int main()
{
    vector&lt;int&gt; vec_1{ 2, 3, 0, 1, 4, 5 };
    vector&lt;int&gt; vec_2{ 5, 4, 0, 3, 1, 2 };

    vector&lt;int&gt; vec_3{ 4, 9, 13, 3, 6, 5 };
    vector&lt;int&gt; vec_4{ 7, 4, 11, 9, 2, 1 };

    cout &lt;&lt; "(1) Compare using built-in == operator: ";
    cout &lt;&lt; boolalpha &lt;&lt; is_permutation(vec_1.begin(), vec_1.end(),
        vec_2.begin(), vec_2.end()) &lt;&lt; endl; // true

    cout &lt;&lt; "(2) Compare after modifying vec_2: ";
    vec_2[0] = 6;
    cout &lt;&lt; is_permutation(vec_1.begin(), vec_1.end(),
        vec_2.begin(), vec_2.end()) &lt;&lt; endl; // false

    // Define equivalence as "both are odd or both are even"
    cout &lt;&lt; "(3) vec_3 is a permutation of vec_4: ";
    cout &lt;&lt; is_permutation(vec_3.begin(), vec_3.end(),
        vec_4.begin(), vec_4.end(),
        [](int lhs, int rhs) { return lhs % 2 == rhs % 2; }) &lt;&lt; endl; // true

    // Initialize a vector using the 's' string literal to specify a std::string
    vector&lt;string&gt; animals_1{ "dog"s, "cat"s, "bird"s, "monkey"s };
    vector&lt;string&gt; animals_2{ "donkey"s, "bird"s, "meerkat"s, "cat"s };

    // Define equivalence as "first letters are equal":
    bool is_perm = is_permutation(animals_1.begin(), animals_1.end(), animals_2.begin(), animals_2.end(),
        [](const string&amp; lhs, const string&amp; rhs)
    {
        return lhs[0] == rhs[0]; //std::string guaranteed to have at least a null terminator
    });

    cout &lt;&lt; "animals_2 is a permutation of animals_1: " &lt;&lt; is_perm &lt;&lt; endl; // true

    cout &lt;&lt; "Press a letter" &lt;&lt; endl;
    char c;
    cin &gt;&gt; c;

    return 0;
}

</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="is_sorted">
        <!--18be444b-8943-4d55-8d82-a9f6d3e96aef-->
        <title>is_sorted</title>
        <content>
            <para>Returns <languageKeyword>true</languageKeyword> if the elements in the specified range are in sorted order. </para>
            <legacySyntax>template&lt;class ForwardIterator&gt;
    bool is_sorted(
        ForwardIterator <parameterReference>_First</parameterReference>, 
        ForwardIterator <parameterReference>_Last</parameterReference>
    );
template&lt;class ForwardIterator, class BinaryPredicate&gt;
    bool is_sorted(
        ForwardIterator <parameterReference>_First</parameterReference>, 
        ForwardIterator <parameterReference>_Last</parameterReference>, 
        BinaryPredicate <parameterReference>_Comp</parameterReference>
    );
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
                            <para>A forward iterator that indicates where the range to check begins.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that indicates the end of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The condition to test to determine an order between two elements. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>. This performs the same task as <codeInline>operator&lt;</codeInline>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first template function returns <link xlink:href="bbad99d0-deaa-4fe6-ae58-eb5b3e4dded0">is_sorted_until</link> <codeInline>(</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>) == </codeInline> <parameterReference>_Last</parameterReference>. The operator&lt; function performs the order comparison.</para>
                    <para>The second template function returns <unmanagedCodeEntityReference>is_sorted_until</unmanagedCodeEntityReference> <codeInline>(</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>, </codeInline> <parameterReference>_Comp</parameterReference> <codeInline>) == </codeInline> <parameterReference>_Last</parameterReference>. The <parameterReference>_Comp</parameterReference> predicate function performs the order comparison. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="is_sorted_until">
        <!--45a79ce4-fbd9-47d1-bcf1-44498ae26de7-->
        <title>is_sorted_until</title>
        <content>
            <para>Returns a <unmanagedCodeEntityReference>ForwardIterator</unmanagedCodeEntityReference> that is set to the last element that is in sorted order from a specified range.</para>
            <para>The second version lets you provide a <unmanagedCodeEntityReference>BinaryPredicate</unmanagedCodeEntityReference> function that returns <languageKeyword>true</languageKeyword> when two given elements are in sorted order, and <languageKeyword>false</languageKeyword> otherwise.</para>
            <legacySyntax>template&lt;class ForwardIterator&gt;
    ForwardIterator is_sorted_until(
        ForwardIterator <parameterReference>_First</parameterReference>, 
        ForwardIterator <parameterReference>_Last</parameterReference>
    );
template&lt;class ForwardIterator, class BinaryPredicate&gt;
    ForwardIterator is_sorted_until(
        ForwardIterator <parameterReference>_First</parameterReference>, 
        ForwardIterator <parameterReference>_Last</parameterReference>, 
        BinaryPredicate <parameterReference>_Comp</parameterReference>
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
                            <para>A forward iterator that indicates where the range to check starts.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that indicates the end of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The condition to test to determine an order between two elements. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a <unmanagedCodeEntityReference>ForwardIterator</unmanagedCodeEntityReference> set to the last element in sorted order. The sorted sequence starts from <parameterReference>_First</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first template function returns the last iterator <codeInline>next</codeInline> in <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>]</codeInline> so that <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, next)</codeInline> is a sorted sequence ordered by <codeInline>operator&lt;</codeInline>. If <parameterReference>distance()</parameterReference> <codeInline> &lt; 2</codeInline> the function returns <parameterReference>_Last</parameterReference>. </para>
                    <para>The second template function behaves the same, except that it replaces <codeInline>operator&lt;(X, Y)</codeInline> with <parameterReference>_Comp</parameterReference> <codeInline>(X, Y)</codeInline>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="iter_swap">
        <!--c29e658c-0e99-4f11-ad60-d09301a15e1d-->
        <title>iter_swap</title>
        <content>
            <para>Exchanges two values referred to by a pair of specified iterators.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator1, class ForwardIterator2&gt;</legacyBold> <legacyBold>   void iter_swap(</legacyBold> <legacyBold>      ForwardIterator1 </legacyBold> <parameterReference>_Left</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      ForwardIterator2 </legacyBold> <parameterReference>_Right</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>One of the forward iterators whose value is to be exchanged.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The second of the forward iterators whose value is to be exchanged.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>swap</unmanagedCodeEntityReference> should be used in preference to i <legacyBold>ter_swap</legacyBold>, which was included in the C++ Standard for backward compatibility. If <parameterReference>Fit1</parameterReference> and <parameterReference>Fit2</parameterReference> are forward iterators, then <unmanagedCodeEntityReference>iter_swap</unmanagedCodeEntityReference> ( <parameterReference>Fit1</parameterReference>, <parameterReference>Fit2</parameterReference> ), is equivalent to <unmanagedCodeEntityReference>swap</unmanagedCodeEntityReference> ( * <parameterReference>Fit1</parameterReference>, * <parameterReference>Fit2</parameterReference> ).</para>
                    <para>The value types of the input forward iterators must have the same value.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_iter_swap.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;
class CInt;
ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

class CInt
{
public:
   CInt( int n = 0 ) : m_nVal( n ){}
   CInt( const CInt&amp; rhs ) : m_nVal( rhs.m_nVal ){}
   CInt&amp;   operator=( const CInt&amp; rhs ) { m_nVal =
   rhs.m_nVal; return *this; }
   bool operator&lt;( const CInt&amp; rhs ) const
      { return ( m_nVal &lt; rhs.m_nVal );}
   friend ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

private:
   int m_nVal;
};

inline ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs )
{
   osIn &lt;&lt; "CInt(" &lt;&lt; rhs.m_nVal &lt;&lt; ")";
   return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 )
      elem1 = - elem1;
   if ( elem2 &lt; 0 )
      elem2 = - elem2;
   return elem1 &lt; elem2;
};

int main( )
{
   CInt c1 = 5, c2 = 1, c3 = 10;
   deque&lt;CInt&gt; deq1;
   deque&lt;CInt&gt;::iterator d1_Iter;

   deq1.push_back ( c1 );
   deq1.push_back ( c2 );
   deq1.push_back ( c3 );

   cout &lt;&lt; "The original deque of CInts is deq1 = (";
   for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; ",";
   d1_Iter = --deq1.end( );
   cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; " )." &lt;&lt; endl;

   // Exchanging first and last elements with iter_swap
   iter_swap ( deq1.begin ( ) , --deq1.end ( ) );

   cout &lt;&lt; "The deque of CInts with first &amp; last elements swapped is:\n deq1 = (";
   for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; ",";
   d1_Iter = --deq1.end( );
   cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; " )." &lt;&lt; endl;

   // Swapping back first and last elements with swap
   swap ( *deq1.begin ( ) , *(deq1.end ( ) -1 ) );

   cout &lt;&lt; "The deque of CInts with first &amp; last elements swapped back is:\n deq1 = (";
   for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; ",";
   d1_Iter = --deq1.end( );
   cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; " )." &lt;&lt; endl;

   // Swapping a vector element with a deque element
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;
   deque &lt;int&gt; deq2;
   deque &lt;int&gt;::iterator d2_Iter;

   int i;
   for ( i = 0 ; i &lt;= 3 ; i++ )
   {
      v1.push_back( i );
   }

   int ii;
   for ( ii = 4 ; ii &lt;= 5 ; ii++ )
   {
      deq2.push_back( ii );
   }

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Deque deq2 is ( " ;
   for ( d2_Iter = deq2.begin( ) ; d2_Iter != deq2.end( ) ; d2_Iter++ )
      cout &lt;&lt; *d2_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   iter_swap ( v1.begin ( ) , deq2.begin ( ) );

   cout &lt;&lt; "After exchanging first elements,\n vector v1 is: v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl &lt;&lt; " &amp; deque deq2 is: deq2 = ( ";
   for ( d2_Iter = deq2.begin( ) ; d2_Iter != deq2.end( ) ; d2_Iter++ )
      cout &lt;&lt; *d2_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The original deque of CInts is deq1 = ( CInt(5), CInt(1), CInt(10) ).
The deque of CInts with first &amp; last elements swapped is:
 deq1 = ( CInt(10), CInt(1), CInt(5) ).
The deque of CInts with first &amp; last elements swapped back is:
 deq1 = ( CInt(5), CInt(1), CInt(10) ).
Vector v1 is ( 0 1 2 3 ).
Deque deq2 is ( 4 5 ).
After exchanging first elements,
 vector v1 is: v1 = ( 4 1 2 3 ).
 &amp; deque deq2 is: deq2 = ( 0 5 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="lexicographical_compare">
        <!--403f8526-50a4-4c1c-865e-391b1095fc32-->
        <title>lexicographical_compare</title>
        <content>
            <para>Compares element by element between two sequences to determine which is lesser of the two.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2&gt;</legacyBold> <legacyBold>   bool lexicographical_compare(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class BinaryPredicate&gt;</legacyBold> <legacyBold>   bool lexicographical_compare(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2,</parameterReference> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first range to be compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the first range to be compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the second range to be compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the second range to be compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the first range is lexicographically less than the second range; otherwise <legacyBold>false</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A lexicographical comparison between sequences compares them element by element until:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>It finds two corresponding elements unequal, and the result of their comparison is taken as the result of the comparison between sequences.</para>
                        </listItem>
                        <listItem>
                            <para>No inequalities are found, but one sequence has more elements than the other, and the shorter sequence is considered less than the longer sequence.</para>
                        </listItem>
                        <listItem>
                            <para>No inequalities are found and the sequences have the same number of elements, and so the sequences are equal and the result of the comparison is false.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_lex_comp.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

// Return whether second element is twice the first
bool twice ( int elem1, int elem2 )
{
   return 2 * elem1 &lt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1, v2;
   list &lt;int&gt; L1;
   vector &lt;int&gt;::iterator Iter1, Iter2;
   list &lt;int&gt;::iterator L1_Iter, L1_inIter;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }
   int ii;
   for ( ii = 0 ; ii &lt;= 6 ; ii++ )
   {
      L1.push_back( 5 * ii );
   }

   int iii;
   for ( iii = 0 ; iii &lt;= 5 ; iii++ )
   {
      v2.push_back( 10 * iii );
   }

   cout &lt;&lt; "Vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "List L1 = ( " ;
   for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
      cout &lt;&lt; *L1_Iter &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
      cout &lt;&lt; ")" &lt;&lt; endl;

   // Self lexicographical_comparison of v1 under identity
   bool result1;
   result1 = lexicographical_compare (v1.begin( ), v1.end( ),
                  v1.begin( ), v1.end( ) );
   if ( result1 )
      cout &lt;&lt; "Vector v1 is lexicographically_less than v1." &lt;&lt; endl;
   else
      cout &lt;&lt; "Vector v1 is not lexicographically_less than v1." &lt;&lt; endl;

   // lexicographical_comparison of v1 and L2 under identity
   bool result2;
   result2 = lexicographical_compare (v1.begin( ), v1.end( ),
                  L1.begin( ), L1.end( ) );
   if ( result2 )
      cout &lt;&lt; "Vector v1 is lexicographically_less than L1." &lt;&lt; endl;
   else
      cout &lt;&lt; "Vector v1 is lexicographically_less than L1." &lt;&lt; endl;

   bool result3;
   result3 = lexicographical_compare (v1.begin( ), v1.end( ),
                  v2.begin( ), v2.end( ), twice );
   if ( result3 )
      cout &lt;&lt; "Vector v1 is lexicographically_less than v2 "
           &lt;&lt; "under twice." &lt;&lt; endl;
   else
      cout &lt;&lt; "Vector v1 is not lexicographically_less than v2 "
           &lt;&lt; "under twice." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 = ( 0 5 10 15 20 25 )
List L1 = ( 0 5 10 15 20 25 30 )
Vector v2 = ( 0 10 20 30 40 50 )
Vector v1 is not lexicographically_less than v1.
Vector v1 is lexicographically_less than L1.
Vector v1 is not lexicographically_less than v2 under twice.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="lower_bound">
        <!--bf1b020c-f97a-4e2b-85f4-c09f6a0da1c4-->
        <title>lower_bound</title>
        <content>
            <para>Finds the position of the first element in an ordered range that has a value greater than or equivalent to a specified value, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Type&gt;</legacyBold> <legacyBold>   ForwardIterator lower_bound(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>first</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>value</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class ForwardIterator, class Type, class BinaryPredicate&gt;</legacyBold> <legacyBold>   ForwardIterator lower_bound(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>first</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>value</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>value</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value whose first position or possible first position is being searched for in the ordered range.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator at the position of the first element in an ordered range with a value that is greater than or equivalent to a specified value, where the equivalence is specified with a binary predicate.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source range referenced must be valid; all iterators must be dereferenceable and within the sequence the last position must be reachable from the first by incrementation.</para>
                    <para>A sorted range is a precondition of using <unmanagedCodeEntityReference>lower_bound</unmanagedCodeEntityReference> and where the ordering is the same as specified by with binary predicate.</para>
                    <para>The range is not modified by the algorithm <unmanagedCodeEntityReference>lower_bound</unmanagedCodeEntityReference>.</para>
                    <para>The value types of the forward iterators need be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements</para>
                    <para>The complexity of the algorithm is logarithmic for random-access iterators and linear otherwise, with the number of steps proportional to ( <parameterReference>last – first</parameterReference>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// alg_lower_bound.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser( int elem1, int elem2 )
{
    if ( elem1 &lt; 0 )
        elem1 = - elem1;
    if ( elem2 &lt; 0 )
        elem2 = - elem2;
    return elem1 &lt; elem2;
}

int main( )
{
    using namespace std;

    vector&lt;int&gt; v1;
    // Constructing vector v1 with default less-than ordering
    for ( auto i = -1 ; i &lt;= 4 ; ++i )
    {
        v1.push_back(  i );
    }

    for ( auto ii =-3 ; ii &lt;= 0 ; ++ii )
    {
        v1.push_back(  ii  );
    }

    cout &lt;&lt; "Starting vector v1 = ( " ;
    for (const auto &amp;Iter : v1)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    sort(v1.begin(), v1.end());
    cout &lt;&lt; "Original vector v1 with range sorted by the\n "
        &lt;&lt; "binary predicate less than is v1 = ( " ;
    for (const auto &amp;Iter : v1)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    // Constructing vector v2 with range sorted by greater
    vector&lt;int&gt; v2(v1);

    sort(v2.begin(), v2.end(), greater&lt;int&gt;());

    cout &lt;&lt; "Original vector v2 with range sorted by the\n "
        &lt;&lt; "binary predicate greater is v2 = ( " ;
    for (const auto &amp;Iter : v2)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    // Constructing vectors v3 with range sorted by mod_lesser
    vector&lt;int&gt; v3(v1);
    sort(v3.begin(), v3.end(), mod_lesser);

    cout &lt;&lt; "Original vector v3 with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is v3 = ( " ;
    for (const auto &amp;Iter : v3)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    // Demonstrate lower_bound

    vector&lt;int&gt;::iterator Result;

    // lower_bound of 3 in v1 with default binary predicate less&lt;int&gt;()
    Result = lower_bound(v1.begin(), v1.end(), 3);
    cout &lt;&lt; "The lower_bound in v1 for the element with a value of 3 is: "
        &lt;&lt; *Result &lt;&lt; "." &lt;&lt; endl;

    // lower_bound of 3 in v2 with the binary predicate greater&lt;int&gt;( )
    Result = lower_bound(v2.begin(), v2.end(), 3, greater&lt;int&gt;());
    cout &lt;&lt; "The lower_bound in v2 for the element with a value of 3 is: "
        &lt;&lt; *Result &lt;&lt; "." &lt;&lt; endl;

    // lower_bound of 3 in v3 with the binary predicate  mod_lesser
    Result = lower_bound(v3.begin(), v3.end(), 3,  mod_lesser);
    cout &lt;&lt; "The lower_bound in v3 for the element with a value of 3 is: "
        &lt;&lt; *Result &lt;&lt; "." &lt;&lt; endl;
}
</code>
                    <!--pass2snip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="make_heap">
        <!--b09f795c-f368-4aa8-b57e-61ee6100ddc2-->
        <title>make_heap</title>
        <content>
            <para>Converts elements from a specified range into a heap in which the first element is the largest and for which a sorting criterion may be specified with a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class RandomAccessIterator&gt;</legacyBold> <legacyBold>   void make_heap(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class RandomAccessIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   void make_heap(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A random-access iterator addressing the position of the first element in the range to be converted into a heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the range to be converted into a heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Heaps have two properties:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>The first element is always the largest.</para>
                        </listItem>
                        <listItem>
                            <para>Elements may be added or removed in logarithmic time.</para>
                        </listItem>
                    </list>
                    <para>Heaps are an ideal way to implement priority queues and they are used in the implementation of the Standard Template Library container adaptor <legacyLink xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">priority_queue Class</legacyLink>.</para>
                    <para>The complexity is linear, requiring 3 * (                        <legacyItalic>_Last – _First</legacyItalic>) comparisons.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_make_heap.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   random_shuffle( v1.begin( ), v1.end( ) );

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Make v1 a heap with default less than ordering
   make_heap ( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The heaped version of vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Make v1 a heap with greater than ordering
   make_heap ( v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "The greater-than heaped version of v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="max">
        <!--342d6303-fac9-46f2-a7f2-3a8c3c048cd6-->
        <title>max</title>
        <content>
            <para>Compares two objects and returns the larger of the two, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax>template&lt;class Type&gt;
    const Type&amp; max(
        const Type&amp; <parameterReference>_Left</parameterReference>, 
        const Type&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Pr&gt;
    const Type&amp; max(
        const Type&amp; <parameterReference>_Left</parameterReference>, 
        const Type&amp; <parameterReference>_Right</parameterReference>,
        BinaryPredicate <parameterReference>_Comp</parameterReference>
    );
template&lt;class Type&gt; 
    Type&amp; max (
        initializer_list&lt;Type&gt; <parameterReference>_Ilist</parameterReference>
    );
template&lt;class Type, class Pr&gt; 
    Type&amp; max(
        initializer_list&lt;Type&gt; <parameterReference>_Ilist</parameterReference>, 
        BinaryPredicate <parameterReference>_Comp</parameterReference>
    );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The first of the two objects being compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The second of the two objects being compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A binary predicate used to compare the two objects.</para>
                        </definition>
                        <definedTerm> <parameterReference>_IList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initializer list that contains the objects to be compared.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The greater of the two objects, unless neither is greater; in that case, it returns the first of the two objects. In the case of an initializer_list, it returns the greatest of the objects in the list. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <languageKeyword>max</languageKeyword> algorithm is unusual in having objects passed as parameters. Most Standard Template Library algorithms operate on a range of elements whose position is specified by iterators passed as parameters. If you need a function that operates on a range of elements, use <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#max_element">max_element</legacyLink> instead.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_max.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;set&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;
class CInt;
ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

class CInt
{
public:
   CInt( int n = 0 ) : m_nVal( n ){}
   CInt( const CInt&amp; rhs ) : m_nVal( rhs.m_nVal ){}
   CInt&amp;   operator=( const CInt&amp; rhs ) {m_nVal = 
   rhs.m_nVal; return *this;}
   bool operator&lt;( const CInt&amp; rhs ) const 
      {return ( m_nVal &lt; rhs.m_nVal );}
   friend ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

private:
   int m_nVal;
};

inline ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs )
{
   osIn &lt;&lt; "CInt( " &lt;&lt; rhs.m_nVal &lt;&lt; " )"; 
   return osIn;
}

// Return whether absolute value of elem1 is greater than 
// absolute value of elem2
bool abs_greater ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = -elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = -elem2;
   return elem1 &lt; elem2;
};

int main( )
{
   int a = 6, b = -7;
   // Return the integer with the larger absolute value
   const int&amp; result1 = max(a, b, abs_greater);
   // Return the larger integer
   const int&amp; result2 = max(a, b);

   cout &lt;&lt; "Using integers 6 and -7..." &lt;&lt; endl;
   cout &lt;&lt; "The integer with the greater absolute value is: " 
        &lt;&lt; result1 &lt;&lt; "." &lt;&lt; endl;
   cout &lt;&lt; "The integer with the greater value is: " 
        &lt;&lt; result2 &lt;&lt; "." &lt;&lt; endl;
   cout &lt;&lt; endl;

// Comparing the members of an initializer_list
const int&amp; result3 = max({ a, b });
const int&amp; result4 = max({ a, b }, abs_greater);

cout &lt;&lt; "Comparing the members of an initializer_list..." &lt;&lt; endl;
cout &lt;&lt; "The member with the greater value is: " &lt;&lt; result3 &lt;&lt; endl;
cout &lt;&lt; "The integer with the greater absolute value is: " &lt;&lt; result4 &lt;&lt; endl;

   // Comparing set containers with elements of type CInt 
   // using the max algorithm
   CInt c1 = 1, c2 = 2, c3 = 3;
   set&lt;CInt&gt; s1, s2, s3;
   set&lt;CInt&gt;::iterator s1_Iter, s2_Iter, s3_Iter;
   
   s1.insert ( c1 );
   s1.insert ( c2 );
   s2.insert ( c2 );
   s2.insert ( c3 );

   cout &lt;&lt; "s1 = (";
   for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; ",";
   s1_Iter = --s1.end( );
   cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; " )." &lt;&lt; endl;

   cout &lt;&lt; "s2 = (";
   for ( s2_Iter = s2.begin( ); s2_Iter != --s2.end( ); s2_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *s2_Iter &lt;&lt; ",";
   s2_Iter = --s2.end( );
   cout &lt;&lt; " " &lt;&lt; *s2_Iter &lt;&lt; " )." &lt;&lt; endl;

   s3 = max ( s1, s2 );
   cout &lt;&lt; "s3 = max ( s1, s2 ) = (";
   for ( s3_Iter = s3.begin( ); s3_Iter != --s3.end( ); s3_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *s3_Iter &lt;&lt; ",";
   s3_Iter = --s3.end( );
   cout &lt;&lt; " " &lt;&lt; *s3_Iter &lt;&lt; " )." &lt;&lt; endl &lt;&lt; endl;

   // Comparing vectors with integer elements using the max algorithm
   vector &lt;int&gt; v1, v2, v3, v4, v5;
   vector &lt;int&gt;::iterator Iter1, Iter2, Iter3, Iter4, Iter5;

   int i;
   for ( i = 0 ; i &lt;= 2 ; i++ )
   {
      v1.push_back( i );
   }

   int ii;
   for ( ii = 0 ; ii &lt;= 2 ; ii++ )
   {
      v2.push_back( ii );
   }

   int iii;
   for ( iii = 0 ; iii &lt;= 2 ; iii++ )
   {
      v3.push_back( 2 * iii );
   }
   
   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 is ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   cout &lt;&lt; "Vector v3 is ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   v4 = max ( v1, v2 );
   v5 = max ( v1, v3 );

   cout &lt;&lt; "Vector v4 = max (v1,v2) is ( " ;
   for ( Iter4 = v4.begin( ) ; Iter4 != v4.end( ) ; Iter4++ )
      cout &lt;&lt; *Iter4 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Vector v5 = max (v1,v3) is ( " ;
   for ( Iter5 = v5.begin( ) ; Iter5 != v5.end( ) ; Iter5++ )
      cout &lt;&lt; *Iter5 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Using integers 6 and -7...
The integer with the greater absolute value is: -7
The integer with the greater value is: 6.
Comparing the members of an initializer_list...The member with the greater value is: 6The integer wiht the greater absolute value is: -7
s1 = ( CInt( 1 ), CInt( 2 ) ).
s2 = ( CInt( 2 ), CInt( 3 ) ).
s3 = max ( s1, s2 ) = ( CInt( 2 ), CInt( 3 ) ).

Vector v1 is ( 0 1 2 ).
Vector v2 is ( 0 1 2 ).
Vector v3 is ( 0 2 4 ).
Vector v4 = max (v1,v2) is ( 0 1 2 ).
Vector v5 = max (v1,v3) is ( 0 2 4 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="max_element">
        <!--c25c9018-3a02-45a3-a234-f6576b90cd59-->
        <title>max_element</title>
        <content>
            <para>Finds the first occurrence of largest element in a specified range where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator&gt;</legacyBold> <legacyBold>   ForwardIterator max_element(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class ForwardIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   ForwardIterator max_element(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator addressing the position of the first element in the range to be searched for the largest element.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched for the largest element.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true </legacyBold>when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the position of the first occurrence of the largest element in the range searched.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within each sequence the last position is reachable from the first by incrementation.</para>
                    <para>The complexity is linear: ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) – 1 comparisons are required for a nonempty range.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_max_element.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;set&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;
class CInt;
ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

class CInt
{
public:
   CInt( int n = 0 ) : m_nVal( n ){}
   CInt( const CInt&amp; rhs ) : m_nVal( rhs.m_nVal ){}
   CInt&amp; operator=( const CInt&amp; rhs ) {m_nVal = 
   rhs.m_nVal; return *this;}
   bool operator&lt;( const CInt&amp; rhs ) const 
      {return ( m_nVal &lt; rhs.m_nVal );}
   friend ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

private:
   int m_nVal;
};

inline ostream&amp; operator&lt;&lt;(ostream&amp; osIn, const CInt&amp; rhs)
{
   osIn &lt;&lt; "CInt( " &lt;&lt; rhs.m_nVal &lt;&lt; " )"; 
   return osIn;
}

// Return whether modulus of elem1 is greater than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
};

int main( )
{
   // Searching a set container with elements of type CInt 
   // for the maximum element 
   CInt c1 = 1, c2 = 2, c3 = -3;
   set&lt;CInt&gt; s1;
   set&lt;CInt&gt;::iterator s1_Iter, s1_R1_Iter, s1_R2_Iter;
   
   s1.insert ( c1 );
   s1.insert ( c2 );
   s1.insert ( c3 );

   cout &lt;&lt; "s1 = (";
   for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; ",";
   s1_Iter = --s1.end( );
   cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; " )." &lt;&lt; endl;

   s1_R1_Iter = max_element ( s1.begin ( ) , s1.end ( ) );

   cout &lt;&lt; "The largest element in s1 is: " &lt;&lt; *s1_R1_Iter &lt;&lt; endl;
   cout &lt;&lt; endl;

   // Searching a vector with elements of type int for the maximum
   // element under default less than &amp; mod_lesser binary predicates
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator v1_Iter, v1_R1_Iter, v1_R2_Iter;

   int i;
   for ( i = 0 ; i &lt;= 3 ; i++ )
   {
      v1.push_back( i );
   }

   int ii;
   for ( ii = 1 ; ii &lt;= 4 ; ii++ )
   {
      v1.push_back( - 2 * ii );
   }
   
   cout &lt;&lt; "Vector v1 is ( " ;
   for ( v1_Iter = v1.begin( ) ; v1_Iter != v1.end( ) ; v1_Iter++ )
      cout &lt;&lt; *v1_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   v1_R1_Iter = max_element ( v1.begin ( ) , v1.end ( ) );
   v1_R2_Iter = max_element ( v1.begin ( ) , v1.end ( ), mod_lesser);

   cout &lt;&lt; "The largest element in v1 is: " &lt;&lt; *v1_R1_Iter &lt;&lt; endl;
   cout &lt;&lt; "The largest element in v1 under the mod_lesser"
        &lt;&lt; "\n binary predicate is: " &lt;&lt; *v1_R2_Iter &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="merge">
        <!--f5181f62-4d2f-485f-90c6-6ae92e7bf4d7-->
        <title>merge</title>
        <content>
            <para>Combines all of the elements from two sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator merge(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   OutputIterator merge(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first of two sorted source ranges to be combined and sorted into a single range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first of two sorted source ranges to be combined and sorted into a single range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in second of two consecutive sorted source ranges to be combined and sorted into a single range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in second of two consecutive sorted source ranges to be combined and sorted into a single range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range where the two source ranges are to be combined into a single sorted range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true </legacyBold>when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the last element in the sorted destination range.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position must be reachable from the first by incrementation.</para>
                    <para>The destination range should not overlap either of the source ranges and should be large enough to contain the destination range.</para>
                    <para>The sorted source ranges must each be arranged as a precondition to the application of the <legacyBold>merge</legacyBold> algorithm in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges.</para>
                    <para>The operation is stable as the relative order of elements within each range is preserved in the destination range. The source ranges are not modified by the algorithm <legacyBold>merge</legacyBold>.</para>
                    <para>The value types of the input iterators need be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. When there are equivalent elements in both source ranges, the elements in the first range precede the elements from the second source range in the destination range.</para>
                    <para>The complexity of the algorithm is linear with at most (                        <legacyItalic>_Last1 – _First1</legacyItalic>) – (                        <legacyItalic>_Last2 – _First2</legacyItalic>) – 1 comparisons.</para>
                    <para>The <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</legacyLink> class provides a member function <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd#list__merge">merge</legacyLink> to merge the elements of two lists.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_merge.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;   // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 ) {
   if (elem1 &lt; 0) 
      elem1 = - elem1;
   if (elem2 &lt; 0) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
}

int main() {
   using namespace std;
   vector &lt;int&gt; v1a, v1b, v1 ( 12 );
   vector &lt;int&gt;::iterator Iter1a,  Iter1b, Iter1;

   // Constructing vector v1a and v1b with default less than ordering
   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
      v1a.push_back(  i );

   int ii;
   for ( ii =-5 ; ii &lt;= 0 ; ii++ )
      v1b.push_back(  ii  );

   cout &lt;&lt; "Original vector v1a with range sorted by the\n "
        &lt;&lt; "binary predicate less than is  v1a = ( " ;
   for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
      cout &lt;&lt; *Iter1a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v1b with range sorted by the\n "
        &lt;&lt; "binary predicate less than is  v1b = ( " ;
   for ( Iter1b = v1b.begin ( ) ; Iter1b != v1b.end ( ) ; Iter1b++ )
      cout &lt;&lt; *Iter1b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   // Constructing vector v2 with ranges sorted by greater
   vector &lt;int&gt; v2a ( v1a ) , v2b ( v1b ) ,  v2 ( v1 );
   vector &lt;int&gt;::iterator Iter2a,  Iter2b, Iter2;
   sort ( v2a.begin ( ) , v2a.end ( ) , greater&lt;int&gt; ( ) );
   sort ( v2b.begin ( ) , v2b.end ( ) , greater&lt;int&gt; ( ) );

   cout &lt;&lt; "Original vector v2a with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2a =  ( " ;
   for ( Iter2a = v2a.begin ( ) ; Iter2a != v2a.end ( ) ; Iter2a++ )
      cout &lt;&lt; *Iter2a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v2b with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2b =  ( " ;
   for ( Iter2b = v2b.begin ( ) ; Iter2b != v2b.end ( ) ; Iter2b++ )
      cout &lt;&lt; *Iter2b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Constructing vector v3 with ranges sorted by mod_lesser
   vector &lt;int&gt; v3a ( v1a ), v3b ( v1b ) ,  v3 ( v1 );
   vector &lt;int&gt;::iterator Iter3a,  Iter3b, Iter3;
   sort ( v3a.begin ( ) , v3a.end ( ) , mod_lesser );
   sort ( v3b.begin ( ) , v3b.end ( ) , mod_lesser );

   cout &lt;&lt; "Original vector v3a with range sorted by the\n "
        &lt;&lt; "binary predicate mod_lesser is   v3a =  ( " ;
   for ( Iter3a = v3a.begin ( ) ; Iter3a != v3a.end ( ) ; Iter3a++ )
      cout &lt;&lt; *Iter3a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v3b with range sorted by the\n "
        &lt;&lt; "binary predicate mod_lesser is   v3b =  ( " ;
   for ( Iter3b = v3b.begin ( ) ; Iter3b != v3b.end ( ) ; Iter3b++ )
      cout &lt;&lt; *Iter3b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To merge inplace in ascending order with default binary 
   // predicate less &lt;int&gt; ( )
   merge ( v1a.begin ( ) , v1a.end ( ) , v1b.begin ( ) , v1b.end ( ) , v1.begin ( ) );
   cout &lt;&lt; "Merged inplace with default order,\n vector v1mod =  ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To merge inplace in descending order, specify binary 
   // predicate greater&lt;int&gt;( )
   merge ( v2a.begin ( ) , v2a.end ( ) , v2b.begin ( ) , v2b.end ( ) ,
       v2.begin ( ) ,  greater &lt;int&gt; ( ) );
   cout &lt;&lt; "Merged inplace with binary predicate greater specified,\n "
        &lt;&lt; "vector v2mod  = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Applying A user-defined (UD) binary predicate mod_lesser
   merge ( v3a.begin ( ) , v3a.end ( ) , v3b.begin ( ) , v3b.end ( ) ,
       v3.begin ( ) ,  mod_lesser );
   cout &lt;&lt; "Merged inplace with binary predicate mod_lesser specified,\n "
        &lt;&lt; "vector v3mod  = ( " ; ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="min">
        <!--636d6d14-3957-43c0-a197-653afa45e2d7-->
        <title>min</title>
        <content>
            <para>Compares two objects and returns the lesser of the two, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax>template&lt;class Type&gt;
    const Type&amp; min(
        const Type&amp; <parameterReference>_Left</parameterReference>, 
        const Type&amp; <parameterReference>_Right</parameterReference>
    );
template&lt;class Type, class Pr&gt;
    const Type&amp; min(
        const Type&amp; <parameterReference>_Left</parameterReference>, 
        const Type&amp; <parameterReference>_Right</parameterReference>,
        BinaryPredicate <parameterReference>_Comp</parameterReference>
    );
template&lt;class Type&gt; 
    Type min ( initializer_list&lt;Type&gt; <parameterReference>_Ilist</parameterReference>
    );
template&lt;class Type, class Pr&gt;    Type min (
        initializer_list&lt;Type&gt; <parameterReference>_Ilist</parameterReference>, 
        BinaryPredicate <parameterReference>_Comp</parameterReference>
    );
</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The first of the two objects being compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The second of the two objects being compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A binary predicate used to compare the two objects.</para>
                        </definition>
                        <definedTerm> <parameterReference>_IList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initializer_list that contains the members to be compared.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The lesser of the two objects, unless neither is lesser; in that case, it returns the first of the two objects. In the case of an initializer_list, it returns the least of the objects in the list.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <languageKeyword>min</languageKeyword> algorithm is unusual in having objects passed as parameters. Most Standard Template Library algorithms operate on a range of elements whose position is specified by iterators passed as parameters. If you need a function that uses a range of elements, use <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#min_element">min_element</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_min.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;set&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;
class CInt;
ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

class CInt
{
public:
    CInt( int n = 0 ) : m_nVal( n ){}
    CInt( const CInt&amp; rhs ) : m_nVal( rhs.m_nVal ){}
    CInt&amp; operator=( const CInt&amp; rhs ) {m_nVal = 
    rhs.m_nVal; return *this;}
    bool operator&lt;( const CInt&amp; rhs ) const 
        {return ( m_nVal &lt; rhs.m_nVal );}
    friend ostream&amp; operator&lt;&lt;(ostream&amp; osIn, const CInt&amp; rhs);

private:
    int m_nVal;
};

inline ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs )
{
    osIn &lt;&lt; "CInt( " &lt;&lt; rhs.m_nVal &lt;&lt; " )"; 
       return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
    if ( elem1 &lt; 0 ) 
        elem1 = - elem1;
    if ( elem2 &lt; 0 ) 
        elem2 = - elem2;
    return elem1 &lt; elem2;
};

int main( )
{
    // Comparing integers directly using the min algorithm with
    // binary predicate mod_lesser &amp; with default less than
    int a = 6, b = -7, c = 7 ;
    const int&amp; result1 = min ( a, b, mod_lesser );
    const int&amp; result2 = min ( b, c );

    cout &lt;&lt; "The mod_lesser of the integers 6 &amp; -7 is: " 
        &lt;&lt; result1 &lt;&lt; "." &lt;&lt; endl;
     cout &lt;&lt; "The lesser of the integers -7 &amp; 7 is: " 
        &lt;&lt; result2 &lt;&lt; "." &lt;&lt; endl;
    cout &lt;&lt; endl;

// Comparing the members of an initializer_list
    const int&amp; result3 = min({ a, c });
    const int&amp; result4 = min({ a, b }, mod_lesser);

    cout &lt;&lt; "The lesser of the integers 6 &amp; 7 is: "
        &lt;&lt; result3 &lt;&lt; "." &lt;&lt; endl;
    cout &lt;&lt; "The mod_lesser of the integers 6 &amp; -7 is: "
        &lt;&lt; result4 &lt;&lt; "." &lt;&lt; endl;
    cout &lt;&lt; endl;

    // Comparing set containers with elements of type CInt 
       // using the min algorithm
    CInt c1 = 1, c2 = 2, c3 = 3;
    set&lt;CInt&gt; s1, s2, s3;
    set&lt;CInt&gt;::iterator s1_Iter, s2_Iter, s3_Iter;
   
    s1.insert ( c1 );
    s1.insert ( c2 );
    s2.insert ( c2 );
    s2.insert ( c3 );

    cout &lt;&lt; "s1 = (";
    for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
        cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; ",";
    s1_Iter = --s1.end( );
        cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; " )." &lt;&lt; endl;

    cout &lt;&lt; "s2 = (";
    for ( s2_Iter = s2.begin( ); s2_Iter != --s2.end( ); s2_Iter++ )
        cout &lt;&lt; " " &lt;&lt; *s2_Iter &lt;&lt; ",";
    s2_Iter = --s2.end( );
    cout &lt;&lt; " " &lt;&lt; *s2_Iter &lt;&lt; " )." &lt;&lt; endl;

    s3 = min ( s1, s2 );
    cout &lt;&lt; "s3 = min ( s1, s2 ) = (";
    for ( s3_Iter = s3.begin( ); s3_Iter != --s3.end( ); s3_Iter++ )
        cout &lt;&lt; " " &lt;&lt; *s3_Iter &lt;&lt; ",";
    s3_Iter = --s3.end( );
    cout &lt;&lt; " " &lt;&lt; *s3_Iter &lt;&lt; " )." &lt;&lt; endl &lt;&lt; endl;

    // Comparing vectors with integer elements using min algorithm
    vector &lt;int&gt; v1, v2, v3, v4, v5;
    vector &lt;int&gt;::iterator Iter1, Iter2, Iter3, Iter4, Iter5;

    int i;
    for ( i = 0 ; i &lt;= 2 ; i++ )
    {
        v1.push_back( i );
    }

    int ii;
    for ( ii = 0 ; ii &lt;= 2 ; ii++ )
    {
        v2.push_back( ii );
    }

    int iii;
    for ( iii = 0 ; iii &lt;= 2 ; iii++ )
    {
        v3.push_back( 2 * iii );
    }
   
    cout &lt;&lt; "Vector v1 is ( " ;
    for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
        cout &lt;&lt; *Iter1 &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    cout &lt;&lt; "Vector v2 is ( " ;
    for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
        cout &lt;&lt; *Iter2 &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;
   
    cout &lt;&lt; "Vector v3 is ( " ;
    for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
        cout &lt;&lt; *Iter3 &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    v4 = min ( v1, v2 );
    v5 = min ( v1, v3 );

    cout &lt;&lt; "Vector v4 = min ( v1,v2 ) is ( " ;
    for ( Iter4 = v4.begin( ) ; Iter4 != v4.end( ) ; Iter4++ )
        cout &lt;&lt; *Iter4 &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    cout &lt;&lt; "Vector v5 = min ( v1,v3 ) is ( " ;
    for ( Iter5 = v5.begin( ) ; Iter5 != v5.end( ) ; Iter5++ )
        cout &lt;&lt; *Iter5 &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The mod_lesser of the integers 6 &amp; -7 is: 6.
The lesser of the integers -7 &amp; 7 is: -7.
The lesser of the integers 6 &amp; 7 is: 6.The mod_lesser of the integers 6 &amp; -7 is: 6.
s1 = ( CInt( 1 ), CInt( 2 ) ).
s2 = ( CInt( 2 ), CInt( 3 ) ).
s3 = min ( s1, s2 ) = ( CInt( 1 ), CInt( 2 ) ).

Vector v1 is ( 0 1 2 ).
Vector v2 is ( 0 1 2 ).
Vector v3 is ( 0 2 4 ).
Vector v4 = min ( v1,v2 ) is ( 0 1 2 ).
Vector v5 = min ( v1,v3 ) is ( 0 1 2 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="min_element">
        <!--4cf188f9-59f6-4d2c-a1aa-a259c0b1ac6c-->
        <title>min_element</title>
        <content>
            <para>Finds the first occurrence of smallest element in a specified range where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator&gt;</legacyBold> <legacyBold>   ForwardIterator min_element(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>first</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class ForwardIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   ForwardIterator min_element(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>first</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>last</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched for the smallest element.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched for the smallest element.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true </legacyBold>when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the position of the first occurrence of the smallest element in the range searched.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within each sequence the last position is reachable from the first by incrementation.</para>
                    <para>The complexity is linear: ( <parameterReference>last</parameterReference> – <parameterReference>first</parameterReference>) – 1 comparisons are required for a nonempty range.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_min_element.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;set&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;
class CInt;
ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

class CInt
{
public:
   CInt( int n = 0 ) : m_nVal( n ){}
   CInt( const CInt&amp; rhs ) : m_nVal( rhs.m_nVal ){}
   CInt&amp; operator=( const CInt&amp; rhs ) {m_nVal = 
   rhs.m_nVal; return *this;}
   bool operator&lt;( const CInt&amp; rhs ) const 
      {return ( m_nVal &lt; rhs.m_nVal );}
   friend ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

private:
   int m_nVal;
};

inline ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs )
{
   osIn &lt;&lt; "CInt( " &lt;&lt; rhs.m_nVal &lt;&lt; " )"; 
   return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
};

int main()
{
   // Searching a set container with elements of type CInt 
   // for the minimum element 
   CInt c1 = 1, c2 = 2, c3 = -3;
   set&lt;CInt&gt; s1;
   set&lt;CInt&gt;::iterator s1_Iter, s1_R1_Iter, s1_R2_Iter;
   
   s1.insert ( c1 );
   s1.insert ( c2 );
   s1.insert ( c3 );

   cout &lt;&lt; "s1 = (";
   for ( s1_Iter = s1.begin( ); s1_Iter != --s1.end( ); s1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; ",";
   s1_Iter = --s1.end( );
   cout &lt;&lt; " " &lt;&lt; *s1_Iter &lt;&lt; " )." &lt;&lt; endl;

   s1_R1_Iter = min_element ( s1.begin ( ) , s1.end ( ) );

   cout &lt;&lt; "The smallest element in s1 is: " &lt;&lt; *s1_R1_Iter &lt;&lt; endl;
   cout &lt;&lt; endl;

   // Searching a vector with elements of type int for the maximum
   // element under default less than &amp; mod_lesser binary predicates
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator v1_Iter, v1_R1_Iter, v1_R2_Iter;

   int i;
   for ( i = 0 ; i &lt;= 3 ; i++ )
   {
      v1.push_back( i );
   }

   int ii;
   for ( ii = 1 ; ii &lt;= 4 ; ii++ )
   {
      v1.push_back( - 2 * ii );
   }
   
   cout &lt;&lt; "Vector v1 is ( " ;
   for ( v1_Iter = v1.begin( ) ; v1_Iter != v1.end( ) ; v1_Iter++ )
      cout &lt;&lt; *v1_Iter &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   v1_R1_Iter = min_element ( v1.begin ( ) , v1.end ( ) );
   v1_R2_Iter = min_element ( v1.begin ( ) , v1.end ( ), mod_lesser);

   cout &lt;&lt; "The smallest element in v1 is: " &lt;&lt; *v1_R1_Iter &lt;&lt; endl;
   cout &lt;&lt; "The smallest element in v1 under the mod_lesser"
        &lt;&lt; "\n binary predicate is: " &lt;&lt; *v1_R2_Iter &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>s1 = ( CInt( -3 ), CInt( 1 ), CInt( 2 ) ).
The smallest element in s1 is: CInt( -3 )

Vector v1 is ( 0 1 2 3 -2 -4 -6 -8 ).
The smallest element in v1 is: -8
The smallest element in v1 under the mod_lesser
 binary predicate is: 0</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="minmax_element">
        <!--a86609c2-5f54-4746-b3fb-601038062b09-->
        <title>minmax_element</title>
        <content>
            <para>Performs the work performed by <unmanagedCodeEntityReference>min_element</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>max_element</unmanagedCodeEntityReference> in one call. </para>
            <legacySyntax>template&lt;class ForwardIterator&gt;
    pair&lt; ForwardIterator, ForwardIterator &gt;
        minmax_element(
            ForwardIterator <parameterReference> _First</parameterReference>, 
            ForwardIterator <parameterReference> _Last</parameterReference>
                <parameterReference/> );
template&lt;class ForwardIterator, class BinaryPredicate&gt;
    pair&lt; ForwardIterator, ForwardIterator &gt;
        minmax_element(
            ForwardIterator <parameterReference> _First</parameterReference>, 
            ForwardIterator <parameterReference> _Last</parameterReference>, 
            BinaryPredicate <parameterReference> _Comp</parameterReference>
                <parameterReference/>);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that indicates the beginning of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator that indicates the end of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An optional test used to order elements.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns </para>
                    <para> <codeInline>pair&lt;ForwardIterator, ForwardIterator&gt;</codeInline>
                    </para>
                    <para> <codeInline>    (</codeInline> <link xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#min_element">min_element</link>( <parameterReference>_First</parameterReference>, <parameterReference>_Last</parameterReference>), <link xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#max_element">max_element</link>( <parameterReference>_First</parameterReference>, <parameterReference>_Last</parameterReference>)).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first template function returns </para>
                    <para> <codeInline>pair&lt;ForwardIterator,ForwardIterator&gt;</codeInline>
                    </para>
                    <para> <codeInline>    (min_element(_First, _Last),max_element(_First, _Last))</codeInline>. </para>
                    <para>The second template function behaves the same, except that it replaces <codeInline>operator&lt;(X, Y)</codeInline> with <parameterReference>_Comp</parameterReference> <codeInline>(X, Y)</codeInline>. </para>
                    <para>If the sequence is non-empty, the function performs at most <codeInline>3 * (</codeInline> <parameterReference>_Last</parameterReference> <codeInline> - </codeInline> <parameterReference>_First</parameterReference> <codeInline> - 1) / 2</codeInline> comparisons. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="minmax">
        <!--83ba8b0d-6fec-4aa8-8e41-ec2eed73e7a2-->
        <title>minmax</title>
        <content>
            <para>Compares two input parameters and returns them as a pair, in order of lesser to greater. </para>
            <legacySyntax>template&lt;class Type&gt;
    pair&lt;const Type&amp;, const Type&amp;&gt;
        minmax(
            const Type&amp; <parameterReference>_Left</parameterReference>, 
            const Type&amp; <parameterReference>_Right</parameterReference>
        );
template&lt;class Type, class BinaryPredicate&gt;
    pair&lt;const Type&amp;, const Type&amp;&gt;
        minmax(
            const Type&amp; <parameterReference>_Left</parameterReference>,
            const Type&amp; <parameterReference>_Right</parameterReference>,
            BinaryPredicate <parameterReference>_Comp</parameterReference>
        );
template&lt;class Type&gt;     pair&lt;Type&amp;, Type&amp;&gt;         minmax(
            initializer_list&lt;Type&gt; <parameterReference>_Ilist</parameterReference>
        );
template&lt;class Type, class BinaryPredicate&gt; 
    pair&lt;Type&amp;, Type&amp;&gt;         minmax(
            initializer_list&lt;Type&gt; <parameterReference>_Ilist</parameterReference>, 
            BinaryPredicate <parameterReference>_Comp</parameterReference>
        );
</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The first of the two objects being compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The second of the two objects being compared.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A binary predicate used to compare the two objects.</para>
                        </definition>
                        <definedTerm> <parameterReference>_IList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initializer_list that contains the members to be compared.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first template function returns <codeInline>pair&lt;const Type&amp;, const Type&amp;&gt;(</codeInline> <parameterReference>_Right</parameterReference> <codeInline>, </codeInline> <parameterReference>_Left</parameterReference> <codeInline>)</codeInline> if <parameterReference>_Right</parameterReference> is less than <parameterReference>_Left</parameterReference>. Otherwise, it returns <codeInline>pair&lt;const Type&amp;, const Type&amp;&gt;(</codeInline> <parameterReference>_Left</parameterReference> <codeInline>, </codeInline> <parameterReference>_Right</parameterReference> <codeInline>)</codeInline>. </para>
                    <para>The second member function returns a pair where the first element is the lesser and the second is the greater when compared by the predicate <parameterReference>_Comp</parameterReference>. </para>
                    <para>The remaining template functions behave the same, except that they replace the <parameterReference>_Left</parameterReference> and <parameterReference>_Right</parameterReference> parameters with <parameterReference>_IList</parameterReference>. </para>
                    <para>The function performs exactly one comparison. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="mismatch">
        <!--a9fe78f3-9a86-44dc-9400-0c2ed1083323-->
        <title>mismatch</title>
        <content>
            <para>Compares two ranges element by element and locates the first position where a difference occurs. </para>
            <para>Use the dual-range overloads in C++14 code because the overloads that only take a single iterator for the second range will not detect differences if the second range is longer than the first range, and will result in undefined behavior if the second range is shorter than the first range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2&gt;</legacyBold> <legacyBold>   pair&lt;InputIterator1, InputIterator2&gt; mismatch(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class BinaryPredicate&gt;</legacyBold> <legacyBold>   pair&lt;InputIterator1, InputIterator2&gt; mismatch(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>Comp</parameterReference> <legacyBold>   );</legacyBold>

//C++14
template&lt;class InputIterator1, class InputIterator2&gt; <legacyBold>   pair&lt;InputIterator1, InputIterator2&gt; mismatch(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>Last2</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class BinaryPredicate&gt;</legacyBold> <legacyBold>   pair&lt;InputIterator1, InputIterator2&gt; mismatch(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>First1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>First2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>Last2</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>Comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the second range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of one past the last element in the second range to be tested.</para>
                        </definition>
                        <definedTerm> <parameterReference>Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that compares the current elements in each range and determines whether they are equivalent. It returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pair of iterators addressing the positions of the mismatch in the two ranges, the first component iterator to the position in the first range and the second component iterator to the position in the second range. If there is no difference between the elements in the ranges compared or if the binary predicate in the second version is satisfied by all element pairs from the two ranges, then the first component iterator points to the position one past the final element in the first range and the second component iterator to position one past the final element tested in the second range.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first template function assumes that there are as many elements in the range beginning at first2 as there are in the range designated by [first1, last1). If there are more in the second range, they are ignored; if there are less then undefined behavior will result.</para>
                    <para>The range to be searched must be valid; all iterators must be dereferenceable and the last position is reachable from the first by incrementation.</para>
                    <para>The time complexity of the algorithm is linear in the number of elements contained in the shorter range.</para>
                    <para>The user-defined predicate is not required to impose an equivalence relation that symmetric, reflexive and transitive between its operands.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--SnipComment-->
                            <para>The following example demonstrates how to use mismatch. The C++03 overload is shown only in order to demonstrate how it can produce an unexpected result. </para>
                        <!--EndSnipComment-->
                    <code>
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;utility&gt;

using namespace std;

// Return whether first element is twice the second
// Note that this is not a symmetric, reflexive and transitive equivalence.
// mismatch and equal accept such predicates, but is_permutation does not.
bool twice(int elem1, int elem2)
{
    return elem1 == elem2 * 2;
}

void PrintResult(const string&amp; msg, const pair&lt;vector&lt;int&gt;::iterator, vector&lt;int&gt;::iterator&gt;&amp; result,
    const vector&lt;int&gt;&amp; left, const vector&lt;int&gt;&amp; right)
{
    // If either iterator stops before reaching the end of its container,
    // it means a mismatch was detected.
    if (result.first != left.end() || result.second != right.end())
    {
        string leftpos(result.first == left.end() ? "end" : to_string(*result.first));
        string rightpos(result.second == right.end() ? "end" : to_string(*result.second));
        cout &lt;&lt; msg &lt;&lt; "mismatch. Left iterator at " &lt;&lt; leftpos
            &lt;&lt; " right iterator at " &lt;&lt; rightpos &lt;&lt; endl;
    }
    else
    {
        cout &lt;&lt; msg &lt;&lt; " match." &lt;&lt; endl;
    }
}


int main()
{

    vector&lt;int&gt; vec_1{ 0, 5, 10, 15, 20, 25 };
    vector&lt;int&gt; vec_2{ 0, 5, 10, 15, 20, 25, 30 };

    // Testing different length vectors for mismatch (C++03)
    auto match_vecs = mismatch(vec_1.begin(), vec_1.end(), vec_2.begin());
    bool is_mismatch = match_vecs.first != vec_1.end();
    cout &lt;&lt; "C++03: vec_1 and vec_2 are a mismatch: " &lt;&lt; boolalpha &lt;&lt; is_mismatch &lt;&lt; endl;

    // Using dual-range overloads:

    // Testing different length vectors for mismatch (C++14)
    match_vecs = mismatch(vec_1.begin(), vec_1.end(), vec_2.begin(), vec_2.end());
    PrintResult("C++14: vec_1 and vec_2: ", match_vecs, vec_1, vec_2);

    // Identify point of mismatch between vec_1 and modified vec_2. 
    vec_2[3] = 42;
    match_vecs = mismatch(vec_1.begin(), vec_1.end(), vec_2.begin(), vec_2.end());
    PrintResult("C++14 vec_1 v. vec_2 modified: ", match_vecs, vec_1, vec_2);

    // Test vec_3 and vec_4 for mismatch under the binary predicate twice (C++14)  
    vector&lt;int&gt; vec_3{ 10, 20, 30, 40, 50, 60 };
    vector&lt;int&gt; vec_4{ 5, 10, 15, 20, 25, 30 };
    match_vecs = mismatch(vec_3.begin(), vec_3.end(), vec_4.begin(), vec_4.end(), twice);
    PrintResult("vec_3 v. vec_4 with pred: ", match_vecs, vec_3, vec_4);

    vec_4[5] = 31;
    match_vecs = mismatch(vec_3.begin(), vec_3.end(), vec_4.begin(), vec_4.end(), twice);
    PrintResult("vec_3 v. modified vec_4 with pred: ", match_vecs, vec_3, vec_4);

    // Compare a vector&lt;int&gt; to a list&lt;int&gt;
    list&lt;int&gt; list_1{ 0, 5, 10, 15, 20, 25 };
    auto match_vec_list = mismatch(vec_1.begin(), vec_1.end(), list_1.begin(), list_1.end());
    is_mismatch = match_vec_list.first != vec_1.end() || match_vec_list.second != list_1.end();
    cout &lt;&lt; "vec_1 and list_1 are a mismatch: " &lt;&lt; boolalpha &lt;&lt; is_mismatch &lt;&lt; endl;

    char c;
    cout &lt;&lt; "Press a key" &lt;&lt; endl;
    cin &gt;&gt; c;

}


/*
Output:
C++03: vec_1 and vec_2 are a mismatch: false
C++14: vec_1 and vec_2: mismatch. Left iterator at end right iterator at 30
C++14 vec_1 v. vec_2 modified: mismatch. Left iterator at 15 right iterator at 42
C++14 vec_3 v. vec_4 with pred:  match.
C++14 vec_3 v. modified vec_4 with pred: mismatch. Left iterator at 60 right iterator at 31
C++14: vec_1 and list_1 are a mismatch: false
Press a key
*/




</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="alg_move">
        <!--3e2ba411-48a8-42ce-b9b8-faa020f00645-->
        <title>&amp;lt;alg&amp;gt; move</title>
        <content>
            <para> Move elements associated with a specified range.</para>
            <legacySyntax>template&lt;class InputIterator, class OutputIterator&gt;
    OutputIterator move(
        InputIterator <parameterReference>_First</parameterReference>, 
        InputIterator <parameterReference>_Last</parameterReference>,
        OutputIterator <parameterReference>_Dest</parameterReference>
                <parameterReference/>  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates where to start the range of elements to move.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates the end of a range of elements to move.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Dest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The output iterator that is to contain the moved elements.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> The template function evaluates <codeInline>*(</codeInline> <parameterReference>_Dest</parameterReference> <codeInline> + N) = </codeInline> move <codeInline>(*(</codeInline> <parameterReference>_First</parameterReference> <codeInline> + N)))</codeInline> once for each <codeInline>N</codeInline> in the range <codeInline>[0, </codeInline> <parameterReference>_Last</parameterReference> <codeInline> - </codeInline> <parameterReference>_First</parameterReference> <codeInline>)</codeInline>, for strictly increasing values of <codeInline>N</codeInline> starting with the lowest value. It then returns <parameterReference>_Dest</parameterReference> <codeInline> + N</codeInline>. If <parameterReference>_Dest</parameterReference>
                        <codeInline/>and <parameterReference>_First</parameterReference> designate regions of storage, <parameterReference>_Dest</parameterReference> must not be in the range <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>)</codeInline>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="move_backward">
        <!--82872773-11ce-45b9-aa73-c47d237511f5-->
        <title>move_backward</title>
        <content>
            <para>Moves the elements of one iterator to another. The move starts with the last element in a specified range, and ends with the first element in that range.</para>
            <legacySyntax> <legacyBold/>template&lt;class BidirectionalIterator1, class BidirectionalIterator2&gt;
    BidirectionalIterator2 move_backward(
        BidirectionalIterator1 <parameterReference>_First</parameterReference>, 
        BidirectionalIterator1 <parameterReference>_Last</parameterReference>,
        BidirectionalIterator2 <parameterReference>_DestEnd</parameterReference>
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
                            <para>An iterator that indicates the start of a range to move elements from.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An iterator that indicates the end of a range to move elements from. This element is not moved.</para>
                        </definition>
                        <definedTerm> <parameterReference>_DestEnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position of one past the final element in the destination range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function evaluates <codeInline>*(</codeInline> <parameterReference>_DestEnd</parameterReference> <codeInline> - N - 1) = </codeInline> <unmanagedCodeEntityReference>move</unmanagedCodeEntityReference> <codeInline>(*(</codeInline> <parameterReference>_Last</parameterReference> <codeInline> - N - 1)))</codeInline> once for each <codeInline>N</codeInline> in the range <codeInline>[0, </codeInline> <parameterReference>_Last</parameterReference> <codeInline> - </codeInline> <parameterReference>_First</parameterReference> <codeInline>)</codeInline>, for strictly increasing values of <codeInline>N</codeInline> starting with the lowest value. It then returns <parameterReference>_DestEnd</parameterReference> <codeInline> - (</codeInline> <parameterReference>_Last</parameterReference> <codeInline> - </codeInline> <parameterReference>_First</parameterReference> <codeInline>)</codeInline>. If <parameterReference>_DestEnd</parameterReference> and <parameterReference>_First</parameterReference> designate regions of storage, <parameterReference>_DestEnd</parameterReference> must not be in the range <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>)</codeInline>. </para>
                    <para> <unmanagedCodeEntityReference>move</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>move_backward</unmanagedCodeEntityReference> are functionally equivalent to using <unmanagedCodeEntityReference>copy</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>copy_backward</unmanagedCodeEntityReference> with a move iterator.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="next_permutation">
        <!--d412620b-73f7-4bdd-9ee6-e581504e9859-->
        <title>next_permutation</title>
        <content>
            <para>Reorders the elements in a range so that the original ordering is replaced by the lexicographically next greater permutation if it exists, where the sense of next may be specified with a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class BidirectionalIterator&gt;</legacyBold> <legacyBold>   bool next_permutation(</legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class BidirectionalIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   bool next_permutation(</legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_First,</parameterReference> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_Last,</parameterReference> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A bidirectional iterator pointing to the position of the first element in the range to be permuted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator pointing to the position one past the final element in the range to be permuted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>true</legacyBold> if the lexicographically next permutation exists and has replaced the original ordering of the range; otherwise <legacyBold>false</legacyBold>, in which case the ordering is transformed into the lexicographically smallest permutation.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The default binary predicate is less than and the elements in the range must be less than comparable to insure that the next permutation is well defined.</para>
                    <para>The complexity is linear with at most (                        <legacyItalic>_Last – _First</legacyItalic>)/2 swaps.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_next_perm.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;
class CInt;
ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

class CInt
{
public:
   CInt( int n = 0 ) : m_nVal( n ){}
   CInt( const CInt&amp; rhs ) : m_nVal( rhs.m_nVal ){}
   CInt&amp;   operator=( const CInt&amp; rhs ) {m_nVal =
   rhs.m_nVal; return *this;}
   bool operator&lt;( const CInt&amp; rhs ) const
      { return ( m_nVal &lt; rhs.m_nVal );}
   friend   ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

private:
   int m_nVal;
};

inline ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs )
{
   osIn &lt;&lt; "CInt( " &lt;&lt; rhs.m_nVal &lt;&lt; " )";
   return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 )
      elem1 = - elem1;
   if ( elem2 &lt; 0 )
      elem2 = - elem2;
   return elem1 &lt; elem2;
};

int main( )
{
   // Reordering the elements of type CInt in a deque
   // using the prev_permutation algorithm
   CInt c1 = 5, c2 = 1, c3 = 10;
   bool deq1Result;
   deque&lt;CInt&gt; deq1, deq2, deq3;
   deque&lt;CInt&gt;::iterator d1_Iter;

   deq1.push_back ( c1 );
   deq1.push_back ( c2 );
   deq1.push_back ( c3 );

   cout &lt;&lt; "The original deque of CInts is deq1 = (";
   for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; ",";
   d1_Iter = --deq1.end( );
   cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; " )." &lt;&lt; endl;

   deq1Result = next_permutation ( deq1.begin ( ) , deq1.end ( ) );

   if ( deq1Result )
      cout &lt;&lt; "The lexicographically next permutation "
           &lt;&lt; "exists and has\nreplaced the original "
           &lt;&lt; "ordering of the sequence in deq1." &lt;&lt; endl;
   else
      cout &lt;&lt; "The lexicographically next permutation doesn't "
           &lt;&lt; "exist\n and the lexicographically "
           &lt;&lt; "smallest permutation\n has replaced the "
           &lt;&lt; "original ordering of the sequence in deq1." &lt;&lt; endl;

   cout &lt;&lt; "After one application of next_permutation,\n deq1 = (";
   for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; ",";
   d1_Iter = --deq1.end( );
   cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; " )." &lt;&lt; endl &lt;&lt; endl;

   // Permuting vector elements with binary function mod_lesser
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = -3 ; i &lt;= 3 ; i++ )
   {
      v1.push_back( i );
   }

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   next_permutation ( v1.begin ( ) , v1.end ( ) , mod_lesser );

   cout &lt;&lt; "After the first next_permutation, vector v1 is:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   int iii = 1;
   while ( iii &lt;= 5 ) {
      next_permutation ( v1.begin ( ) , v1.end ( ) , mod_lesser );
      cout &lt;&lt; "After another next_permutation of vector v1,\n v1 =   ( " ;
      for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ;Iter1 ++ )
         cout &lt;&lt; *Iter1  &lt;&lt; " ";
      cout &lt;&lt; ")." &lt;&lt; endl;
      iii++;
   }
}</code>
                    <!--SnipComment-->
                            <computerOutput>The original deque of CInts is deq1 = ( CInt( 5 ), CInt( 1 ), CInt( 10 ) ).
The lexicographically next permutation exists and has
replaced the original ordering of the sequence in deq1.
After one application of next_permutation,
 deq1 = ( CInt( 5 ), CInt( 10 ), CInt( 1 ) ).

Vector v1 is ( -3 -2 -1 0 1 2 3 ).
After the first next_permutation, vector v1 is:
 v1 = ( -3 -2 -1 0 1 3 2 ).
After another next_permutation of vector v1,
 v1 =   ( -3 -2 -1 0 2 1 3 ).
After another next_permutation of vector v1,
 v1 =   ( -3 -2 -1 0 2 3 1 ).
After another next_permutation of vector v1,
 v1 =   ( -3 -2 -1 0 3 1 2 ).
After another next_permutation of vector v1,
 v1 =   ( -3 -2 -1 0 3 2 1 ).
After another next_permutation of vector v1,
 v1 =   ( -3 -2 -1 1 0 2 3 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="nth_element">
        <!--eda88e94-8840-4568-a83b-d03deeda9cf6-->
        <title>nth_element</title>
        <content>
            <para>Partitions a range of elements, correctly locating the                 <legacyItalic>n</legacyItalic>th element of the sequence in the range so that all the elements in front of it are less than or equal to it and all the elements that follow it in the sequence are greater than or equal to it.</para>
            <legacySyntax> <legacyBold>template&lt;class RandomAccessIterator&gt;</legacyBold> <legacyBold>   void nth_element(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Nth</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class RandomAccessIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   void nth_element(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Nth</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last,</parameterReference> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A random-access iterator addressing the position of the first element in the range to be partitioned.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>_Nth</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position of element to be correctly ordered on the boundary of the partition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the range to be partitioned.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The <unmanagedCodeEntityReference>nth_element</unmanagedCodeEntityReference> algorithm does not guarantee that elements in the sub-ranges either side of the                         <legacyItalic>n</legacyItalic>th element are sorted. It thus makes fewer guarantees than <unmanagedCodeEntityReference>partial_sort</unmanagedCodeEntityReference>, which orders the elements in the range below some chosen element, and may be used as a faster alternative to <unmanagedCodeEntityReference>partial_sort</unmanagedCodeEntityReference> when the ordering of the lower range is not required.</para>
                    <para>Elements are equivalent, but not necessarily equal, if neither is less than the other.</para>
                    <para>The average of a sort complexity is linear with respect to                         <legacyItalic>_Last – _First</legacyItalic>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_nth_elem.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether first element is greater than the second
bool UDgreater ( int elem1, int elem2 ) {
   return elem1 &gt; elem2;
}

int main() {
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
      v1.push_back( 3 * i );

   int ii;
   for ( ii = 0 ; ii &lt;= 5 ; ii++ )
      v1.push_back( 3 * ii + 1 );

   int iii;
   for ( iii = 0 ; iii &lt;= 5 ; iii++ )
      v1.push_back( 3 * iii +2 );

   cout &lt;&lt; "Original vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   nth_element(v1.begin( ), v1.begin( ) + 3, v1.end( ) );
   cout &lt;&lt; "Position 3 partitioned vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To sort in descending order, specify binary predicate
   nth_element( v1.begin( ), v1.begin( ) + 4, v1.end( ),
          greater&lt;int&gt;( ) );
   cout &lt;&lt; "Position 4 partitioned (greater) vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
   
   random_shuffle( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "Shuffled vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // A user-defined (UD) binary predicate can also be used
   nth_element( v1.begin( ), v1.begin( ) + 5, v1.end( ), UDgreater );
   cout &lt;&lt; "Position 5 partitioned (UDgreater) vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="none_of">
        <!--1308303a-4ccc-44d9-aeb5-6c703cccf40e-->
        <title>none_of</title>
        <content>
            <para>Returns <languageKeyword>true</languageKeyword> when a condition is never present among elements in the given range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>    bool none_of(</legacyBold> <legacyBold>InputIterator</legacyBold> _ <parameterReference>First</parameterReference>, <legacyBold>InputIterator</legacyBold> _ <parameterReference>Last</parameterReference>, <legacyBold>BinaryPredicate</legacyBold> _ <parameterReference>Comp</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>An input iterator that indicates where to start to check a range of elements for a condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates the end of a range of elements.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The condition to test for. This is provided by a user-defined predicate function object that defines the condition. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>true</languageKeyword> if the condition is not detected at least once in the indicated range, and <languageKeyword>false</languageKeyword> if the condition is detected.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function returns <languageKeyword>true</languageKeyword> only if, for some <codeInline>N</codeInline> in the range <codeInline>[0, </codeInline> <parameterReference>_Last</parameterReference> <codeInline> - </codeInline> <parameterReference>_First</parameterReference> <codeInline>)</codeInline>, the predicate <parameterReference>_Comp</parameterReference> <codeInline>(*(</codeInline> <parameterReference>_First</parameterReference> <codeInline> + N))</codeInline> is always <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="partial_sort">
        <!--327453e4-16c0-423c-bc1a-abea8ca63157-->
        <title>partial_sort</title>
        <content>
            <para>Arranges a specified number of the smaller elements in a range into a nondescending order or according to an ordering criterion specified by a binary predicate.</para>
            <legacySyntax>template&lt;class RandomAccessIterator&gt;
   void partial_sort(
      RandomAccessIterator <parameterReference>first</parameterReference>, 
      RandomAccessIterator <parameterReference>sortEnd</parameterReference>,
      RandomAccessIterator <parameterReference>last</parameterReference>
   );
template&lt;class RandomAccessIterator, class BinaryPredicate&gt;
   void partial_sort(
      RandomAccessIterator <parameterReference>first</parameterReference>, 
      RandomAccessIterator <parameterReference>sortEnd</parameterReference>,
      RandomAccessIterator <parameterReference>last</parameterReference>
      BinaryPredicate <parameterReference>comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position of the first element in the range to be sorted.</para>
                        </definition>
                        <definedTerm> <parameterReference>sortEnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the subrange to be sorted.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the range to be partially sorted.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. A binary predicate takes two arguments and returns <legacyBold>true</legacyBold> when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>Elements are equivalent, but not necessarily equal, if neither is less than the other. The <legacyBold>sort</legacyBold> algorithm is not stable and does not guarantee that the relative ordering of equivalent elements will be preserved. The algorithm <unmanagedCodeEntityReference>stable_sort</unmanagedCodeEntityReference> does preserve this original ordering.</para>
                    <para>The average partial sort complexity is                         <legacyItalic>O</legacyItalic>(( <parameterReference>last</parameterReference>- <parameterReference>first</parameterReference>) log ( <parameterReference>sortEnd</parameterReference>- <parameterReference>first</parameterReference>)).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_partial_sort.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether first element is greater than the second
bool UDgreater ( int elem1, int elem2 )
{
   return elem1 &gt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 2 * i );
   }

   int ii;
   for ( ii = 0 ; ii &lt;= 5 ; ii++ )
   {
      v1.push_back( 2 * ii +1 );
   }

   cout &lt;&lt; "Original vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   partial_sort(v1.begin( ), v1.begin( ) + 6, v1.end( ) );
   cout &lt;&lt; "Partially sorted vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To partially sort in descending order, specify binary predicate
   partial_sort(v1.begin( ), v1.begin( ) + 4, v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "Partially resorted (greater) vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // A user-defined (UD) binary predicate can also be used
   partial_sort(v1.begin( ), v1.begin( ) + 8, v1.end( ), 
 UDgreater );
   cout &lt;&lt; "Partially resorted (UDgreater) vector:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Original vector:
 v1 = ( 0 2 4 6 8 10 1 3 5 7 9 11 )
Partially sorted vector:
 v1 = ( 0 1 2 3 4 5 10 8 6 7 9 11 )
Partially resorted (greater) vector:
 v1 = ( 11 10 9 8 0 1 2 3 4 5 6 7 )
Partially resorted (UDgreater) vector:
 v1 = ( 11 10 9 8 7 6 5 4 0 1 2 3 )</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="partial_sort_copy">
        <!--cf137213-7eb6-4109-a94b-3b3d572e19ce-->
        <title>partial_sort_copy</title>
        <content>
            <para>Copies elements from a source range into a destination range where the source elements are ordered by either less than or another specified binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class RandomAccessIterator&gt;</legacyBold> <legacyBold>   RandomAccessIterator partial_sort_copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator, class RandomAccessIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   RandomAccessIterator partial_sort_copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last2,</parameterReference> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the source range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the source range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position of the first element in the sorted destination range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the sorted destination range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <languageKeyword>true</languageKeyword> when satisfied and <languageKeyword>false</languageKeyword> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A random-access iterator addressing the element in the destination range one position beyond the last element inserted from the source range.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source and destination ranges must not overlap and must be valid; all pointers must be dereferenceable and within each sequence the last position must be reachable from the first by incrementation.</para>
                    <para>The binary predicate must provide a strict weak ordering so that elements that are not equivalent are ordered, but elements that are equivalent are not. Two elements are equivalent under less than, but not necessarily equal, if neither is less than the other.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_partial_sort_copy.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;

int main() {
    using namespace std;
    vector&lt;int&gt; v1, v2;
    list&lt;int&gt; list1;
    vector&lt;int&gt;::iterator iter1, iter2;
    list&lt;int&gt;::iterator list1_Iter, list1_inIter;

    int i;
    for (i = 0; i &lt;= 9; i++)
        v1.push_back(i);

    random_shuffle(v1.begin(), v1.end());

    list1.push_back(60);
    list1.push_back(50);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(10);

    cout &lt;&lt; "Vector v1 = ( " ;
    for (iter1 = v1.begin(); iter1 != v1.end(); iter1++)
        cout &lt;&lt; *iter1 &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    cout &lt;&lt; "List list1 = ( " ;
    for (list1_Iter = list1.begin();
         list1_Iter!= list1.end();
         list1_Iter++)
        cout &lt;&lt; *list1_Iter &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;

    // Copying a partially sorted copy of list1 into v1
    vector&lt;int&gt;::iterator result1;
    result1 = partial_sort_copy(list1.begin(), list1.end(),
             v1.begin(), v1.begin() + 3);

    cout &lt;&lt; "List list1 Vector v1 = ( " ;
    for (iter1 = v1.begin() ; iter1 != v1.end() ; iter1++)
        cout &lt;&lt; *iter1 &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;
    cout &lt;&lt; "The first v1 element one position beyond"
         &lt;&lt; "\n the last L 1 element inserted was " &lt;&lt; *result1
         &lt;&lt; "." &lt;&lt; endl;

    // Copying a partially sorted copy of list1 into v2
    int ii;
    for (ii = 0; ii &lt;= 9; ii++)
        v2.push_back(ii);

    random_shuffle(v2.begin(), v2.end());
    vector&lt;int&gt;::iterator result2;
    result2 = partial_sort_copy(list1.begin(), list1.end(),
             v2.begin(), v2.begin() + 6);

    cout &lt;&lt; "List list1 into Vector v2 = ( " ;
    for (iter2 = v2.begin() ; iter2 != v2.end(); iter2++)
        cout &lt;&lt; *iter2 &lt;&lt; " ";
    cout &lt;&lt; ")" &lt;&lt; endl;
    cout &lt;&lt; "The first v2 element one position beyond"
         &lt;&lt; "\n the last L 1 element inserted was " &lt;&lt; *result2
         &lt;&lt; "." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="partition">
        <!--01a91b09-7950-4f5e-921d-3b2457ed5be4-->
        <title>partition</title>
        <content>
            <para>Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it.</para>
            <legacySyntax>template&lt;class BidirectionalIterator, class Predicate&gt;
   BidirectionalIterator partition(
      BidirectionalIterator <parameterReference>_First</parameterReference>, 
      BidirectionalIterator <parameterReference>_Last</parameterReference>, 
      Predicate <parameterReference>_Comp</parameterReference>
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
                            <para>A bidirectional iterator addressing the position of the first element in the range to be partitioned.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position one past the final element in the range to be partitioned.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if an element is to be classified. A predicate takes a single argument and returns <legacyBold>true</legacyBold> or <legacyBold>false</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A bidirectional iterator addressing the position of the first element in the range to not satisfy the predicate condition.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>Elements                         <legacyItalic>a</legacyItalic> and                         <legacyItalic>b</legacyItalic> are equivalent, but not necessarily equal, if both                         <legacyItalic>Pr</legacyItalic> (                        <legacyItalic>a</legacyItalic>,                         <legacyItalic>b</legacyItalic>) is false and                         <legacyItalic>Pr</legacyItalic> (                        <legacyItalic>b</legacyItalic>,                         <legacyItalic>a</legacyItalic>) if false, where                         <legacyItalic>Pr</legacyItalic> is the parameter-specified predicate. The <legacyBold>partition</legacyBold> algorithm is not stable and does not guarantee that the relative ordering of equivalent elements will be preserved. The algorithm <legacyBold>stable_ partition</legacyBold> does preserve this original ordering.</para>
                    <para>The complexity is linear: there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) applications of <parameterReference>_Comp</parameterReference> and at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>)/2 swaps.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_partition.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

bool greater5 ( int value ) {
   return value &gt;5;
}

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2;

   int i;
   for ( i = 0 ; i &lt;= 10 ; i++ )
   {
      v1.push_back( i );
   }
   random_shuffle( v1.begin( ), v1.end( ) );

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Partition the range with predicate greater10
   partition ( v1.begin( ), v1.end( ), greater5 );
   cout &lt;&lt; "The partitioned set of elements in v1 is: ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="partition_copy">
        <!--7e34c266-ca8f-4d97-af04-fb4e651110e2-->
        <title>partition_copy</title>
        <content>
            <para>Copies elements for which a condition is <languageKeyword>true</languageKeyword> to one destination, and for which the condition is <languageKeyword>false</languageKeyword> to another. The elements must come from a specified range.</para>
            <legacySyntax>template&lt;class InputIterator, class OutputIterator1, class OutputIterator2, class Predicate&gt;
    pair&lt;OutputIterator1, OutputIterator2&gt;
        partition_copy(
            InputIterator <parameterReference>_First</parameterReference>, 
            InputIterator <parameterReference>_Last</parameterReference>,
            OutputIterator1 <parameterReference>_Dest1</parameterReference>, 
            OutputIterator2 <parameterReference>_Dest2</parameterReference>, 
            Predicate <parameterReference>_Pred</parameterReference>
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
                            <para>An input iterator that indicates the beginning of a range to check for a condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator that indicates the end of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Dest1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator used to copy elements that return true for a condition tested by using <parameterReference>_Pred</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Dest2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator used to copy elements that return false for a condition tested by using <parameterReference>_Pred</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The condition to test for. This is provided by a user-defined predicate function object that defines the condition to be tested. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function copies each element <codeInline>X</codeInline> in <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>, </codeInline> <parameterReference>_Last</parameterReference> <codeInline>)</codeInline> to <codeInline>*</codeInline> <parameterReference>_Dest1</parameterReference> <codeInline>++</codeInline> if <parameterReference>_Pred</parameterReference> <codeInline>(X)</codeInline> is true, or to <codeInline>*</codeInline> <parameterReference>_Dest2</parameterReference> <codeInline>++ if not</codeInline>. It returns <codeInline>pair&lt;OutputIterator1, OutputIterator2&gt;(</codeInline> <parameterReference>_Dest1</parameterReference> <codeInline>, </codeInline> <parameterReference>_Dest2</parameterReference> <codeInline>)</codeInline>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="partition_point">
        <!--38751968-b720-429d-aca0-865f34ffad11-->
        <title>partition_point</title>
        <content>
            <para>Returns the first element in the given range that does not satisfy the condition. The elements are sorted so that those that satisfy the condition come before those that do not.</para>
            <legacySyntax>template&lt;class ForwardIterator, class Predicate&gt;
    ForwardIterator partition_point(
        ForwardIterator <parameterReference>_First</parameterReference>, 
        ForwardIterator <parameterReference>_Last</parameterReference>,
        Predicate <parameterReference>_Comp</parameterReference>
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
                            <para>A <unmanagedCodeEntityReference>ForwardIterator</unmanagedCodeEntityReference> that indicates the start of a range to check for a condition.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>ForwardIterator</unmanagedCodeEntityReference> that indicates the end of a range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The condition to test for. This is provided by a user-defined predicate function object that defines the condition to be satisfied by the element being searched for. A predicate takes a single argument and returns <languageKeyword>true</languageKeyword> or <languageKeyword>false</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a <unmanagedCodeEntityReference>ForwardIterator</unmanagedCodeEntityReference> that refers to the first element that does not fulfill the condition tested for by <parameterReference>_Comp</parameterReference>, or returns <parameterReference>_Last</parameterReference> if one is not found.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The template function finds the first iterator <codeInline>it</codeInline> in <codeInline>[</codeInline> <parameterReference>_First</parameterReference> <codeInline>,</codeInline> <parameterReference>_Last</parameterReference> <codeInline>)</codeInline> for which <codeInline>_Comp(*it)</codeInline> is <languageKeyword>false</languageKeyword>. The sequence must be ordered by <parameterReference>_Comp</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="pop_heap">
        <!--38f6eea3-d192-4597-aae7-c3ec2e659107-->
        <title>pop_heap</title>
        <content>
            <para>Removes the largest element from the front of a heap to the next-to-last position in the range and then forms a new heap from the remaining elements.</para>
            <legacySyntax> <legacyBold>template&lt;class RandomAccessIterator&gt;</legacyBold> <legacyBold>   void pop_heap(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class RandomAccessIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   void pop_heap(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A random-access iterator addressing the position of the first element in the heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>pop_heap</unmanagedCodeEntityReference> algorithm is the inverse of the operation performed by the push_heap algorithm, in which an element at the next-to-last position of a range is added to a heap consisting of the prior elements in the range, in the case when the element being added to the heap is larger than any of the elements already in the heap.</para>
                    <para>Heaps have two properties:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>The first element is always the largest.</para>
                        </listItem>
                        <listItem>
                            <para>Elements may be added or removed in logarithmic time.</para>
                        </listItem>
                    </list>
                    <para>Heaps are an ideal way to implement priority queues and they are used in the implementation of the Standard Template Library container adaptor <legacyLink xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">priority_queue Class</legacyLink>.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The range excluding the newly added element at the end must be a heap.</para>
                    <para>The complexity is logarithmic, requiring at most log (                        <legacyItalic>_Last – _First</legacyItalic>) comparisons.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_pop_heap.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;

int main( )  {
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1, Iter2;

   int i;
   for ( i = 1 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   // Make v1 a heap with default less than ordering
   random_shuffle( v1.begin( ), v1.end( ) );
   make_heap ( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The heaped version of vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Add an element to the back of the heap
   v1.push_back( 10 );
   push_heap( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The reheaped v1 with 10 added is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove the largest element from the heap
   pop_heap( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The heap v1 with 10 removed is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl &lt;&lt; endl;

   // Make v1 a heap with greater-than ordering with a 0 element
   make_heap ( v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   v1.push_back( 0 );
   push_heap( v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "The 'greater than' reheaped v1 puts the smallest "
        &lt;&lt; "element first:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Application of pop_heap to remove the smallest element
   pop_heap( v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "The 'greater than' heaped v1 with the smallest element\n "
        &lt;&lt; "removed from the heap is: ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="prev_permutation">
        <!--c467e0f9-931d-4028-b835-fbbf51158d97-->
        <title>prev_permutation</title>
        <content>
            <para>Reorders the elements in a range so that the original ordering is replaced by the lexicographically previous greater permutation if it exists, where the sense of previous may be specified with a binary predicate.</para>
            <legacySyntax>template&lt;class BidirectionalIterator&gt;
   bool prev_permutation(
      BidirectionalIterator <parameterReference>_First</parameterReference>, 
      BidirectionalIterator <parameterReference>_Last</parameterReference>
   );
template&lt;class BidirectionalIterator, class BinaryPredicate&gt;
   bool prev_permutation(
      BidirectionalIterator <parameterReference>_First</parameterReference>, 
      BidirectionalIterator <parameterReference>_Last</parameterReference>,
      BinaryPredicate <parameterReference>_Comp</parameterReference>
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
                            <para>A bidirectional iterator pointing to the position of the first element in the range to be permuted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator pointing to the position one past the final element in the range to be permuted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. A binary predicate takes two arguments and returns <languageKeyword>true</languageKeyword> when satisfied and <languageKeyword>false</languageKeyword> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the lexicographically previous permutation exists and has replaced the original ordering of the range; otherwise <languageKeyword>false</languageKeyword>, in which case the ordering is transformed into the lexicographically largest permutation.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The default binary predicate is less than and the elements in the range must be less-than comparable to ensure that the previous permutation is well defined.</para>
                    <para>The complexity is linear, with at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>)/2 swaps.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_prev_perm.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;
class CInt;
ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

class CInt {
public:
   CInt( int n = 0 ) : m_nVal( n ){}
   CInt( const CInt&amp; rhs ) : m_nVal( rhs.m_nVal ){}
   CInt&amp;   operator=( const CInt&amp; rhs ) {m_nVal =
   rhs.m_nVal; return *this;}
   bool operator&lt;( const CInt&amp; rhs ) const
      {return ( m_nVal &lt; rhs.m_nVal );}
   friend ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs );

private:
   int m_nVal;
};

inline ostream&amp; operator&lt;&lt;( ostream&amp; osIn, const CInt&amp; rhs ) {
   osIn &lt;&lt; "CInt( " &lt;&lt; rhs.m_nVal &lt;&lt; " )";
   return osIn;
}

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 ) {
   if ( elem1 &lt; 0 )
      elem1 = - elem1;
   if ( elem2 &lt; 0 )
      elem2 = - elem2;
   return elem1 &lt; elem2;
};

int main() {
   // Reordering the elements of type CInt in a deque
   // using the prev_permutation algorithm
   CInt c1 = 1, c2 = 5, c3 = 10;
   bool deq1Result;
   deque&lt;CInt&gt; deq1, deq2, deq3;
   deque&lt;CInt&gt;::iterator d1_Iter;

   deq1.push_back ( c1 );
   deq1.push_back ( c2 );
   deq1.push_back ( c3 );

   cout &lt;&lt; "The original deque of CInts is deq1 = (";
   for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; ",";
   d1_Iter = --deq1.end( );
   cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; " )." &lt;&lt; endl;

   deq1Result = prev_permutation ( deq1.begin ( ) , deq1.end ( ) );

   if ( deq1Result )
      cout &lt;&lt; "The lexicographically previous permutation "
           &lt;&lt; "exists and has \nreplaced the original "
           &lt;&lt; "ordering of the sequence in deq1." &lt;&lt; endl;
   else
      cout &lt;&lt; "The lexicographically previous permutation doesn't "
           &lt;&lt; "exist\n and the lexicographically "
           &lt;&lt; "smallest permutation\n has replaced the "
           &lt;&lt; "original ordering of the sequence in deq1." &lt;&lt; endl;

   cout &lt;&lt; "After one application of prev_permutation,\n deq1 = (";
   for ( d1_Iter = deq1.begin( ); d1_Iter != --deq1.end( ); d1_Iter++ )
      cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; ",";
   d1_Iter = --deq1.end( );
   cout &lt;&lt; " " &lt;&lt; *d1_Iter &lt;&lt; " )." &lt;&lt; endl &lt;&lt; endl;

   // Permutating vector elements with binary function mod_lesser
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = -3 ; i &lt;= 3 ; i++ )
      v1.push_back( i );

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   prev_permutation ( v1.begin ( ) , v1.end ( ) , mod_lesser );

   cout &lt;&lt; "After the first prev_permutation, vector v1 is:\n v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   int iii = 1;
   while ( iii &lt;= 5 ) {
      prev_permutation ( v1.begin ( ) , v1.end ( ) , mod_lesser );
      cout &lt;&lt; "After another prev_permutation of vector v1,\n v1 =   ( " ;
      for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ;Iter1 ++ )
         cout &lt;&lt; *Iter1  &lt;&lt; " ";
      cout &lt;&lt; ")." &lt;&lt; endl;
      iii++;
   }
}</code>
                    <!--SnipComment-->
                            <computerOutput>The original deque of CInts is deq1 = ( CInt( 1 ), CInt( 5 ), CInt( 10 ) ).
The lexicographically previous permutation doesn't exist
 and the lexicographically smallest permutation
 has replaced the original ordering of the sequence in deq1.
After one application of prev_permutation,
 deq1 = ( CInt( 10 ), CInt( 5 ), CInt( 1 ) ).

Vector v1 is ( -3 -2 -1 0 1 2 3 ).
After the first prev_permutation, vector v1 is:
 v1 = ( -3 -2 0 3 2 1 -1 ).
After another prev_permutation of vector v1,
 v1 =   ( -3 -2 0 3 -1 2 1 ).
After another prev_permutation of vector v1,
 v1 =   ( -3 -2 0 3 -1 1 2 ).
After another prev_permutation of vector v1,
 v1 =   ( -3 -2 0 2 3 1 -1 ).
After another prev_permutation of vector v1,
 v1 =   ( -3 -2 0 2 -1 3 1 ).
After another prev_permutation of vector v1,
 v1 =   ( -3 -2 0 2 -1 1 3 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="push_heap">
        <!--451cfdac-1021-42f9-abdd-ea2e35ceb8ba-->
        <title>push_heap</title>
        <content>
            <para>Adds an element that is at the end of a range to an existing heap consisting of the prior elements in the range.</para>
            <legacySyntax> <legacyBold>template&lt;class RandomAccessIterator&gt;</legacyBold> <legacyBold>   void push_heap(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class RandomAccessIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   void push_heap(</legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      RandomAccessIterator </legacyBold> <parameterReference>_Last</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A random-access iterator addressing the position of the first element in the heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the range to be converted into a heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The element must first be pushed back to the end of an existing heap and then the algorithm is used to add this element to the existing heap.</para>
                    <para>Heaps have two properties:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>The first element is always the largest.</para>
                        </listItem>
                        <listItem>
                            <para>Elements may be added or removed in logarithmic time.</para>
                        </listItem>
                    </list>
                    <para>Heaps are an ideal way to implement priority queues and they are used in the implementation of the Standard Template Library container adaptor <legacyLink xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">priority_queue Class</legacyLink>.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The range excluding the newly added element at the end must be a heap.</para>
                    <para>The complexity is logarithmic, requiring at most log (                        <legacyItalic>_Last – _First</legacyItalic>) comparisons.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_push_heap.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2;

   int i;
   for ( i = 1 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   random_shuffle( v1.begin( ), v1.end( ) );

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Make v1 a heap with default less than ordering
   make_heap ( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The heaped version of vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Add an element to the heap
   v1.push_back( 10 );
   cout &lt;&lt; "The heap v1 with 10 pushed back is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   push_heap( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The reheaped v1 with 10 added is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl &lt;&lt; endl;

   // Make v1 a heap with greater than ordering
   make_heap ( v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "The greater-than heaped version of v1 is\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   v1.push_back(0);
   cout &lt;&lt; "The greater-than heap v1 with 11 pushed back is\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   push_heap( v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "The greater than reheaped v1 with 11 added is\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="random_shuffle">
        <!--066a5fb1-9568-4e96-8ab9-854041d7f9d8-->
        <title>random_shuffle</title>
        <content>
            <para>The std::random_shuffle() function is deprecated, replaced by <legacyLink xlink:href="c10b0c65-410c-4c83-abf8-8b7f61bba8d0#std__shuffle">std::shuffle()</legacyLink>. For a code example and more information, see <legacyLink xlink:href="60afc25c-b162-4811-97c1-1b65398d4c57">&lt;random&gt;</legacyLink> and the Stackoverflow posting                 <externalLink> <linkText>Why are std::random_shuffle methods being deprecated in C++14?</linkText> <linkUri>http://go.microsoft.com/fwlink/?LinkId=397954</linkUri>
                </externalLink>. </para>
            <legacySyntax/>
        </content>
        <sections/>
    </section>
    <section address="remove">
        <!--77e2585c-441e-448d-bd1d-c893d1356ed8-->
        <title>remove</title>
        <content>
            <para>Eliminates a specified value from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Type&gt;</legacyBold> <legacyBold>   ForwardIterator remove(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator addressing the position of the first element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value that is to be removed from the range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the new end position of the modified range, one past the final element of the remnant sequence free of the specified value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The order of the elements not removed remains stable.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear; there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality.</para>
                    <para>The <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</legacyLink> class has a more efficient member function version of <legacyBold>remove</legacyBold>, which also relinks pointers.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_remove.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1, Iter2, new_end;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );
   
   random_shuffle ( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove elements with a value of 7
   new_end = remove ( v1.begin( ), v1.end( ), 7 );

   cout &lt;&lt; "Vector v1 with value 7 removed is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To change the sequence size, use erase
   v1.erase (new_end, v1.end( ) );

   cout &lt;&lt; "Vector v1 resized with value 7 removed is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="remove_copy">
        <!--04a5af2c-4d15-483e-9ee0-39812fb344c4-->
        <title>remove_copy</title>
        <content>
            <para>Copies elements from a source range to a destination range, except that elements of a specified value are not copied, without disturbing the order of the remaining elements and returning the end of a new destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class OutputIterator, class Type&gt;</legacyBold> <legacyBold>   OutputIterator remove_copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>An input iterator addressing the position of the first element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range to which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value that is to be removed from the range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the new end position of the destination range, one past the final element of the copy of the remnant sequence free of the specified value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source and destination ranges referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>There must be enough space in the destination range to contain the remnant elements that will be copied after elements of the specified value are removed.</para>
                    <para>The order of the elements not removed remains stable.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear; there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality and at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) assignments.</para>
                   
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_remove_copy.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   vector &lt;int&gt; v1, v2(10);
   vector &lt;int&gt;::iterator Iter1, Iter2, new_end;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );
   
   random_shuffle (v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The original vector v1 is:     ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove elements with a value of 7
   new_end = remove_copy ( v1.begin( ), v1.end( ), v2.begin( ), 7 );

   cout &lt;&lt; "Vector v1 is left unchanged as ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 is a copy of v1 with the value 7 removed:\n ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="remove_copy_if">
        <!--76b1e0d6-26a8-4adb-a55e-c179fa4e2dac-->
        <title>remove_copy_if</title>
        <content>
            <para>Copies elements from a source range to a destination range, except that satisfying a predicate are not copied, without disturbing the order of the remaining elements and returning the end of a new destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class OutputIterator, class Predicate&gt;</legacyBold> <legacyBold>   OutputIterator remove_copy_if(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      Predicate </legacyBold> <parameterReference>_Pred</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>An input iterator addressing the position of the first element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range to which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The unary predicate that must be satisfied is the value of an element is to be replaced.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the new end position of the destination range, one past the final element of the remnant sequence free of the elements satisfying the predicate.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>There must be enough space in the destination range to contain the remnant elements that will be copied after elements of the specified value are removed.</para>
                    <para>The order of the elements not removed remains stable.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear: there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality and at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) assignments.</para>
                   
                    <para>For information on how these functions behave, see <link xlink:href="cfc87df8-e3d9-403b-ab78-e9483247d940">Checked Iterators</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_remove_copy_if.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

bool greater6 ( int value ) {
   return value &gt;6;
}

int main() {
   using namespace std;
   vector &lt;int&gt; v1, v2(10);
   vector &lt;int&gt;::iterator Iter1, Iter2, new_end;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );
   
   random_shuffle ( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The original vector v1 is:      ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove elements with a value greater than 6
   new_end = remove_copy_if ( v1.begin( ), v1.end( ), 
      v2.begin( ), greater6 );

   cout &lt;&lt; "After the appliation of remove_copy_if to v1,\n "
        &lt;&lt; "vector v1 is left unchanged as ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 is a copy of v1 with values greater "
        &lt;&lt; "than 6 removed:\n ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != new_end ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="remove_if">
        <!--3b784953-0db6-42a8-84fc-865101abf901-->
        <title>remove_if</title>
        <content>
            <para>Eliminates elements that satisfy a predicate from a given range without disturbing the order of the remaining elements and returning the end of a new range free of the specified value.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Predicate&gt;</legacyBold> <legacyBold>   ForwardIterator remove_if(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      Predicate </legacyBold> <parameterReference>_Pred</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>A forward iterator pointing to the position of the first element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator pointing to the position one past the final element in the range from which elements are being removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The unary predicate that must be satisfied is the value of an element is to be replaced.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the new end position of the modified range, one past the final element of the remnant sequence free of the specified value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The order of the elements not removed remains stable.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear: there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality.</para>
                    <para>List has a more efficient member function version of remove which relinks pointers.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_remove_if.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

bool greater6 ( int value ) {
   return value &gt;6;
}

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2, new_end;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );
   
   random_shuffle ( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove elements satisfying predicate greater6
   new_end = remove_if (v1.begin( ), v1.end( ), greater6 );

   cout &lt;&lt; "Vector v1 with elements satisfying greater6 removed is\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To change the sequence size, use erase
   v1.erase (new_end, v1.end( ) );

   cout &lt;&lt; "Vector v1 resized elements satisfying greater6 removed is\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="replace">
        <!--8324dd0c-f3f7-4035-9fbe-654010366149-->
        <title>replace</title>
        <content>
            <para>Examines each element in a range and replaces it if it matches a specified value.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Type&gt;</legacyBold> <legacyBold>   void replace(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_OldVal</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_NewVal</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator pointing to the position of the first element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator pointing to the position one past the final element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_OldVal</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The old value of the elements being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_NewVal</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new value being assigned to the elements with the old value.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The order of the elements not replaced remains stable.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear; there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality and at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) assignments of new values.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_replace.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );
   
   random_shuffle (v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The original vector v1 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Replace elements with a value of 7 with a value of 700
   replace (v1.begin( ), v1.end( ), 7 , 700);

   cout &lt;&lt; "The vector v1 with a value 700 replacing that of 7 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="replace_copy">
        <!--2493e702-894c-4798-87a1-0138cc348e6f-->
        <title>replace_copy</title>
        <content>
            <para>Examines each element in a source range and replaces it if it matches a specified value while copying the result into a new destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class OutputIterator, class Type&gt;</legacyBold> <legacyBold>   OutputIterator replace_copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_OldVal</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_NewVal</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>An input iterator pointing to the position of the first element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator pointing to the position one past the final element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator pointing to the first element in the destination range to where the altered sequence of elements is being copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>_OldVal</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The old value of the elements being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_NewVal</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new value being assigned to the elements with the old value.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator pointing to the position one past the final element in the destination range to where the altered sequence of elements is being copied.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source and destination ranges referenced must not overlap and must both be valid: all pointers must be dereferenceable and within the sequences the last position is reachable from the first by incrementation.</para>
                    <para>The order of the elements not replaced remains stable.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear: there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality and at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) assignments of new values.</para>
                   
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_replace_copy.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1;
   list &lt;int&gt; L1 (15);
   vector &lt;int&gt;::iterator Iter1;
   list &lt;int&gt;::iterator L_Iter1;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );
   
   random_shuffle ( v1.begin( ), v1.end( ) );

   int iii;
   for ( iii = 0 ; iii &lt;= 15 ; iii++ )
      v1.push_back( 1 );

   cout &lt;&lt; "The original vector v1 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Replace elements in one part of a vector with a value of 7
   // with a value of 70 and copy into another part of the vector
   replace_copy ( v1.begin( ), v1.begin( ) + 14,v1.end( ) -15, 7 , 70);

   cout &lt;&lt; "The vector v1 with a value 70 replacing that of 7 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Replace elements in a vector with a value of 70
   // with a value of 1 and copy into a list
   replace_copy ( v1.begin( ), v1.begin( ) + 14,L1.begin( ), 7 , 1);

   cout &lt;&lt; "The list copy L1 of v1 with the value 0 replacing "
        &lt;&lt; "that of 7 is:\n ( " ;
   for ( L_Iter1 = L1.begin( ) ; L_Iter1 != L1.end( ) ; L_Iter1++ )
      cout &lt;&lt; *L_Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="replace_copy_if">
        <!--3541f157-b8e0-4f83-bfdf-3e786ed26a3b-->
        <title>replace_copy_if</title>
        <content>
            <para>Examines each element in a source range and replaces it if it satisfies a specified predicate while copying the result into a new destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class OutputIterator, class Predicate, class Type&gt;</legacyBold> <legacyBold>   OutputIterator replace_copy_if(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      Predicate </legacyBold> <parameterReference>_Pred</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>An input iterator pointing to the position of the first element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator pointing to the position one past the final element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator pointing to the position of the first element in the destination range to which elements are being copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The unary predicate that must be satisfied is the value of an element is to be replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new value being assigned to the elements whose old value satisfies the predicate.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator pointing to the position one past the final element in the destination range to where the altered sequence of elements is being copied.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source and destination ranges referenced must not overlap and must both be valid: all pointers must be dereferenceable and within the sequences the last position is reachable from the first by incrementation.</para>
                    <para>The order of the elements not replaced remains stable.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear; there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality and at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) assignments of new values.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_replace_copy_if.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

bool greater6 ( int value ) {
   return value &gt;6;
}

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1;
   list &lt;int&gt; L1 (13);
   vector &lt;int&gt;::iterator Iter1;
   list &lt;int&gt;::iterator L_Iter1;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );

   random_shuffle ( v1.begin( ), v1.end( ) );

   int iii;
   for ( iii = 0 ; iii &lt;= 13 ; iii++ )
      v1.push_back( 1 );

   cout &lt;&lt; "The original vector v1 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Replace elements with a value of 7 in the 1st half of a vector
   // with a value of 70 and copy it into the 2nd half of the vector
   replace_copy_if ( v1.begin( ), v1.begin( ) + 14,v1.end( ) -14,
      greater6 , 70);

   cout &lt;&lt; "The vector v1 with values of 70 replacing those greater"
        &lt;&lt; "\n than 6 in the 1st half &amp; copied into the 2nd half is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Replace elements in a vector with a value of 70
   // with a value of 1 and copy into a list
   replace_copy_if ( v1.begin( ), v1.begin( ) + 13,L1.begin( ),
      greater6 , -1 );

   cout &lt;&lt; "A list copy of vector v1 with the value -1\n replacing "
        &lt;&lt; "those greater than 6 is:\n ( " ;
   for ( L_Iter1 = L1.begin( ) ; L_Iter1 != L1.end( ) ; L_Iter1++ )
      cout &lt;&lt; *L_Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="replace_if">
        <!--3d01105a-046d-42aa-9dc9-a6b1c53ec802-->
        <title>replace_if</title>
        <content>
            <para>Examines each element in a range and replaces it if it satisfies a specified predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class Predicate, class Type&gt;</legacyBold> <legacyBold>   void replace_if(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      Predicate </legacyBold> <parameterReference>_Pred</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      const Type&amp; </legacyBold> <parameterReference>_Val</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator pointing to the position of the first element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An iterator pointing to the position one past the final element in the range from which elements are being replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The unary predicate that must be satisfied is the value of an element is to be replaced.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new value being assigned to the elements whose old value satisfies the predicate.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The order of the elements not replaced remains stable.</para>
                    <para>The algorithm <unmanagedCodeEntityReference>replace_if</unmanagedCodeEntityReference> is a generalization of the algorithm <legacyBold>replace</legacyBold>, allowing any predicate to be specified, rather than equality to a specified constant value.</para>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the equality between elements must impose an equivalence relation between its operands.</para>
                    <para>The complexity is linear: there are ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons for equality and at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) assignments of new values.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_replace_if.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

bool greater6 ( int value ) {
   return value &gt;6;
}

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
      v1.push_back( 7 );
   
   random_shuffle ( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "The original vector v1 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Replace elements satisfying the predicate greater6
   // with a value of 70
   replace_if ( v1.begin( ), v1.end( ), greater6 , 70);

   cout &lt;&lt; "The vector v1 with a value 70 replacing those\n "
        &lt;&lt; "elements satisfying the greater6 predicate is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="reverse">
        <!--824d7107-6cff-40d3-8875-e07a6fc4f16e-->
        <title>reverse</title>
        <content>
            <para>Reverses the order of the elements within a range.</para>
            <legacySyntax> <legacyBold>template&lt;class BidirectionalIterator&gt;</legacyBold> <legacyBold>   void reverse(</legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A bidirectional iterator pointing to the position of the first element in the range within which the elements are being permuted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator pointing to the position one past the final element in the range within which the elements are being permuted.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_reverse.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
   {
      v1.push_back( i );
   }

   cout &lt;&lt; "The original vector v1 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Reverse the elements in the vector 
   reverse (v1.begin( ), v1.end( ) );

   cout &lt;&lt; "The modified vector v1 with values reversed is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>The original vector v1 is:
 ( 0 1 2 3 4 5 6 7 8 9 ).
The modified vector v1 with values reversed is:
 ( 9 8 7 6 5 4 3 2 1 0 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="reverse_copy">
        <!--84567cb2-dc19-43a0-831f-6a03a85acb66-->
        <title>reverse_copy</title>
        <content>
            <para>Reverses the order of the elements within a source range while copying them into a destination range</para>
            <legacySyntax> <legacyBold>template&lt;class BidirectionalIterator, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator reverse_copy(</legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_First,</parameterReference> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_Last,</parameterReference> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A bidirectional iterator pointing to the position of the first element in the source range within which the elements are being permuted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator pointing to the position one past the final element in the source range within which the elements are being permuted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator pointing to the position of the first element in the destination range to which elements are being copied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator pointing to the position one past the final element in the destination range to where the altered sequence of elements is being copied.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The source and destination ranges referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_reverse_copy.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1, v2( 10 );
   vector &lt;int&gt;::iterator Iter1, Iter2;

   int i;
   for ( i = 0 ; i &lt;= 9 ; i++ )
   {
      v1.push_back( i );
   }

   cout &lt;&lt; "The original vector v1 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Reverse the elements in the vector 
   reverse_copy (v1.begin( ), v1.end( ), v2.begin( ) );

   cout &lt;&lt; "The copy v2 of the reversed vector v1 is:\n ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The original vector v1 remains unmodified as:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="rotate">
        <!--dacfa67d-4139-45a5-8265-2e2187231392-->
        <title>rotate</title>
        <content>
            <para>Exchanges the elements in two adjacent ranges.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator&gt;</legacyBold> <legacyBold>   void rotate(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Middle</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator addressing the position of the first element in the range to be rotated.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Middle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator defining the boundary within the range that addresses the position of the first element in the second part of the range whose elements are to be exchanged with those in the first part of the range.</para>
                        </definition>
                        <definedTerm>_ <parameterReference>Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be rotated.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The complexity is linear with at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) swaps.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_rotate.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1;
   deque &lt;int&gt; d1;
   vector &lt;int&gt;::iterator v1Iter1;
   deque&lt;int&gt;::iterator d1Iter1;

   int i;
   for ( i = -3 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( i );
   }

   int ii;
   for ( ii =0 ; ii &lt;= 5 ; ii++ )
   {
      d1.push_back( ii );
   }

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
      cout &lt;&lt; *v1Iter1  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   rotate ( v1.begin ( ) , v1.begin ( ) + 3 , v1.end ( ) );
   cout &lt;&lt; "After rotating, vector v1 is ( " ;
   for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
      cout &lt;&lt; *v1Iter1  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The original deque d1 is ( " ;
   for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
      cout &lt;&lt; *d1Iter1  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   int iii = 1;
   while ( iii &lt;= d1.end ( ) - d1.begin ( ) ) {
      rotate ( d1.begin ( ) , d1.begin ( ) + 1 , d1.end ( ) );
      cout &lt;&lt; "After the rotation of a single deque element to the back,\n d1 is   ( " ;
      for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
         cout &lt;&lt; *d1Iter1  &lt;&lt; " ";
      cout &lt;&lt; ")." &lt;&lt; endl;
      iii++;
   }
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 is ( -3 -2 -1 0 1 2 3 4 5 ).
After rotating, vector v1 is ( 0 1 2 3 4 5 -3 -2 -1 ).
The original deque d1 is ( 0 1 2 3 4 5 ).
After the rotation of a single deque element to the back,
 d1 is   ( 1 2 3 4 5 0 ).
After the rotation of a single deque element to the back,
 d1 is   ( 2 3 4 5 0 1 ).
After the rotation of a single deque element to the back,
 d1 is   ( 3 4 5 0 1 2 ).
After the rotation of a single deque element to the back,
 d1 is   ( 4 5 0 1 2 3 ).
After the rotation of a single deque element to the back,
 d1 is   ( 5 0 1 2 3 4 ).
After the rotation of a single deque element to the back,
 d1 is   ( 0 1 2 3 4 5 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="rotate_copy">
        <!--06c5bb1d-3b44-4c06-8f39-e926c0829bae-->
        <title>rotate_copy</title>
        <content>
            <para>Exchanges the elements in two adjacent ranges within a source range and copies the result to a destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator rotate_copy(</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Middle</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      ForwardIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A forward iterator addressing the position of the first element in the range to be rotated.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Middle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator defining the boundary within the range that addresses the position of the first element in the second part of the range whose elements are to be exchanged with those in the first part of the range.</para>
                        </definition>
                        <definedTerm>_ <parameterReference>Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be rotated.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the final element in the destination range.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The complexity is linear with at most ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) swaps.</para>
                   
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_rotate_copy.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main() {
   using namespace std;
   vector &lt;int&gt; v1 , v2 ( 9 );
   deque &lt;int&gt; d1 , d2 ( 6 );
   vector &lt;int&gt;::iterator v1Iter , v2Iter;
   deque&lt;int&gt;::iterator d1Iter , d2Iter;

   int i;
   for ( i = -3 ; i &lt;= 5 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii =0 ; ii &lt;= 5 ; ii++ )
      d1.push_back( ii );

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ;v1Iter ++ )
      cout &lt;&lt; *v1Iter  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   rotate_copy ( v1.begin ( ) , v1.begin ( ) + 3 , v1.end ( ) , v2.begin ( ) );
   cout &lt;&lt; "After rotating, the vector v1 remains unchanged as:\n v1 = ( " ;
   for ( v1Iter = v1.begin( ) ; v1Iter != v1.end( ) ;v1Iter ++ )
      cout &lt;&lt; *v1Iter  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "After rotating, the copy of vector v1 in v2 is:\n v2 = ( " ;
   for ( v2Iter = v2.begin( ) ; v2Iter != v2.end( ) ;v2Iter ++ )
      cout &lt;&lt; *v2Iter  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The original deque d1 is ( " ;
   for ( d1Iter = d1.begin( ) ; d1Iter != d1.end( ) ;d1Iter ++ )
      cout &lt;&lt; *d1Iter  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   int iii = 1;
   while ( iii &lt;= d1.end ( ) - d1.begin ( ) )
   {
      rotate_copy ( d1.begin ( ) , d1.begin ( ) + iii , d1.end ( ) , d2.begin ( ) );
      cout &lt;&lt; "After the rotation of a single deque element to the back,\n d2 is   ( " ;
      for ( d2Iter = d2.begin( ) ; d2Iter != d2.end( ) ;d2Iter ++ )
         cout &lt;&lt; *d2Iter  &lt;&lt; " ";
      cout &lt;&lt; ")." &lt;&lt; endl;
      iii++;
   }
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="search">
        <!--fe692c77-c55e-4f4c-b6da-9fe456fff540-->
        <title>search</title>
        <content>
            <para>Searches for the first occurrence of a sequence within a target range whose elements are equal to those in a given sequence of elements or whose elements are equivalent in a sense specified by a binary predicate to the elements in the given sequence.</para>
            <legacySyntax>template&lt;class ForwardIterator1, class ForwardIterator2&gt;
   ForwardIterator1 search(
      ForwardIterator1 <parameterReference>_First1</parameterReference>, 
      ForwardIterator1 <parameterReference>_Last1</parameterReference>,
      ForwardIterator2 <parameterReference>_First2</parameterReference>, 
      ForwardIterator2 <parameterReference>_Last2</parameterReference>
   );
template&lt;class ForwardIterator1, class ForwardIterator2, class Predicate&gt;
   ForwardIterator1 search(
      ForwardIterator1 <parameterReference>_First1</parameterReference>, 
      ForwardIterator1 <parameterReference>_Last1</parameterReference>,
      ForwardIterator2 <parameterReference>_First2</parameterReference>, 
      ForwardIterator2 <parameterReference>_Last2</parameterReference>
      Predicate <parameterReference>_Comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be matched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be matched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the position of the first element of the first subsequence that matches the specified sequence or that is equivalent in a sense specified by a binary predicate.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the match between an element and the specified value must impose an equivalence relation between its operands.</para>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position is reachable from the first by incrementation.</para>
                    <para>Average complexity is linear with respect to the size of the searched range, and worst case complexity is also linear with respect to the size of the sequence being searched for.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_search.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

// Return whether second element is twice the first
bool twice (int elem1, int elem2 )
{
   return 2 * elem1 == elem2;
}

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   list &lt;int&gt; L1;
   vector &lt;int&gt;::iterator Iter1, Iter2;
   list &lt;int&gt;::iterator L1_Iter, L1_inIter;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }

   int ii;
   for ( ii = 4 ; ii &lt;= 5 ; ii++ )
   {
      L1.push_back( 5 * ii );
   }

   int iii;
   for ( iii = 2 ; iii &lt;= 4 ; iii++ )
   {
      v2.push_back( 10 * iii );
   }

   cout &lt;&lt; "Vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "List L1 = ( " ;
   for ( L1_Iter = L1.begin( ) ; L1_Iter!= L1.end( ) ; L1_Iter++ )
      cout &lt;&lt; *L1_Iter &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
      cout &lt;&lt; ")" &lt;&lt; endl;

   // Searching v1 for first match to L1 under identity
   vector &lt;int&gt;::iterator result1;
   result1 = search (v1.begin( ), v1.end( ), L1.begin( ), L1.end( ) );

   if ( result1 == v1.end( ) )
      cout &lt;&lt; "There is no match of L1 in v1."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There is at least one match of L1 in v1"
           &lt;&lt; "\n and the first one begins at "
           &lt;&lt; "position "&lt;&lt; result1 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;

   // Searching v1 for a match to L1 under the binary predicate twice
   vector &lt;int&gt;::iterator result2;
   result2 = search  (v1.begin( ), v1.end( ), v2.begin( ), v2.end( ), twice );

   if ( result2 == v1.end( ) )
      cout &lt;&lt; "There is no match of L1 in v1."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There is a sequence of elements in v1 that "
           &lt;&lt; "are equivalent\n to those in v2 under the binary "
           &lt;&lt; "predicate twice\n and the first one begins at position "
           &lt;&lt; result2 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 = ( 0 5 10 15 20 25 0 5 10 15 20 25 )
List L1 = ( 20 25 )
Vector v2 = ( 20 30 40 )
There is at least one match of L1 in v1
 and the first one begins at position 4.
There is a sequence of elements in v1 that are equivalent
 to those in v2 under the binary predicate twice
 and the first one begins at position 2.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="search_n">
        <!--8daa0c12-bac4-4cef-9213-45ef9a8d86af-->
        <title>search_n</title>
        <content>
            <para>Searches for the first subsequence in a range that of a specified number of elements having a particular value or a relation to that value as specified by a binary predicate.</para>
            <legacySyntax>template&lt;class ForwardIterator1, class Diff2, class Type&gt;
   ForwardIterator1 search_n(
      ForwardIterator1 <parameterReference>_First1</parameterReference>, 
      ForwardIterator1 <parameterReference>_Last1</parameterReference>,
      Diff2 <parameterReference>_Count</parameterReference>, 
      const Type&amp; <parameterReference>_Val</parameterReference>
   );
template&lt;class ForwardIterator1, class Diff2, class Type, class BinaryPredicate&gt;
   ForwardIterator1 search_n(
      ForwardIterator1 <parameterReference>_First1</parameterReference>, 
      ForwardIterator1 <parameterReference>_Last1</parameterReference>,
      Diff2 <parameterReference>_Count</parameterReference>, 
      const Type&amp; <parameterReference>_Val</parameterReference>,
      BinaryPredicate <parameterReference>_Comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Count</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The size of the subsequence being searched for.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Val</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the elements in the sequence being searched for.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator addressing the position of the first element of the first subsequence that matches the specified sequence or that is equivalent in a sense specified by a binary predicate.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>operator==</unmanagedCodeEntityReference> used to determine the match between an element and the specified value must impose an equivalence relation between its operands.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>Complexity is linear with respect to the size of the searched.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_search_n.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;list&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

// Return whether second element is 1/2 of the first
bool one_half ( int elem1, int elem2 )
{
   return elem1 == 2 * elem2;
}

int main( ) 
{
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }

   for ( i = 0 ; i &lt;= 2 ; i++ )
   {
      v1.push_back( 5  );
   }

   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }

   for ( i = 0 ; i &lt;= 2 ; i++ )
   {
      v1.push_back( 10  );
   }

   cout &lt;&lt; "Vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // Searching v1 for first match to (5 5 5) under identity
   vector &lt;int&gt;::iterator result1;
   result1 = search_n ( v1.begin( ), v1.end( ), 3, 5 );

   if ( result1 == v1.end( ) )
      cout &lt;&lt; "There is no match for a sequence ( 5 5 5 ) in v1."
           &lt;&lt; endl;
   else
      cout &lt;&lt; "There is at least one match of a sequence ( 5 5 5 )"
           &lt;&lt; "\n in v1 and the first one begins at "
           &lt;&lt; "position "&lt;&lt; result1 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;

   // Searching v1 for first match to (5 5 5) under one_half
   vector &lt;int&gt;::iterator result2;
   result2 = search_n (v1.begin( ), v1.end( ), 3, 5, one_half );

   if ( result2 == v1.end( ) )
      cout &lt;&lt; "There is no match for a sequence ( 5 5 5 ) in v1"
           &lt;&lt; " under the equivalence predicate one_half." &lt;&lt; endl;
   else
      cout &lt;&lt; "There is a match of a sequence ( 5 5 5 ) "
           &lt;&lt; "under the equivalence\n predicate one_half "
           &lt;&lt; "in v1 and the first one begins at "
           &lt;&lt; "position "&lt;&lt; result2 - v1.begin( ) &lt;&lt; "." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 = ( 0 5 10 15 20 25 5 5 5 0 5 10 15 20 25 10 10 10 )
There is at least one match of a sequence ( 5 5 5 )
 in v1 and the first one begins at position 6.
There is a match of a sequence ( 5 5 5 ) under the equivalence
 predicate one_half in v1 and the first one begins at position 15.</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="set_difference">
        <!--cd96abfe-5028-47de-ae29-cb9aa4a0acf3-->
        <title>set_difference</title>
        <content>
            <para>Unites all of the elements that belong to one sorted source range, but not to a second sorted source range, into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator set_difference(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>first1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>first2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>result</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   OutputIterator set_difference(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>first1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>first2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>result</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first of two sorted source ranges to be united and sorted into a single range representing the difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first of two sorted source ranges to be united and sorted into a single range representing the difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>first2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range where the two source ranges are to be united into a single sorted range representing the difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true </legacyBold>when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the last element in the sorted destination range representing the difference of the two source ranges.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position must be reachable from the first by incrementation.</para>
                    <para>The destination range should not overlap either of the source ranges and should be large enough to contain the first source range.</para>
                    <para>The sorted source ranges must each be arranged as a precondition to the application of the <unmanagedCodeEntityReference>set_difference</unmanagedCodeEntityReference> algorithm in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges.</para>
                    <para>The operation is stable as the relative order of elements within each range is preserved in the destination range. The source ranges are not modified by the algorithm merge.</para>
                    <para>The value types of the input iterators need be less-than-comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. When there are equivalent elements in both source ranges, the elements in the first range precede the elements from the second source range in the destination range. If the source ranges contain duplicates of an element such that there are more in the first source range than in the second, then the destination range will contain the number by which the occurrences of those elements in the first source range exceed the occurrences of those elements in the second source range.</para>
                    <para>The complexity of the algorithm is linear with at most 2 * ( (                        <legacyItalic>last1 – first1</legacyItalic>) – (                        <legacyItalic>last2 – first2</legacyItalic>) ) – 1 comparisons for nonempty source ranges.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_set_diff.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 )
{
   if (elem1 &lt; 0) 
      elem1 = - elem1;
   if (elem2 &lt; 0) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1a, v1b, v1 ( 12 );
   vector &lt;int&gt;::iterator Iter1a,  Iter1b, Iter1, Result1;

   // Constructing vectors v1a &amp; v1b with default less-than ordering
   int i;
   for ( i = -1 ; i &lt;= 4 ; i++ )
   {
      v1a.push_back(  i );
   }

   int ii;
   for ( ii =-3 ; ii &lt;= 0 ; ii++ )
   {
      v1b.push_back(  ii  );
   }

   cout &lt;&lt; "Original vector v1a with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1a = ( " ;
   for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
      cout &lt;&lt; *Iter1a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v1b with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1b = ( " ;
   for ( Iter1b = v1b.begin ( ) ; Iter1b != v1b.end ( ) ; Iter1b++ )
      cout &lt;&lt; *Iter1b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   // Constructing vectors v2a &amp; v2b with ranges sorted by greater
   vector &lt;int&gt; v2a ( v1a ) , v2b ( v1b ) ,  v2 ( v1 );
   vector &lt;int&gt;::iterator Iter2a, Iter2b, Iter2, Result2;
   sort ( v2a.begin ( ) , v2a.end ( ) , greater&lt;int&gt; ( ) );
   sort ( v2b.begin ( ) , v2b.end ( ) , greater&lt;int&gt; ( ) );

   cout &lt;&lt; "Original vector v2a with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2a =  ( " ;
   for ( Iter2a = v2a.begin ( ) ; Iter2a != v2a.end ( ) ; Iter2a++ )
      cout &lt;&lt; *Iter2a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v2b with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2b =  ( " ;
   for ( Iter2b = v2b.begin ( ) ; Iter2b != v2b.end ( ) ; Iter2b++ )
      cout &lt;&lt; *Iter2b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Constructing vectors v3a &amp; v3b with ranges sorted by mod_lesser
   vector &lt;int&gt; v3a ( v1a ), v3b ( v1b ) ,  v3 ( v1 );
   vector &lt;int&gt;::iterator Iter3a,  Iter3b, Iter3, Result3;
   sort ( v3a.begin ( ) , v3a.end ( ) , mod_lesser );
   sort ( v3b.begin ( ) , v3b.end ( ) , mod_lesser  );

   cout &lt;&lt; "Original vector v3a with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is   v3a =  ( " ;
   for ( Iter3a = v3a.begin ( ) ; Iter3a != v3a.end ( ) ; Iter3a++ )
      cout &lt;&lt; *Iter3a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v3b with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is   v3b =  ( " ;
   for ( Iter3b = v3b.begin ( ) ; Iter3b != v3b.end ( ) ; Iter3b++ )
      cout &lt;&lt; *Iter3b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a difference in asscending
   // order with the default binary predicate less &lt;int&gt; ( )
   Result1 = set_difference ( v1a.begin ( ) , v1a.end ( ) ,
      v1b.begin ( ) , v1b.end ( ) , v1.begin ( ) );
   cout &lt;&lt; "Set_difference of source ranges with default order,"
        &lt;&lt; "\n vector v1mod =  ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a difference in descending
   // order specify binary predicate greater&lt;int&gt;( )
   Result2 = set_difference ( v2a.begin ( ) , v2a.end ( ) ,
      v2b.begin ( ) , v2b.end ( ) ,v2.begin ( ) , greater &lt;int&gt; ( ) );
   cout &lt;&lt; "Set_difference of source ranges with binary"
        &lt;&lt; "predicate greater specified,\n vector v2mod  = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a difference applying a user
   // defined binary predicate mod_lesser
   Result3 = set_difference (  v3a.begin ( ) , v3a.end ( ) ,
      v3b.begin ( ) , v3b.end ( ) , v3.begin ( ) , mod_lesser );
   cout &lt;&lt; "Set_difference of source ranges with binary "
        &lt;&lt; "predicate mod_lesser specified,\n vector v3mod  = ( " ; ;
   for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="set_intersection">
        <!--49835507-0d59-4ca3-bcdb-1de1ac4eac00-->
        <title>set_intersection</title>
        <content>
            <para>Unites all of the elements that belong to both sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator set_intersection(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   OutputIterator set_intersection(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first of two sorted source ranges to be united and sorted into a single range representing the intersection of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first of two sorted source ranges to be united and sorted into a single range representing the intersection of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the intersection of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the intersection of the two source ranges.</para>
                        </definition>
                        <definedTerm> <legacyBold>_</legacyBold>
                            <legacyItalic>Result</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range where the two source ranges are to be united into a single sorted range representing the intersection of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true</legacyBold> when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the last element in the sorted destination range representing the intersection of the two source ranges.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position must be reachable from the first by incrementation.</para>
                    <para>The destination range should not overlap either of the source ranges and should be large enough to contain the destination range.</para>
                    <para>The sorted source ranges must each be arranged as a precondition to the application of the merge algorithm in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges.</para>
                    <para>The operation is stable as the relative order of elements within each range is preserved in the destination range. The source ranges are not modified by the algorithm.</para>
                    <para>The value types of the input iterators need be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. When there are equivalent elements in both source ranges, the elements in the first range precede the elements from the second source range in the destination range. If the source ranges contain duplicates of an element, then the destination range will contain the maximum number of those elements that occur in both source ranges.</para>
                    <para>The complexity of the algorithm is linear with at most 2 * ( (                        <legacyItalic>_Last1 – _First1</legacyItalic>) + (                        <legacyItalic>_Last2 – _First2</legacyItalic>) ) – 1 comparisons for nonempty source ranges.</para>
                   
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_set_intersection.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;   // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 ) {
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
}

int main() {
   using namespace std;
   vector &lt;int&gt; v1a, v1b, v1 ( 12 );
   vector &lt;int&gt;::iterator Iter1a,  Iter1b, Iter1, Result1;

   // Constructing vectors v1a &amp; v1b with default less than ordering
   int i;
   for ( i = -1 ; i &lt;= 3 ; i++ )
      v1a.push_back( i );

   int ii;
   for ( ii =-3 ; ii &lt;= 1 ; ii++ )
      v1b.push_back( ii );

   cout &lt;&lt; "Original vector v1a with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1a = ( " ;
   for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
      cout &lt;&lt; *Iter1a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v1b with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1b = ( " ;
   for ( Iter1b = v1b.begin ( ) ; Iter1b != v1b.end ( ) ; Iter1b++ )
      cout &lt;&lt; *Iter1b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   // Constructing vectors v2a &amp; v2b with ranges sorted by greater
   vector &lt;int&gt; v2a ( v1a ) , v2b ( v1b ) , v2 ( v1 );
   vector &lt;int&gt;::iterator Iter2a, Iter2b, Iter2, Result2;
   sort ( v2a.begin ( ) , v2a.end ( ) , greater&lt;int&gt; ( ) );
   sort ( v2b.begin ( ) , v2b.end ( ) , greater&lt;int&gt; ( ) );

   cout &lt;&lt; "Original vector v2a with range sorted by the\n "
        &lt;&lt; "binary predicate greater is   v2a =  ( " ;
   for ( Iter2a = v2a.begin ( ) ; Iter2a != v2a.end ( ) ; Iter2a++ )
      cout &lt;&lt; *Iter2a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v2b with range sorted by the\n "
        &lt;&lt; "binary predicate greater is   v2b =  ( " ;
   for ( Iter2b = v2b.begin ( ) ; Iter2b != v2b.end ( ) ; Iter2b++ )
      cout &lt;&lt; *Iter2b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Constructing vectors v3a &amp; v3b with ranges sorted by mod_lesser
   vector &lt;int&gt; v3a ( v1a ), v3b ( v1b ) , v3 ( v1 );
   vector &lt;int&gt;::iterator Iter3a,  Iter3b, Iter3, Result3;
   sort ( v3a.begin ( ) , v3a.end ( ) , mod_lesser );
   sort ( v3b.begin ( ) , v3b.end ( ) , mod_lesser );

   cout &lt;&lt; "Original vector v3a with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is   v3a =  ( " ;
   for ( Iter3a = v3a.begin ( ) ; Iter3a != v3a.end ( ) ; Iter3a++ )
      cout &lt;&lt; *Iter3a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v3b with range sorted by the\n "
           &lt;&lt;  "binary predicate mod_lesser is   v3b =  ( " ;
   for ( Iter3b = v3b.begin ( ) ; Iter3b != v3b.end ( ) ; Iter3b++ )
      cout &lt;&lt; *Iter3b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into an intersection in asscending order with the
   // default binary predicate less &lt;int&gt; ( )
   Result1 = set_intersection ( v1a.begin ( ) , v1a.end ( ) ,
      v1b.begin ( ) , v1b.end ( ) , v1.begin ( ) );
   cout &lt;&lt; "Intersection of source ranges with default order,"
        &lt;&lt; "\n vector v1mod =  ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; ++Iter1 )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into an intersection in descending order, specify
   // binary predicate greater&lt;int&gt;( )
   Result2 = set_intersection ( v2a.begin ( ) , v2a.end ( ) ,
      v2b.begin ( ) , v2b.end ( ) ,v2.begin ( ) , greater &lt;int&gt; ( ) );
   cout &lt;&lt; "Intersection of source ranges with binary predicate"
        &lt;&lt; " greater specified,\n vector v2mod  = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; ++Iter2 )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into an intersection applying a user-defined
   // binary predicate mod_lesser
   Result3 = set_intersection ( v3a.begin ( ) , v3a.end ( ) ,
      v3b.begin ( ) , v3b.end ( ) , v3.begin ( ) , mod_lesser );
   cout &lt;&lt; "Intersection of source ranges with binary predicate "
        &lt;&lt; "mod_lesser specified,\n vector v3mod  = ( " ; ;
   for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; ++Iter3 )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="set_symmetric_difference">
        <!--39c673df-ea67-4336-a60e-8729e69e2ee4-->
        <title>set_symmetric_difference</title>
        <content>
            <para>Unites all of the elements that belong to one, but not both, of the sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator set_symmetric_difference(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   OutputIterator set_symmetric_difference(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first of two sorted source ranges to be united and sorted into a single range representing the symmetric difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first of two sorted source ranges to be united and sorted into a single range representing the symmetric difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the symmetric difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the symmetric difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <legacyBold>_</legacyBold>
                            <legacyItalic>Result</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range where the two source ranges are to be united into a single sorted range representing the symmetric difference of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true </legacyBold>when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the last element in the sorted destination range representing the symmetric difference of the two source ranges.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position must be reachable from the first by incrementation.</para>
                    <para>The destination range should not overlap either of the source ranges and should be large enough to contain the destination range.</para>
                    <para>The sorted source ranges must each be arranged as a precondition to the application of the <legacyBold>merge</legacyBold> algorithm in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges.</para>
                    <para>The operation is stable as the relative order of elements within each range is preserved in the destination range. The source ranges are not modified by the algorithm merge.</para>
                    <para>The value types of the input iterators need be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. When there are equivalent elements in both source ranges, the elements in the first range precede the elements from the second source range in the destination range. If the source ranges contain duplicates of an element, then the destination range will contain the absolute value of the number by which the occurrences of those elements in the one of the source ranges exceeds the occurrences of those elements in the second source range.</para>
                    <para>The complexity of the algorithm is linear with at most 2 * ( (                        <legacyItalic>_Last1 – _First1</legacyItalic>) – (                        <legacyItalic>_Last2 – _First2</legacyItalic>) ) – 1 comparisons for nonempty source ranges.</para>
                   
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_set_sym_diff.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser (int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1a, v1b, v1 ( 12 );
   vector &lt;int&gt;::iterator Iter1a,  Iter1b, Iter1, Result1;

   // Constructing vectors v1a &amp; v1b with default less-than ordering
   int i;
   for ( i = -1 ; i &lt;= 4 ; i++ )
   {
      v1a.push_back(  i );
   }

   int ii;
   for ( ii =-3 ; ii &lt;= 0 ; ii++ )
   {
      v1b.push_back(  ii  );
   }

   cout &lt;&lt; "Original vector v1a with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1a = ( " ;
   for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
      cout &lt;&lt; *Iter1a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v1b with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1b = ( " ;
   for ( Iter1b = v1b.begin ( ) ; Iter1b != v1b.end ( ) ; Iter1b++ )
      cout &lt;&lt; *Iter1b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   // Constructing vectors v2a &amp; v2b with ranges sorted by greater
   vector &lt;int&gt; v2a ( v1a ) , v2b ( v1b ) ,  v2 ( v1 );
   vector &lt;int&gt;::iterator Iter2a, Iter2b, Iter2, Result2;
   sort ( v2a.begin ( ) , v2a.end ( ) , greater&lt;int&gt; ( ) );
   sort ( v2b.begin ( ) , v2b.end ( ) , greater&lt;int&gt; ( ) );

   cout &lt;&lt; "Original vector v2a with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2a =  ( " ;
   for ( Iter2a = v2a.begin ( ) ; Iter2a != v2a.end ( ) ; Iter2a++ )
      cout &lt;&lt; *Iter2a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v2b with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2b =  ( " ;
   for ( Iter2b = v2b.begin ( ) ; Iter2b != v2b.end ( ) ; Iter2b++ )
      cout &lt;&lt; *Iter2b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Constructing vectors v3a &amp; v3b with ranges sorted by mod_lesser
   vector &lt;int&gt; v3a ( v1a ), v3b ( v1b ) ,  v3 ( v1 );
   vector &lt;int&gt;::iterator Iter3a, Iter3b, Iter3, Result3;
   sort ( v3a.begin ( ) , v3a.end ( ) , mod_lesser );
   sort ( v3b.begin ( ) , v3b.end ( ) , mod_lesser  );

   cout &lt;&lt; "Original vector v3a with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is   v3a =  ( " ;
   for ( Iter3a = v3a.begin ( ) ; Iter3a != v3a.end ( ) ; Iter3a++ )
      cout &lt;&lt; *Iter3a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v3b with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is   v3b =  ( " ;
   for ( Iter3b = v3b.begin ( ) ; Iter3b != v3b.end ( ) ; Iter3b++ )
      cout &lt;&lt; *Iter3b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a symmetric difference in ascending
   // order with the default binary predicate less &lt;int&gt; ( )
   Result1 = set_symmetric_difference ( v1a.begin ( ) , v1a.end ( ) ,
      v1b.begin ( ) , v1b.end ( ) , v1.begin ( ) );
   cout &lt;&lt; "Set_symmetric_difference of source ranges with default order,"
        &lt;&lt; "\n vector v1mod =  ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a symmetric difference in descending
   // order, specify binary predicate greater&lt;int&gt;( )
   Result2 = set_symmetric_difference ( v2a.begin ( ) , v2a.end ( ) ,
      v2b.begin ( ) , v2b.end ( ) ,v2.begin ( ) , greater &lt;int&gt; ( ) );
   cout &lt;&lt; "Set_symmetric_difference of source ranges with binary"
        &lt;&lt; "predicate greater specified,\n vector v2mod  = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a symmetric difference applying a user
   // defined binary predicate mod_lesser
   Result3 = set_symmetric_difference ( v3a.begin ( ) , v3a.end ( ) ,
      v3b.begin ( ) , v3b.end ( ) , v3.begin ( ) , mod_lesser );
   cout &lt;&lt; "Set_symmetric_difference of source ranges with binary "
        &lt;&lt; "predicate mod_lesser specified,\n vector v3mod  = ( " ; ;
   for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="set_union">
        <!--6b714f7b-8585-4a1c-9cfb-e10f02d6547a-->
        <title>set_union</title>
        <content>
            <para>Unites all of the elements that belong to at least one of two sorted source ranges into a single, sorted destination range, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator set_union(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   OutputIterator set_union(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_Last2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference>, <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first of two sorted source ranges to be united and sorted into a single range representing the union of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in the first of two sorted source ranges to be united and sorted into a single range representing the union of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the union of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the last element in second of two consecutive sorted source ranges to be united and sorted into a single range representing the union of the two source ranges.</para>
                        </definition>
                        <definedTerm> <legacyBold>_</legacyBold>
                            <legacyItalic>Result</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range where the two source ranges are to be united into a single sorted range representing the union of the two source ranges.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the sense in which one element is greater than another. The binary predicate takes two arguments and should return <legacyBold>true</legacyBold> when the first element is less than the second element and <legacyBold>false</legacyBold> otherwise. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the last element in the sorted destination range representing the union of the two source ranges.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position must be reachable from the first by incrementation.</para>
                    <para>The destination range should not overlap either of the source ranges and should be large enough to contain the destination range.</para>
                    <para>The sorted source ranges must each be arranged as a precondition to the application of the <legacyBold>merge</legacyBold> algorithm in accordance with the same ordering as is to be used by the algorithm to sort the combined ranges.</para>
                    <para>The operation is stable as the relative order of elements within each range is preserved in the destination range. The source ranges are not modified by the algorithm <legacyBold>merge</legacyBold>.</para>
                    <para>The value types of the input iterators need be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements. When there are equivalent elements in both source ranges, the elements in the first range precede the elements from the second source range in the destination range. If the source ranges contain duplicates of an element, then the destination range will contain the maximum number of those elements that occur in both source ranges.</para>
                    <para>The complexity of the algorithm is linear with at most 2 * ( (                        <legacyItalic>_Last1 – _First1</legacyItalic>) – (                        <legacyItalic>_Last2 – _First2</legacyItalic>) ) – 1 comparisons.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_set_union.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 &lt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1a, v1b, v1 ( 12 );
   vector &lt;int&gt;::iterator Iter1a, Iter1b, Iter1, Result1;

   // Constructing vectors v1a &amp; v1b with default less than ordering
   int i;
   for ( i = -1 ; i &lt;= 3 ; i++ )
   {
      v1a.push_back(  i );
   }

   int ii;
   for ( ii =-3 ; ii &lt;= 1 ; ii++ )
   {
      v1b.push_back(  ii  );
   }

   cout &lt;&lt; "Original vector v1a with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1a = ( " ;
   for ( Iter1a = v1a.begin( ) ; Iter1a != v1a.end( ) ; Iter1a++ )
      cout &lt;&lt; *Iter1a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v1b with range sorted by the\n "
        &lt;&lt;  "binary predicate less than is  v1b = ( " ;
   for ( Iter1b = v1b.begin ( ) ; Iter1b != v1b.end ( ) ; Iter1b++ )
      cout &lt;&lt; *Iter1b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
   
   // Constructing vectors v2a &amp; v2b with ranges sorted by greater
   vector &lt;int&gt; v2a ( v1a ) , v2b ( v1b ) , v2 ( v1 );
   vector &lt;int&gt;::iterator Iter2a,  Iter2b, Iter2, Result2;
   sort ( v2a.begin ( ) , v2a.end ( ) , greater&lt;int&gt; ( ) );
   sort ( v2b.begin ( ) , v2b.end ( ) , greater&lt;int&gt; ( ) );

   cout &lt;&lt; "Original vector v2a with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2a =  ( " ;
   for ( Iter2a = v2a.begin ( ) ; Iter2a != v2a.end ( ) ; Iter2a++ )
      cout &lt;&lt; *Iter2a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v2b with range sorted by the\n "
        &lt;&lt;  "binary predicate greater is   v2b =  ( " ;
   for ( Iter2b = v2b.begin ( ) ; Iter2b != v2b.end ( ) ; Iter2b++ )
      cout &lt;&lt; *Iter2b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Constructing vectors v3a &amp; v3b with ranges sorted by mod_lesser
   vector &lt;int&gt; v3a ( v1a ), v3b ( v1b ) ,  v3 ( v1 );
   vector &lt;int&gt;::iterator Iter3a, Iter3b, Iter3, Result3;
   sort ( v3a.begin ( ) , v3a.end ( ) , mod_lesser );
   sort ( v3b.begin ( ) , v3b.end ( ) , mod_lesser  );

   cout &lt;&lt; "Original vector v3a with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is   v3a =  ( " ;
   for ( Iter3a = v3a.begin ( ) ; Iter3a != v3a.end ( ) ; Iter3a++ )
      cout &lt;&lt; *Iter3a &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Original vector v3b with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is   v3b =  ( " ;
   for ( Iter3b = v3b.begin ( ) ; Iter3b != v3b.end ( ) ; Iter3b++ )
      cout &lt;&lt; *Iter3b &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a union in ascending order with the default 
    // binary predicate less &lt;int&gt; ( )
   Result1 = set_union ( v1a.begin ( ) , v1a.end ( ) ,
      v1b.begin ( ) , v1b.end ( ) , v1.begin ( ) );
   cout &lt;&lt; "Union of source ranges with default order,"
        &lt;&lt; "\n vector v1mod =  ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != Result1 ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a union in descending order, specify binary 
   // predicate greater&lt;int&gt;( )
   Result2 = set_union (  v2a.begin ( ) , v2a.end ( ) ,
      v2b.begin ( ) , v2b.end ( ) ,v2.begin ( ) , greater &lt;int&gt; ( ) );
   cout &lt;&lt; "Union of source ranges with binary predicate greater "
        &lt;&lt; "specified,\n vector v2mod  = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != Result2 ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // To combine into a union applying a user-defined
   // binary predicate mod_lesser
   Result3 = set_union ( v3a.begin ( ) , v3a.end ( ) ,
      v3b.begin ( ) , v3b.end ( ) , v3.begin ( ) , mod_lesser );
   cout &lt;&lt; "Union of source ranges with binary predicate "
        &lt;&lt; "mod_lesser specified,\n vector v3mod  = ( " ; ;
   for ( Iter3 = v3.begin( ) ; Iter3 != Result3 ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="std__shuffle">
        <!--ef345cd0-ef35-4019-9340-7d062fcd2eab-->
        <title>std::shuffle</title>
        <content>
            <para>Shuffles (rearranges) elements for a given range by using a random number generator.</para>
            <legacySyntax language="vb">template&lt;class RandomAccessIterator, class UniformRandomNumberGenerator&gt;
void shuffle(RandomAccessIterator first,
    RandomAccessIterator last,
    UniformRandomNumberGenerator&amp;&amp; gen);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An iterator to the first element in the range to be shuffled, inclusive. Must meet the requirements of <unmanagedCodeEntityReference>RandomAccessIterator</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ValueSwappable</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An iterator to the last element in the range to be shuffled, exclusive. Must meet the requirements of <unmanagedCodeEntityReference>RandomAccessIterator</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ValueSwappable</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>gen</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The random number generator that the <languageKeyword>shuffle()</languageKeyword> function will use for the operation. Must meet the requirements of a <unmanagedCodeEntityReference>UniformRandomNumberGenerator</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, and a code sample that uses <languageKeyword>shuffle()</languageKeyword>, see <link xlink:href="60afc25c-b162-4811-97c1-1b65398d4c57">&lt;random&gt;</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="sort">
        <!--9b0a4fc1-5131-4c73-9c2e-d72211f2d0ae-->
        <title>sort</title>
        <content>
            <para>Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate.</para>
            <legacySyntax>template&lt;class RandomAccessIterator&gt;
   void sort(
      RandomAccessIterator <parameterReference>first</parameterReference>, 
      RandomAccessIterator <parameterReference>last</parameterReference>
   );
template&lt;class RandomAccessIterator, class Predicate&gt;
   void sort(
      RandomAccessIterator <parameterReference>first</parameterReference>, 
      RandomAccessIterator <parameterReference>last,</parameterReference> 
      Predicate <parameterReference>comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position of the first element in the range to be sorted.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the range to be sorted.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. This binary predicate takes two arguments and returns <languageKeyword>true</languageKeyword> if the two arguments are in order and <languageKeyword>false</languageKeyword> otherwise. This comparator function must impose a strict weak ordering on pairs of elements from the sequence. For more information, see <link xlink:href="dec9b373-7d5c-46cc-b7d2-21a938ecd0a6">Algorithms</link>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>Elements are equivalent, but not necessarily equal, if neither is less than the other. The <unmanagedCodeEntityReference>sort</unmanagedCodeEntityReference> algorithm is not stable and so does not guarantee that the relative ordering of equivalent elements will be preserved. The algorithm <unmanagedCodeEntityReference>stable_sort</unmanagedCodeEntityReference> does preserve this original ordering.</para>
                    <para>The average of a sort complexity is                         <legacyItalic>O</legacyItalic>(                        <legacyItalic>N</legacyItalic> log                         <legacyItalic>N</legacyItalic>), where                         <legacyItalic>N</legacyItalic> =                         <legacyItalic>last – first</legacyItalic>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_sort.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether first element is greater than the second
bool UDgreater ( int elem1, int elem2 )
{
   return elem1 &gt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 2 * i );
   }

   int ii;
   for ( ii = 0 ; ii &lt;= 5 ; ii++ )
   {
      v1.push_back( 2 * ii + 1 );
   }

   cout &lt;&lt; "Original vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   sort( v1.begin( ), v1.end( ) );
   cout &lt;&lt; "Sorted vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To sort in descending order. specify binary predicate
   sort( v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "Resorted (greater) vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // A user-defined (UD) binary predicate can also be used
   sort( v1.begin( ), v1.end( ), UDgreater );
   cout &lt;&lt; "Resorted (UDgreater) vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Original vector v1 = ( 0 2 4 6 8 10 1 3 5 7 9 11 )
Sorted vector v1 = ( 0 1 2 3 4 5 6 7 8 9 10 11 )
Resorted (greater) vector v1 = ( 11 10 9 8 7 6 5 4 3 2 1 0 )
Resorted (UDgreater) vector v1 = ( 11 10 9 8 7 6 5 4 3 2 1 0 )</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="sort_heap">
        <!--4a16b2ef-a1b4-4c80-823b-3e4bf06b2481-->
        <title>sort_heap</title>
        <content>
            <para>Converts a heap into a sorted range.</para>
            <legacySyntax>template&lt;class RandomAccessIterator&gt;
   void sort_heap(
      RandomAccessIterator <parameterReference>_First</parameterReference>, 
      RandomAccessIterator <parameterReference>_Last</parameterReference>
   );
template&lt;class RandomAccessIterator, class Predicate&gt;
   void sort_heap(
      RandomAccessIterator <parameterReference>_First</parameterReference>, 
      RandomAccessIterator <parameterReference>_Last</parameterReference>,
      Predicate <parameterReference>_Comp</parameterReference>
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
                            <para>A random-access iterator addressing the position of the first element in the target heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A random-access iterator addressing the position one past the final element in the target heap.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true </legacyBold>when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Heaps have two properties:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>The first element is always the largest.</para>
                        </listItem>
                        <listItem>
                            <para>Elements may be added or removed in logarithmic time.</para>
                        </listItem>
                    </list>
                    <para>After the application if this algorithm, the range it was applied to is no longer a heap.</para>
                    <para>This is not a stable sort because the relative order of equivalent elements is not necessarily preserved.</para>
                    <para>Heaps are an ideal way to implement priority queues and they are used in the implementation of the Standard Template Library container adaptor <legacyLink xlink:href="69fca9cc-a449-4be4-97b7-02ca5db9cbb2">priority_queue Class</legacyLink>.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>The complexity is at most                         <legacyItalic>N</legacyItalic> log                         <legacyItalic>N</legacyItalic>, where                         <legacyItalic>N</legacyItalic> = (                        <legacyItalic>_Last – _First</legacyItalic>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_sort_heap.cpp
// compile with: /EHsc
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;
#include &lt;string&gt;
#include &lt;vector&gt;
using namespace std;

void print(const string&amp; s, const vector&lt;int&gt;&amp; v) {
    cout &lt;&lt; s &lt;&lt; ": ( ";

    for (auto i = v.begin(); i != v.end(); ++i) {
        cout &lt;&lt; *i &lt;&lt; " ";
    }

    cout &lt;&lt; ")" &lt;&lt; endl;
}

int main() {
    vector&lt;int&gt; v;
    for (int i = 1; i &lt;= 9; ++i) {
        v.push_back(i);
    }
    print("Initially", v);

    random_shuffle(v.begin(), v.end());
    print("After random_shuffle", v);

    make_heap(v.begin(), v.end());
    print("     After make_heap", v);

    sort_heap(v.begin(), v.end());
    print("     After sort_heap", v);

    random_shuffle(v.begin(), v.end());
    print("             After random_shuffle", v);

    make_heap(v.begin(), v.end(), greater&lt;int&gt;());
    print("After make_heap with greater&lt;int&gt;", v);

    sort_heap(v.begin(), v.end(), greater&lt;int&gt;());
    print("After sort_heap with greater&lt;int&gt;", v);
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="stable_partition">
        <!--224e97bf-b752-4c10-aa8c-95031dd535de-->
        <title>stable_partition</title>
        <content>
            <para>Classifies elements in a range into two disjoint sets, with those elements satisfying a unary predicate preceding those that fail to satisfy it, preserving the relative order of equivalent elements.</para>
            <legacySyntax> <legacyBold>template&lt;class BidirectionalIterator, class Predicate&gt;</legacyBold> <legacyBold>   BidirectionalIterator stable_partition(</legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      Predicate </legacyBold> <parameterReference>_Pred</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A bidirectional iterator addressing the position of the first element in the range to be partitioned.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position one past the final element in the range to be partitioned.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Pred</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if an element is to be classified. A predicate takes single argument and returns <legacyBold>true</legacyBold> or <legacyBold>false</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A bidirectional iterator addressing the position of the first element in the range to not satisfy the predicate condition.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>Elements                         <legacyItalic>a</legacyItalic> and                         <legacyItalic>b</legacyItalic> are equivalent, but not necessarily equal, if both                         <legacyItalic>Pr</legacyItalic> (                        <legacyItalic>a</legacyItalic>,                         <legacyItalic>b</legacyItalic>) is false and                         <legacyItalic>Pr</legacyItalic> (                        <legacyItalic>b</legacyItalic>,                         <legacyItalic>a</legacyItalic>) if false, where                         <legacyItalic>Pr</legacyItalic> is the parameter-specified predicate. The <legacyBold>stable_ partition</legacyBold> algorithm is stable and guarantees that the relative ordering of equivalent elements will be preserved. The algorithm <legacyBold>partition</legacyBold> does not necessarily preserve this original ordering.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_stable_partition.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

bool greater5 ( int value ) {
   return value &gt;5;
}

int main( ) {
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2, result;

   int i;
   for ( i = 0 ; i &lt;= 10 ; i++ )
      v1.push_back( i );

   int ii;
   for ( ii = 0 ; ii &lt;= 4 ; ii++ )
      v1.push_back( 5 );

   random_shuffle(v1.begin( ), v1.end( ) );

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Partition the range with predicate greater10
   result = stable_partition (v1.begin( ), v1.end( ), greater5 );
   cout &lt;&lt; "The partitioned set of elements in v1 is:\n ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "The first element in v1 to fail to satisfy the"
        &lt;&lt; "\n predicate greater5 is: " &lt;&lt; *result &lt;&lt; "." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="stable_sort">
        <!--5af850b2-7556-42a9-be78-0ba2557fe7f7-->
        <title>stable_sort</title>
        <content>
            <para>Arranges the elements in a specified range into a nondescending order or according to an ordering criterion specified by a binary predicate and preserves the relative ordering of equivalent elements.</para>
            <legacySyntax> <legacyBold>template&lt;class BidirectionalIterator&gt;</legacyBold> <legacyBold>   void stable_sort(</legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class BidirectionalIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   void stable_sort(</legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      BidirectionalIterator </legacyBold> <parameterReference>_Last,</parameterReference> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp</parameterReference> <legacyBold>   );</legacyBold>
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
                            <para>A bidirectional iterator addressing the position of the first element in the range to be sorted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bidirectional iterator addressing the position one past the final element in the range to be sorted.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the comparison criterion to be satisfied by successive elements in the ordering. A binary predicate takes two arguments and returns <legacyBold>true</legacyBold> when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation.</para>
                    <para>Elements are equivalent, but not necessarily equal, if neither is less than the other. The <legacyBold>sort</legacyBold> algorithm is stable and guarantees that the relative ordering of equivalent elements will be preserved.</para>
                    <para>The run-time complexity of <unmanagedCodeEntityReference>stable_sort</unmanagedCodeEntityReference> depends on the amount of memory available, but the best case (given sufficient memory) is                         <legacyItalic>O</legacyItalic>(                        <legacyItalic>N</legacyItalic> log                         <legacyItalic>N</legacyItalic>) and the worst case is                         <legacyItalic>O</legacyItalic>(                         <legacyItalic>N</legacyItalic> ( log                         <legacyItalic>N </legacyItalic>)2 ), where                         <legacyItalic>N</legacyItalic> =                         <legacyItalic>_Last – First.</legacyItalic> Usually, the <legacyBold>sort</legacyBold> algorithm is significantly faster than <unmanagedCodeEntityReference>stable_sort</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_stable_sort.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // For greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether first element is greater than the second
bool UDgreater (int elem1, int elem2 )
{
   return elem1 &gt; elem2;
}

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator Iter1;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 2 * i );
   }

   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( 2 * i  );
   }

   cout &lt;&lt; "Original vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   stable_sort(v1.begin( ), v1.end( ) );
   cout &lt;&lt; "Sorted vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // To sort in descending order, specify binary predicate
   stable_sort(v1.begin( ), v1.end( ), greater&lt;int&gt;( ) );
   cout &lt;&lt; "Resorted (greater) vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;

   // A user-defined (UD) binary predicate can also be used
   stable_sort(v1.begin( ), v1.end( ), UDgreater );
   cout &lt;&lt; "Resorted (UDgreater) vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")" &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Original vector v1 = ( 0 2 4 6 8 10 0 2 4 6 8 10 )
Sorted vector v1 = ( 0 0 2 2 4 4 6 6 8 8 10 10 )
Resorted (greater) vector v1 = ( 10 10 8 8 6 6 4 4 2 2 0 0 )
Resorted (UDgreater) vector v1 = ( 10 10 8 8 6 6 4 4 2 2 0 0 )</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="swap">
        <!--b471a2de-035e-4aff-b1c7-345d85d93972-->
        <title>swap</title>
        <content>
            <para>The first override exchanges the values of two objects. The second override exchanges the values between two arrays of objects.</para>
            <legacySyntax>template&lt;class Type&gt;
   void swap(
      Type&amp; <parameterReference>_Left</parameterReference>, 
      Type&amp; <parameterReference>_Right</parameterReference>
   );
template&lt;class Type, size_t N&gt;
   void swap(
      Type (&amp; <parameterReference>_Left</parameterReference>)[N],
      Type (&amp; <parameterReference>_Right</parameterReference>)[N]
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Left</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>For the first override, the first object to have its contents exchanged. For the second override, the first array of objects to have its contents exchanged.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Right</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>For the first override, the second object to have its contents exchanged. For the second override, the second array of objects to have its contents exchanged.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first overload is designed to operate on individual objects. The second overload swaps the contents of objects between two arrays.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_swap.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   vector &lt;int&gt; v1, v2;
   vector &lt;int&gt;::iterator Iter1, Iter2, result;

   for ( int i = 0 ; i &lt;= 10 ; i++ )
   {
      v1.push_back( i );
   }

   for ( int ii = 0 ; ii &lt;= 4 ; ii++ )
   {
      v2.push_back( 5 );
   }

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 is ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   swap( v1, v2 );

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Vector v2 is ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 is ( 0 1 2 3 4 5 6 7 8 9 10 ).
Vector v2 is ( 5 5 5 5 5 ).
Vector v1 is ( 5 5 5 5 5 ).
Vector v2 is ( 0 1 2 3 4 5 6 7 8 9 10 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="swap_ranges">
        <!--6dbc8367-d97b-4a25-978d-7f94eb465cbc-->
        <title>swap_ranges</title>
        <content>
            <para>Exchanges the elements of one range with the elements of another, equal sized range.</para>
            <legacySyntax> <legacyBold>template&lt;class ForwardIterator1, class ForwardIterator2&gt;</legacyBold> <legacyBold>   ForwardIterator2 swap_ranges(</legacyBold> <legacyBold>      ForwardIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      ForwardIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      ForwardIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator pointing to the first position of the first range whose elements are to be exchanged.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator pointing to one past the final position of the first range whose elements are to be exchanged.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator pointing to the first position of the second range whose elements are to be exchanged.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator pointing to one past the final position of the second range whose elements are to be exchanged.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position is reachable from the first by incrementation. The second range has to be as large as the first range.</para>
                    <para>The complexity is linear with <parameterReference>_Last1</parameterReference> – <parameterReference>_First1</parameterReference> swaps performed. If elements from containers of the same type are being swapped, them the <unmanagedCodeEntityReference>swap</unmanagedCodeEntityReference> member function from that container should be used, because the member function typically has constant complexity.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_swap_ranges.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;deque&gt;
#include &lt;algorithm&gt;
#include &lt;iostream&gt;

int main( ) 
{
   using namespace std;
   vector &lt;int&gt; v1;
   deque &lt;int&gt; d1;
   vector &lt;int&gt;::iterator v1Iter1;
   deque&lt;int&gt;::iterator d1Iter1;

   int i;
   for ( i = 0 ; i &lt;= 5 ; i++ )
   {
      v1.push_back( i );
   }

   int ii;
   for ( ii =4 ; ii &lt;= 9 ; ii++ )
   {
      d1.push_back( 6 );
   }

   cout &lt;&lt; "Vector v1 is ( " ;
   for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
      cout &lt;&lt; *v1Iter1  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "Deque d1 is  ( " ;
   for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
      cout &lt;&lt; *d1Iter1  &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   swap_ranges ( v1.begin ( ) , v1.end ( ) , d1.begin ( ) );

   cout &lt;&lt; "After the swap_range, vector v1 is ( " ;
   for ( v1Iter1 = v1.begin( ) ; v1Iter1 != v1.end( ) ;v1Iter1 ++ )
      cout &lt;&lt; *v1Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   cout &lt;&lt; "After the swap_range deque d1 is   ( " ;
   for ( d1Iter1 = d1.begin( ) ; d1Iter1 != d1.end( ) ;d1Iter1 ++ )
      cout &lt;&lt; *d1Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 is ( 0 1 2 3 4 5 ).
Deque d1 is  ( 6 6 6 6 6 6 ).
After the swap_range, vector v1 is ( 6 6 6 6 6 6 ).
After the swap_range deque d1 is   ( 0 1 2 3 4 5 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="transform">
        <!--99396865-54fb-47dd-a661-38ce03467854-->
        <title>transform</title>
        <content>
            <para>Applies a specified function object to each element in a source range or to a pair of elements from two source ranges and copies the return values of the function object into a destination range.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class OutputIterator, class UnaryFunction&gt;</legacyBold> <legacyBold>   OutputIterator transform(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      UnaryFunction </legacyBold> <parameterReference>_Func</parameterReference> <legacyBold>);</legacyBold> <legacyBold>template&lt;class InputIterator1, class InputIterator2, class OutputIterator,</legacyBold> <legacyBold>   class BinaryFunction&gt;</legacyBold> <legacyBold>   OutputIterator transform(</legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_First1</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator1 </legacyBold> <parameterReference>_Last1</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      InputIterator2 </legacyBold> <parameterReference>_First2</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      BinaryFunction </legacyBold> <parameterReference>_Func</parameterReference> <legacyBold>   );</legacyBold>
            </legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_First1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the first source range to be operated on.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position one past the final element in the first source range operated on.</para>
                        </definition>
                        <definedTerm> <parameterReference>_First2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An input iterator addressing the position of the first element in the second source range to be operated on.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Func</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined unary function object used in the first version of the algorithm that is applied to each element in the first source range or A user-defined (UD) binary function object used in the second version of the algorithm that is applied pairwise, in a forward order, to the two source ranges.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the final element in the destination range that is receiving the output elements transformed by the function object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and within each sequence the last position must be reachable from the first by incrementation. The destination range must be large enough to contain the transformed source range.</para>
                    <para>If <parameterReference>_Result</parameterReference> is set equal to <parameterReference>_First1</parameterReference> in the first version of the algorithm <legacyItalic>, </legacyItalic>then the source and destination ranges will be the same and the sequence will be modified in place. But the <parameterReference>_Result</parameterReference> may not address a position within the range [ <parameterReference>_First1</parameterReference> +1, <parameterReference>_Last1</parameterReference>).</para>
                    <para>The complexity is linear with at most ( <parameterReference>_Last1</parameterReference> – <parameterReference>_First1</parameterReference>) comparisons.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_transform.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;

// The function object multiplies an element by a Factor
template &lt;class Type&gt;
class MultValue
{
   private:
      Type Factor;   // The value to multiply by
   public:
      // Constructor initializes the value to multiply by
      MultValue ( const Type&amp; _Val ) : Factor ( _Val ) {
      }

      // The function call for the element to be multiplied
      Type operator ( ) ( Type&amp; elem ) const 
      {
         return elem * Factor;
      }
};

int main( )
{
   using namespace std;
   vector &lt;int&gt; v1, v2 ( 7 ), v3 ( 7 );
   vector &lt;int&gt;::iterator Iter1, Iter2 , Iter3;

   // Constructing vector v1
   int i;
   for ( i = -4 ; i &lt;= 2 ; i++ )
   {
      v1.push_back(  i );
   }

   cout &lt;&lt; "Original vector  v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Modifying the vector v1 in place
   transform (v1.begin ( ) , v1.end ( ) , v1.begin ( ) , MultValue&lt;int&gt; ( 2 ) );
   cout &lt;&lt; "The elements of the vector v1 multiplied by 2 in place gives:"
        &lt;&lt; "\n v1mod = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout &lt;&lt; *Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Using transform to multiply each element by a factor of 5
   transform ( v1.begin ( ) , v1.end ( ) , v2.begin ( ) , MultValue&lt;int&gt; ( 5 ) );
   
   cout &lt;&lt; "Multiplying the elements of the vector v1mod\n "
        &lt;&lt;  "by the factor 5 &amp; copying to v2 gives:\n v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout &lt;&lt; *Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // The second version of transform used to multiply the 
   // elements of the vectors v1mod &amp; v2 pairwise
   transform ( v1.begin ( ) , v1.end ( ) ,  v2.begin ( ) , v3.begin ( ) , 
      multiplies &lt;int&gt; ( ) );
   
   cout &lt;&lt; "Multiplying elements of the vectors v1mod and v2 pairwise "
        &lt;&lt;  "gives:\n v3 = ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout &lt;&lt; *Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Original vector  v1 = ( -4 -3 -2 -1 0 1 2 ).
The elements of the vector v1 multiplied by 2 in place gives:
 v1mod = ( -8 -6 -4 -2 0 2 4 ).
Multiplying the elements of the vector v1mod
 by the factor 5 &amp; copying to v2 gives:
 v2 = ( -40 -30 -20 -10 0 10 20 ).
Multiplying elements of the vectors v1mod and v2 pairwise gives:
 v3 = ( 320 180 80 20 0 20 80 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="unique">
        <!--a9615038-2b77-43bf-876b-9f79be88eff0-->
        <title>unique</title>
        <content>
            <para>Removes duplicate elements that are adjacent to each other in a specified range.</para>
            <legacySyntax>template&lt;class ForwardIterator&gt;
   ForwardIterator unique(
      ForwardIterator <parameterReference>_First</parameterReference>, 
      ForwardIterator <parameterReference>_Last</parameterReference>
   );
template&lt;class ForwardIterator, class Predicate&gt;
   ForwardIterator unique(
      ForwardIterator <parameterReference>_First</parameterReference>, 
      ForwardIterator <parameterReference>_Last</parameterReference>,
      Predicate <parameterReference>_Comp</parameterReference>
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
                            <para>A forward iterator addressing the position of the first element in the range to be scanned for duplicate removal.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the range to be scanned for duplicate removal.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <legacyBold>true</legacyBold> when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator to the new end of the modified sequence that contains no consecutive duplicates, addressing the position one past the last element not removed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Both forms of the algorithm remove the second duplicate of a consecutive pair of equal elements.</para>
                    <para>The operation of the algorithm is stable so that the relative order of the undeleted elements is not changed.</para>
                    <para>The range referenced must be valid; all pointers must be dereferenceable and within the sequence the last position is reachable from the first by incrementation. he number of elements in the sequence is not changed by the algorithm <legacyBold>unique</legacyBold> and the elements beyond the end of the modified sequence are dereferenceable but not specified.</para>
                    <para>The complexity is linear, requiring ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) – 1 comparisons.</para>
                    <para>List provides a more efficient member function <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd#list__unique">unique</legacyLink>, which may perform better.</para>
                    <para>These algorithms cannot be used on an associative container.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_unique.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;

// Return whether modulus of elem1 is equal to modulus of elem2
bool mod_equal ( int elem1, int elem2 )
{
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 == elem2;
};

int main( )
{
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator v1_Iter1, v1_Iter2, v1_Iter3,
         v1_NewEnd1, v1_NewEnd2, v1_NewEnd3;

   int i;
   for ( i = 0 ; i &lt;= 3 ; i++ )
   {
      v1.push_back( 5 );
      v1.push_back( -5 );
   }

   int ii;
   for ( ii = 0 ; ii &lt;= 3 ; ii++ )
   {
      v1.push_back( 4 );
   }
   v1.push_back( 7 );
   
   cout &lt;&lt; "Vector v1 is ( " ;
   for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1.end( ) ; v1_Iter1++ )
      cout &lt;&lt; *v1_Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove consecutive duplicates
   v1_NewEnd1 = unique ( v1.begin ( ) , v1.end ( ) );

   cout &lt;&lt; "Removing adjacent duplicates from vector v1 gives\n ( " ;
   for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1_NewEnd1 ; v1_Iter1++ )
      cout &lt;&lt; *v1_Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove consecutive duplicates under the binary prediate mod_equals
   v1_NewEnd2 = unique ( v1.begin ( ) , v1_NewEnd1 , mod_equal );

   cout &lt;&lt; "Removing adjacent duplicates from vector v1 under the\n "
        &lt;&lt; " binary predicate mod_equal gives\n ( " ;
   for ( v1_Iter2 = v1.begin( ) ; v1_Iter2 != v1_NewEnd2 ; v1_Iter2++ )
      cout &lt;&lt; *v1_Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Remove elements if preceded by an element that was greater
   v1_NewEnd3 = unique ( v1.begin ( ) , v1_NewEnd2, greater&lt;int&gt;( ) );

   cout &lt;&lt; "Removing adjacent elements satisfying the binary\n "
        &lt;&lt; " predicate mod_equal from vector v1 gives ( " ;
   for ( v1_Iter3 = v1.begin( ) ; v1_Iter3 != v1_NewEnd3 ; v1_Iter3++ )
      cout &lt;&lt; *v1_Iter3 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                    <!--SnipComment-->
                            <computerOutput>Vector v1 is ( 5 -5 5 -5 5 -5 5 -5 4 4 4 4 7 ).
Removing adjacent duplicates from vector v1 gives
 ( 5 -5 5 -5 5 -5 5 -5 4 7 ).
Removing adjacent duplicates from vector v1 under the
  binary predicate mod_equal gives
 ( 5 4 7 ).
Removing adjacent elements satisfying the binary
  predicate mod_equal from vector v1 gives ( 5 7 ).</computerOutput>
                        <!--EndSnipComment-->
                </content>
            </section>
        </sections>
    </section>
    <section address="unique_copy">
        <!--cdbc77b9-81d8-4453-88f5-e701b6dae02d-->
        <title>unique_copy</title>
        <content>
            <para>Copies elements from a source range into a destination range except for the duplicate elements that are adjacent to each other.</para>
            <legacySyntax> <legacyBold>template&lt;class InputIterator, class OutputIterator&gt;</legacyBold> <legacyBold>   OutputIterator unique_copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>   );</legacyBold> <legacyBold>template&lt;class InputIterator, class OutputIterator, class BinaryPredicate&gt;</legacyBold> <legacyBold>   OutputIterator unique_copy(</legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_First</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      InputIterator </legacyBold> <parameterReference>_Last</parameterReference> <legacyBold>, </legacyBold> <legacyBold>      OutputIterator </legacyBold> <parameterReference>_Result</parameterReference> <legacyBold>,</legacyBold> <legacyBold>      BinaryPredicate </legacyBold> <parameterReference>_Comp,</parameterReference> <legacyBold>);</legacyBold>
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
                            <para>A forward iterator addressing the position of the first element in the source range to be copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A forward iterator addressing the position one past the final element in the source range to be copied.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Result</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An output iterator addressing the position of the first element in the destination range that is receiving the copy with consecutive duplicates removed.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines the condition to be satisfied if two elements are to be taken as equivalent. A binary predicate takes two arguments and returns <legacyBold>true</legacyBold> when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An output iterator addressing the position one past the final element in the destination range that is receiving the copy with consecutive duplicates removed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Both forms of the algorithm remove the second duplicate of a consecutive pair of equal elements.</para>
                    <para>The operation of the algorithm is stable so that the relative order of the undeleted elements is not changed.</para>
                    <para>The ranges referenced must be valid; all pointers must be dereferenceable and within a sequence the last position is reachable from the first by incrementation.</para>
                    <para>The complexity is linear, requiring ( <parameterReference>_Last</parameterReference> – <parameterReference>_First</parameterReference>) comparisons.</para>
                    
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code>// alg_unique_copy.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;
#include &lt;iostream&gt;
#include &lt;ostream&gt;

using namespace std;

// Return whether modulus of elem1 is equal to modulus of elem2
bool mod_equal ( int elem1, int elem2 ) {
   if ( elem1 &lt; 0 ) 
      elem1 = - elem1;
   if ( elem2 &lt; 0 ) 
      elem2 = - elem2;
   return elem1 == elem2;
};

int main() {
   vector &lt;int&gt; v1;
   vector &lt;int&gt;::iterator v1_Iter1, v1_Iter2,
         v1_NewEnd1, v1_NewEnd2;

   int i;
   for ( i = 0 ; i &lt;= 1 ; i++ ) {
      v1.push_back( 5 );
      v1.push_back( -5 );
   }

   int ii;
   for ( ii = 0 ; ii &lt;= 2 ; ii++ )
      v1.push_back( 4 );
   v1.push_back( 7 );

   int iii;
   for ( iii = 0 ; iii &lt;= 5 ; iii++ )
      v1.push_back( 10 );
   
   cout &lt;&lt; "Vector v1 is\n ( " ;
   for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1.end( ) ; v1_Iter1++ )
      cout &lt;&lt; *v1_Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   // Copy first half to second, removing consecutive duplicates
   v1_NewEnd1 = unique_copy ( v1.begin ( ) , v1.begin ( ) + 8, v1.begin ( ) + 8 );

   cout &lt;&lt; "Copying the first half of the vector to the second half\n "
        &lt;&lt; "while removing adjacent duplicates gives\n ( " ;
   for ( v1_Iter1 = v1.begin( ) ; v1_Iter1 != v1_NewEnd1 ; v1_Iter1++ )
      cout &lt;&lt; *v1_Iter1 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;

   int iv;
   for ( iv = 0 ; iv &lt;= 7 ; iv++ )
      v1.push_back( 10 );

   // Remove consecutive duplicates under the binary prediate mod_equals
   v1_NewEnd2 = unique_copy ( v1.begin ( ) , v1.begin ( ) + 14, 
      v1.begin ( ) + 14 , mod_equal );

   cout &lt;&lt; "Copying the first half of the vector to the second half\n "
        &lt;&lt; " removing adjacent duplicates under mod_equals gives\n ( " ;
   for ( v1_Iter2 = v1.begin( ) ; v1_Iter2 != v1_NewEnd2 ; v1_Iter2++ )
      cout &lt;&lt; *v1_Iter2 &lt;&lt; " ";
   cout &lt;&lt; ")." &lt;&lt; endl;
}</code>
                </content>
            </section>
        </sections>
    </section>
    <section address="upper_bound">
        <!--dc465786-0704-42b4-af2a-3fabc917c928-->
        <title>upper_bound</title>
        <content>
            <para>Finds the position of the first element in an ordered range that has a value that is greater than a specified value, where the ordering criterion may be specified by a binary predicate.</para>
            <legacySyntax>template&lt;class ForwardIterator, class Type&gt;
   ForwardIterator upper_bound(
      ForwardIterator <parameterReference>first</parameterReference>, 
      ForwardIterator <parameterReference>last</parameterReference>,
      const Type&amp; <parameterReference>value</parameterReference>
   );
template&lt;class ForwardIterator, class Type, class Predicate&gt;
   ForwardIterator upper_bound(
      ForwardIterator <parameterReference>first</parameterReference>, 
      ForwardIterator <parameterReference>last</parameterReference>,
      const Type&amp; <parameterReference>value</parameterReference>,
      Predicate <parameterReference>comp</parameterReference>
   );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>first</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The position of the first element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>last</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The position one past the final element in the range to be searched.</para>
                        </definition>
                        <definedTerm> <parameterReference>value</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value in the ordered range that needs to be exceeded by the value of the element addressed by the iterator returned.</para>
                        </definition>
                        <definedTerm> <parameterReference>comp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>User-defined predicate function object that defines sense in which one element is less than another. A binary predicate takes two arguments and returns <legacyBold>true</legacyBold> when satisfied and <legacyBold>false</legacyBold> when not satisfied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A forward iterator to the position of the first element that has a value greater than a specified value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The sorted source range referenced must be valid; all iterators must be dereferenceable and within the sequence the last position must be reachable from the first by incrementation.</para>
                    <para>A sorted range is a precondition of the use of <unmanagedCodeEntityReference>upper_bound</unmanagedCodeEntityReference> and where the ordering criterion is the same as specified by the binary predicate.</para>
                    <para>The range is not modified by <unmanagedCodeEntityReference>upper_bound</unmanagedCodeEntityReference>.</para>
                    <para>The value types of the forward iterators need be less-than comparable to be ordered, so that, given two elements, it may be determined either that they are equivalent (in the sense that neither is less than the other) or that one is less than the other. This results in an ordering between the nonequivalent elements</para>
                    <para>The complexity of the algorithm is logarithmic for random-access iterators and linear otherwise, with the number of steps proportional to ( <parameterReference>last - first</parameterReference>).</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <code language="cpp">// alg_upper_bound.cpp
// compile with: /EHsc
#include &lt;vector&gt;
#include &lt;algorithm&gt;
#include &lt;functional&gt;      // greater&lt;int&gt;( )
#include &lt;iostream&gt;

// Return whether modulus of elem1 is less than modulus of elem2
bool mod_lesser( int elem1, int elem2 )
{
    if ( elem1 &lt; 0 )
        elem1 = - elem1;
    if ( elem2 &lt; 0 )
        elem2 = - elem2;
    return elem1 &lt; elem2;
}

int main( )
{
    using namespace std;

    vector&lt;int&gt; v1;
    // Constructing vector v1 with default less-than ordering
    for ( auto i = -1 ; i &lt;= 4 ; ++i )
    {
        v1.push_back(  i );
    }

    for ( auto ii =-3 ; ii &lt;= 0 ; ++ii )
    {
        v1.push_back(  ii  );
    }

    cout &lt;&lt; "Starting vector v1 = ( " ;
    for (const auto &amp;Iter : v1)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    sort(v1.begin(), v1.end());
    cout &lt;&lt; "Original vector v1 with range sorted by the\n "
        &lt;&lt; "binary predicate less than is v1 = ( " ;
    for (const auto &amp;Iter : v1)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    // Constructing vector v2 with range sorted by greater
    vector&lt;int&gt; v2(v1);

    sort(v2.begin(), v2.end(), greater&lt;int&gt;());

    cout &lt;&lt; "Original vector v2 with range sorted by the\n "
        &lt;&lt; "binary predicate greater is v2 = ( " ;
    for (const auto &amp;Iter : v2)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    // Constructing vectors v3 with range sorted by mod_lesser
    vector&lt;int&gt; v3(v1);
    sort(v3.begin(), v3.end(), mod_lesser);

    cout &lt;&lt; "Original vector v3 with range sorted by the\n "
        &lt;&lt;  "binary predicate mod_lesser is v3 = ( " ;
    for (const auto &amp;Iter : v3)
        cout &lt;&lt; Iter &lt;&lt; " ";
    cout &lt;&lt; ")." &lt;&lt; endl;

    // Demonstrate upper_bound

    vector&lt;int&gt;::iterator Result;

    // upper_bound of 3 in v1 with default binary predicate less&lt;int&gt;()
    Result = upper_bound(v1.begin(), v1.end(), 3);
    cout &lt;&lt; "The upper_bound in v1 for the element with a value of 3 is: "
        &lt;&lt; *Result &lt;&lt; "." &lt;&lt; endl;

    // upper_bound of 3 in v2 with the binary predicate greater&lt;int&gt;( )
    Result = upper_bound(v2.begin(), v2.end(), 3, greater&lt;int&gt;());
    cout &lt;&lt; "The upper_bound in v2 for the element with a value of 3 is: "
        &lt;&lt; *Result &lt;&lt; "." &lt;&lt; endl;

    // upper_bound of 3 in v3 with the binary predicate  mod_lesser
    Result = upper_bound(v3.begin(), v3.end(), 3,  mod_lesser);
    cout &lt;&lt; "The upper_bound in v3 for the element with a value of 3 is: "
        &lt;&lt; *Result &lt;&lt; "." &lt;&lt; endl;
}
</code>
                    <!--pass2snip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="19f97711-7a67-4a65-8fd1-9a2bd3ca327d">&amp;lt;algorithm&amp;gt;</link>
    </relatedTopics>
</developerConceptualDocument>



