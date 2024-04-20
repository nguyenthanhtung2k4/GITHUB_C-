#include <iostream>

// Định nghĩa cấu trúc Node
struct Node {
    int data;       // Dữ liệu của nút
    Node* next;     // Con trỏ đến nút tiếp theo trong danh sách
};

// Hàm thêm một phần tử vào cuối danh sách liên kết
void append(Node*& head, int value) {
    Node* newNode = new Node;   // Tạo một nút mới
    newNode->data = value;      // Gán giá trị cho nút mới
    newNode->next =nullptr; // Khởi tạo con trỏ tiếp theo của nút mới là nullptr
    // head= newNode;           // Cập nhật  đường dẫn đến nút mới là đích đến của head
    if (head == nullptr) {      // Nếu danh sách trống
        head = newNode;         // Thì nút mới sẽ là nút đầu tiên của danh sách
    } else {
        Node* current = head;   // Khai báo con trỏ current để duyệt danh sách từ đầu đến cuối
        while (current->next != nullptr) {  // Duyệt đến nút cuối cùng của danh sách
            current = current->next;
        }
        current->next = newNode;  // Liên kết nút mới vào cuối danh sách
    }
    
}

// Hàm in ra các phần tử trong danh sách liên kết
void printList(Node* head) {
    Node* current = head;   // Khai báo con trỏ current để duyệt danh sách từ đầu đến cuối
    while (current != nullptr) {  // Duyệt từ đầu đến cuối danh sách
        std::cout << current->data << " ";  // In ra giá trị của nút hiện tại
        current = current->next;  // Chuyển con trỏ đến nút tiếp theo trong danh sách
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;   // Khởi tạo danh sách liên kết rỗng

    // Thêm các phần tử vào danh sách liên kết
    append(head, 1);
    append(head,1);
    append(head, 3);
    append(head, 3);
    append(head, 2);

    // In ra các phần tử trong danh sách liên kết
    printList(head);

    return 0;
}
