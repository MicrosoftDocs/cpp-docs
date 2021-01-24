---
description: "Learn more about: &lt;chrono&gt; functions"
title: "&lt;chrono&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["chrono/std::duration_cast", "chrono/std::time_point_cast"]
ms.assetid: d6800e15-77a1-4df3-900e-d8b2fee190c7
---
# &lt;chrono&gt; functions

## <a name="duration_cast"></a> duration_cast

Casts a `duration` object to a specified type.

```cpp
template <class To, class Rep, class Period>
constexpr To duration_cast(const duration<Rep, Period>& Dur);

template <class ToDuration, class Rep, class Period>
constexpr ToDuration floor(const duration<Rep, Period>& d);
template <class ToDuration, class Rep, class Period>
constexpr ToDuration ceil(const duration<Rep, Period>& d);
template <class ToDuration, class Rep, class Period>
constexpr ToDuration round(const duration<Rep, Period>& d);
```

### Return Value

A `duration` object of type `To` that represents the time interval `Dur`, which is truncated if it has to fit into the target type.

### Remarks

If `To` is an instantiation of `duration`, this function does not participate in overload resolution.

## <a name="time_point_cast"></a> time_point_cast

Casts a [time_point](../standard-library/time-point-class.md) object to a specified type.

```cpp
template <class To, class Clock, class Duration>
time_point<Clock, To> time_point_cast(const time_point<Clock, Duration>& Tp);

template <class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
floor(const time_point<Clock, Duration>& tp);
template <class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
ceil(const time_point<Clock, Duration>& tp);
template <class ToDuration, class Clock, class Duration>
constexpr time_point<Clock, ToDuration>
round(const time_point<Clock, Duration>& tp);
```

### Return Value

A `time_point` object that has a duration of type `To`.

### Remarks

Unless `To` is an instantiation of [duration](../standard-library/duration-class.md), this function does not participate in overload resolution.
