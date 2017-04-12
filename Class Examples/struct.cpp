#include <iostream>
#include <string>

using namespace std;

struct Hat {
  string colour;
  int size = 0;
  int snazziness = 0;
};

int main() {
  struct Hat myhat;
  int num;
  myhat.colour = "Green";
  myhat.size = 22;
  myhat.snazziness = 2000000;
  cout << num << endl;
  printf("%s\n%d\n%d\n", myhat.colour.c_str(),
	 myhat.size, myhat.snazziness);
}