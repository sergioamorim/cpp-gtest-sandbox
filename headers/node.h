#ifndef GRAPHS_NODE_H
  #define GRAPHS_NODE_H

  namespace cpp_gtest_sandbox {
    namespace linked_list {
      template<class T> class Node {
        public:
        Node(const T &data, Node<T> *next);

        ~Node();

        T CurrentData();

        Node<T> *CurrentNext();

        private:
        T data;
        Node<T> *next;
      };

      template<class T> std::ostream &operator<<(std::ostream &out, Node<T> *node);
    }

    namespace tree {
      template<class T> class Node {
        public:
        Node(const T &data, Node<T> *left, Node<T> *right);

        ~Node();

        T CurrentData();

        Node<T> *CurrentLeft();

        Node<T> *CurrentRight();

        private:
        T data;
        Node<T> *left;
        Node<T> *right;
      };

      template<class T> std::ostream &operator<<(std::ostream &out, Node<T> *node);
    }
  }

#endif
