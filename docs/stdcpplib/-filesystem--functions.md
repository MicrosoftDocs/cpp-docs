---
title: "&lt;filesystem&gt; functions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "FILESYSTEM/std::experimental::filesystem::v1::absolute"
  - "std::experimental::filesystem::v1::absolute"
  - "FILESYSTEM/std::experimental::filesystem::v1::canonical"
  - "std::experimental::filesystem::v1::canonical"
  - "FILESYSTEM/std::experimental::filesystem::v1::copy"
  - "std::experimental::filesystem::v1::copy"
  - "FILESYSTEM/std::experimental::filesystem::v1::copy_file"
  - "std::experimental::filesystem::v1::copy_file"
  - "FILESYSTEM/std::experimental::filesystem::v1::copy_symlink"
  - "std::experimental::filesystem::v1::copy_symlink"
  - "FILESYSTEM/std::experimental::filesystem::v1::create_directories"
  - "std::experimental::filesystem::v1::create_directories"
  - "FILESYSTEM/std::experimental::filesystem::v1::create_directory"
  - "std::experimental::filesystem::v1::create_directory"
  - "FILESYSTEM/std::experimental::filesystem::v1::create_directory_symlink"
  - "std::experimental::filesystem::v1::create_directory_symlink"
  - "FILESYSTEM/std::experimental::filesystem::v1::create_hard_link"
  - "std::experimental::filesystem::v1::create_hard_link"
  - "FILESYSTEM/std::experimental::filesystem::v1::create_symlink"
  - "std::experimental::filesystem::v1::create_symlink"
  - "FILESYSTEM/std::experimental::filesystem::v1::current_path"
  - "std::experimental::filesystem::v1::current_path"
  - "FILESYSTEM/std::experimental::filesystem::v1::equivalent"
  - "std::experimental::filesystem::v1::equivalent"
  - "FILESYSTEM/std::experimental::filesystem::v1::exists"
  - "std::experimental::filesystem::v1::exists"
  - "FILESYSTEM/std::experimental::filesystem::v1::file_size"
  - "std::experimental::filesystem::v1::file_size"
  - "FILESYSTEM/std::experimental::filesystem::v1::hard_link_count"
  - "std::experimental::filesystem::v1::hard_link_count"
  - "FILESYSTEM/std::experimental::filesystem::v1::hash_value"
  - "std::experimental::filesystem::v1::hash_value"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_block_file"
  - "std::experimental::filesystem::v1::is_block_file"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_character_file"
  - "std::experimental::filesystem::v1::is_character_file"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_directory"
  - "std::experimental::filesystem::v1::is_directory"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_empty"
  - "std::experimental::filesystem::v1::is_empty"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_fifo"
  - "std::experimental::filesystem::v1::is_fifo"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_other"
  - "std::experimental::filesystem::v1::is_other"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_regular_file"
  - "std::experimental::filesystem::v1::is_regular_file"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_socket"
  - "std::experimental::filesystem::v1::is_socket"
  - "FILESYSTEM/std::experimental::filesystem::v1::is_symlink"
  - "std::experimental::filesystem::v1::is_symlink"
  - "FILESYSTEM/std::experimental::filesystem::v1::last_write_time"
  - "std::experimental::filesystem::v1::last_write_time"
  - "FILESYSTEM/std::experimental::filesystem::v1::permissions"
  - "std::experimental::filesystem::v1::permissions"
  - "FILESYSTEM/std::experimental::filesystem::v1::read_symlink"
  - "std::experimental::filesystem::v1::read_symlink"
  - "FILESYSTEM/std::experimental::filesystem::v1::remove"
  - "std::experimental::filesystem::v1::remove"
  - "FILESYSTEM/std::experimental::filesystem::v1::remove_all"
  - "std::experimental::filesystem::v1::remove_all"
  - "FILESYSTEM/std::experimental::filesystem::v1::rename"
  - "std::experimental::filesystem::v1::rename"
  - "FILESYSTEM/std::experimental::filesystem::v1::resize_file"
  - "std::experimental::filesystem::v1::resize_file"
  - "FILESYSTEM/std::experimental::filesystem::v1::space"
  - "std::experimental::filesystem::v1::space"
  - "FILESYSTEM/std::experimental::filesystem::v1::status"
  - "std::experimental::filesystem::v1::status"
  - "FILESYSTEM/std::experimental::filesystem::v1::status_known"
  - "std::experimental::filesystem::v1::status_known"
  - "FILESYSTEM/std::experimental::filesystem::v1::swap"
  - "std::experimental::filesystem::v1::swap"
  - "FILESYSTEM/std::experimental::filesystem::v1::symlink_status"
  - "std::experimental::filesystem::v1::symlink_status"
  - "FILESYSTEM/std::experimental::filesystem::v1::system_complete"
  - "std::experimental::filesystem::v1::system_complete"
  - "FILESYSTEM/std::experimental::filesystem::v1::temp_directory_path"
  - "std::experimental::filesystem::v1::temp_directory_path"
  - "FILESYSTEM/std::experimental::filesystem::v1::u8path"
  - "std::experimental::filesystem::v1::u8path"
