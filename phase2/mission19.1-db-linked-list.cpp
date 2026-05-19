#include <iostream>

struct Node {
  int data{};
  Node *next{};
  Node *prev{};
};

void insert(Node *&head, int data) {
  Node *new_node = new Node;
  new_node->data = data;
  if (head == nullptr) {
    head = new_node;
    return;
  }
  Node *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = new_node;
  new_node->prev = temp;
}

void display(Node *head) {
  int i{1};
  if (head == nullptr) {
    std::cout << "Node is empty !";
    return;
  }
  while (head != nullptr) {
    std::cout << "Node " << i << " data : " << head->data << "\n";
    i++;
    head = head->next;
  }
}

void display_re(Node *head) {
  if (head == nullptr) {
    std::cout << "Node is empty !";
    return;
  }
  int i{1};
  while (head->next != nullptr) {
    head = head->next;
  }
  while (head != nullptr) {
    std::cout << "Node " << -i << " data : " << head->data << "\n";
    i--;
    head = head->prev;
  }
}

void cleanup(Node *&head) {
  if (head == nullptr) {
    std::cout << "Node is already empty!";
    return;
  }
  Node *temp = head;
  while (head != nullptr) {
    temp = temp->next;
    delete head;
    head = temp;
  }
  head = nullptr;
}

int main() {
  int choice{};
  Node *yalandan = nullptr;
  while (true) {
    std::cout << "\nWelcome to the program !\n"
              << "1 - Insert new node.\n"
              << "2 - Display the nodes list.\n"
              << "3 - Display the nodes list reversed.\n"
              << "4 - Delete all the nodes.\n"
              << "5 - Exit.\n";
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
      display_re(yalandan);
      break;
    }

    case 4: {
      cleanup(yalandan);
      std::cout << "Deleted succesfully !\n";
      break;
    }
    case 5: {
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