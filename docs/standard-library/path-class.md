---
title: "path Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "filesystem/std::experimental::filesystem::path"
dev_langs: 
  - "C++"
ms.assetid: 8a1227ca-aeb2-4e0e-84aa-86e34e4f4fe8
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# path Class
The **path** class stores an object of type string_type, called myname here for the purposes of exposition, suitable for use as a pathname. string_type is a synonym for basic_string<value_type>, where value_type is a synonym for char under Windows or wchar_t under Posix.  
  
 For more information, and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).  
  
## Syntax  
  
```  
class path;  
```  
  
## path::append  
  
```  
template <class Source>  
path& append(const Source& source);

template <class InIt>  
path& append(InIt first, InIt last);
```  
  
 The member functions append the specified sequence to mypath, converted and inserting a preferred_separator as needed.  
  
## path::assign  
  
```  
template <class Source>  
path& assign(const Source& source);

template <class InIt>  
path& assign(InIt first, InIt last);
```  
  
 The member functions replace mypath with the specified sequence, converted as needed.  
  
## path::begin  
  
```  
iterator begin() const;
```  
  
 Returns a path::iterator designating the first path element in the pathname, if present.  
  
## path::c_str  
  
```  
const value_type& *c_str() const noexcept;  
```  
  
 Returns a pointer to the first character in mypath.  
  
## path::clear  
  
```  
void clear() noexcept;  
```  
  
 The member function executes mypath.clear()  
  
## path::compare  
  
```  
int compare(const path& pval) const noexcept;  
int compare(const string_type& str) const;

 
int compare(const value_type *ptr) const;
```  
  
 The first function returns mypath.compare(pval.native()). The second function returns mypath.compare(str). The third function returns mypath.compare(ptr).  
  
## path::concat  
  
```  
template <class Source>  
path& concat(const Source& source);

template <class InIt>  
path& concat(InIt first, InIt last);
```  
  
 The member functions append the specified sequence to mypath, converted (but not inserting a separator) as needed.  
  
## path::const_iterator  
  
```  
typedef iterator const_iterator;  
```  
  
 The type is a synonym for iterator.  
  
## path::empty  
  
```  
bool empty() const noexcept;  
```  
  
 Returns mypath.empty().  
  
## path::end  
  
```  
iterator end() const;
```  
  
 Returns an end-of-sequence iterator of type iterator.  
  
## path::extension  
  
```  
path extension() const;
```  
  
 Returns the suffix of filename() X such that:  
  
 If X == path(".") &#124;&#124; X == path("..") or if X contains no dot, the suffix is empty.  
  
 Otherwise, the suffix begins with (and includes) the rightmost dot.  
  
## path::filename  
  
```  
path filename() const;
```  
  
 Returns the root directory component of myname, specifically `empty()  path() : *--end()`. The component may be empty.  
  
## path::generic_string  
  
```  
template <class Elem,  
    class Traits = char_traits<Elem>,  
    class Alloc = allocator<Elem>>  
basic_string<Elem, Traits, Alloc>  
    generic_string(const Alloc& al = Alloc()) const;

 
string generic_string() const;
```  
  
 Returns `this->string<Elem, Traits, Alloc>(_Al)` with (under Windows) any backslash converted to a forward slash.  
  
## path::generic_u16string  
  
```  
u16string generic_u16string() const;
```  
  
 Returns u16string() with (under Windows) any backslash converted to a forward slash.  
  
## path::generic_u32string  
  
```  
u32string generic_u32string() const;
```  
  
 Returns u32string() with (under Windows) any backslash converted to a forward slash.  
  
## path::generic_u8string  
  
```  
string generic_u8string() const;
```  
  
 Returns u8string() with (under Windows) any backslash converted to a forward slash.  
  
## path::generic_wstring  
  
```  
wstring generic_wstring() const;
```  
  
 Returns wstring() with (under Windows) any backslash converted to a forward slash.  
  
## path::has_extension  
  
```  
bool has_extension() const;
```  
  
 Returns !extension().empty().  
  
## path::has_filename  
  
```  
bool has_filename() const;
```  
  
 Returns !filename().empty().  
  
## path::has_parent_path  
  
```  
 
bool has_parent_path() const;
```  
  
 Returns !parent_path().empty().  
  
## path::has_relative_path  
  
