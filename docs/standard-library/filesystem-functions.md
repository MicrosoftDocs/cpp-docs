---
description: "Learn more about: &lt;filesystem&gt; functions"
title: "&lt;filesystem&gt; functions"
ms.date: "03/27/2019"
f1_keywords: ["FILESYSTEM/std::experimental::filesystem::absolute", "FILESYSTEM/std::experimental::filesystem::canonical", "FILESYSTEM/std::experimental::filesystem::copy", "FILESYSTEM/std::experimental::filesystem::copy_file", "FILESYSTEM/std::experimental::filesystem::copy_symlink", "FILESYSTEM/std::experimental::filesystem::create_directories", "FILESYSTEM/std::experimental::filesystem::create_directory", "FILESYSTEM/std::experimental::filesystem::create_directory_symlink", "FILESYSTEM/std::experimental::filesystem::create_hard_link", "FILESYSTEM/std::experimental::filesystem::create_symlink", "FILESYSTEM/std::experimental::filesystem::current_path", "FILESYSTEM/std::experimental::filesystem::equivalent", "FILESYSTEM/std::experimental::filesystem::exists", "FILESYSTEM/std::experimental::filesystem::file_size", "FILESYSTEM/std::experimental::filesystem::hard_link_count", "FILESYSTEM/std::experimental::filesystem::hash_value", "FILESYSTEM/std::experimental::filesystem::is_block_file", "FILESYSTEM/std::experimental::filesystem::is_character_file", "FILESYSTEM/std::experimental::filesystem::is_directory", "FILESYSTEM/std::experimental::filesystem::is_empty", "FILESYSTEM/std::experimental::filesystem::is_fifo", "FILESYSTEM/std::experimental::filesystem::is_other", "FILESYSTEM/std::experimental::filesystem::is_regular_file", "FILESYSTEM/std::experimental::filesystem::is_socket", "FILESYSTEM/std::experimental::filesystem::is_symlink", "FILESYSTEM/std::experimental::filesystem::last_write_time", "FILESYSTEM/std::experimental::filesystem::permissions", "FILESYSTEM/std::experimental::filesystem::read_symlink", "FILESYSTEM/std::experimental::filesystem::remove", "FILESYSTEM/std::experimental::filesystem::remove_all", "FILESYSTEM/std::experimental::filesystem::rename", "FILESYSTEM/std::experimental::filesystem::resize_file", "FILESYSTEM/std::experimental::filesystem::space", "FILESYSTEM/std::experimental::filesystem::status", "FILESYSTEM/std::experimental::filesystem::status_known", "FILESYSTEM/std::experimental::filesystem::swap", "FILESYSTEM/std::experimental::filesystem::symlink_status", "FILESYSTEM/std::experimental::filesystem::system_complete", "FILESYSTEM/std::experimental::filesystem::temp_directory_path", "FILESYSTEM/std::experimental::filesystem::u8path"]
ms.assetid: be3cb821-4728-4d47-ab78-858fa8aa5045
helpviewer_keywords: ["std::experimental::filesystem::absolute", "std::experimental::filesystem::canonical", "std::experimental::filesystem::copy", "std::experimental::filesystem::copy_file", "std::experimental::filesystem::copy_symlink", "std::experimental::filesystem::create_directories", "std::experimental::filesystem::create_directory", "std::experimental::filesystem::create_directory_symlink", "std::experimental::filesystem::create_hard_link", "std::experimental::filesystem::create_symlink", "std::experimental::filesystem::current_path", "std::experimental::filesystem::equivalent", "std::experimental::filesystem::exists", "std::experimental::filesystem::file_size", "std::experimental::filesystem::hard_link_count", "std::experimental::filesystem::hash_value", "std::experimental::filesystem::is_block_file", "std::experimental::filesystem::is_character_file", "std::experimental::filesystem::is_directory", "std::experimental::filesystem::is_empty", "std::experimental::filesystem::is_fifo", "std::experimental::filesystem::is_other", "std::experimental::filesystem::is_regular_file", "std::experimental::filesystem::is_socket", "std::experimental::filesystem::is_symlink", "std::experimental::filesystem::last_write_time", "std::experimental::filesystem::permissions", "std::experimental::filesystem::read_symlink", "std::experimental::filesystem::remove", "std::experimental::filesystem::remove_all", "std::experimental::filesystem::rename", "std::experimental::filesystem::resize_file", "std::experimental::filesystem::space", "std::experimental::filesystem::status", "std::experimental::filesystem::status_known", "std::experimental::filesystem::swap", "std::experimental::filesystem::symlink_status", "std::experimental::filesystem::system_complete", "std::experimental::filesystem::temp_directory_path", "std::experimental::filesystem::u8path"]
---
# &lt;filesystem&gt; functions

