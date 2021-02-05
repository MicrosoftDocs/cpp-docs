
#include <windows.h>

DWORD WINAPI thread_proc(void *) {
  int subscript = -1;
  volatile char stack_buffer[42];
  stack_buffer[subscript] = 42;

  return 0;
}

int main() {
  HANDLE thr = CreateThread(NULL, 0, thread_proc, NULL, 0, NULL);

  if (thr == 0) return 0;

  WaitForSingleObject(thr, INFINITE);

  return 0;
}
