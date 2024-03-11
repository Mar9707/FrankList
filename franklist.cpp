#include <iostream>
#include "franklist.h"

using namespace vhuk;

void is_even(int x) {
   if( x % 2 == 0){
      std::cout << x << std::endl;
   }
}

int main() {
  FrankList<int> list;

/*    list.push_front(-3);
    list.push_front(2);
    list.push_front(1);
    list.push_back(15);
    list.push_back(5);
    std::cout << "Elements of the list: ";
    std::cout << list << std::endl;

 */
 /*   list.pop_front();
    list.pop_back();
    std::cout << "Elements of the list after popping front and back: ";
    std::cout << list << std::endl;
    std::cout << "Size of the list: " << list.size() << std::endl;
    std::cout << "Is the list empty? " << (list.empty() ? "Yes" : "No") << std::endl;
    list.clear();
    std::cout << "Is the list empty after clearing? " << (list.empty() ? "Yes" : "No") << std::endl;
*/
/*    std::cout << list.front() << std::endl;
    std::cout << list.back() << std::endl;
    std::cout << list.min() << std::endl;
    std::cout << list.max() << std::endl;
*/

/*
FrankList<int> list2;
list2.push_front(5);
list2.push_back(3);
std::cout << list2 << std::endl;
*/
/*list.swap(list2);
std::cout << "list = " << list << std::endl;
std::cout << "list2 = " << list2 << std::endl;
*/

/*list2.tesize(5, 111);
std::cout << list2 << std::endl;
list.resize(1);
std::cout << list << std::endl;
*/

/*
std::cout << "=" << (list == list2) << std::endl;
std::cout << ">" << (list > list2) << std::endl;
std::cout << "<" << (list < list2) << std::endl;
std::cout << "!" << (list != list2) << std::endl;
*/
/*
FrankList<int>::const_iterator it = list2.cbegin();
std::cout << *it << std::endl;
*/

/*
FrankList<int> tmp (list2.cbegin(), list2.cend());
std::cout << tmp << std::endl;
*/

/*list.push_back(2);
list.push_back(2);
std::cout << list << std::endl;
size_t x = list.remove(2);
std::cout << x << std::endl; */
/*
std::cout << "Before remove_if: " << list << std::endl;
int removedCount = list.remove_if(is_even);
std::cout << "Removed " << removedCount << " elements" << std::endl;
std::cout << "After remove_if: " << list << std::endl;
*/

//list.reverse();
/*
list.sort();
std::cout << list << std::endl;
list.sort(true);
std::cout << list << std::endl;
*/

//std::cout << *(list.find(-3))<< std::endl;

//list.traverse(is_even, false, true);

//list.print(true, false);
 /*
FrankList<int>::const_iterator it = list.find(15);
std::cout << list << std::endl;
*/
/*
FrankList<int>::const_iterator it = list.rfind(-3);
std::cout << *it << std::endl;
*/
//list.insert(it, 11);
//list.insert(it, {3, 11, 125, 78});
//list.insert(it, list2.begin(), list2.end());
//list.insert(it, 3ull, 444);

/*
FrankList<int>::iterator itr = list.cdbegin();
std::cout << *itr << std::endl;
*/
FrankList<int> ob;
ob.push_front(11.5);
ob.push_back(15.7);
std::cout << ob << std::endl;
list = ob;
list.insert(list.begin(), 11ull, 78);
std::cout << *(list.rfind(78)) << std::endl;
std::cout << list << std::endl;
return 0;
}
