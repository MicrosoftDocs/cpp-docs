// UNSUPPORTED: msvc-host
// Tracked by vso1226261, ( GeneralTestSuite_amd64chk_MD.txt GeneralTestSuite_amd64chk_MDd.txt GeneralTestSuite_amd64chk_MT.txt GeneralTestSuite_amd64chk_MTd.txt GeneralTestSuite_x86chk_MD.txt GeneralTestSuite_x86chk_MDd.txt GeneralTestSuite_x86chk_MT.txt GeneralTestSuite_x86chk_MTd.txt )
// RUN: %clangxx_asan -O1 -fsanitize-address-use-after-scope %s -o %t && \
// RUN:     not %run %t 2>&1 | FileCheck %s

#include <stdio.h>

struct IntHolder {
  explicit IntHolder(int *val = 0) : val_(val) { }
  ~IntHolder() {
    printf("Value: %d\n", *val_);  // BOOM
    // CHECK: ERROR: AddressSanitizer: stack-use-after-scope
    // CHECK:  #0 0x{{.*}} in IntHolder::~IntHolder{{.*}}.cc:[[@LINE-2]]
  }
  void set(int *val) { val_ = val; }
  int *get() { return val_; }

  int *val_;
};

int main(int argc, char *argv[]) {
  // It is incorrect to use "x" int IntHolder destructor, because "x" is
  // "destroyed" earlier as it's declared later.
  IntHolder holder;
  int x = argc;
  holder.set(&x);
  return 0;
}
