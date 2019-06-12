#include <iostream>
#include <algorithm>

#include "./shopping.h"

// Push Goods object to shopping_list_ vector
void Shopping::PushList(Goods object) {
  shopping_list_.push_back(object);
}

// Get Goods object from end of shopping_list_ vector
Goods Shopping::GetLastElement() {
  return shopping_list_.back();
}

// Print shopping_list_ Elements
void Shopping::PrintList() {
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end(); i++) {
    std::cout << "Goods #" << i->GetIndex() << " - Price : " <<
    i->GetPrice() << std::endl;
  }
}

void Shopping::comparePrice(const Goods g1, const Goods g2) {
  return g1.GetPrice > g2.GetPrice;
}
// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() {
  sort(shopping_list_.begin(), shopping_list_.end(), comparePrice);
  
//  std::vector<Goods>::iterator p = shopping_list_.begin();
//  std::vector<Goods>::iterator min = shopping_list_.end();
//  for (std::vector<Goods>::iterator i = shopping_list_.begin();
//      i != shopping_list_.end()-1; i++) {
//    for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
//      if (min == shopping_list_.end()) {
//        min = j;
//        continue;
//      }
//      if (min->GetPrice() > j->GetPrice()) {
//       min = j;
//      }
//    }
//    std::iter_swap(i, min);
//    min = shopping_list_.end();
//  }
}


void Shopping::compareIndex(const Goods g1, const Goods g2) {
  return g1.GetIndex > g2.GetIndex;
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortByIndex() {
  sort(shopping_list_.begin(), shopping_list_.end(), compareIndex);
//  std::vector<Goods>::iterator p = shopping_list_.begin();
//  std::vector<Goods>::iterator min = shopping_list_.end();
//  for (std::vector<Goods>::iterator i = shopping_list_.begin();
//      i != shopping_list_.end()-1; i++) {
//    for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
//      if (min == shopping_list_.end()) {
//        min = j;
//        continue;
//      }
//      if (min->GetIndex() > j->GetIndex()) {
//        min = j;
//      }
//    }
//    std::iter_swap(i, min);
//    min = shopping_list_.end();
  }
}
