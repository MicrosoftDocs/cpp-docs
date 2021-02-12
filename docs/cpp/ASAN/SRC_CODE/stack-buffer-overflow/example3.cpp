

class Parent {
 public:
  int field;
};

class Child : public Parent {
 public:
  int extra_field;
};

int main(void) {

  Parent p;
  Child *c = (Child*)&p;  // Boom !
  c->extra_field = 42;

  return 0;
}