```  
bool has_relative_path() const;
```  
  
 Returns !relative_path().empty().  
  
## path::has_root_directory  
  
```  
bool has_root_directory() const;
```  
  
 Returns !root_directory().empty().  
  
## path::has_root_name  
  
```  
bool has_root_name() const;
```  
  
 Returns !root_name().empty().  
  
## path::has_root_path  
  
```  
bool has_root_path() const;
```  
  
 Returns !root_path().empty().  
  
## path::has_stem  
  
```  
bool has_stem() const;
```  
  
 Returns !stem().empty().  
  
## path::is_absolute  
  
```  
bool is_absolute() const;
```  
  
 For Windows, the function returns has_root_name() && has_root_directory(). For Posix, the function returns has_root_directory().  
  
## path::is_relative  
  
```  
bool is_relative() const;
```  
  
 Returns !is_absolute().  
  
## path::iterator  
  
class iterator  
   {// bidirectional iterator for path  
   typedef bidirectional_iterator_tag iterator_category;  
   typedef path_type value_type;  
   typedef ptrdiff_t difference_type;  
   typedef const value_type *pointer;  
   typedef const value_type& reference;  
   .....  
   };  
  
 The class describes a bidirectional constant iterator that designates the path components of myname in the sequence:  
  
1.  the root name, if present  
  
2.  the root directory, if present  
  
3.  the remaining directory elements of the parent path, if present, ending withthe filename, if present  
  
4.  
  
5.  
  
 For pval an object of type path:  
  
1.  path::iterator X = pval.begin() designates the first path element in the pathname, if present.  
  
2.  X == pval.end() is true when X points just past the end of the sequence of components.  
  
3. *X returns a string that matches the current component  
  
4.  ++X designates the next component in the sequence, if present.  
  
5.  --X designates the preceding component in the sequence, if present.  
  
6.  Altering myname invalidates all iterators designating elements in myname.  
  
## path::make_preferred  
  
```  
path& make_preferred();
```  
  
 The member function converts each separator to a preferred_separator as needed.  
  
## path::native  
  
```  
const string_type& native() const noexcept;  
```  
  
 Returns myname.  
  
## path::operator=  
  
```  
path& operator=(const path& right);

path& operator=(path&& right) noexcept;  
template <class Source>  
path& operator=(const Source& source);
```  
  
 The first member operator copies right.myname to myname. The second member operator moves right.myname to myname. The third member operator behaves the same as *this = path(source).  
  
## path::operator+=  
  
```  
path& operator+=(const path& right);

path& operator+=(const string_type& str);

path& operator+=(const value_type *ptr);

path& operator+=(value_type elem);

template <class Source>  
path& operator+=(const Source& source);

template <class Elem>  
path& operator+=(Elem elem);
```  
  
 The member functions behave the same as the following corresponding expressions:  
  
1.  concat(right);  
  
2.  concat(path(str));  
  
3.  concat(ptr);  
  
4.  concat(string_type(1, elem));  
  
5.  concat(source);  
  
6.  concat(path(basic_string\<Elem>(1, elem)));  
  
## path::operator/=  
  
```  
path& operator/=(const path& right);

template <class Source>  
path& operator/=(const Source& source);
```  
  
 The member functions behave the same as the following corresponding expressions:  
  
1.  append(right);  
  
2.  append(source);  
  
## path::operator string_type  
  
```  operator string_type() const;
```  
  
 The member operator returns myname.  
  
## path::parent_path  
  
```  
path parent_path() const;
```  
  
 Returns the parent path component of myname, specifically the prefix of myname after removing filename().native() and any immediately preceding directory separators. (Equally, if begin() != end(), it is the combining of all elements in the range [begin(), --end()) by successively applying operator/=.) The component may be empty.  
  
## path::path  
  
```  
path();

path(const path& right);

path(path&& right) noexcept;  
template <class Source>  
path(const Source& source);

template <class Source>  
path(const Source& source, const locale& loc);

template <class InIt>  
path(InIt first, InIt last);

template <class InIt>  
path(InIt first, InIt last, const locale& loc);
```  
  
 The constructors all construct myname in various ways:  
  
 For path() it is myname().  
  
 For path(const path& right) it is myname(right.myname).  
  
 For path(path&& right) it is myname(right.myname).  
  
 For template\<class Source> path(const Source& source) it is myname(source).  
  
 For template\<class Source> path(const Source& source, const locale& loc) it is myname(source), obtaining any needed codecvt facets from loc.  
  
 For template\<class InIt> path(InIt first, InIt last) it is myname(first, last).  
  
 For template\<class InIt> path(InIt first, InIt last, const locale& loc) it is myname(first, last), obtaining any needed codecvt facets from loc.  
  
