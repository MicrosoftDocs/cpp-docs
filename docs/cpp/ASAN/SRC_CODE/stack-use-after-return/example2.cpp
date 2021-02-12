#include <stdlib.h>

enum ReadOrWrite { Read = 0, Write = 1 };

struct S32 {
  char x[32];
};

template<class T>
T *LeakStack() {
  T t[100];
  static volatile T *x;
  x = &t[0];
  return (T*)x;
}

template<class T>
void StackUseAfterReturn(int Idx, ReadOrWrite w) {
  static T sink;
  T *t = LeakStack<T>();
  if (w)
    t[100 + Idx] = T();
  else
    sink = t[100 + Idx];
}

int main (int argc, char* argv[]) {

    if (argc != 2) return 1;
    int kind = atoi(argv[1]);

    switch(kind) {
        case 1: StackUseAfterReturn<char>(0, Read); break;
        case 2: StackUseAfterReturn<S32>(0, Write); break;
    }
    return 0;
}



