---
description: "Learn more about: hh_mm_ss class"
title: "hh_mm_ss class"
ms.date: "06/07/2021"
f1_keywords: ["chrono/std::chrono::hh_mm_ss", "chrono/std::chrono::hh_mm_ss::hh_mm_ss", "chrono/std::chrono::hh_mm_ss::is_negative", "chrono/std::chrono::hh_mm_ss::hours", "chrono/std::chrono::hh_mm_ss::minutes", "chrono/std::chrono::hh_mm_ss::seconds", "chrono/std::chrono::hh_mm_ss::subseconds", "chrono/std::chrono::hh_mm_ss::operator precision", "chrono/std::chrono::hh_mm_ss::to_duration"]
helpviewer_keywords: ["std::chrono [C++], hh_mm_ss"]
dev_langs: ["C++"]
---
# hh_mm_ss class

Splits a `std::chrono::duration` into hours:minutes:seconds, with the precision of the split determined by the `Duration` template parameter. This class is used primarily as a formatting tool.

`Duration` must be a specialization of `std::chrono::duration`.

## Syntax

```cpp
template<class Duration> class hh_mm_ss; // C++20
```

## Members

|Name|Description|
|----------|-----------------|
|[Constructor](#hh_mm_ss)|Construct a `hh_mm_ss`.|
|[is_negative](#is_negative)| Indicates whether the time duration is negative. |
|[hours](#hours) | Get the hours value. |
|[minutes](#minutes) | Get the minutes value. |
|[seconds](#seconds) | Get the seconds value. |
|[subseconds](#subseconds) | Get the subseconds value. |
|[to_duration](#to_duration) | Return a `duration_cast<precision>`. |
|[`hh_mm_ss::operator precision`](#op_precision)|  Returns the precision of this `hh_mm_ss`. |

## Non-Members

|Name|Description|
|----------|-----------------|
|[`hh_mm_ss::operator<<`](chrono-operators.md#op_left_shift) | Output a `hh_mm_ss` to the given stream. |

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="hh_mm_ss"></a> `hh_mm_ss::hh_mm_ss` constructor

Constructs a `hh_mm_ss`.

```cpp
constexpr explicit hh_mm_ss(Duration d);
```

### Parameters

*`d`*\
Constructs an `hh_mm_ss` represents the [`Duration`](duration-class.md) *`d`* with precision defined as `duration<common_type_t<Duration::rep, seconds::rep>, ratio<1, 10fractional_width>>`

### Remarks

If `treat_as_floating_point_v<precision::rep>` is `true`, the precision is initialized with `abs(d)-hours()-minutes()-seconds()`. Otherwise, the precision is initialized with `duration_cast<precision>(abs(d)-hours()-minutes()-seconds())`

## <a name="is_negative"></a> `hh_mm_ss::is_negative`

Get whether the time duration is negative.

```cpp
constexpr bool is_negative() const noexcept;
```

### Return value

`true` if the `hh_mm_ss` value is negative. Otherwise, `false`.

## <a name="hours"></a> `hh_mm_ss::hours`

Get the hours portion of this `hh_mm_ss`.

```cpp
constexpr chrono::hours hours() const noexcept;
```

### Return value

The `hours` value of this `hh_mm_ss`.

## <a name="minutes"></a> `hh_mm_ss::minutes`

Get the minutes portion of this `hh_mm_ss`.

```cpp
constexpr chrono::minutes minutes() const noexcept;
```

### Return value

The `minutes` value of this `hh_mm_ss`.

## <a name="seconds"></a> `hh_mm_ss::seconds`

Get the seconds portion of this `hh_mm_ss`.

```cpp
constexpr chrono::seconds seconds() const noexcept;
```

### Return value

The `seconds` value of this `hh_mm_ss`.

## <a name="subseconds"></a> `hh_mm_ss::subseconds`

Get the subseconds portion of this `hh_mm_ss`.

```cpp
constexpr precision subseconds() const noexcept;
```

### Return value

The `subseconds` value of this `hh_mm_ss`.\
If `std::chrono::treat_as_floating_point_v<precision::rep>` is `true`, then this is calculated as `abs(d)-hours()-minutes()-seconds()`. Otherwise, it's calculated as `std::chrono::duration_cast<precision>(abs(d)-hours()-minutes()-seconds())`

## <a name="op_precision"></a> `hh_mm_ss::operator precision`

```cpp
constexpr explicit operator precision() const noexcept;
```

### Return value

Returns [to_duration](#to_duration)

## <a name="to_duration"></a> `hh_mm_ss::to_duration`

```cpp
constexpr precision to_duration() const noexcept;
```

### Return value

If `is_neg` is `true`, returns `-(h+m+s+ss)`. Otherwise, returns `h+m+s+ss`.

## See also

[`<chrono>`](../standard-library/chrono.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
