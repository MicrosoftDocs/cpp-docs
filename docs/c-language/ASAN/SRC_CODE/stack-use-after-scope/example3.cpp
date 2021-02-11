#include <stdio.h>

struct IntHolder {
  explicit IntHolder(int *val = 0) : val_(val) { }
  ~IntHolder() {
    printf("Value: %d\n", *val_);  // Bom!
  }
  void set(int *val) { val_ = val; }
  int *get() { return val_; }

  int *val_;
};

int main(int argc, char *argv[]) {
  // It is incorrect to use "x" inside the IntHolder destructor, because the lifetime of "x"
  // ends earlier. Per C++ standard, local lLifetimes end in reverse order of declaration.
  IntHolder holder;
  int x = argc;
  holder.set(&x);
  return 0;
}


