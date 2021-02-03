# Memcpy - parameter overlap

The CRT's function `memcpy()` doesn't support overlapping memory. This allows for optimizations that won't work if the buffers do overlap. There's not much to really look into, however, because C provides an alternative that does support overlapping memory: `memmove()`. 

The common error is to treat `memmove()`identical to `memcpy()`.

## Example

```cpp

```

## Resulting error
