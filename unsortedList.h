//
// Created by manuelpagoada on 2/9/23.
//

#ifndef ASSIGNMENT3_UNSORTEDLIST_H
#define ASSIGNMENT3_UNSORTEDLIST_H

#endif //ASSIGNMENT3_UNSORTEDLIST_H
#include "ItemType.h"


struct NodeType;

class UnsortedList{
public:
  UnsortedList();


  int GetLength() const;

  void PutItem(ItemType item);

  ItemType GetItem(ItemType& item, bool& found);

  bool IsFull() const;

  void DeleteItem(ItemType item);

  void MakeEmpty();

  void PrintList(Itemtype& item);

  Void MakeEmpty()

  ItemType GetNextItem();





private:
  NodeType* listData;
  int length;
  NodeType* currentPos;
};