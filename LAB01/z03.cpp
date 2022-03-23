// Simple list
// obiekt funkcyjny - funktor
// met newtona obliczania pierwiastka kwadratowego nie używać sqrt
#include <iostream>

using namespace std;

template <typename T>
struct Node {
    T data;
    Node *next;
};

template <typename T> class List {
    private:
        Node<T> *head;
    public:
        List() {
            head = nullptr;
        }

        void push(T val) {
            Node<T> *n = new Node<T>();
            n->data = val;
            n->next = head;
            head = n;
        }

        T pop() {
            if (head) {
                T p = head->data;
                head = head->next;
                return p;
            }
            return T();
        }

        bool search(T val) {
            Node<T> *temp = head;
            while (temp->next) {
                if (temp->data == val) return true;
                else temp = temp->next;
            }
            delete temp;
            return false;
        }
};

int main() {
    List<unsigned int> list;

    list.push(7);
    list.push(11); 
    list.push(13);

    cout<< list.pop() << "\n";
    cout<< list.search(11) << "\n";
    cout<< list.pop() << endl;

    return 0;
}
