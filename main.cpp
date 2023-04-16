#include <iostream>
#include "motivationLib/motivationLib.h"

using namespace std;
int main() {
    MotivationLib my_motivation;
    int input_index;
  cout << "Enter an index between 0 to " << my_motivation.getMaxMotivationSentenceIndex() << ":" << endl;
  cin >> input_index;
  cout << my_motivation.getMotivationSentenceByIndex(input_index) << endl;
  return 0;
}