dev_langs: 
  - "C++"
ms.assetid: be3cb821-4728-4d47-ab78-858fa8aa5045
caps.latest.revision: 12
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
# &lt;filesystem&gt; functions
These free functions in the [\<filesystem>](../stdcpplib/-filesystem-.md) header perform modifying and query operations on paths, files, symlinks, directories and volumes. For more information and code examples, see [File System Navigation (C++)](../stdcpplib/file-system-navigation.md).  
  
## absolute  
  
```  
path absolute(const path& pval, const path& base = current_path());  
  
```  
  
 The function returns the absolute pathname corresponding to `pval` relative to the pathname `base`:  
  
1.  If pval.has_root_name() && pval.has_root_directory() the function returns pval.  
  
2.  If pval.has_root_name() && !pval.has_root_directory() the function returns pval.root_name() / absolute(base).root_directory() / absolute(base).relative_path() / pval.relative_path().  
  
3.  If !pval.has_root_name() && pval.has_root_directory() the function returns absolute(base).root_name() / pval.  
  
4.  If !pval.has_root_name() && !pval.has_root_directory() the function returns absolute(base) / pval.  
  
## begin  
  
```  
const directory_iterator& begin(const directory_iterator& iter) noexcept;  
const recursive_directory_iterator&  
    begin(const recursive_directory_iterator& iter) noexcept;  
  
```  
  
 Both functions return `iter`.  
  
## canonical  
  
```  
path canonical(const path& pval, const path& base = current_path());  
path canonical(const path& pval,  
    error_code& ec);  
path canonical(const path& pval, const path& base,  
    error_code& ec);  
```  
  
 The functions all form an absolute pathname pabs = absolute(pval, base) (or pabs = absolute(pval) for the overload with no base parameter), then reduce it to a canonical form in the following sequence of steps:  
  
1.  Every path component X for which is_symlink(X) is true is replaced by read_symlink(X).  
  
2.  Every path component . (dot is the current directory established by previous path components) is removed.  
  
3.  Every pair of path components X/.. (dot-dot is the parent directory established by previous path components) is removed.  
  
 The function then returns pabs.  
  
## copy  
  
```  
void copy(const path& from, const path& to);  
void copy(const path& from, const path& to,  
    error_code& ec) noexcept;  
void copy(const path& from, const path& to, copy_options opts);  
void copy(const path& from, const path& to, copy_options opts,  
    error_code& ec) noexcept;  
```  
  
 The functions all possibly copy or link one or more files at `from` to `to` under control of `opts`, which is taken as copy_options::none for the overloads with no `opts` parameter. `opts` shall contain at most one of:  
  
-   skip_existing, overwrite_existing, or update_existing  
  
-   copy_symlinks or skip_symlinks  
  
-   directories_only, create_symlinks, or create_hard_links  
  
 The functions first determine the file_status values f for `from` and t for `to`:  
  
