#include <memory>
#include <iostream>

using namespace std;

int main()
{
  shared_ptr<int> sp;
  cout << sp.use_count() << endl;

  sp.reset(new int(5));
  cout << sp.use_count() << endl;

  weak_ptr<int> wp(sp);
  cout << sp.use_count() << endl;

  shared_ptr<int> sp2(wp.lock());
  cout << sp.use_count() << endl;
  return 0;
}
