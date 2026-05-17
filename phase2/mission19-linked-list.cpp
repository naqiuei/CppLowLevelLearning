#include <iostream>

struct Node {
  int data{};
  Node *next{};
};

void insert(Node *&head, int value) {
  Node *new_node = new Node;
  Node *start = head;
  new_node->data = value;
  new_node->next = nullptr;
  if (head == nullptr) {
    head = new_node;
    return;
  }
  while ((start->next != nullptr)) {
    start = start->next;
  }
  start->next = new_node;
}

void display(Node *head) {

  while (head != nullptr) {
    std::cout << "\n-------------\n" << head->data;
    head = head->next;
  }
  std::cout << "\n-------------\n";
}

void cleanup(Node *&start) {
  while (start != nullptr) {
    Node *temp = start->next;
    delete start;
    start = temp;
  }
}

int main() {
  int choice{};
  Node *yalandan = nullptr;
  while (true) {
    std::cout << "\nWelcome to the program !\n"
              << "1 - Insert new node.\n"
              << "2 - Display the nodes list.\n"
              << "3 - Delete all the nodes.\n"
              << "4 - Exit.\n";
    std::cin >> choice;
    switch (choice) {
    case 1: {
      std::cout << "What is the value : ";
      int value{};
      std::cin >> value;
      insert(yalandan, value);
      std::cout << "Node added succesfully !\n";
      break;
    }
    case 2: {
      display(yalandan);
      break;
    }
    case 3: {
      cleanup(yalandan);
      std::cout << "Deleted succesfully !\n";
      break;
    }
    case 4: {
      std::cout << "Thanks for using us !\n";
      cleanup(yalandan);
      return 0;
    }
    default: {
      std::cout << "Wrong input !\n";
      break;
    }
    }
  }
}