These free functions in the [\<filesystem>](../standard-library/filesystem.md) header do modifying and query operations on paths, files, symlinks, directories, and volumes. For more information and code examples, see [File System Navigation (C++)](../standard-library/file-system-navigation.md).

## <a name="absolute"></a> absolute

```cpp
path absolute(const path& pval, const path& base = current_path());
```

The function returns the absolute pathname corresponding to *pval* relative to the pathname `base`:

1. If `pval.has_root_name() && pval.has_root_directory()` the function returns *pval*.

1. If `pval.has_root_name() && !pval.has_root_directory()` the function returns `pval.root_name()` / `absolute(base).root_directory()` / `absolute(base).relative_path()` / `pval.relative_path()`.

1. If `!pval.has_root_name() && pval.has_root_directory()` the function returns `absolute(base).root_name()` / *pval*.

1. If `!pval.has_root_name() && !pval.has_root_directory()` the function returns `absolute(base)` / *pval*.

## <a name="begin"></a> begin

```cpp
const directory_iterator& begin(const directory_iterator& iter) noexcept;
const recursive_directory_iterator&
    begin(const recursive_directory_iterator& iter) noexcept;
```

Both functions return *iter*.

## <a name="canonical"></a> canonical

```cpp
path canonical(const path& pval, const path& base = current_path());
path canonical(const path& pval, error_code& ec);
path canonical(const path& pval, const path& base, error_code& ec);
```

The functions all form an absolute pathname `pabs = absolute(pval, base)` (or `pabs = absolute(pval)` for the overload with no base parameter), then reduce it to a canonical form in the following sequence of steps:

1. Every path component `X` for which `is_symlink(X)` is **`true`** is replaced by `read_symlink(X)`.

1. Every path component `.` (dot is the current directory established by previous path components) is removed.

1. Every pair of path components `X`/`..` (dot-dot is the parent directory established by previous path components) is removed.

The function then returns `pabs`.

## <a name="copy"></a> copy

