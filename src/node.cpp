#include <iostream>
#include "node.h"


namespace cpp_gtest_sandbox {
  namespace linked_list {
    template<class T> Node<T>::Node(const T &data, Node<T> *next) {
      this->data = data;
      this->next = next;
    }

    template<class T> Node<T>::~Node() = default;

    template<class T> T Node<T>::CurrentData() {
      return this->data;
    }

    template<class T> Node<T> *Node<T>::CurrentNext() {
      return this->next;
    }

    template<class T> std::ostream &operator<<(std::ostream &out, Node<T> *node) {
      out << "<linked_list::node(data=" << node->CurrentData() << ",next=";
      if (node->CurrentNext() != nullptr)
        out << node->CurrentNext();
      else
        out << "nullptr";
      out << ")>" << std::flush;
      return out;
    }

    template class Node<int>;

    template std::ostream &operator<<(std::ostream &out, Node<int> *node);
  }

  namespace tree {
    template<class T> Node<T>::Node(const T &data, Node<T> *left, Node<T> *right) {
      this->data = data;
      this->left = left;
      this->right = right;
    }

    template<class T> Node<T>::~Node() = default;

    template<class T> T Node<T>::CurrentData() {
      return this->data;
    }

    template<class T> Node<T> *Node<T>::CurrentLeft() {
      return this->left;
    }

    template<class T> Node<T> *Node<T>::CurrentRight() {
      return this->right;
    }

    template<class T> std::ostream &operator<<(std::ostream &out, Node<T> *node) {
      out << "<tree::node(data=" << node->CurrentData() << ",left=";

      if (node->CurrentLeft() != nullptr)
        out << node->CurrentLeft();
      else
        out << "nullptr";

      out << ",right=";

      if (node->CurrentRight() != nullptr)
        out << node->CurrentRight();
      else
        out << "nullptr";

      out << ")>" << std::flush;

      return out;
    }

    template class Node<int>;

    template std::ostream &operator<<(std::ostream &out, Node<int> *node);
  }
}