## path::preferred_separator  
  
```  
#if _WIN32_C_LIB  
static constexpr value_type preferred_separator == L'\\';  
#else // assume Posix  
static constexpr value_type preferred_separator == '/';  
#endif // filesystem model now defined  
```  
  
 The constant object gives the preferred character for separating path components, depending on the host operating system. Note that it is equally permissible in most contexts under Windows to use L'/' in its place.  
  
## path::relative_path  
  
```  
path relative_path() const;
```  
  
 Returns the relative path component of myname, specifically the suffix of myname after removing root_path().native() and any immediately subsequent redundant directory separators. The component may be empty.  
  
## path::remove_filename  
  
```  
path& remove_filename();
```  
  
## path::replace_extension  
  
```  
path& replace_extension(const path& newext = path());
```  
  
 The member function first removes the suffix extension().native() from myname. Then if !newext.empty() && newext[0] != dot (where dot is *path(".").c_str()), then dot is appended to myname. Then newext is appended to myname.  
  
## path::replace_filename  
  
```  
 
path& replace_filename(const path& pval);
```  
  
 The member function executes:  
  
```  
remove_filename();

*this /= pval;  
return (*this);
```  
  
## path::root_directory  
  
```  
path root_directory() const;
```  
  
 Returns the root directory component of myname. The component may be empty.  
  
## path::root_name  
  
```  
path root_name() const;
```  
  
 Returns the root name component of myname. The component may be empty.  
  
## path::root_path  
  
```  
 
path root_path() const;
```  
  
 Returns the root path component of myname, specifically root_name() / root_directory. The component may be empty.  
  
## path::stem  
  
```  
 
path stem() const;
```  
  
 Returns the stem component of myname, specifically filename().native() with any trailing extension().native() removed. The component may be empty.  
  
## path::string  
  
```  
template <class Elem, class Traits = char_traits<Elem>, class Alloc = allocator<Elem>>  
basic_string<Elem, Traits, Alloc> string(const Alloc& al = Alloc()) const; 
string string() const;
```  
  
 The first (template) member function converts the sequence stored in mypath the same way as:  
  
1.  string() for string\<char, Traits, Alloc>()  
  
2.  wstring() for string\<wchar_t, Traits, Alloc>()  
  
3.  u16string() for string\<char16_t, Traits, Alloc>()  
  
4.  u32string() for string\<char32_t, Traits, Alloc>()  
  
 The second member function converts the sequence stored in mypath to the encoding favored by the host system for a char sequence and returns it stored in an object of type string.  
  
## path::string_type  
  
```  
typedef basic_string<value_type> string_type;  
```  
  
 The type is a synonym for basic_string<value_type>.  
  
## path::swap  
  
```  
void swap(path& right) noexcept;  
```  
  
 Executes swap(mypath, right.mypath).  
  
## path::u16string  
  
```  
u16string u16string() const;
```  
  
 The member function converts the sequence stored in mypath to UTF-16 and returns it stored in an object of type u16string.  
  
## path::u32string  
  
```  
u32string u32string() const;
```  
  
 The member function converts the sequence stored in mypath to UTF-32 and returns it stored in an object of type u32string.  
  
## path::u8string  
  
```  
string u8string() const;
```  
  
 The member function converts the sequence stored in mypath to UTF-8 and returns it stored in an object of type u8string.  
  
## path::value_type  
  
```  
 
#if _WIN32_C_LIB  
typedef wchar_t value_type;  
#else // assume Posix  
typedef char value_type;  
#endif // filesystem model now defined  
```  
  
 The type describes the path elements favored by the host operating system.  
  
## path::wstring  
  
```  
wstring wstring() const;
```  
  
 Converts the sequence stored in mypath to the encoding favored by the host system for a wchar_t sequence and returns it stored in an object of type wstring.  
  
## Requirements  
 **Header:** filesystem  
  
 **Namespace:** std::experimental::filesystem
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)