```cpp
void copy(const path& from, const path& to);
void copy(const path& from, const path& to, error_code& ec) noexcept;
void copy(const path& from, const path& to, copy_options opts);
void copy(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

The functions all possibly copy or link one or more files at *from* to *to* under control of *opts*, which is taken as `copy_options::none` for the overloads with no *opts* parameter. *opts* shall contain at most one of:

- `skip_existing`, `overwrite_existing`, or `update_existing`

- `copy_symlinks` or `skip_symlinks`

- `directories_only`, `create_symlinks`, or `create_hard_links`

The functions first determine the file_status values `f` for *from* and `t` for *to*:

- if `opts & (copy_options::create_symlinks | copy_options::skip_symlinks)`, by calling `symlink_status`

- otherwise, by calling `status`

- Otherwise report an error.

If `!exists(f) || equivalent(f, t) || is_other(f) || is_other(t) || is_directory(f)&& is_regular_file(t)`, they then report an error (and do nothing else).

Otherwise, if `is_symlink(f)` then:

- If `options & copy_options::skip_symlinks`, then do nothing.

- Otherwise, if `!exists(t)&& options & copy_options::copy_symlinks`, then `copy_symlink(from, to, opts)`.

- Otherwise, report an error.

Otherwise, if `is_regular_file(f)`, then:

- If `opts & copy_options::directories_only`, then do nothing.

- Otherwise, if `opts & copy_options::create_symlinks`, then `create_symlink(to, from)`.

- Otherwise, if `opts & copy_options::create_hard_links`, then `create_hard_link(to, from)`.

- Otherwise, if `is_directory(f)`, then `copy_file(from, to` / `from.filename(), opts)`.

- Otherwise, `copy_file(from, to, opts)`.

Otherwise, if `is_directory(f) && (opts & copy_options::recursive || !opts)`, then:

```cpp
if (!exists(t))
{  // copy directory contents recursively
    create_directory(to, from, ec);

    for (directory_iterator next(from), end; ec == error_code() && next != end; ++next)
    {
        copy(next->path(), to / next->path().filename(), opts, ec);
    }
}
```

Otherwise, do nothing.

## <a name="copy_file"></a> copy_file

```cpp
bool copy_file(const path& from, const path& to);
bool copy_file(const path& from, const path& to, error_code& ec) noexcept;
bool copy_file(const path& from, const path& to, copy_options opts);
bool copy_file(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

The functions all possibly copy the file at *from* to *to* under control of *opts*, which is taken as `copy_options::none` for the overloads with no *opts* parameter. *opts* shall contain at most one of `skip_existing`, `overwrite_existing`, or `update_existing`.

If `exists(to) && !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options::update_existing))`, then report as an error that the file already exists.

Otherwise, if `!exists(to) || opts & copy_options::overwrite_existing || opts & copy_options::update_existing&& last_write_time(to) < last_write_time(from) || !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options:update_existing))`, then attempt to copy the contents and attributes of the file *from* to the file *to*. Report as an error if the copy attempt fails.

The functions return **`true`** if the copy is attempted and succeeds, otherwise **`false`**.

## <a name="copy_symlink"></a> copy_symlink

```cpp
void copy_symlink(const path& from, const path& to);
void copy_symlink(const path& from, const path& to, error_code& ec) noexcept;
```

If `is_directory(from)`, the function calls `create_directory_symlink(from, to)`. Otherwise, it calls `create_symlink(from, to)`.

## <a name="create_directories"></a> create_directories

```cpp
bool create_directories(const path& pval);
bool create_directories(const path& pval, error_code& ec) noexcept;
```

For a pathname such as a\/b\/c, the function creates directories a and a\/b as needed so that it can create the directory a\/b\/c as needed. It returns **`true`** only if it actually creates the directory *pval*.

## <a name="create_directory"></a> create_directory

```cpp
bool create_directory(const path& pval);

bool create_directory(const path& pval, error_code& ec) noexcept;
bool create_directory(const path& pval, const path& attr);
bool create_directory(const path& pval, const path& attr, error_code& ec) noexcept;
```

The function creates the directory *pval* as needed. It returns true only if it actually creates the directory *pval*, in which case it copies permissions from the existing file *attr*, or uses `perms::all` for the overloads with no *attr* parameter.

## <a name="create_directory_symlink"></a> create_directory_symlink

```cpp
void create_directory_symlink(const path& to, const path& link);
void create_directory_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

The function creates link as a symlink to the directory *to*.

## <a name="create_hard_link"></a> create_hard_link

```cpp
void create_hard_link(const path& to,  const path& link);
void create_hard_link(const path& to, const path& link, error_code& ec) noexcept;
```

The function creates link as a hard link to the directory or file *to*.

## <a name="create_symlink"></a> create_symlink

```cpp
void create_symlink(const path& to, const path& link);

void create_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

The function creates *link* as a symlink to the file *to*.

## <a name="current_path"></a> current_path

```cpp
path current_path();
path current_path(error_code& ec);
void current_path(const path& pval);
void current_path(const path& pval, error_code& ec) noexcept;
```

The functions with no parameter *pval* return the pathname for the current directory. The remaining functions set the current directory to *pval*.

## <a name="end"></a> end

```cpp
directory_iterator& end(const directory_iterator& iter) noexcept;
recursive_directory_iterator& end(const recursive_directory_iterator& iter) noexcept;
```

The first function returns `directory_iterator()` and the second function returns `recursive_directory_iterator()`

## <a name="equivalent"></a> equivalent

```cpp
bool equivalent(const path& left, const path& right);
bool equivalent(const path& left, const path& right, error_code& ec) noexcept;
```

The functions return **`true`** only if *left* and *right* choose the same filesystem entity.

## <a name="exists"></a> exists

```cpp
bool exists(file_status stat) noexcept;
bool exists(const path& pval);
bool exists(const path& pval, error_code& ec) noexcept;
```

The first function returns `status_known && stat.type() != file_not_found`. The second and third functions return `exists(status(pval))`.

## <a name="file_size"></a> file_size

```cpp
uintmax_t file_size(const path& pval);
uintmax_t file_size(const path& pval, error_code& ec) noexcept;
```

The functions return the size in bytes of the file chosen by *pval*, if `exists(pval) && is_regular_file(pval)` and the file size can be determined. Otherwise they report an error and return `uintmax_t(-1)`.

## <a name="hard_link_count"></a> hard_link_count

```cpp
uintmax_t hard_link_count(const path& pval);
uintmax_t hard_link_count(const path& pval, error_code& ec) noexcept;
```

The function returns the number of hard links for *pval*, or \-1 if an error occurs.

## <a name="hash_value"></a> hash_value

```cpp
size_t hash_value(const path& pval) noexcept;
```

The function returns a hash value for `pval.native()`.

## <a name="is_block_file"></a> is_block_file

```cpp
bool is_block_file(file_status stat) noexcept;
bool is_block_file(const path& pval);
bool is_block_file(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::block`. The remaining functions return `is_block_file(status(pval))`.

## <a name="is_character_file"></a> is_character_file

```cpp
bool is_character_file(file_status stat) noexcept;
bool is_character_file(const path& pval);
bool is_character_file(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::character`. The remaining functions return `is_character_file(status(pval))`.

## <a name="is_directory"></a> is_directory

```cpp
bool is_directory(file_status stat) noexcept;
bool is_directory(const path& pval);
bool is_directory(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::directory`. The remaining functions return `is_directory_file(status(pval))`.

## <a name="is_empty"></a> is_empty

```cpp
bool is_empty(file_status stat) noexcept;
bool is_empty(const path& pval);
bool is_empty(const path& pval, error_code& ec) noexcept;
```

If `is_directory(pval)`, then the function returns `directory_iterator(pval) == directory_iterator()`; otherwise it returns `file_size(pval) == 0`.

## <a name="is_fifo"></a> is_fifo

```cpp
bool is_fifo(file_status stat) noexcept;
bool is_fifo(const path& pval);
bool is_fifo(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::fifo`. The remaining functions return `is_fifo(status(pval))`.

## <a name="is_other"></a> is_other

```cpp
bool is_other(file_status stat) noexcept;
bool is_other(const path& pval);
bool is_other(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::other`. The remaining functions return `is_other(status(pval))`.

## <a name="is_regular_file"></a> is_regular_file

```cpp
bool is_regular_file(file_status stat) noexcept;
bool is_regular_file(const path& pval);
bool is_regular_file(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::regular`. The remaining functions return `is_regular_file(status(pval))`.

## <a name="is_socket"></a> is_socket

```cpp
bool is_socket(file_status stat) noexcept;
bool is_socket(const path& pval);
bool is_socket(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::socket`. The remaining functions return `is_socket(status(pval))`.

## <a name="is_symlink"></a> is_symlink

```cpp
bool is_symlink(file_status stat) noexcept;
bool is_symlink(const path& pval);
bool is_symlink(const path& pval, error_code& ec) noexcept;
```

The first function returns `stat.type() == file_type::symlink`. The remaining functions return `is_symlink(status(pval))`.

## <a name="last_write_time"></a> last_write_time

```cpp
file_time_type last_write_time(const path& pval);
file_time_type last_write_time(const path& pval, error_code& ec) noexcept;
void last_write_time(const path& pval, file_time_type new_time);
void last_write_time(const path& pval, file_time_type new_time, error_code& ec) noexcept;
```

The first two functions return the time of last data modification for *pval*, or `file_time_type(-1)` if an error occurs. The last two functions set the time of last data modification for *pval* to *new_time*.

## <a name="permissions"></a> permissions

```cpp
void permissions(const path& pval, perms mask);
void permissions(const path& pval, perms mask, error_code& ec) noexcept;
```

The functions set the permissions for the pathname chosen by *pval* to `mask & perms::mask` under control of `perms & (perms::add_perms | perms::remove_perms)`. *mask* shall contain at most one of `perms::add_perms` and `perms::remove_perms`.

If `mask & perms::add_perms`, the functions set the permissions to `status(pval).permissions() | mask & perms::mask`. Otherwise, if `mask & perms::remove_perms`, the functions set the permissions to `status(pval).permissions() & ~(mask & perms::mask)`. Otherwise, the functions set the permissions to `mask & perms::mask`.

## <a name="proximate"></a> proximate

```cpp
path proximate(const path& p, error_code& ec);
path proximate(const path& p, const path& base = current_path());
path proximate(const path& p, const path& base, error_code& ec);
```

## <a name="read_symlink"></a> read_symlink

```cpp
path read_symlink(const path& pval);
path read_symlink(const path& pval, error_code& ec);
```

The functions report an error and return `path()` if `!is_symlink(pval)`. Otherwise, the functions return an object of type `path` containing the symbolic link.

## <a name="relative"></a> relative

```cpp
path relative(const path& p, error_code& ec);
path relative(const path& p, const path& base = current_path());
path relative(const path& p, const path& base, error_code& ec);
```

## <a name="remove"></a> remove

```cpp
bool remove(const path& pval);
bool remove(const path& pval, error_code& ec) noexcept;
```

The functions return **`true`** only if `exists(symlink_status(pval))` and the file is successfully removed. A symlink is itself removed, not the file it chooses.

## <a name="remove_all"></a> remove_all

```cpp
uintmax_t remove_all(const path& pval);
uintmax_t remove_all(const path& pval, error_code& ec) noexcept;
```

If *pval* is a directory, the functions recursively remove all directory entries, then the entry itself. Otherwise, the functions call `remove`. They return a count of all elements successfully removed.

## <a name="rename"></a> rename

```cpp
void rename(const path& from, const path& to);
void rename(const path& from, const path& to, error_code& ec) noexcept;
```

The functions rename *from* to *to*. A symlink is itself renamed, not the file it chooses.

## <a name="resize_file"></a> resize_file

```cpp
void resize(const path& pval, uintmax_t size);
void resize(const path& pval, uintmax_t size, error_code& ec) noexcept;
```

The functions alter the size of a file such that `file_size(pval) == size`

## <a name="space"></a> space

```cpp
space_info space(const path& pval);
space_info space(const path& pval, error_code& ec) noexcept;
```

The function returns information about the volume chosen by *pval*, in a structure of type `space_info`. The structure contains `uintmax_t(-1)` for any value that can't be determined.

## <a name="status"></a> status

```cpp
file_status status(const path& pval);
file_status status(const path& pval, error_code& ec) noexcept;
```

The functions return the pathname status, the file type, and permissions, associated with *pval*. A symlink is itself not tested, but the file it chooses.

## <a name="status_known"></a> status_known

```cpp
bool status_known(file_status stat) noexcept;
```

The function returns `stat.type() != file_type::none`

## <a name="swap"></a> swap

```cpp
void swap(path& left, path& right) noexcept;
```

The function exchanges the contents of *left* and *right*.

## <a name="symlink_status"></a> symlink_status

```cpp
file_status symlink_status(const path& pval);
file_status symlink_status(const path& pval, error_code& ec) noexcept;
```

The functions return the pathname symlink status, the file type, and permissions, associated with *pval*. The functions behave the same as `status(pval)` except that a symlink is itself tested, not the file it chooses.

## <a name="system_complete"></a> system_complete

```cpp
path system_complete(const path& pval);
path system_complete(const path& pval, error_code& ec);
```

The functions return an absolute pathname that takes into account, as necessary, the current directory associated with its root name. \(For POSIX, the functions return `absolute(pval)`.\)

## <a name="temp_directory_path"></a> temp_directory_path

```cpp
path temp_directory_path();
path temp_directory_path(error_code& ec);
```

The functions return a pathname for a directory suitable for containing temporary files.

## <a name="u8path"></a> u8path

```cpp
template <class Source>
path u8path(const Source& source);

template <class InIt>
path u8path(InIt first, InIt last);
```

The first function behaves the same as `path(source)` and the second function behaves the same as `path(first, last)` except that the chosen source in each case is taken as a sequence of char elements encoded as UTF-8, whatever the filesystem.

## <a name="weakly_canonical"></a> weakly_canonical

```cpp
path weakly_canonical(const path& p);
path weakly_canonical(const path& p, error_code& ec);
```