-   if opts & (copy_options::create_symlinks &#124; copy_options::skip_symlinks), by calling symlink_status  
  
-   otherwise, by calling status  
  
-   Otherwise report an error.  
  
 If !exists(f) &#124;&#124; equivalent(f, t) &#124;&#124; is_other(f) &#124;&#124; is_other(t) &#124;&#124; is_directory(f)&& is_regular_file(t), they then report an error (and do nothing else).  
  
 Otherwise, if is_symlink(f) then:  
  
-   If options & copy_options::skip_symlinks then do nothing.  
  
-   Otherwise, if !exists(t)&& options & copy_options::copy_symlinks then copy_symlink(from, to, opts).  
  
-   Otherwise report an error.  
  
 Otherwise, if is_regular_file(f) then:  
  
-   If opts & copy_options::directories_only then do nothing.  
  
-   Otherwise, if opts & copy_options::create_symlinks then create_symlink(to, from).  
  
-   Otherwise, if opts & copy_options::create_hard_links then create_hard_link(to, from).  
  
-   Otherwise, if is_directory(f) then copy_file(from, to / from.filename(), opts).  
  
-   Otherwise, copy_file(from, to, opts).  
  
 Otherwise, if is_directory(f) && (opts & copy_options::recursive &#124;&#124; !opts) then:  
  
-   ```  
    if (!exists(t))  
        {  // copy directory contents recursively  
        create_directory(to, from, ec);  
        for (directory_iterator next(from), end;  
            ec == error_code() && next != end; ++next)  
            copy(next->path(),  
                to / next->path().filename(), opts, ec);  
        }  
<CodeContentPlaceHolder>4</CodeContentPlaceHolder>bool copy_file(const path& from, const path& to);  
bool copy_file(const path& from, const path& to,  
    error_code& ec) noexcept;  
bool copy_file(const path& from, const path& to, copy_options opts);  
bool copy_file(const path& from, const path& to, copy_options opts,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>5</CodeContentPlaceHolder>void copy_symlink(const path& from, const path& to);  
void copy_symlink(const path& from, const path& to,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>6</CodeContentPlaceHolder>bool create_directories(const path& pval);  
bool create_directories(const path& pval,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>7</CodeContentPlaceHolder>bool create_directory(const path& pval);  
bool create_directory(const path& pval,  
    error_code& ec) noexcept;  
bool create_directory(const path& pval, const path& attr);  
bool create_directory(const path& pval, const path& attr,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>8</CodeContentPlaceHolder>void create_directory_symlink(const path& to, const path& link);  
void create_directory_symlink(const path& to, const path& link),  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>9</CodeContentPlaceHolder>void create_hard_link(const path& to, const path& link);  
void create_hard_link(const path& to, const path& link),  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>10</CodeContentPlaceHolder>void create_symlink(const path& to, const path& link);  
void create_symlink(const path& to, const path& link),  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>11</CodeContentPlaceHolder>path current_path();  
path current_path(  
    error_code& ec);  
void current_path(const path& pval);  
void current_path(const path& pval,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>12</CodeContentPlaceHolder>directory_iterator& end(const directory_iterator& iter) noexcept;  
recursive_directory_iterator&  
    end(const recursive_directory_iterator& iter) noexcept;  
<CodeContentPlaceHolder>13</CodeContentPlaceHolder>bool equivalent(const path& left, const path& right);  
bool equivalent(const path& left, const path& right,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>14</CodeContentPlaceHolder>bool exists(file_status stat) noexcept;  
bool exists(const path& pval);  
bool exists(const path& pval,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>15</CodeContentPlaceHolder>uintmax_t file_size(const path& pval);  
uintmax_t file_size(const path& pval,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>16</CodeContentPlaceHolder>uintmax_t hard_link_count(const path& pval);  
uintmax_t hard_link_count(const path& pval,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>17</CodeContentPlaceHolder>size_t hash_value(const path& pval) noexcept;  
<CodeContentPlaceHolder>18</CodeContentPlaceHolder>bool is_block_file(file_status stat) noexcept;  
bool is_block_file(const path& pval);  
bool is_block_file(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>19</CodeContentPlaceHolder>  
bool is_character_file(file_status stat) noexcept;  
bool is_character_file(const path& pval);  
bool is_character_file(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>20</CodeContentPlaceHolder>  
bool is_directory(file_status stat) noexcept;  
bool is_directory(const path& pval);  
bool is_directory(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>21</CodeContentPlaceHolder>  
bool is_empty(file_status stat) noexcept;  
bool is_empty(const path& pval);  
bool is_empty(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>22</CodeContentPlaceHolder>bool is_fifo(file_status stat) noexcept;  
bool is_fifo(const path& pval);  
bool is_fifo(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>23</CodeContentPlaceHolder>bool is_other(file_status stat) noexcept;  
bool is_other(const path& pval);  
bool is_other(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>24</CodeContentPlaceHolder>  
bool is_regular_file(file_status stat) noexcept;  
bool is_regular_file(const path& pval);  
bool is_regular_file(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>25</CodeContentPlaceHolder>  
bool is_socket(file_status stat) noexcept;  
bool is_socket(const path& pval);  
bool is_socket(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>26</CodeContentPlaceHolder>  
bool is_symlink(file_status stat) noexcept;  
bool is_symlink(const path& pval);  
bool is_symlink(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>27</CodeContentPlaceHolder>  
file_time_type last_write_time(const path& pval);  
file_time_type last_write_time(const path& pval,  
    error_code& ec) noexcept;  
void last_write_time(const path& pval, file_time_type new_time);  
void last_write_time(const path& pval, file_time_type new_time,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>28</CodeContentPlaceHolder>void permissions(const path& pval, perms mask);  
void permissions(const path& pval, perms mask,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>29</CodeContentPlaceHolder>path read_symlink(const path& pval);  
path read_symlink(const path& pval.  
    error_code& ec);  
<CodeContentPlaceHolder>30</CodeContentPlaceHolder>bool remove(const path& pval);  
bool remove(const path& pval,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>31</CodeContentPlaceHolder>uintmax_t remove_all(const path& pval);  
uintmax_t remove_all(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>32</CodeContentPlaceHolder>void rename(const path& from, const path& to);  
void rename(const path& from, const path& to,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>33</CodeContentPlaceHolder>void resize(const path& pval, uintmax_t size);  
void resize(const path& pval, uintmax_t size,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>34</CodeContentPlaceHolder>space_info space(const path& pval);  
space_info space(const path& pval,  
    error_code& ec) noexcept;  
<CodeContentPlaceHolder>35</CodeContentPlaceHolder>file_status status(const path& pval);  
file_status status(const path& pval,  
    error_code& ec) noexcept;  
  
<CodeContentPlaceHolder>36</CodeContentPlaceHolder>bool status_known(file_status stat) noexcept;  
<CodeContentPlaceHolder>37</CodeContentPlaceHolder>void swap(path& left, path& right) noexcept;  
  
<CodeContentPlaceHolder>38</CodeContentPlaceHolder>file_status symlink_status(const path& pval);  
file_status symlink_status(const path& pval,  
    erroxr_code& ec) noexcept;  
  
<CodeContentPlaceHolder>39</CodeContentPlaceHolder>path system_complete(const path& pval);  
path system_complete(const path& pval,  
    error_code& ec);  
  
<CodeContentPlaceHolder>40</CodeContentPlaceHolder>path temp_directory_path();  
path temp_directory_path(  
    error_code& ec);  
  
<CodeContentPlaceHolder>41</CodeContentPlaceHolder>template<class Source>  
    path u8path(const Source& source);  
template<class InIt>  
    path u8path(InIt first, InIt last);  
  
```  
  
 The first function behaves the same as path(source) and the second function behaves the same as path(first, last) except that the designated source in each case is taken as a sequence of char elements encoded as UTF-8, regardless of the filesystem.